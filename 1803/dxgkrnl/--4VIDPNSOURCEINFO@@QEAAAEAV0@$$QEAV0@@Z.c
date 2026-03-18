/*
 * XREFs of ??4VIDPNSOURCEINFO@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C01EA254
 * Callers:
 *     ?Ensure@?$CDynamicArray@VVIDPNSOURCEINFO@@$07@@QEAAPEAVVIDPNSOURCEINFO@@K@Z @ 0x1C00388D0 (-Ensure@-$CDynamicArray@VVIDPNSOURCEINFO@@$07@@QEAAPEAVVIDPNSOURCEINFO@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDPNSOURCEINFO::operator=(__int64 a1, __int64 a2)
{
  if ( a1 != a2 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
    *(_QWORD *)a2 = 0LL;
  }
  return a1;
}
