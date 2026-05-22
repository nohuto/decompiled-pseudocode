/*
 * XREFs of ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1800332A4
 * Callers:
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18002EF30 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18002F2E0 (-ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@.c)
 *     ?SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18002F618 (-SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverr.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x1800331AC (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z.c)
 *     ?NavigationDisable@ControllerProcessor@@QEAAJXZ @ 0x180033268 (-NavigationDisable@ControllerProcessor@@QEAAJXZ.c)
 * Callees:
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180033498 (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180033644 (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x180033880 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180033A24 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall ControllerProcessor::UpdateNavigationState(
        __int64 a1,
        int a2,
        struct tagRECT *a3,
        struct tagPOINT *a4)
{
  int v5; // ecx
  unsigned int v6; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int updated; // eax
  int v11; // edx
  int v12; // edx

  v5 = *(_DWORD *)(a1 + 1896);
  v6 = 0;
  if ( !v5 )
  {
    if ( a2 )
    {
      v12 = a2 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
          return v6;
        v6 = ControllerProcessor::TurnNavigationOff((ControllerProcessor *)a1);
        if ( (v6 & 0x80000000) == 0 )
        {
          *(_DWORD *)(a1 + 1896) = 2;
          v6 = 0;
          *(_DWORD *)(a1 + 1952) = 0;
          *(_QWORD *)(a1 + 2032) = 0LL;
          *(_DWORD *)(a1 + 2028) = 0;
          *(_QWORD *)(a1 + 1964) = 0LL;
          *(_BYTE *)(a1 + 2020) = 0;
          return v6;
        }
        goto LABEL_35;
      }
      v9 = ControllerProcessor::TurnNavigationOff((ControllerProcessor *)a1);
      goto LABEL_31;
    }
    goto LABEL_33;
  }
  v7 = v5 - 1;
  if ( !v7 )
  {
    if ( a2 )
    {
      v11 = a2 - 2;
      if ( !v11 )
      {
        *(_DWORD *)(a1 + 1952) = 0;
        *(_QWORD *)(a1 + 2032) = 0LL;
        *(_DWORD *)(a1 + 2028) = 0;
        *(_QWORD *)(a1 + 1964) = 0LL;
        *(_BYTE *)(a1 + 2020) = 0;
        goto LABEL_11;
      }
      if ( v11 != 1 )
        return v6;
      if ( a3 && a4 )
      {
        *(_BYTE *)(a1 + 2000) = 1;
        *(struct tagRECT *)(a1 + 1984) = *a3;
        v6 = ControllerProcessor::TransitionToEnabled((ControllerProcessor *)a1, (struct tagRECT *)(a1 + 1936), a4);
        if ( (v6 & 0x80000000) != 0 )
          goto LABEL_35;
      }
      else
      {
        *(_BYTE *)(a1 + 2000) = 0;
      }
      v6 = ControllerProcessor::TurnNavigationOn((ControllerProcessor *)a1);
      if ( (v6 & 0x80000000) == 0 )
      {
        *(_DWORD *)(a1 + 1896) = 0;
        return v6;
      }
      goto LABEL_35;
    }
LABEL_33:
    updated = ControllerProcessor::UpdateNavigationParameters((ControllerProcessor *)a1, a3);
LABEL_34:
    v6 = updated;
    if ( updated >= 0 )
      return v6;
    goto LABEL_35;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
      return v6;
    if ( a2 )
    {
      if ( a2 == 3 )
        *(_DWORD *)(a1 + 1896) = 2;
      return v6;
    }
    v9 = ControllerProcessor::TransitionToEnabled((ControllerProcessor *)a1, a3, a4);
LABEL_31:
    v6 = v9;
    if ( v9 >= 0 )
    {
      *(_DWORD *)(a1 + 1896) = 1;
      return v6;
    }
    goto LABEL_35;
  }
  if ( a2 )
  {
    if ( a2 != 1 )
      return v6;
LABEL_11:
    *(_DWORD *)(a1 + 1896) = 3;
    return v6;
  }
  v6 = ControllerProcessor::TransitionToEnabled((ControllerProcessor *)a1, a3, a4);
  if ( (v6 & 0x80000000) == 0 )
  {
    *(_DWORD *)(a1 + 1896) = 0;
    updated = ControllerProcessor::TurnNavigationOn((ControllerProcessor *)a1);
    goto LABEL_34;
  }
LABEL_35:
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  return v6;
}
