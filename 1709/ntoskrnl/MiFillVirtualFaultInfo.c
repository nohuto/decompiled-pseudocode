/*
 * XREFs of MiFillVirtualFaultInfo @ 0x1402287AC
 * Callers:
 *     MiAllocateWsle @ 0x140047A60 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x140228F84 (MiValidVirtualizationFault.c)
 * Callees:
 *     <none>
 */

void __fastcall MiFillVirtualFaultInfo(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)(a1 + 40) = a2;
  if ( (a3 & 0x42) != 0 )
    *(_DWORD *)(a1 + 48) |= 0x40u;
  if ( a3 >= 0 )
    *(_DWORD *)(a1 + 48) |= 0x80u;
}
