/*
 * XREFs of GreDeleteServerMetaFile @ 0x1C0140878
 * Callers:
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C00C5738 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     vCleanupMetaType @ 0x1C01251A0 (vCleanupMetaType.c)
 *     FreeDdeXact @ 0x1C01F18C0 (FreeDdeXact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreDeleteServerMetaFile(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ecx

  LOBYTE(a2) = 21;
  v2 = HmgLock(a1, a2);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 24);
    if ( v3 == 1480934989 || v3 == 1599096397 )
    {
      HmgFree(*(_QWORD *)v2);
      return 1LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 12));
  }
  return 0LL;
}
