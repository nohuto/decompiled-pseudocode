/*
 * XREFs of NtUserAcquireInteractiveControlBackgroundAccess @ 0x1C0108720
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0108804 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x1C0108974 (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserAcquireInteractiveControlBackgroundAccess(unsigned int a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v5; // ebp
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  InteractiveControlManager *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  v5 = a2;
  EnterCrit(0LL, 1LL);
  v7 = 0LL;
  if ( !a3 )
  {
    v10 = 0LL;
LABEL_3:
    v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v17;
    v17[1] = v10;
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    if ( v3 )
    {
      if ( v3 - 744 > 0x11 )
      {
        UserSetLastError(87LL);
        goto LABEL_8;
      }
    }
    else
    {
      v3 = 744;
      v5 = 761;
    }
    v13 = InteractiveControlManager::Instance();
    LOBYTE(v7) = (int)InteractiveControlManager::AcquireDeviceBackgroundAccess(v13, a1, v3, v5, (struct tagWND *)v10) >= 0;
LABEL_8:
    ThreadUnlock1(v15, v14);
    goto LABEL_9;
  }
  v10 = ValidateHwnd(a3);
  if ( v10 )
    goto LABEL_3;
LABEL_9:
  UserSessionSwitchLeaveCrit(v9, v8, v11, v12);
  return v7;
}
