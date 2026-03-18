/*
 * XREFs of ViMapDoubleBuffer @ 0x1407AE6CC
 * Callers:
 *     VfBuildScatterGatherList @ 0x1407AADD0 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x1407ABC80 (VfGetScatterGatherList.c)
 *     VfMapTransfer @ 0x1407AC3A0 (VfMapTransfer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     KeFlushIoBuffers @ 0x1401180C0 (KeFlushIoBuffers.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     VfReportIssueWithOptions @ 0x1402779AC (VfReportIssueWithOptions.c)
 *     ViAllocateMapRegistersFromFile @ 0x1407AD17C (ViAllocateMapRegistersFromFile.c)
 *     ViHalPreprocessOptions @ 0x1407AE2E0 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViMapDoubleBuffer(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  unsigned int v5; // esi
  ULONG_PTR v9; // r9
  ULONG_PTR v10; // r8
  ULONG_PTR v11; // rdx
  CHAR *v13; // rsi
  KIRQL v14; // r14
  PVOID v15; // rbp
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r14
  ULONG_PTR v18; // rbx
  ULONG_PTR v19; // rdx
  __int64 v20; // rax
  char *v21; // r9
  __int64 v22; // r15
  unsigned int v23; // ebp
  __int64 v24; // rbx
  const char *v25; // rdx
  CHAR *v26; // rbp
  bool v27; // cf
  unsigned int v28; // ecx
  KIRQL v29; // al
  bool v30; // zf
  PVOID v31; // rbx
  ULONG_PTR v32; // rcx
  __int64 BugCheckOnFailure; // [rsp+20h] [rbp-68h]
  CHAR *Priority; // [rsp+28h] [rbp-60h]
  int v35; // [rsp+30h] [rbp-58h]
  void *Src; // [rsp+38h] [rbp-50h]
  char *v37; // [rsp+40h] [rbp-48h]
  char *v38; // [rsp+48h] [rbp-40h]
  unsigned __int64 v39; // [rsp+50h] [rbp-38h]
  ULONG v40; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a4;
  if ( !a4 )
  {
    ViHalPreprocessOptions(byte_140359A50, "Driver is attempting to map a 0-length transfer.", 33LL, a1, 0LL, 0LL);
    Priority = byte_140359A50;
    v9 = 0LL;
    BugCheckOnFailure = 0LL;
    v10 = a1;
    v11 = 33LL;
LABEL_3:
    VfReportIssueWithOptions(0xE6u, v11, v10, v9, BugCheckOnFailure, Priority);
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 25) && a4 >= 4096 - (a3 & 0xFFF) )
    v5 = 4096 - (a3 & 0xFFF);
  if ( a3 < *(_QWORD *)(a2 + 32) + (unsigned __int64)*(unsigned int *)(a2 + 44) )
  {
    v13 = (CHAR *)&dword_140359A48;
    ViHalPreprocessOptions(&dword_140359A48, "Virtual address %p is before the first MDL %p.", 268435487LL, 1LL, a3, a2);
    v10 = 1LL;
    goto LABEL_10;
  }
  if ( (unsigned int)(a3 - *(_DWORD *)(a2 + 32) - *(_DWORD *)(a2 + 44)) >= *(_DWORD *)(a2 + 40) )
  {
    v13 = (CHAR *)&dword_140359A4C;
    ViHalPreprocessOptions(&dword_140359A4C, "Virtual address %p is after the first MDL %p.", 268435487LL, 2LL, a3, a2);
    v10 = 2LL;
LABEL_10:
    Priority = v13;
    v9 = a3;
    BugCheckOnFailure = a2;
LABEL_11:
    v11 = 31LL;
    goto LABEL_3;
  }
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
    v15 = *(PVOID *)(a2 + 24);
  else
    v15 = MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0x40000010u);
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 80));
  __writecr8(v14);
  if ( !v15 )
    return 0LL;
  v16 = a3 - *(unsigned int *)(a2 + 44) - *(_QWORD *)(a2 + 32);
  v17 = *(unsigned int *)(a2 + 40) - v16;
  v18 = (ULONG_PTR)v15 + v16;
  v35 = 1;
  v39 = v17;
  Src = (void *)v18;
  if ( !(unsigned int)ViAllocateMapRegistersFromFile(a1, v18, v5, a5, &v40) )
    return 0LL;
  v19 = (v40 << 12) + (v18 & 0xFFF);
  v20 = *(_QWORD *)(a1 + 72);
  v21 = (char *)(v19 + *(_QWORD *)(a1 + 64));
  v38 = v21;
  if ( !v20 )
    return 0LL;
  v22 = a2;
  v37 = (char *)(v19 + v20);
  v23 = v5;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( !v22 )
        return 0LL;
      if ( v35 )
      {
        v35 = 0;
        if ( !*(_QWORD *)v22 && v23 > v17 )
        {
          v24 = v5;
          if ( (((v5 - 1) ^ (v17 + v5 - (unsigned __int64)v23)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          {
            v25 = "Extra transfer length crosses a page boundary: Mdl %p, Length %x.";
            v26 = (CHAR *)&unk_140359A40;
LABEL_27:
            ViHalPreprocessOptions(v26, v25, 268435487LL, 3LL, a2, v24);
            Priority = v26;
            v9 = a2;
            BugCheckOnFailure = v24;
            v10 = 3LL;
            goto LABEL_11;
          }
LABEL_32:
          LODWORD(v17) = v23;
          goto LABEL_36;
        }
        v27 = v23 < (unsigned int)v39;
      }
      else
      {
        if ( !*(_QWORD *)v22 )
        {
          v28 = *(_DWORD *)(v22 + 40);
          if ( v23 > v28 )
          {
            if ( (((v5 - 1) ^ (v5 + v28 - v23)) & 0xFFFFF000) != 0 )
            {
              v24 = v5;
              v25 = "Extra transfer length crosses a page boundary: Mdl %p, Length %x";
              v26 = (CHAR *)&unk_140359A44;
              goto LABEL_27;
            }
            goto LABEL_32;
          }
        }
        LODWORD(v17) = *(_DWORD *)(v22 + 40);
        v27 = v23 < (unsigned int)v17;
      }
      if ( v27 )
        LODWORD(v17) = v23;
LABEL_36:
      memmove(v21, Src, (unsigned int)v17);
      v38 += (unsigned int)v17;
      memmove(v37, Src, (unsigned int)v17);
      v37 += (unsigned int)v17;
      v22 = *(_QWORD *)v22;
      if ( v22 )
      {
        v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
        v30 = (*(_BYTE *)(v22 + 10) & 5) == 0;
        LOBYTE(v40) = v29;
        v31 = v30 ? MmMapLockedPagesSpecifyCache((PMDL)v22, 0, MmCached, 0LL, 0, 0x40000010u) : *(PVOID *)(v22 + 24);
        Src = v31;
        KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 80));
        __writecr8((unsigned __int8)v40);
        if ( !v31 )
          return 0LL;
      }
      v23 -= v17;
      if ( !v23 )
        break;
      v17 = v39;
      v21 = v38;
    }
  }
  v32 = *(_QWORD *)(a1 + 56);
  if ( v32 )
    KeFlushIoBuffers(v32, a5 == 0, 1, (__int64)v21);
  return v5;
}
