/*
 * XREFs of MiSessionRemoveImage @ 0x140154B38
 * Callers:
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiManageSubsectionView @ 0x1400DDC40 (MiManageSubsectionView.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiSessionLookupImage @ 0x14012B754 (MiSessionLookupImage.c)
 *     MmLockLoadedModuleListExclusive @ 0x14016113C (MmLockLoadedModuleListExclusive.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14024FF3C (MiReturnCrossPartitionControlAreaCharges.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiHandleDriverNonPagedSections @ 0x1405FA75C (MiHandleDriverNonPagedSections.c)
 */

__int64 __fastcall MiSessionRemoveImage(ULONG_PTR BugCheckParameter2, _QWORD *a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 SessionVm; // r12
  int v6; // edi
  unsigned __int64 v7; // r15
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  unsigned __int8 v10; // r13
  _QWORD *v11; // rax
  __int64 v12; // rbx
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  __int64 j; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 k; // rcx
  unsigned __int64 v21; // rax
  _QWORD *i; // rcx
  _QWORD *v24; // rdx
  __int64 v25[18]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int8 v26; // [rsp+F0h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter2 + 48);
  *a2 = 0LL;
  SessionVm = MiGetSessionVm();
  v6 = 0;
  v7 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  SharedVm = MiGetSharedVm(SessionVm);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = v9;
  MmLockLoadedModuleListExclusive(&v26);
  v11 = MiSessionLookupImage(v2);
  v12 = (__int64)v11;
  if ( !v11 )
    KeBugCheckEx(0x1Au, 0x2100uLL, BugCheckParameter2, v2, 0LL);
  if ( (*((_DWORD *)v11 + 15))-- == 1 )
  {
    v14 = v11;
    v15 = (_QWORD *)*v11;
    if ( v15 )
    {
      for ( i = (_QWORD *)v15[1]; i; i = (_QWORD *)i[1] )
        v15 = i;
    }
    else
    {
      for ( j = v14[2]; ; j = v15[2] )
      {
        v15 = (_QWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v15 || (_QWORD *)v15[1] == v14 )
          break;
        v14 = v15;
      }
    }
    if ( v15 )
      v17 = v15[6];
    else
      v17 = 0LL;
    *a2 = v17;
    v18 = v12;
    v19 = *(_QWORD *)(v12 + 8);
    if ( v19 )
    {
      v24 = *(_QWORD **)v19;
      if ( *(_QWORD *)v19 )
      {
        do
        {
          v19 = (unsigned __int64)v24;
          v24 = (_QWORD *)*v24;
        }
        while ( v24 );
      }
    }
    else
    {
      for ( k = *(_QWORD *)(v12 + 16); ; k = *(_QWORD *)(v19 + 16) )
      {
        v19 = k & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v19 || *(_QWORD *)v19 == v18 )
          break;
        v18 = v19;
      }
    }
    if ( v19 )
      v21 = *(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
    else
      v21 = 0LL;
    a2[1] = v21;
    RtlAvlRemoveNode((unsigned __int64 *)(v7 + 104), v12);
    v6 = 1;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  __writecr8(v26);
  MiUnlockWorkingSetExclusive(SessionVm, v10);
  if ( !v6 )
    return 0LL;
  if ( *(_BYTE *)(v12 + 65) == 1 )
    MiReturnCrossPartitionControlAreaCharges(*(_QWORD *)(v12 + 80));
  v25[0] = *(_QWORD *)(v12 + 80);
  MiManageSubsectionView(v25, (_QWORD *)(v12 + 24), 4);
  a2[2] = *(_QWORD *)(v12 + 72);
  if ( *(_BYTE *)(v12 + 64) == 1 )
    MiHandleDriverNonPagedSections(BugCheckParameter2, 0LL, 0LL);
  ExFreePoolWithTag((PVOID)v12, 0);
  return 1LL;
}
