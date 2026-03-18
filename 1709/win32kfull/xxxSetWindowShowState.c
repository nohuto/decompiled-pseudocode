/*
 * XREFs of xxxSetWindowShowState @ 0x1C020C98C
 * Callers:
 *     NtUserSetWindowShowState @ 0x1C01EC4F0 (NtUserSetWindowShowState.c)
 * Callees:
 *     CkptRestore @ 0x1C004B898 (CkptRestore.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01B9320 (xxxNotifyShellTrackedWindowPosChanged.c)
 */

__int64 __fastcall xxxSetWindowShowState(__int64 a1, unsigned __int8 a2, _OWORD *a3)
{
  BOOL v6; // eax
  __int64 v7; // r8
  _OWORD *Prop; // rax
  __int64 v10; // rdx
  char v11; // [rsp+50h] [rbp+8h] BYREF

  v6 = (*(_BYTE *)(a1 + 71) & 0x20) != 0 || (*(_BYTE *)(a1 + 305) & 3) != 0;
  if ( (a2 == 16 || a2 == 18 || a2 == 20) && !v6 )
    goto LABEL_9;
  if ( a3 )
  {
    Prop = (_OWORD *)GetProp(a1, atomCheckpointProp, 1);
    if ( Prop )
    {
      *Prop = *a3;
    }
    else if ( !CkptRestore(a1, a3) )
    {
      UserSetLastError(8LL, v10);
      return 0LL;
    }
  }
  if ( (a2 == 15 || a2 == 17 || a2 == 19) && (*(_BYTE *)(a1 + 71) & 1) != 0 )
  {
LABEL_9:
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
    xxxNotifyShellTrackedWindowPosChanged(a1, 1, v7);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
    return 1LL;
  }
  return PostEventMessageEx(
           *(struct tagTHREADINFO **)(a1 + 16),
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL),
           1u,
           a1,
           1u,
           a3 != 0LL ? 4 : 0,
           a2 | (unsigned __int64)(gdwPUDFlags & 0x10000),
           0LL);
}
