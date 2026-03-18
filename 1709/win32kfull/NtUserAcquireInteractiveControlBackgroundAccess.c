/*
 * XREFs of NtUserAcquireInteractiveControlBackgroundAccess @ 0x1C0112460
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0112544 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x1C01126B0 (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserAcquireInteractiveControlBackgroundAccess(unsigned int a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v5; // ebp
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdi
  InteractiveControlManager *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  v5 = a2;
  EnterCrit(0LL, 1LL);
  v8 = 0LL;
  if ( !a3 )
  {
    v10 = 0LL;
LABEL_3:
    v15[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v15;
    v15[1] = v10;
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    if ( v3 )
    {
      if ( v3 - 744 > 0x11 )
      {
        UserSetLastError(87LL, v7);
        goto LABEL_8;
      }
    }
    else
    {
      v3 = 744;
      v5 = 761;
    }
    v11 = InteractiveControlManager::Instance();
    LOBYTE(v8) = (int)InteractiveControlManager::AcquireDeviceBackgroundAccess(v11, a1, v3, v5, (struct tagWND *)v10) >= 0;
LABEL_8:
    ThreadUnlock1(v13, v12);
    goto LABEL_9;
  }
  v10 = ValidateHwnd(a3);
  if ( v10 )
    goto LABEL_3;
LABEL_9:
  UserSessionSwitchLeaveCrit(v9, v7);
  return v8;
}
