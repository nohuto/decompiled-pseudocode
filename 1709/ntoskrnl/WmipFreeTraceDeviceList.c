/*
 * XREFs of WmipFreeTraceDeviceList @ 0x140742A98
 * Callers:
 *     WmipBuildTraceDeviceList @ 0x140279F5C (WmipBuildTraceDeviceList.c)
 *     WmiSetNetworkNotify @ 0x140742968 (WmiSetNetworkNotify.c)
 *     WmiTraceRundownNotify @ 0x1407429E8 (WmiTraceRundownNotify.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x1400DEBA0 (WmipUnreferenceRegEntry.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
