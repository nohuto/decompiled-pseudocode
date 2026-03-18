/*
 * XREFs of Control_EP_Disable @ 0x1C0021850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Control_EP_Disable(__int64 a1)
{
  int v2; // edi
  KIRQL v3; // al

  do
  {
    do
      v2 = *(_DWORD *)(a1 + 108);
    while ( v2 == 3 );
  }
  while ( v2 == 1 );
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_BYTE *)(a1 + 104) = v3;
  if ( v2 )
    *(_DWORD *)(a1 + 108) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v3);
}
