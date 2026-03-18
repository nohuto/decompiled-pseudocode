/*
 * XREFs of NtUserSendInteractiveControlHapticsReport @ 0x1C01EAD90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0112544 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C021C6A0 (-SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@.c)
 */

_BOOL8 __fastcall NtUserSendInteractiveControlHapticsReport(unsigned __int16 a1, unsigned int a2, volatile void *a3)
{
  SIZE_T v4; // rbx
  __int64 v6; // rdx
  BOOL v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *v10; // rax
  const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *v11; // rsi
  InteractiveControlManager *v12; // rax

  v4 = a2;
  EnterSharedCrit(0LL, 1LL);
  v7 = 0;
  if ( (_DWORD)v4 )
  {
    ProbeForRead(a3, v4, 1u);
    v10 = (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)Win32AllocPoolWithQuota(v4, 1768452949LL);
    v11 = v10;
    if ( v10 )
    {
      memmove(v10, (const void *)a3, v4);
      if ( (_DWORD)v4 == 16 )
      {
        v12 = InteractiveControlManager::Instance();
        v7 = InteractiveControlManager::SendDeviceHapticsOutput(v12, a1, v11) >= 0;
      }
    }
  }
  else
  {
    UserSetLastError(87LL, v6);
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v7;
}
