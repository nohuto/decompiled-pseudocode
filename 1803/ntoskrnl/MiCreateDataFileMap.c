/*
 * XREFs of MiCreateDataFileMap @ 0x1404BEDE8
 * Callers:
 *     MiCreateNewSection @ 0x1404BE6AC (MiCreateNewSection.c)
 * Callees:
 *     MiInsertSubsectionNode @ 0x14004D364 (MiInsertSubsectionNode.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     FsRtlGetFileSize @ 0x1404BF2F0 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x1405558FC (FsRtlSetFileSize.c)
 */

NTSTATUS __fastcall MiCreateDataFileMap(
        PFILE_OBJECT FileObject,
        _WORD *a2,
        _QWORD *a3,
        LARGE_INTEGER *a4,
        char a5,
        int a6,
        int a7,
        int a8)
{
  LARGE_INTEGER v9; // r14
  unsigned __int64 QuadPart; // rbp
  unsigned __int64 v13; // r13
  _QWORD *PoolWithTag; // rdi
  PVOID v15; // rax
  __int64 v16; // rsi
  int v17; // ebx
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rax
  unsigned int v20; // r15d
  __int16 v21; // cx
  int v22; // ecx
  char v23; // r14
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  __int16 v26; // ax
  unsigned __int64 v27; // rcx
  int v28; // edi
  __int16 v29; // r14
  __int64 *v30; // r15
  int v31; // r8d
  __int16 v32; // ax
  __int16 v33; // cx
  int v34; // eax
  NTSTATUS result; // eax
  LONGLONG v36; // rax
  PVOID v37; // rax
  void *v38; // rcx
  _QWORD *v39; // rcx
  _QWORD *v40; // rbx
  LARGE_INTEGER FileSize; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v42; // [rsp+28h] [rbp-40h]
  int v45; // [rsp+A8h] [rbp+40h]

  v9.QuadPart = 0LL;
  v45 = a8 & 1;
  if ( v45 )
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
    v36 = a4->QuadPart;
    if ( a4->QuadPart > (unsigned __int64)FileSize.QuadPart )
    {
      if ( (a5 & 0x44) == 0 )
        return -1073741760;
      FileSize = *a4;
      QuadPart = v36;
      result = FsRtlSetFileSize(FileObject);
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
      v15 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x128uLL, 0x61436D4Du);
      v16 = (__int64)v15;
      if ( !v15 )
      {
        v38 = PoolWithTag;
        goto LABEL_45;
      }
      memset(v15, 0, 0x128uLL);
      v17 = a8 & 0x10000;
      v18 = 8 * v13;
      v19 = (-(__int64)(v17 != 0) & 0x100000) + 0x100000;
      v42 = v19;
      FileSize.QuadPart = 0LL;
      v20 = v17 != 0 ? 0x200000 : 0x100000;
      while ( 1 )
      {
        if ( v18 < v19 )
          v20 = v18;
        if ( v9.QuadPart )
        {
          v37 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x63536D4Du);
          v9.QuadPart = (LONGLONG)v37;
          if ( !v37 )
          {
            ExFreePoolWithTag(PoolWithTag, 0);
            v39 = *(_QWORD **)(v16 + 144);
            if ( v39 )
            {
              do
              {
                v40 = (_QWORD *)v39[2];
                ExFreePoolWithTag(v39, 0);
                v39 = v40;
              }
              while ( v40 );
            }
            v38 = (void *)v16;
LABEL_45:
            ExFreePoolWithTag(v38, 0);
            return -1073741670;
          }
          memset(v37, 0, 0x90uLL);
          *(LARGE_INTEGER *)(FileSize.QuadPart + 16) = v9;
        }
        else
        {
          v9.QuadPart = v16 + 128;
        }
        v18 -= v20;
        *(_DWORD *)(v9.QuadPart + 44) = v20 >> 3;
        v19 = v42;
        FileSize = v9;
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
          v21 = (*(_WORD *)(v16 + 60) ^ *a2) & 0x3FF;
          *(_QWORD *)(v16 + 104) = 0LL;
          *(_WORD *)(v16 + 60) ^= v21;
          v22 = *(_DWORD *)(v16 + 56);
          if ( v45 )
          {
            v22 |= 0x8000u;
            *(_DWORD *)(v16 + 56) = v22;
          }
          else
          {
            *(_QWORD *)(v16 + 48) = 1LL;
          }
          v23 = 6;
          *(_DWORD *)(v16 + 56) = v22 ^ (v22 ^ (a7 << 20)) & 0x3F00000 | 0x82;
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
          LOWORD(v27) = 0;
          *((_DWORD *)PoolWithTag + 2) = v13;
          *((_BYTE *)PoolWithTag + 14) ^= (*((_BYTE *)PoolWithTag + 14) ^ (2 * v23)) & 0x3E;
          v28 = 0;
          v29 = 2 * (v23 & 0x1F);
          do
          {
            v30 = (__int64 *)(v24 + 16);
            v31 = *(_DWORD *)(v24 + 44);
            v32 = ((_WORD)v27 << 6) | *(_WORD *)(v24 + 32) & 1;
            *(_QWORD *)v24 = v16;
            *(_DWORD *)(v24 + 36) = v25;
            *(_WORD *)(v24 + 32) = v29 | v32 & 0xFFC1;
            if ( *(_QWORD *)(v24 + 16) )
            {
              v34 = v31;
            }
            else
            {
              v33 = *(_WORD *)(v24 + 34);
              *(_DWORD *)(v24 + 52) ^= (*(_DWORD *)(v24 + 52) ^ (v28 + v31 - v13)) & 0x3FFFFFFF;
              *(_WORD *)(v24 + 34) = (16 * QuadPart) | v33 & 0xF;
              v34 = (QuadPart >> 12) - v28;
            }
            *(_DWORD *)(v24 + 40) = v34;
            v25 += *(unsigned int *)(v24 + 44);
            *(_QWORD *)(v24 + 88) = v24 + 80;
            v28 = v25;
            *(_QWORD *)(v24 + 80) = v24 + 80;
            MiInsertSubsectionNode(v16, v24, 0LL);
            v24 = *v30;
            v27 = HIDWORD(v25);
          }
          while ( *v30 );
          return 0;
        }
      }
    }
    return -1073741760;
  }
  return result;
}
