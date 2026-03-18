/*
 * XREFs of ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C0133E58
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0134040 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::HasThreadRequestedLegacyMouseWheelRouting @ 0x1C0134B30 (_anonymous_namespace_--HasThreadRequestedLegacyMouseWheelRouting.c)
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
    v2 = *(_QWORD *)(gpqForeground + 120);
    if ( v2 )
      v3 = *(_QWORD *)(v2 + 16);
    else
      v3 = *(_QWORD *)(gpqForeground + 96);
    if ( !v3 )
    {
      v4 = *(_QWORD *)(gpqForeground + 112);
      if ( v4 || (v4 = *(_QWORD *)(gpqForeground + 104)) != 0 )
        v3 = *(_QWORD *)(v4 + 16);
      else
        v3 = *(_QWORD *)(gpqForeground + 88);
    }
    return (unsigned __int8)anonymous_namespace_::HasThreadRequestedLegacyMouseWheelRouting(v3) != 0;
  }
  return result;
}
