/*
 * XREFs of NtUserSetInteractiveControlFocus @ 0x1C01EB7A0
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C0090B7C (IsShellProcess.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0112544 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C021CA50 (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetInteractiveControlFocus(unsigned __int16 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  struct InteractiveControlManager *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h]

  EnterCrit(0LL, 1LL);
  v6 = 0LL;
  if ( (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 400LL)) )
    gbValidateHandleForIL = 0;
  if ( a3 )
  {
    v9 = ValidateHwnd(a3);
    if ( !v9 )
      goto LABEL_10;
  }
  else
  {
    v9 = 0LL;
  }
  v14 = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = &v14;
  v15 = v9;
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  v10 = InteractiveControlManager::Instance();
  LOBYTE(v6) = (int)InteractiveControlManager::SetDeviceFocus(v10, a1, a2, v9, v14, v15) >= 0;
  ThreadUnlock1(v12, v11);
LABEL_10:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v6;
}
