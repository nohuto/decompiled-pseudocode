/*
 * XREFs of ExInitializeLookasideListExInternal @ 0x14006A590
 * Callers:
 *     ExInitializeLookasideListEx @ 0x14006A540 (ExInitializeLookasideListEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     InitializeSListHead @ 0x14006A770 (InitializeSListHead.c)
 */

__int64 __fastcall ExInitializeLookasideListExInternal(
        PSLIST_HEADER SListHead,
        PVOID (__fastcall *a2)(POOL_TYPE a1, SIZE_T a2, ULONG a3),
        void (__stdcall *a3)(PPRIVILEGE_SET Privileges),
        int a4,
        int a5,
        unsigned __int64 a6,
        int a7,
        __int16 a8,
        int a9)
{
  __int16 v10; // cx
  __int16 v12; // bp
  int v13; // r15d
  int v14; // esi
  KSPIN_LOCK *v15; // r12
  __int64 *v16; // rdi
  int v17; // esi
  PVOID (__fastcall *v18)(POOL_TYPE, SIZE_T, ULONG); // rax
  void (__stdcall *v19)(PPRIVILEGE_SET); // rax
  KIRQL v20; // si
  PSLIST_HEADER *v21; // rax
  PSLIST_HEADER v22; // rbx

  v10 = a8;
  if ( a8 )
  {
    if ( (unsigned __int16)(a8 - 256) > 0x300u )
      return 3221225718LL;
  }
  else
  {
    v10 = 256;
  }
  v12 = 0;
  v13 = 8;
  if ( !a9 )
    v12 = v10;
  if ( a6 > 8 )
    v13 = a6;
  if ( ((a5 - 1) & a5) != 0 || (a5 & 0xFFFFFFFC) != 0 )
    return 3221225715LL;
  if ( (a5 & 1) != 0 )
  {
    v14 = 16;
  }
  else
  {
    v14 = 0;
    if ( a5 )
      v14 = 8;
  }
  if ( (a4 & 0xFFFFFC18) != 0 || (a4 & 3) == 3 )
    return 3221225714LL;
  v15 = &ExNPagedLookasideLock;
  v16 = &ExNPagedLookasideListHead;
  if ( (a4 & 1) != 0 )
  {
    v15 = &ExPagedLookasideLock;
    v16 = &ExPagedLookasideListHead;
  }
  InitializeSListHead(SListHead);
  LOWORD(SListHead[1].Alignment) = ExMinimumLookasideDepth;
  v17 = a4 | v14;
  *((_DWORD *)&SListHead[2].HeaderX64 + 2) = a7;
  v18 = a2;
  *((_WORD *)&SListHead[1].HeaderX64 + 1) = v12;
  *(_QWORD *)((char *)&SListHead[1].HeaderX64 + 4) = 0LL;
  if ( !a2 )
    v18 = CmpAllocateTransientPoolWithTag;
  *(_QWORD *)((char *)&SListHead[1].HeaderX64 + 12) = 0LL;
  *((_DWORD *)&SListHead[2].HeaderX64 + 1) = v17;
  *((_DWORD *)&SListHead[2].HeaderX64 + 3) = v13;
  SListHead[3].Alignment = (unsigned __int64)v18;
  v19 = CmSiFreeMemory;
  if ( a3 )
    v19 = a3;
  SListHead[3].Region = (unsigned __int64)v19;
  SListHead[5].Alignment = 0LL;
  v20 = KeAcquireSpinLockRaiseToDpc(v15);
  if ( a9 )
  {
    LOWORD(SListHead[1].Alignment) = v12;
    *((_WORD *)&SListHead[1].HeaderX64 + 1) = -1;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    LODWORD(SListHead[1].Alignment) = -65536;
  }
  v21 = (PSLIST_HEADER *)v16[1];
  v22 = SListHead + 4;
  if ( *v21 != (PSLIST_HEADER)v16 )
    __fastfail(3u);
  v22->Alignment = (unsigned __int64)v16;
  v22->Region = (unsigned __int64)v21;
  *v21 = v22;
  v16[1] = (__int64)v22;
  KxReleaseSpinLock(v15);
  __writecr8(v20);
  return 0LL;
}
