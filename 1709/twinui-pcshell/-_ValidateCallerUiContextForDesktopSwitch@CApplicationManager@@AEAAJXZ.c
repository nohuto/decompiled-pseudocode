/*
 * XREFs of ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x18000891C
 * Callers:
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x1800089BC (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180008B90 (-SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_.c)
 * Callees:
 *     ?GetCallingProcessType@CallerIdentity@@YAJPEAW4PROCESS_UICONTEXT@@@Z @ 0x1801C0E20 (-GetCallingProcessType@CallerIdentity@@YAJPEAW4PROCESS_UICONTEXT@@@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x1801C1C7C (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x1801C1EA8 (-IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_ValidateCallerUiContextForDesktopSwitch(
        CApplicationManager *this,
        enum PROCESS_UICONTEXT *a2)
{
  unsigned __int16 **v2; // rdx
  signed int CallingProcessType; // ebx
  WCHAR *v4; // rdi
  int CallingProcessAppId; // eax
  const unsigned __int16 *v6; // rdx
  LPCWCH lpString2; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]
  CApplicationManager *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = this;
  CallingProcessType = CallerIdentity::GetCallingProcessType((CallerIdentity *)&v11, a2);
  if ( CallingProcessType >= 0 )
  {
    CallingProcessType = (_DWORD)v11 != 2 ? 0x80070005 : 0;
    v4 = 0LL;
    lpString2 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    if ( (_DWORD)v11 != 2 )
    {
      v9 = -1LL;
      v10 = -1LL;
      CallingProcessAppId = CallerIdentity::GetCallingProcessAppId((CallerIdentity *)&lpString2, v2);
      v4 = (WCHAR *)lpString2;
      if ( CallingProcessAppId >= 0 )
        CallingProcessType = !CallerIdentity::IsShellExperienceAppId(lpString2, v6) ? 0x80070005 : 0;
    }
    if ( v4 )
      CoTaskMemFree(v4);
  }
  return (unsigned int)CallingProcessType;
}
