/*
 * XREFs of ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0221A24
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021C044 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C021C84C (-SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE.c)
 *     ?SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C022213C (-SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0112544 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C0224924 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C0226154 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 */

__int64 __fastcall InteractiveControlDevice::SetComponentResolution(__int64 a1, int a2, int a3, _DWORD *a4)
{
  NTSTATUS SpecificValueCaps; // r15d
  CHAR *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r14d
  struct InteractiveControlManager *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  int v17; // ecx
  _QWORD *v18; // rbx
  const GUID *v19; // r8
  const GUID *v20; // r9
  __int64 v21; // r8
  ULONG LogicalMin; // edi
  __int64 v23; // rax
  SimpleHapticsController *v24; // rcx
  SimpleHapticsController *v25; // rcx
  int ScaledComponentValue; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // eax
  int v30; // eax
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-C0h] BYREF
  USHORT v32[2]; // [rsp+44h] [rbp-BCh] BYREF
  int v33; // [rsp+48h] [rbp-B8h]
  int v34; // [rsp+4Ch] [rbp-B4h]
  _QWORD *v35; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+58h] [rbp-A8h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+60h] [rbp-A0h] BYREF
  struct _HIDP_VALUE_CAPS v38; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  const char *v40; // [rsp+120h] [rbp+20h]
  int v41; // [rsp+128h] [rbp+28h]
  int v42; // [rsp+12Ch] [rbp+2Ch]
  USHORT *v43; // [rsp+130h] [rbp+30h]
  int v44; // [rsp+138h] [rbp+38h]
  int v45; // [rsp+13Ch] [rbp+3Ch]
  _QWORD *v46; // [rsp+140h] [rbp+40h]
  int v47; // [rsp+148h] [rbp+48h]
  int v48; // [rsp+14Ch] [rbp+4Ch]

  SpecificValueCaps = 0;
  v36 = a3;
  v34 = a2;
  ValueCapsLength[0] = 1;
  v9 = 0LL;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  v12 = a3;
  LOWORD(v33) = 2;
  if ( !a4 || *a4 )
  {
LABEL_7:
    if ( !*(_DWORD *)(a1 + 64) && *((_DWORD *)InteractiveControlManager::Instance() + 29) )
      v12 = *((_DWORD *)InteractiveControlManager::Instance() + 27);
    goto LABEL_10;
  }
  if ( !*(_DWORD *)(a1 + 64) )
  {
    if ( !*((_DWORD *)InteractiveControlManager::Instance() + 21)
      && *((_DWORD *)InteractiveControlManager::Instance() + 25) )
    {
      v33 = 3;
    }
    goto LABEL_7;
  }
LABEL_10:
  if ( a2 != 2 )
  {
    if ( a2 == 3 )
    {
      v14 = InteractiveControlManager::Instance();
      v10 = (unsigned int)(v12 << 8 >> 31);
      LODWORD(v10) = (v12 << 8) % *((_DWORD *)v14 + 35);
      v12 = (v12 << 8) / *((_DWORD *)v14 + 35);
    }
    else if ( a2 != 4 )
    {
      return 3221225659LL;
    }
  }
  v15 = (_QWORD *)(a1 + 184);
  v16 = *(_QWORD **)(a1 + 184);
  if ( v16 == (_QWORD *)(a1 + 184) )
    return (unsigned int)SpecificValueCaps;
  v17 = a2;
  while ( 1 )
  {
    v18 = v16;
    v16 = (_QWORD *)*v16;
    v35 = v16;
    if ( *((_DWORD *)v18 + 4) == v17 )
      break;
LABEL_65:
    if ( v16 == v15 )
      goto LABEL_68;
  }
  SpecificValueCaps = HidP_GetSpecificValueCaps(
                        HidP_Feature,
                        1u,
                        *((_WORD *)v18 + 15),
                        0x48u,
                        &ValueCaps,
                        ValueCapsLength,
                        *(PHIDP_PREPARSED_DATA *)(a1 + 256));
  if ( SpecificValueCaps < 0 )
  {
    if ( SpecificValueCaps == -1072627708 )
    {
      if ( (unsigned int)dword_1C0320190 > 4 )
      {
        v27 = -1LL;
        do
          ++v27;
        while ( aDeviceDoesNotS[v27] );
        v40 = "Device does not support resolution multiplier. Falling back to OS based scaling.";
        v42 = 0;
        v41 = v27 + 1;
        TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E96E5, v19, v20, 3u, &pData);
      }
    }
    else if ( (unsigned int)dword_1C0320190 > 2 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( aFailedToUpdate[v28] );
      v42 = 0;
      v45 = 0;
      v48 = 0;
      v41 = v28 + 1;
      v43 = v32;
      LODWORD(v35) = *((_DWORD *)v18 + 28);
      v40 = "Failed to updated device resolution multiplier. Keeping existing actual resolution.";
      v46 = &v35;
      *(_DWORD *)v32 = SpecificValueCaps;
      v44 = 4;
      v47 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E969B, v19, v20, 5u, &pData);
    }
    SpecificValueCaps = 0;
LABEL_52:
    if ( *((_DWORD *)InteractiveControlManager::Instance() + 21) )
    {
      if ( v12 )
        v29 = v12;
      else
        v29 = *((_DWORD *)v18 + 28);
      *((_DWORD *)v18 + 28) = v29;
    }
    if ( *((_DWORD *)InteractiveControlManager::Instance() + 31) )
    {
      if ( *((_DWORD *)InteractiveControlManager::Instance() + 31) != 1 )
      {
        *((_DWORD *)v18 + 27) = 1;
        goto LABEL_64;
      }
    }
    else
    {
      v30 = v36;
      if ( v36 )
      {
LABEL_62:
        *((_DWORD *)v18 + 27) = v30;
LABEL_64:
        *((_DWORD *)v18 + 26) = 0;
        v15 = (_QWORD *)(a1 + 184);
        v17 = v34;
        goto LABEL_65;
      }
    }
    v30 = *((_DWORD *)v18 + 28);
    goto LABEL_62;
  }
  if ( !*((_DWORD *)InteractiveControlManager::Instance() + 21) && (v21 = v12 * (__int64)*((int *)v18 + 30)) != 0 && v12 )
  {
    LogicalMin = ValueCaps.LogicalMin;
    v23 = *((int *)v18 + 29) / v21;
    if ( (int)v23 >= ValueCaps.LogicalMin )
    {
      LogicalMin = *((int *)v18 + 29) / v21;
      if ( (int)v23 > ValueCaps.LogicalMax )
        LogicalMin = ValueCaps.LogicalMax;
    }
  }
  else
  {
    LogicalMin = ValueCaps.LogicalMax;
  }
  if ( *((_DWORD *)v18 + 31) == LogicalMin && (!a4 || *a4 == *(_DWORD *)(a1 + 60)) )
  {
LABEL_40:
    ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(
                             (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v18,
                             1);
    v16 = v35;
    *((_DWORD *)v18 + 28) = ScaledComponentValue;
    if ( a4 )
      *(_DWORD *)(a1 + 60) = *a4;
    goto LABEL_52;
  }
  if ( v9 || (v9 = (CHAR *)Win32AllocPool(*(unsigned __int16 *)(a1 + 84), 1819440195LL)) != 0LL )
  {
    *v9 = ValueCaps.ReportID;
    v24 = *(SimpleHapticsController **)(a1 + 384);
    if ( v24
      && SimpleHapticsController::SendDeviceIOControl(v24, 0xB0192u, 0LL, 0, v9, *(unsigned __int16 *)(a1 + 84), 0LL) >= 0 )
    {
      if ( a4 )
      {
        memset(&v38, 0, sizeof(v38));
        v32[0] = 1;
        HidP_GetSpecificValueCaps(HidP_Feature, 0xEu, 0, 0x20u, &v38, v32, *(PHIDP_PREPARSED_DATA *)(a1 + 256));
        HidP_SetUsageValue(
          HidP_Feature,
          0xEu,
          v38.LinkCollection,
          0x20u,
          (unsigned __int16)v33,
          *(PHIDP_PREPARSED_DATA *)(a1 + 256),
          v9,
          *(unsigned __int16 *)(a1 + 84));
      }
      if ( HidP_SetUsageValue(
             HidP_Feature,
             1u,
             ValueCaps.LinkCollection,
             0x48u,
             LogicalMin,
             *(PHIDP_PREPARSED_DATA *)(a1 + 256),
             v9,
             *(unsigned __int16 *)(a1 + 84)) >= 0 )
      {
        v25 = *(SimpleHapticsController **)(a1 + 384);
        if ( v25 )
        {
          if ( SimpleHapticsController::SendDeviceIOControl(
                 v25,
                 0xB0191u,
                 v9,
                 *(unsigned __int16 *)(a1 + 84),
                 0LL,
                 0,
                 0LL) >= 0 )
            *((_DWORD *)v18 + 31) = LogicalMin;
        }
      }
    }
    goto LABEL_40;
  }
  SpecificValueCaps = -1073741670;
LABEL_68:
  if ( v9 )
    Win32FreePool(v9, v10, v11);
  return (unsigned int)SpecificValueCaps;
}
