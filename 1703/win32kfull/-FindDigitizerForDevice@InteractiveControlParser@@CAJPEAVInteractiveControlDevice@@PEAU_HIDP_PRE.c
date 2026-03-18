/*
 * XREFs of ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C0224954
 * Callers:
 *     ?BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LINK_COLLECTION_NODE@@PEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInteractiveControlDevice@@@Z @ 0x1C022441C (-BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LINK_CO.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C0224C88 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
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
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  __int64 v11; // [rsp+30h] [rbp-49h] BYREF
  __int64 v12; // [rsp+38h] [rbp-41h] BYREF
  __int64 v13; // [rsp+40h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-9h] BYREF
  __int64 *v16; // [rsp+80h] [rbp+7h]
  __int64 v17; // [rsp+88h] [rbp+Fh]
  char *v18; // [rsp+90h] [rbp+17h]
  __int64 v19; // [rsp+98h] [rbp+1Fh]

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
    if ( (unsigned int)dword_1C0324190 > 3 )
    {
      TlgCreateSz(&pDesc, "InteractiveControlParser::FindDigitizerForDevice failed to find matching digitizer.");
      v16 = &v11;
      v18 = (char *)&v11 + 4;
      v11 = v13;
      v17 = 4LL;
      v19 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECD49, v8, v9, 5u, &pData);
    }
    return (unsigned int)-1073741632;
  }
  return v2;
}
