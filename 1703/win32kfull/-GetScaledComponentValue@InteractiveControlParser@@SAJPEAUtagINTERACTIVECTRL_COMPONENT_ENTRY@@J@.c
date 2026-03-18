/*
 * XREFs of ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C0224C88
 * Callers:
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C022062C (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C02245E0 (-BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C0224954 (-FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PRE.c)
 *     ?ParseInputReport@InteractiveControlParser@@SAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAU_HIDP_PREPARSED_DATA@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C0224D74 (-ParseInputReport@InteractiveControlParser@@SAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAU_HIDP_PREP.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall InteractiveControlParser::GetScaledComponentValue(
        struct tagINTERACTIVECTRL_COMPONENT_ENTRY *a1,
        int a2)
{
  __int64 v3; // rcx
  signed __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ecx
  LPCGUID v7; // r8
  int v9; // [rsp+30h] [rbp-39h] BYREF
  int v10; // [rsp+34h] [rbp-35h] BYREF
  int v11; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-9h] BYREF
  int *v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  int *v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  int *v18; // [rsp+90h] [rbp+27h]
  __int64 v19; // [rsp+98h] [rbp+2Fh]

  v3 = *((int *)a1 + 29) * (__int64)a2;
  v4 = *((int *)a1 + 30) * (unsigned __int64)*((unsigned int *)a1 + 31);
  if ( v4 )
    return v3 / v4;
  if ( (unsigned int)dword_1C0324190 > 3 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlParser::GetScaledComponentValue -> Invalid component configuration.");
    v6 = *(_DWORD *)(v5 + 116);
    v14 = &v9;
    v10 = *(_DWORD *)(v5 + 120);
    v16 = &v10;
    v11 = *(_DWORD *)(v5 + 124);
    v18 = &v11;
    v9 = v6;
    v15 = 4LL;
    v17 = 4LL;
    v19 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECE6F, v7, (LPCGUID)v5, 6u, &pData);
  }
  return 1LL;
}
