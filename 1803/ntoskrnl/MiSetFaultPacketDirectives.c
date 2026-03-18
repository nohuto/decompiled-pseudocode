/*
 * XREFs of MiSetFaultPacketDirectives @ 0x1402620F0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiValidFault @ 0x14001ECF0 (MiValidFault.c)
 *     MiValidVirtualizationFault @ 0x140262110 (MiValidVirtualizationFault.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetFaultPacketDirectives(__int64 a1, int a2)
{
  if ( a2 == -1073741801 )
  {
    *(_DWORD *)(a1 + 84) |= 4u;
  }
  else if ( a2 == -1073740748 )
  {
    *(_DWORD *)(a1 + 84) |= 8u;
  }
}
