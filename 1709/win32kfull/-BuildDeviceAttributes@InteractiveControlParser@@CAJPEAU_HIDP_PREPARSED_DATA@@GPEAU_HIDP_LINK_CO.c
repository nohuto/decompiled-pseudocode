/*
 * XREFs of ?BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LINK_COLLECTION_NODE@@PEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInteractiveControlDevice@@@Z @ 0x1C02258DC
 * Callers:
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1C0225990 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C0225AB0 (-BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C0225E20 (-FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PRE.c)
 */

__int64 __fastcall InteractiveControlParser::BuildDeviceAttributes(
        struct _HIDP_PREPARSED_DATA *a1,
        struct _HIDP_PREPARSED_DATA *a2,
        struct _HIDP_LINK_COLLECTION_NODE *a3,
        struct _INTERACTIVECTRL_CAPABILITIES *a4,
        struct InteractiveControlDevice *a5)
{
  __int64 result; // rax
  struct _HIDP_PREPARSED_DATA *v7; // rdx
  const GUID *v8; // r8
  const GUID *v9; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const char *v11; // [rsp+50h] [rbp-28h]
  __int64 v12; // [rsp+58h] [rbp-20h]

  result = InteractiveControlParser::BuildDeviceShapeDescriptor(a5, a2);
  if ( (int)result < 0 )
    result = 0LL;
  if ( *((_DWORD *)a4 + 18) )
  {
    result = InteractiveControlParser::FindDigitizerForDevice(a5, v7);
    if ( (int)result < 0 )
    {
      if ( (unsigned int)dword_1C0320190 > 3 )
      {
        v12 = 48LL;
        v11 = "Failed to find digitizer during initialization.";
        TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E99B2, v8, v9, 3u, &pData);
      }
      return 0LL;
    }
  }
  return result;
}
