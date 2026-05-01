/*
 * XREFs of ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x1800269E0
 * Callers:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18003DE00 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 * Callees:
 *     ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x1800267AC (-_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1800900A4 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z @ 0x1800F8CCC (--_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveMode::ValidateActivationAndBroadcastChanged(__int64 a1, int a2)
{
  __int64 v4; // rsi
  int v5; // ebx
  bool v6; // al
  int v7; // ecx
  unsigned int v8; // edx
  signed int ApartmentId; // ebx
  _DWORD *v10; // rcx
  ZBAND_NOTIFICATION_DATA *v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int cchValue; // [rsp+20h] [rbp-268h]
  unsigned int v16; // [rsp+30h] [rbp-258h] BYREF
  __int64 v17; // [rsp+38h] [rbp-250h]
  __int64 v18; // [rsp+40h] [rbp-248h]
  signed int v19; // [rsp+48h] [rbp-240h]
  WCHAR Filename[264]; // [rsp+50h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  v17 = -2LL;
  v4 = (a1 + 96) & -(__int64)(a1 != 88);
  v18 = v4;
  v5 = *(_DWORD *)(v4 + 0x2C);
  v6 = v5 == 2;
  if ( v5 != 2 )
  {
    v7 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
      goto LABEL_3;
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
      {
        `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
        goto LABEL_4;
      }
      v12 = 1;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 1;
    }
    else
    {
      v12 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    }
    if ( v12 == 1 )
    {
      if ( v5 != 1 )
        goto LABEL_26;
      v13 = IsAppCompatModeEnabled(16LL);
      v7 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
      if ( v13 )
        v7 = 2;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v7;
LABEL_3:
      if ( v7 == 1 )
        goto LABEL_26;
    }
LABEL_4:
    v6 = 0;
  }
  if ( !v6 )
  {
LABEL_6:
    ApartmentId = !TryEnterCriticalSection((LPCRITICAL_SECTION)v4) ? 0x8001010E : 0;
    goto LABEL_7;
  }
LABEL_26:
  if ( *(_DWORD *)(v4 + 40) == -3 )
    goto LABEL_6;
  ApartmentId = SHCoGetApartmentId(&v16);
  if ( ApartmentId >= 0 && v16 != *(_DWORD *)(v4 + 40) )
    ApartmentId = -2147417842;
  if ( ApartmentId >= 0 )
    goto LABEL_6;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xC8,
    (unsigned int)"internal\\onecoreuapshell\\private\\inc\\Cowthreadusedetection.h",
    (const char *)(unsigned int)ApartmentId,
    cchValue);
LABEL_7:
  v19 = ApartmentId;
  v10 = *(_DWORD **)(a1 + 264);
  if ( v10 )
  {
    if ( *v10 != a2 && *v10 )
    {
      v14 = 0;
      if ( a2 != *(_DWORD *)(a1 + 160) )
        v14 = a2;
      *v10 = v14;
    }
    v11 = *(ZBAND_NOTIFICATION_DATA **)(a1 + 264);
    if ( *(_DWORD *)v11 && (*(_DWORD *)(a1 + 160) = *(_DWORD *)v11) != 0 && *((_QWORD *)v11 + 1) )
    {
      CImmersiveMode::_ScheduleListenerNotification((CImmersiveMode *)(a1 - 88));
    }
    else
    {
      if ( v11 )
        ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(v11, v8);
      *(_QWORD *)(a1 + 264) = 0LL;
    }
  }
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v4);
}
