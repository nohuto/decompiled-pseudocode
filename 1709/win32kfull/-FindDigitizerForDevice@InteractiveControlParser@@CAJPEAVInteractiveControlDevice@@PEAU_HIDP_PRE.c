/*
 * XREFs of ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C0225E20
 * Callers:
 *     ?BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LINK_COLLECTION_NODE@@PEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInteractiveControlDevice@@@Z @ 0x1C02258DC (-BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LINK_CO.c)
 *     ?ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C022623C (-ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERAC.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C0226154 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 */

__int64 __fastcall InteractiveControlParser::FindDigitizerForDevice(
        struct InteractiveControlDevice *a1,
        struct _HIDP_PREPARSED_DATA *a2)
{
  unsigned int v2; // edi
  char *v3; // rsi
  char *v4; // rbx
  char *v6; // rcx
  __int16 v7; // ax
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int64 v11; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+38h] [rbp-31h] BYREF
  __int64 v13; // [rsp+40h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  const char *v15; // [rsp+70h] [rbp+7h]
  __int64 v16; // [rsp+78h] [rbp+Fh]
  __int64 *v17; // [rsp+80h] [rbp+17h]
  __int64 v18; // [rsp+88h] [rbp+1Fh]
  char *v19; // [rsp+90h] [rbp+27h]
  __int64 v20; // [rsp+98h] [rbp+2Fh]

  v2 = 0;
  v3 = (char *)a1 + 184;
  v4 = (char *)*((_QWORD *)a1 + 23);
  v12 = 0LL;
  v13 = 0LL;
  while ( v4 != v3 )
  {
    v6 = v4;
    v4 = *(char **)v4;
    if ( *((_DWORD *)v6 + 4) == 1 )
    {
      v7 = *((_WORD *)v6 + 40);
      if ( v7 == 48 )
      {
        LODWORD(v13) = InteractiveControlParser::GetScaledComponentValue(
                         (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v6,
                         *((_DWORD *)v6 + 19) - *((_DWORD *)v6 + 18));
      }
      else if ( v7 == 49 )
      {
        HIDWORD(v13) = InteractiveControlParser::GetScaledComponentValue(
                         (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v6,
                         *((_DWORD *)v6 + 19) - *((_DWORD *)v6 + 18));
      }
    }
  }
  RIMFindTouchDigitizerWithSize(&v12, (char *)a1 + 240);
  if ( !*((_QWORD *)a1 + 30) )
  {
    if ( (unsigned int)dword_1C0320190 > 3 )
    {
      v16 = 84LL;
      v15 = "InteractiveControlParser::FindDigitizerForDevice failed to find matching digitizer.";
      v11 = v13;
      v17 = &v11;
      v19 = (char *)&v11 + 4;
      v18 = 4LL;
      v20 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E9973, v8, v9, 5u, &pData);
    }
    return (unsigned int)-1073741632;
  }
  return v2;
}
