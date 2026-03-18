/*
 * XREFs of ?FreeComponentInformation@InteractiveControlParser@@CAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1C0224A8C
 * Callers:
 *     ?BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LINK_COLLECTION_NODE@@PEAVInteractiveControlDevice@@@Z @ 0x1C02240CC (-BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LIN.c)
 *     ?FreeDeviceCapabilities@InteractiveControlParser@@SAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1C0224AF4 (-FreeDeviceCapabilities@InteractiveControlParser@@SAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall InteractiveControlParser::FreeComponentInformation(struct _INTERACTIVECTRL_CAPABILITIES *a1)
{
  __int64 **v2; // rbx
  __int64 *v3; // rcx
  __int64 v4; // rax

  if ( *((_DWORD *)a1 + 26) )
  {
    v2 = (__int64 **)((char *)a1 + 112);
    while ( *v2 != (__int64 *)v2 )
    {
      v3 = *v2;
      v4 = **v2;
      if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
        __fastfail(3u);
      *v2 = (__int64 *)v4;
      *(_QWORD *)(v4 + 8) = v2;
      Win32FreePool(v3);
      --*((_DWORD *)a1 + 26);
    }
  }
  memset((char *)a1 + 68, 0, 0x24uLL);
}
