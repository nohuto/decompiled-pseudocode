/*
 * XREFs of ??2?$DXGQUOTAALLOCATOR@$00$0FAGHHIEE@@@SAPEAX_K@Z @ 0x1C00343A0
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z @ 0x1C00D3444 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall DXGQUOTAALLOCATOR<1,1348958276>::operator new(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, NumberOfBytes, 0x50677844u);
}
