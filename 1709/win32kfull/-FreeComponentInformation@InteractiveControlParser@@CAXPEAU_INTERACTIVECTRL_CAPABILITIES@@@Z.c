/*
 * XREFs of ?FreeComponentInformation@InteractiveControlParser@@CAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1C0225F58
 * Callers:
 *     ?BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LINK_COLLECTION_NODE@@PEAVInteractiveControlDevice@@@Z @ 0x1C022558C (-BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LIN.c)
 *     ?FreeDeviceCapabilities@InteractiveControlParser@@SAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1C0225FC0 (-FreeDeviceCapabilities@InteractiveControlParser@@SAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall InteractiveControlParser::FreeComponentInformation(
        struct _INTERACTIVECTRL_CAPABILITIES *a1,
        __int64 a2,
        __int64 a3)
{
  char *v4; // rbx
  __int64 *v5; // rcx
  __int64 v6; // rax

  if ( *((_DWORD *)a1 + 26) )
  {
    v4 = (char *)a1 + 112;
    while ( *(char **)v4 != v4 )
    {
      v5 = *(__int64 **)v4;
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = *v5, *(__int64 **)(*v5 + 8) != v5) )
        __fastfail(3u);
      *(_QWORD *)v4 = v6;
      *(_QWORD *)(v6 + 8) = v4;
      Win32FreePool(v5, a2, a3);
      --*((_DWORD *)a1 + 26);
    }
  }
  memset((char *)a1 + 68, 0, 0x24uLL);
}
