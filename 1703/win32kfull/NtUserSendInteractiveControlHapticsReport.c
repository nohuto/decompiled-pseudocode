/*
 * XREFs of NtUserSendInteractiveControlHapticsReport @ 0x1C01DEC70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0108804 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C021B444 (-SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@.c)
 */

_BOOL8 __fastcall NtUserSendInteractiveControlHapticsReport(unsigned __int16 a1, unsigned int a2, volatile void *a3)
{
  SIZE_T v4; // rbx
  BOOL v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *v11; // rax
  const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *v12; // rsi
  InteractiveControlManager *v13; // rax

  v4 = a2;
  v6 = 0;
  EnterSharedCrit(0LL, 1LL);
  if ( (_DWORD)v4 )
  {
    ProbeForRead(a3, v4, 1u);
    v11 = (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)Win32AllocPoolWithQuota(v4, 1768452949LL);
    v12 = v11;
    if ( v11 )
    {
      memmove(v11, (const void *)a3, v4);
      if ( (_DWORD)v4 == 16 )
      {
        v13 = InteractiveControlManager::Instance();
        v6 = InteractiveControlManager::SendDeviceHapticsOutput(v13, a1, v12) >= 0;
      }
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v6;
}
