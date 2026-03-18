/*
 * XREFs of WmipFreeTraceDeviceList @ 0x140646460
 * Callers:
 *     WmipBuildTraceDeviceList @ 0x1401819A0 (WmipBuildTraceDeviceList.c)
 *     WmiTraceRundownNotify @ 0x1406463C0 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x1407A49E4 (WmiSetNetworkNotify.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x1400739AC (WmipUnreferenceRegEntry.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall WmipFreeTraceDeviceList(__int64 *P, unsigned int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi

  if ( a2 )
  {
    v3 = P;
    v4 = a2;
    do
    {
      WmipUnreferenceRegEntry(*v3);
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
  ExFreePoolWithTag(P, 0x70696D57u);
}
