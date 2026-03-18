/*
 * XREFs of ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01312C8
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0131420 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     HasThreadRequestedLegacyMouseWheelRouting @ 0x1C01324E0 (HasThreadRequestedLegacyMouseWheelRouting.c)
 */

bool __fastcall CMouseProcessor::AppCompatWheelRoutingRequested(CMouseProcessor *this)
{
  bool result; // al
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  result = gpqForeground;
  if ( gpqForeground )
  {
    v2 = *(_QWORD *)(gpqForeground + 88);
    if ( v2 )
      v3 = *(_QWORD *)(v2 + 16);
    else
      v3 = *(_QWORD *)(gpqForeground + 64);
    if ( !v3 )
    {
      v4 = *(_QWORD *)(gpqForeground + 80);
      if ( v4 || (v4 = *(_QWORD *)(gpqForeground + 72)) != 0 )
        v3 = *(_QWORD *)(v4 + 16);
      else
        v3 = *(_QWORD *)(gpqForeground + 56);
    }
    return (unsigned int)HasThreadRequestedLegacyMouseWheelRouting(v3) != 0;
  }
  return result;
}
