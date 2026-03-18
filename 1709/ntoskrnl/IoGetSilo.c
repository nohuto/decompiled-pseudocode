/*
 * XREFs of IoGetSilo @ 0x140110140
 * Callers:
 *     IopAllocateFoExtensionsOnCreate @ 0x1404922C4 (IopAllocateFoExtensionsOnCreate.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x1404BA930 (IopAllocRealFileObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetSilo(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rax

  v1 = *(_QWORD **)(a1 + 208);
  if ( v1 && v1 != IopRevocationExtension && (v3 = v1[8]) != 0 )
    return *(_QWORD *)(v3 + 8);
  else
    return 0LL;
}
