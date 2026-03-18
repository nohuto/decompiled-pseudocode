/*
 * XREFs of ?FreeDeviceCapabilities@InteractiveControlParser@@SAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1C0225FC0
 * Callers:
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0220A6C (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1C0225990 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?FreeComponentInformation@InteractiveControlParser@@CAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1C0225F58 (-FreeComponentInformation@InteractiveControlParser@@CAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z.c)
 */

void __fastcall InteractiveControlParser::FreeDeviceCapabilities(
        struct _INTERACTIVECTRL_CAPABILITIES *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx

  if ( a1 )
  {
    InteractiveControlParser::FreeComponentInformation(a1, a2, a3);
    v4 = *((_QWORD *)a1 + 21);
    if ( v4 )
    {
      RawInputManagerDeviceObjectDereference(v4);
      *((_QWORD *)a1 + 21) = 0LL;
    }
    memset(a1, 0, 0xB8uLL);
  }
}
