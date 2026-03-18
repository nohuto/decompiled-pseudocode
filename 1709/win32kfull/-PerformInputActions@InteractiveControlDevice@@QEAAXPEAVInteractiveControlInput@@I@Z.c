/*
 * XREFs of ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0221524
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C02216E4 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0112544 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     GetUserHandedness @ 0x1C0125620 (GetUserHandedness.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C0220824 (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DestroyDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C0220B98 (-DestroyDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0220BE8 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C0221980 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 */

void __fastcall InteractiveControlDevice::PerformInputActions(
        InteractiveControlDevice *this,
        struct InteractiveControlInput *a2,
        unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  _WORD v11[2]; // [rsp+30h] [rbp-48h] BYREF
  int v12; // [rsp+34h] [rbp-44h]
  __int64 v13; // [rsp+38h] [rbp-40h]
  _WORD v14[2]; // [rsp+40h] [rbp-38h] BYREF
  int v15; // [rsp+44h] [rbp-34h]
  __int64 v16; // [rsp+48h] [rbp-30h]

  v3 = 0;
  if ( (a3 & 0x240) != 0 )
    CInputGlobals::UpdateInputGlobals(
      gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      3LL,
      0LL,
      0,
      2);
  InteractiveControlDevice::DetectPressAndHoldGesture(this, a2, a3);
  if ( (a3 & 0x40) != 0 )
  {
    v11[0] = *((_WORD *)this + 196);
    v12 = 0;
    v13 = 1LL;
    InteractiveControlDevice::SendHapticFeedbackOutput(this, (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)v11);
  }
  if ( (a3 & 0x80u) != 0
    && !*((_DWORD *)this + 15)
    && *((_DWORD *)InteractiveControlManager::Instance() + 21)
    && !*((_DWORD *)this + 16) )
  {
    v14[0] = *((_WORD *)this + 197);
    v15 = 0;
    v16 = 1LL;
    InteractiveControlDevice::SendHapticFeedbackOutput(this, (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)v14);
  }
  if ( *((_QWORD *)this + 43) != -1LL )
  {
    if ( (unsigned int)GetUserHandedness() != *((_DWORD *)this + 84) )
    {
      InteractiveControlDevice::DestroyDeadzone(this);
      InteractiveControlDevice::CreateDeadzone(this);
    }
    if ( (a3 & 0x400) != 0 || (a3 & 0x1000) != 0 )
    {
      v7 = *((_QWORD *)this + 30);
      if ( v7 )
      {
        v8 = *((_QWORD *)this + 43);
        if ( v8 != -1 )
          RIMUpdatePointerDeviceDeadzoneOrigin(v7 + 64, v8, *((_QWORD *)a2 + 8));
      }
      if ( (a3 & 0x400) != 0 )
        goto LABEL_20;
    }
    if ( (a3 & 0x800) != 0 )
    {
LABEL_20:
      v9 = *((_QWORD *)this + 30);
      if ( v9 )
      {
        v10 = *((_QWORD *)this + 43);
        if ( v10 != -1 )
        {
          LOBYTE(v3) = (*((_DWORD *)a2 + 18) & 2) != 0;
          RIMActivatePointerDeviceDeadzone(v9 + 64, v10, v3);
        }
      }
    }
  }
}
