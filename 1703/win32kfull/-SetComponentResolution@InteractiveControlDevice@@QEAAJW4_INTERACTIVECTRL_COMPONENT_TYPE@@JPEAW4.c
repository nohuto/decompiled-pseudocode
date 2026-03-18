/*
 * XREFs of ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C022062C
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021ADD0 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C021B5D0 (-SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE.c)
 *     ?SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0220C60 (-SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0108804 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C022345C (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C0224C88 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 */

__int64 __fastcall InteractiveControlDevice::SetComponentResolution(__int64 a1, int a2, int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  int v5; // r14d
  CHAR *v9; // r15
  ULONG v10; // r12d
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  int v14; // ecx
  _QWORD *v15; // rbx
  __int64 v16; // r8
  ULONG LogicalMin; // esi
  __int64 v18; // rax
  SimpleHapticsController *v19; // rcx
  SimpleHapticsController *v20; // rcx
  int ScaledComponentValue; // eax
  int v22; // eax
  int v23; // eax
  NTSTATUS SpecificValueCaps; // [rsp+40h] [rbp-C0h]
  USHORT ValueCapsLength; // [rsp+44h] [rbp-BCh] BYREF
  USHORT v26[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v27; // [rsp+4Ch] [rbp-B4h]
  int v28; // [rsp+50h] [rbp-B0h]
  _QWORD *v29; // [rsp+58h] [rbp-A8h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+60h] [rbp-A0h] BYREF
  struct _HIDP_VALUE_CAPS v31; // [rsp+B0h] [rbp-50h] BYREF

  v4 = 0;
  v28 = a3;
  v5 = a3;
  v27 = a2;
  SpecificValueCaps = 0;
  ValueCapsLength = 1;
  v9 = 0LL;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  v10 = 2;
  if ( !a4 || *a4 )
  {
LABEL_7:
    if ( !*(_DWORD *)(a1 + 64) && *((_DWORD *)InteractiveControlManager::Instance() + 29) )
      v5 = *((_DWORD *)InteractiveControlManager::Instance() + 27);
    goto LABEL_10;
  }
  if ( !*(_DWORD *)(a1 + 64) )
  {
    if ( !*((_DWORD *)InteractiveControlManager::Instance() + 21)
      && *((_DWORD *)InteractiveControlManager::Instance() + 25) )
    {
      v10 = 3;
    }
    goto LABEL_7;
  }
LABEL_10:
  if ( a2 != 2 )
  {
    if ( a2 == 3 )
    {
      v5 = (v5 << 8) / *((_DWORD *)InteractiveControlManager::Instance() + 35);
    }
    else if ( a2 != 4 )
    {
      return 3221225659LL;
    }
  }
  v12 = (_QWORD *)(a1 + 184);
  v13 = *(_QWORD **)(a1 + 184);
  if ( v13 == (_QWORD *)(a1 + 184) )
    return v4;
  v14 = v27;
  while ( 1 )
  {
    v15 = v13;
    v13 = (_QWORD *)*v13;
    v29 = v13;
    if ( *((_DWORD *)v15 + 4) == v14 )
      break;
LABEL_60:
    if ( v13 == v12 )
      goto LABEL_63;
  }
  SpecificValueCaps = HidP_GetSpecificValueCaps(
                        HidP_Feature,
                        1u,
                        *((_WORD *)v15 + 15),
                        0x48u,
                        &ValueCaps,
                        &ValueCapsLength,
                        *(PHIDP_PREPARSED_DATA *)(a1 + 248));
  if ( SpecificValueCaps < 0 )
  {
    if ( v5 )
      ScaledComponentValue = v5;
    else
      ScaledComponentValue = *((_DWORD *)v15 + 28);
    SpecificValueCaps = 0;
LABEL_45:
    *((_DWORD *)v15 + 28) = ScaledComponentValue;
    if ( *((_DWORD *)InteractiveControlManager::Instance() + 21) )
    {
      if ( v5 )
        v22 = v5;
      else
        v22 = *((_DWORD *)v15 + 28);
      *((_DWORD *)v15 + 28) = v22;
    }
    if ( *((_DWORD *)InteractiveControlManager::Instance() + 31) )
    {
      if ( *((_DWORD *)InteractiveControlManager::Instance() + 31) != 1 )
      {
        *((_DWORD *)v15 + 27) = 1;
        goto LABEL_57;
      }
    }
    else
    {
      v23 = v28;
      if ( v28 )
      {
LABEL_55:
        *((_DWORD *)v15 + 27) = v23;
LABEL_57:
        *((_DWORD *)v15 + 26) = 0;
        v14 = v27;
        if ( a4 )
          *(_DWORD *)(a1 + 60) = *a4;
        v12 = (_QWORD *)(a1 + 184);
        goto LABEL_60;
      }
    }
    v23 = *((_DWORD *)v15 + 28);
    goto LABEL_55;
  }
  if ( !*((_DWORD *)InteractiveControlManager::Instance() + 21) && (v16 = v5 * (__int64)*((int *)v15 + 30)) != 0 && v5 )
  {
    LogicalMin = ValueCaps.LogicalMin;
    v18 = *((int *)v15 + 29) / v16;
    if ( (int)v18 >= ValueCaps.LogicalMin )
    {
      LogicalMin = *((int *)v15 + 29) / v16;
      if ( (int)v18 > ValueCaps.LogicalMax )
        LogicalMin = ValueCaps.LogicalMax;
    }
  }
  else
  {
    LogicalMin = ValueCaps.LogicalMax;
  }
  if ( *((_DWORD *)v15 + 31) == LogicalMin && (!a4 || *a4 == *(_DWORD *)(a1 + 60)) )
  {
LABEL_40:
    ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(
                             (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v15,
                             1);
    v13 = v29;
    goto LABEL_45;
  }
  if ( v9 || (v9 = (CHAR *)Win32AllocPool(*(unsigned __int16 *)(a1 + 84), 1819440195LL)) != 0LL )
  {
    *v9 = ValueCaps.ReportID;
    v19 = *(SimpleHapticsController **)(a1 + 376);
    if ( v19
      && SimpleHapticsController::SendDeviceIOControl(v19, 0xB0192u, 0LL, 0, v9, *(unsigned __int16 *)(a1 + 84), 0LL) >= 0 )
    {
      if ( a4 )
      {
        memset(&v31, 0, sizeof(v31));
        v26[0] = 1;
        HidP_GetSpecificValueCaps(HidP_Feature, 0xEu, 0, 0x20u, &v31, v26, *(PHIDP_PREPARSED_DATA *)(a1 + 248));
        HidP_SetUsageValue(
          HidP_Feature,
          0xEu,
          v31.LinkCollection,
          0x20u,
          v10,
          *(PHIDP_PREPARSED_DATA *)(a1 + 248),
          v9,
          *(unsigned __int16 *)(a1 + 84));
      }
      if ( HidP_SetUsageValue(
             HidP_Feature,
             1u,
             ValueCaps.LinkCollection,
             0x48u,
             LogicalMin,
             *(PHIDP_PREPARSED_DATA *)(a1 + 248),
             v9,
             *(unsigned __int16 *)(a1 + 84)) >= 0 )
      {
        v20 = *(SimpleHapticsController **)(a1 + 376);
        if ( v20 )
        {
          if ( SimpleHapticsController::SendDeviceIOControl(
                 v20,
                 0xB0191u,
                 v9,
                 *(unsigned __int16 *)(a1 + 84),
                 0LL,
                 0,
                 0LL) >= 0 )
            *((_DWORD *)v15 + 31) = LogicalMin;
        }
      }
    }
    goto LABEL_40;
  }
  SpecificValueCaps = -1073741670;
LABEL_63:
  if ( v9 )
    Win32FreePool(v9);
  return (unsigned int)SpecificValueCaps;
}
