/*
 * XREFs of ndisDereferenceMiniportRef @ 0x1C005D9C8
 * Callers:
 *     ndisIMDeleteIfStackEntry @ 0x1C005FBBC (ndisIMDeleteIfStackEntry.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C0111810 (NdisCmCloseAddressFamilyComplete.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000AD90 (NdisDereferenceWithTag.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

bool __fastcall ndisDereferenceMiniportRef(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbx
  KIRQL v5; // al
  ULONG_PTR v6; // rcx
  KIRQL v7; // bp
  bool v8; // zf
  bool v9; // si

  v2 = a1 + 4464;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4464));
  v6 = *(_QWORD *)(a1 + 4920);
  v7 = v5;
  if ( v6 )
    NdisDereferenceWithTag(v6, a2);
  v8 = (*(_DWORD *)(v2 + 8))-- == 1;
  v9 = v8;
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_qD(0xEu, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, a1, *(_DWORD *)(a1 + 4472));
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v7);
  return v9;
}
