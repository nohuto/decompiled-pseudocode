/*
 * XREFs of xxxSetWindowShowState @ 0x1C020B5C8
 * Callers:
 *     NtUserSetWindowShowState @ 0x1C01E0370 (NtUserSetWindowShowState.c)
 * Callees:
 *     CkptRestore @ 0x1C001D438 (CkptRestore.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01B608C (xxxNotifyShellTrackedWindowPosChanged.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetWindowShowState(__int64 a1, unsigned __int8 a2, _OWORD *a3)
{
  BOOL v6; // eax
  __int64 v7; // r8
  _OWORD *Prop; // rax
  __int64 v10; // r8
  char v11; // [rsp+50h] [rbp+8h] BYREF

  v6 = (*(_BYTE *)(a1 + 71) & 0x20) != 0 || (*(_BYTE *)(a1 + 305) & 3) != 0;
  if ( (a2 == 16 || a2 == 18 || a2 == 20) && !v6 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
    xxxNotifyShellTrackedWindowPosChanged(a1, 1, v7);
    if ( v11 )
      return 1LL;
    --gdwInAtomicOperation;
LABEL_11:
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v11);
    return 1LL;
  }
  if ( a3 )
  {
    Prop = (_OWORD *)GetProp(a1, atomCheckpointProp, 1);
    if ( Prop )
    {
      *Prop = *a3;
    }
    else if ( !CkptRestore(a1, a3) )
    {
      UserSetLastError(8LL);
      return 0LL;
    }
  }
  if ( (a2 == 15 || a2 == 17 || a2 == 19) && (*(_BYTE *)(a1 + 71) & 1) != 0 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
    xxxNotifyShellTrackedWindowPosChanged(a1, 1, v10);
    if ( v11 )
      return 1LL;
    --gdwInAtomicOperation;
    goto LABEL_11;
  }
  return PostEventMessageEx(
           *(_QWORD *)(a1 + 16),
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL),
           1u,
           a1,
           1u,
           a3 != 0LL ? 4 : 0,
           a2 | (unsigned __int64)(gdwPUDFlags & 0x10000),
           0LL);
}
