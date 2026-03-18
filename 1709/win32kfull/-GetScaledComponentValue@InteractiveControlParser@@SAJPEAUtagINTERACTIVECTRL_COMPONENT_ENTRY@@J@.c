/*
 * XREFs of ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C0226154
 * Callers:
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0221A24 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C0225AB0 (-BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP.c)
 *     ?CreateAndLinkComponent@InteractiveControlParser@@CAJPEAU_HIDP_VALUE_CAPS@@HPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@@Z @ 0x1C0225B94 (-CreateAndLinkComponent@InteractiveControlParser@@CAJPEAU_HIDP_VALUE_CAPS@@HPEAU_INTERACTIVECTRL.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C0225E20 (-FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PRE.c)
 *     ?ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C022623C (-ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERAC.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall InteractiveControlParser::GetScaledComponentValue(
        struct tagINTERACTIVECTRL_COMPONENT_ENTRY *a1,
        int a2)
{
  const GUID *v2; // r9
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rcx
  int v9; // [rsp+30h] [rbp-29h] BYREF
  int v10; // [rsp+34h] [rbp-25h] BYREF
  int v11; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v13; // [rsp+60h] [rbp+7h]
  __int64 v14; // [rsp+68h] [rbp+Fh]
  int *v15; // [rsp+70h] [rbp+17h]
  __int64 v16; // [rsp+78h] [rbp+1Fh]
  int *v17; // [rsp+80h] [rbp+27h]
  __int64 v18; // [rsp+88h] [rbp+2Fh]
  int *v19; // [rsp+90h] [rbp+37h]
  __int64 v20; // [rsp+98h] [rbp+3Fh]

  v2 = (const GUID *)*((int *)a1 + 29);
  v3 = a2;
  v4 = *((unsigned int *)a1 + 31);
  v5 = v3 * (_QWORD)v2;
  v6 = *((_DWORD *)a1 + 30);
  v7 = v4 * v6;
  if ( v7 )
    return v5 / v7;
  if ( (unsigned int)dword_1C0320190 > 3 )
  {
    v10 = v6;
    v13 = "InteractiveControlParser::GetScaledComponentValue -> Invalid component configuration.";
    v17 = &v10;
    v14 = 86LL;
    v19 = &v11;
    v9 = (int)v2;
    v15 = &v9;
    v16 = 4LL;
    v18 = 4LL;
    v11 = v4;
    v20 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E9AC9, (LPCGUID)v5, v2, 6u, &pData);
  }
  return 1LL;
}
