/*
 * XREFs of ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x18003EA00
 * Callers:
 *     ?NavigationPause@ControllerNavigationManager@@UEAAJXZ @ 0x18003CA30 (-NavigationPause@ControllerNavigationManager@@UEAAJXZ.c)
 *     ?NavigationResume@ControllerNavigationManager@@UEAAJXZ @ 0x18003CAC0 (-NavigationResume@ControllerNavigationManager@@UEAAJXZ.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x18003E8A4 (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z.c)
 *     ?NavigationDisable@ControllerProcessor@@QEAAJXZ @ 0x18003E9A4 (-NavigationDisable@ControllerProcessor@@QEAAJXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x18003EC80 (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?TransitionToDisabled@ControllerProcessor@@AEAAJXZ @ 0x18003EE90 (-TransitionToDisabled@ControllerProcessor@@AEAAJXZ.c)
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x18003EF08 (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x18003F0B8 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x18003F2FC (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall ControllerProcessor::UpdateNavigationState(
        ControllerProcessor *a1,
        int a2,
        struct tagRECT *a3,
        struct tagPOINT *a4)
{
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int updated; // eax
  __int64 v10; // rcx
  int v11; // r9d
  int v12; // edx
  int v13; // edx

  v5 = 0;
  v6 = *((_DWORD *)a1 + 59);
  if ( !v6 )
  {
    if ( a2 )
    {
      v13 = a2 - 1;
      if ( !v13 )
      {
        updated = ControllerProcessor::TurnNavigationOff(a1);
        v5 = updated;
        if ( updated < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_50;
          v11 = 914;
          goto LABEL_49;
        }
        goto LABEL_45;
      }
      if ( v13 != 1 )
        return v5;
      updated = ControllerProcessor::TurnNavigationOff(a1);
      if ( updated < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_50;
        v11 = 920;
        goto LABEL_49;
      }
      *((_DWORD *)a1 + 59) = 2;
      updated = ControllerProcessor::TransitionToDisabled(a1);
      v5 = updated;
      if ( updated >= 0 )
        return v5;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v11 = 922;
        goto LABEL_49;
      }
    }
    else
    {
      updated = ControllerProcessor::UpdateNavigationParameters(a1, a3);
      v5 = updated;
      if ( updated >= 0 )
        return v5;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v11 = 909;
        goto LABEL_49;
      }
    }
    goto LABEL_50;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( a2 )
    {
      v12 = a2 - 2;
      if ( !v12 )
      {
        updated = ControllerProcessor::TransitionToDisabled(a1);
        v5 = updated;
        if ( updated < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_50;
          v11 = 940;
          goto LABEL_49;
        }
LABEL_13:
        *((_DWORD *)a1 + 59) = 3;
        return v5;
      }
      if ( v12 != 1 )
        return v5;
      updated = ControllerProcessor::TurnNavigationOn(a1);
      v5 = updated;
      if ( updated >= 0 )
      {
        *((_DWORD *)a1 + 59) = 0;
        return v5;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v11 = 946;
        goto LABEL_49;
      }
    }
    else
    {
      updated = ControllerProcessor::UpdateNavigationParameters(a1, a3);
      v5 = updated;
      if ( updated >= 0 )
        return v5;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v11 = 935;
        goto LABEL_49;
      }
    }
LABEL_50:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
        return v5;
      goto LABEL_13;
    }
    updated = ControllerProcessor::TransitionToEnabled(a1, a3, a4);
    if ( updated < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_50;
      v11 = 960;
      goto LABEL_49;
    }
    *((_DWORD *)a1 + 59) = 0;
    updated = ControllerProcessor::TurnNavigationOn(a1);
    v5 = updated;
    if ( updated >= 0 )
      return v5;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v11 = 962;
LABEL_49:
      McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 12, v11, updated);
      goto LABEL_50;
    }
    goto LABEL_50;
  }
  if ( v8 != 1 )
    return v5;
  if ( !a2 )
  {
    updated = ControllerProcessor::TransitionToEnabled(a1, a3, a4);
    v5 = updated;
    if ( updated < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_50;
      v11 = 980;
      goto LABEL_49;
    }
LABEL_45:
    *((_DWORD *)a1 + 59) = 1;
    return v5;
  }
  if ( a2 == 3 )
    *((_DWORD *)a1 + 59) = 2;
  return v5;
}
