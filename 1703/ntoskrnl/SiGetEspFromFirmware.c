/*
 * XREFs of SiGetEspFromFirmware @ 0x1407393DC
 * Callers:
 *     SiGetEfiSystemDevice @ 0x140739078 (SiGetEfiSystemDevice.c)
 * Callees:
 *     ZwEnumerateBootEntries @ 0x14017F9E0 (ZwEnumerateBootEntries.c)
 *     ZwQueryBootEntryOrder @ 0x1401805A0 (ZwQueryBootEntryOrder.c)
 *     ZwTranslateFilePath @ 0x140181600 (ZwTranslateFilePath.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BiReleasePrivilege @ 0x14058D134 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14058D184 (BiAcquirePrivilege.c)
 */

NTSTATUS __fastcall SiGetEspFromFirmware(void *a1, ULONG a2)
{
  unsigned int *v3; // rdi
  ULONG *v4; // r14
  _FILE_PATH *v5; // rsi
  NTSTATUS result; // eax
  NTSTATUS v7; // ebx
  ULONG *v8; // rax
  unsigned int *PoolWithTag; // rax
  int v10; // edx
  _DWORD *v11; // rcx
  unsigned int *v12; // r8
  ULONG v13; // r9d
  __int64 v14; // rax
  __int64 v15; // r15
  _FILE_PATH *v16; // r15
  _FILE_PATH *v17; // rax
  UCHAR *FilePath; // rdx
  __int64 v19; // rax
  ULONG v20; // ecx
  ULONG BufferLength; // [rsp+68h] [rbp+48h] BYREF
  ULONG Count; // [rsp+70h] [rbp+50h] BYREF
  unsigned int v23; // [rsp+78h] [rbp+58h] BYREF

  BufferLength = a2;
  Count = 0;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  result = BiAcquirePrivilege(0x16u, (__int64)&v23);
  if ( result < 0 )
    return result;
  v7 = ZwQueryBootEntryOrder(0LL, &Count);
  if ( v7 != -1073741789 )
  {
LABEL_6:
    if ( v7 )
      goto LABEL_25;
    if ( Count )
    {
      BufferLength = 0;
      v7 = ZwEnumerateBootEntries(0LL, &BufferLength);
      if ( v7 == -1073741789 )
      {
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, BufferLength, 0x4B505953u);
        v3 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_4;
        v7 = ZwEnumerateBootEntries(PoolWithTag, &BufferLength);
      }
      if ( v7 < 0 )
        goto LABEL_25;
      if ( BufferLength )
      {
        v10 = 0;
        if ( Count )
        {
          while ( 1 )
          {
            v11 = v3 + 1;
            v12 = v3;
            v13 = v4[v10];
            if ( v3[3] != v13 )
            {
              while ( 1 )
              {
                v14 = *v12;
                if ( !(_DWORD)v14 )
                  break;
                v12 = (unsigned int *)((char *)v12 + v14);
                v11 = v12 + 1;
                if ( v12[3] == v13 )
                  goto LABEL_19;
              }
              v11 = 0LL;
            }
LABEL_19:
            if ( v11 && (v11[3] & 4) != 0 && v11[6] >= 0x18u && v11[5] )
              break;
            if ( ++v10 >= Count )
              goto LABEL_24;
          }
          v15 = (unsigned int)v11[5];
          BufferLength = 0;
          v16 = (_FILE_PATH *)((char *)v11 + v15);
          v7 = ZwTranslateFilePath(v16, 3u, 0LL, (ULONG)&BufferLength);
          if ( v7 != -1073741789 )
            goto LABEL_25;
          v17 = (_FILE_PATH *)ExAllocatePoolWithTag(PagedPool, BufferLength, 0x4B505953u);
          v5 = v17;
          if ( v17 )
          {
            v7 = ZwTranslateFilePath(v16, 3u, v17, (ULONG)&BufferLength);
            if ( v7 >= 0 )
            {
              FilePath = v5->FilePath;
              v19 = -1LL;
              do
                ++v19;
              while ( *(_WORD *)&FilePath[2 * v19] );
              v20 = 2 * v19 + 2;
              BufferLength = v20;
              if ( v20 <= 0x6A )
                memmove(a1, FilePath, v20);
              else
                v7 = -1073741789;
            }
            goto LABEL_25;
          }
          goto LABEL_4;
        }
      }
    }
LABEL_24:
    v7 = -1073741275;
    goto LABEL_25;
  }
  v8 = (ULONG *)ExAllocatePoolWithTag(PagedPool, 4LL * Count, 0x4B505953u);
  v4 = v8;
  if ( v8 )
  {
    v7 = ZwQueryBootEntryOrder(v8, &Count);
    goto LABEL_6;
  }
LABEL_4:
  v7 = -1073741801;
LABEL_25:
  BiReleasePrivilege(&v23);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v7;
}
