/*
 * XREFs of ViMapDoubleBuffer @ 0x14081B830
 * Callers:
 *     VfBuildScatterGatherList @ 0x140817F50 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140818DF0 (VfGetScatterGatherList.c)
 *     VfMapTransfer @ 0x140819510 (VfMapTransfer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeFlushIoBuffers @ 0x1400BA320 (KeFlushIoBuffers.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     VfReportIssueWithOptions @ 0x1402AAB18 (VfReportIssueWithOptions.c)
 *     ViAllocateMapRegistersFromFile @ 0x14081A2E8 (ViAllocateMapRegistersFromFile.c)
 *     ViHalPreprocessOptions @ 0x14081B448 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViMapDoubleBuffer(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  unsigned int v5; // esi
  ULONG_PTR v9; // r9
  ULONG_PTR v10; // r8
  ULONG_PTR v11; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  CHAR *v15; // rsi
  KIRQL v16; // r14
  PVOID v17; // rbp
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r14
  ULONG_PTR v20; // rbx
  ULONG_PTR v21; // rdx
  __int64 v22; // rax
  char *v23; // r9
  __int64 v24; // r15
  unsigned int v25; // ebp
  __int64 v26; // rax
  __int64 v27; // rbx
  const char *v28; // rdx
  CHAR *v29; // rbp
  bool v30; // cf
  unsigned int v31; // ecx
  KIRQL v32; // al
  bool v33; // zf
  PVOID v34; // rbx
  ULONG_PTR v35; // rcx
  __int64 BugCheckOnFailure; // [rsp+20h] [rbp-68h]
  CHAR *Priority; // [rsp+28h] [rbp-60h]
  int v38; // [rsp+30h] [rbp-58h]
  void *Src; // [rsp+38h] [rbp-50h]
  char *v40; // [rsp+40h] [rbp-48h]
  char *v41; // [rsp+48h] [rbp-40h]
  unsigned __int64 v42; // [rsp+50h] [rbp-38h]
  ULONG v43; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a4;
  if ( !a4 )
  {
    ViHalPreprocessOptions(byte_14039D0C0, "Driver is attempting to map a 0-length transfer.", 33LL, a1, 0LL, 0LL);
    Priority = byte_14039D0C0;
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
  v13 = *(unsigned int *)(a2 + 44);
  v14 = *(_QWORD *)(a2 + 32);
  if ( a3 < v14 + v13 )
  {
    v15 = (CHAR *)&dword_14039D0BC;
    ViHalPreprocessOptions(&dword_14039D0BC, "Virtual address %p is before the first MDL %p.", 268435487LL, 1LL, a3, a2);
    v10 = 1LL;
    goto LABEL_10;
  }
  if ( (unsigned int)(a3 - v13 - v14) >= *(_DWORD *)(a2 + 40) )
  {
    v15 = (CHAR *)&dword_14039D0C8;
    ViHalPreprocessOptions(&dword_14039D0C8, "Virtual address %p is after the first MDL %p.", 268435487LL, 2LL, a3, a2);
    v10 = 2LL;
LABEL_10:
    Priority = v15;
    v9 = a3;
    BugCheckOnFailure = a2;
LABEL_11:
    v11 = 31LL;
    goto LABEL_3;
  }
  v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
    v17 = *(PVOID *)(a2 + 24);
  else
    v17 = MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0x40000010u);
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 80));
  __writecr8(v16);
  if ( !v17 )
    return 0LL;
  v18 = a3 - *(unsigned int *)(a2 + 44) - *(_QWORD *)(a2 + 32);
  v19 = *(unsigned int *)(a2 + 40) - v18;
  v20 = (ULONG_PTR)v17 + v18;
  v38 = 1;
  v42 = v19;
  Src = (void *)v20;
  if ( !(unsigned int)ViAllocateMapRegistersFromFile(a1, v20, v5, a5, &v43) )
    return 0LL;
  v21 = (v43 << 12) + (v20 & 0xFFF);
  v22 = *(_QWORD *)(a1 + 72);
  v23 = (char *)(v21 + *(_QWORD *)(a1 + 64));
  v41 = v23;
  if ( !v22 )
    return 0LL;
  v24 = a2;
  v40 = (char *)(v21 + v22);
  v25 = v5;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( !v24 )
        return 0LL;
      v26 = *(_QWORD *)v24;
      if ( v38 )
      {
        v38 = 0;
        if ( !v26 && v25 > v19 )
        {
          v27 = v5;
          if ( (((v5 - 1) ^ (v19 + v5 - (unsigned __int64)v25)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          {
            v28 = "Extra transfer length crosses a page boundary: Mdl %p, Length %x.";
            v29 = (CHAR *)&unk_14039D0C4;
LABEL_27:
            ViHalPreprocessOptions(v29, v28, 268435487LL, 3LL, a2, v27);
            Priority = v29;
            v9 = a2;
            BugCheckOnFailure = v27;
            v10 = 3LL;
            goto LABEL_11;
          }
LABEL_32:
          LODWORD(v19) = v25;
          goto LABEL_36;
        }
        v30 = v25 < (unsigned int)v42;
      }
      else
      {
        if ( !v26 )
        {
          v31 = *(_DWORD *)(v24 + 40);
          if ( v25 > v31 )
          {
            if ( (((v5 - 1) ^ (v5 + v31 - v25)) & 0xFFFFF000) != 0 )
            {
              v27 = v5;
              v28 = "Extra transfer length crosses a page boundary: Mdl %p, Length %x";
              v29 = (CHAR *)&unk_14039D0B0;
              goto LABEL_27;
            }
            goto LABEL_32;
          }
        }
        LODWORD(v19) = *(_DWORD *)(v24 + 40);
        v30 = v25 < (unsigned int)v19;
      }
      if ( v30 )
        LODWORD(v19) = v25;
LABEL_36:
      memmove(v23, Src, (unsigned int)v19);
      v41 += (unsigned int)v19;
      memmove(v40, Src, (unsigned int)v19);
      v40 += (unsigned int)v19;
      v24 = *(_QWORD *)v24;
      if ( v24 )
      {
        v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
        v33 = (*(_BYTE *)(v24 + 10) & 5) == 0;
        LOBYTE(v43) = v32;
        v34 = v33 ? MmMapLockedPagesSpecifyCache((PMDL)v24, 0, MmCached, 0LL, 0, 0x40000010u) : *(PVOID *)(v24 + 24);
        Src = v34;
        KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 80));
        __writecr8((unsigned __int8)v43);
        if ( !v34 )
          return 0LL;
      }
      v25 -= v19;
      if ( !v25 )
        break;
      v19 = v42;
      v23 = v41;
    }
  }
  v35 = *(_QWORD *)(a1 + 56);
  if ( v35 )
    KeFlushIoBuffers(v35, a5 == 0, 1, (__int64)v23);
  return v5;
}
