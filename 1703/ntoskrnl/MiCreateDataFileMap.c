/*
 * XREFs of MiCreateDataFileMap @ 0x140493A2C
 * Callers:
 *     MiCreateNewSection @ 0x1404933A8 (MiCreateNewSection.c)
 * Callees:
 *     MiInsertSubsectionNode @ 0x14005E7E0 (MiInsertSubsectionNode.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     FsRtlSetFileSize @ 0x140459F80 (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x140493F40 (FsRtlGetFileSize.c)
 */

int __fastcall MiCreateDataFileMap(
        PFILE_OBJECT FileObject,
        _WORD *a2,
        _QWORD *a3,
        LARGE_INTEGER *a4,
        char a5,
        int a6,
        int a7,
        int a8)
{
  bool v10; // zf
  unsigned __int64 QuadPart; // rbp
  unsigned __int64 v13; // r12
  _QWORD *PoolWithTag; // rsi
  PVOID v15; // rax
  __int64 v16; // rdi
  int v17; // ebx
  unsigned __int64 v18; // r13
  LARGE_INTEGER v19; // r14
  unsigned __int64 v20; // rax
  unsigned int v21; // r15d
  __int16 v22; // cx
  char v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int16 v26; // ax
  __int16 v27; // r14
  __int64 *v28; // rsi
  __int16 v29; // ax
  __int16 v30; // cx
  int v31; // ecx
  int result; // eax
  LONGLONG v33; // rax
  PVOID v34; // rax
  void *v35; // rcx
  _QWORD *v36; // rcx
  _QWORD *v37; // rbx
  LARGE_INTEGER FileSize; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v39; // [rsp+28h] [rbp-40h]
  int v42; // [rsp+A8h] [rbp+40h]

  v10 = (a8 & 1) == 0;
  v42 = a8 & 1;
  if ( !v10 )
  {
    QuadPart = a4->QuadPart;
    goto LABEL_3;
  }
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result == -1073741638 )
    return -1073741792;
  if ( result >= 0 )
  {
    QuadPart = FileSize.QuadPart;
    if ( !FileSize.QuadPart && !a4->QuadPart )
      return -1073741538;
    v33 = a4->QuadPart;
    if ( a4->QuadPart > (unsigned __int64)FileSize.QuadPart )
    {
      if ( (a5 & 0x44) == 0 )
        return -1073741760;
      FileSize = *a4;
      QuadPart = v33;
      result = FsRtlSetFileSize(FileObject, (__int64 *)&FileSize);
      if ( result < 0 )
        return result;
    }
LABEL_3:
    if ( QuadPart <= 0x3FFFFFFFFFF000LL )
    {
      v13 = (QuadPart + 4095) >> 12;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x6D536D4Du);
      if ( !PoolWithTag )
        return -1073741670;
      v15 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x108uLL, 0x61436D4Du);
      v16 = (__int64)v15;
      if ( !v15 )
      {
        v35 = PoolWithTag;
        goto LABEL_45;
      }
      memset(v15, 0, 0x108uLL);
      v17 = a8 & 0x10000;
      v18 = 8 * v13;
      v19.QuadPart = 0LL;
      v20 = (-(__int64)(v17 != 0) & 0x100000) + 0x100000;
      FileSize.QuadPart = 0LL;
      v21 = v17 != 0 ? 0x200000 : 0x100000;
      v39 = v20;
      while ( 1 )
      {
        if ( v18 < v20 )
          v21 = v18;
        if ( v19.QuadPart )
        {
          v34 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x63536D4Du);
          v19.QuadPart = (LONGLONG)v34;
          if ( !v34 )
          {
            ExFreePoolWithTag(PoolWithTag, 0);
            v36 = *(_QWORD **)(v16 + 144);
            if ( v36 )
            {
              do
              {
                v37 = (_QWORD *)v36[2];
                ExFreePoolWithTag(v36, 0);
                v36 = v37;
              }
              while ( v37 );
            }
            v35 = (void *)v16;
LABEL_45:
            ExFreePoolWithTag(v35, 0);
            return -1073741670;
          }
          memset(v34, 0, 0x70uLL);
          *(LARGE_INTEGER *)(FileSize.QuadPart + 16) = v19;
        }
        else
        {
          v19.QuadPart = v16 + 128;
        }
        v18 -= v21;
        *(_DWORD *)(v19.QuadPart + 44) = v21 >> 3;
        v20 = v39;
        FileSize = v19;
        if ( !v18 )
        {
          *a3 = PoolWithTag;
          memset(PoolWithTag, 0, 0x30uLL);
          PoolWithTag[5] = 0LL;
          *(_QWORD *)v16 = PoolWithTag;
          *(_QWORD *)(v16 + 16) = v16 + 8;
          *(_QWORD *)(v16 + 8) = v16 + 8;
          *(_QWORD *)(v16 + 112) = 1LL;
          *(_QWORD *)(v16 + 24) = 1LL;
          v22 = (*(_WORD *)(v16 + 60) ^ *a2) & 0x3FF;
          *(_QWORD *)(v16 + 104) = 0LL;
          *(_WORD *)(v16 + 60) ^= v22;
          if ( v42 )
            *(_DWORD *)(v16 + 56) |= 0x8000u;
          else
            *(_QWORD *)(v16 + 48) = 1LL;
          v23 = 6;
          *(_DWORD *)(v16 + 56) = *(_DWORD *)(v16 + 56) ^ (*(_DWORD *)(v16 + 56) ^ (a7 << 20)) & 0x3F00000 | 0x82;
          if ( !v17 )
          {
            if ( (a6 & 0x10000000) != 0 )
            {
              *((_WORD *)PoolWithTag + 6) |= 0x8000u;
              v23 = 14;
            }
            else if ( (a6 & 0x40000000) != 0 )
            {
              v23 = 30;
              *((_WORD *)PoolWithTag + 6) |= 0x4000u;
            }
          }
          *PoolWithTag = v16;
          v24 = v16 + 128;
          v25 = 0LL;
          v26 = (*((_WORD *)PoolWithTag + 6) ^ WORD2(v13)) & 0x3FF;
          PoolWithTag[3] = QuadPart;
          *((_WORD *)PoolWithTag + 6) ^= v26;
          *((_DWORD *)PoolWithTag + 2) = v13;
          *((_BYTE *)PoolWithTag + 14) ^= (*((_BYTE *)PoolWithTag + 14) ^ (2 * v23)) & 0x3E;
          v27 = 2 * (v23 & 0x1F);
          do
          {
            v28 = (__int64 *)(v24 + 16);
            v29 = *(_WORD *)(v24 + 32) & 1;
            *(_QWORD *)v24 = v16;
            *(_DWORD *)(v24 + 36) = v25;
            *(_WORD *)(v24 + 32) = v27 | v29 & 0xFFC1 | (WORD2(v25) << 6);
            if ( *(_QWORD *)(v24 + 16) )
            {
              *(_DWORD *)(v24 + 40) = *(_DWORD *)(v24 + 44);
            }
            else
            {
              v30 = *(_WORD *)(v24 + 34) & 0xF;
              *(_DWORD *)(v24 + 40) = (QuadPart >> 12) - v25;
              *(_WORD *)(v24 + 34) = (16 * QuadPart) | v30;
              v31 = *(_DWORD *)(v24 + 44) - (v13 - v25);
              *(_DWORD *)(v24 + 44) = v13 - v25;
              *(_DWORD *)(v24 + 52) ^= (*(_DWORD *)(v24 + 52) ^ v31) & 0x3FFFFFFF;
            }
            v25 += *(unsigned int *)(v24 + 44);
            *(_QWORD *)(v24 + 88) = v24 + 80;
            *(_QWORD *)(v24 + 80) = v24 + 80;
            MiInsertSubsectionNode(v16, v24, 0LL);
            v24 = *v28;
          }
          while ( *v28 );
          return 0;
        }
      }
    }
    return -1073741760;
  }
  return result;
}
