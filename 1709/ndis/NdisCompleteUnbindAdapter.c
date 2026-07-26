/*
 * XREFs of NdisCompleteUnbindAdapter @ 0x1C00E3390
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall NdisCompleteUnbindAdapter(__int64 a1, int a2)
{
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0x2Bu, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, a1);
  *(_DWORD *)(a1 + 88) = a2;
  KeSetEvent((PRKEVENT)(a1 + 96), 0, 0);
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0x2Cu, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, a1);
}
