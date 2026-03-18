/*
 * XREFs of WmipFreeTraceDeviceList @ 0x14043C0C0
 * Callers:
 *     WmipBuildTraceDeviceList @ 0x140020014 (WmipBuildTraceDeviceList.c)
 *     WmiTraceRundownNotify @ 0x14043C010 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x140708DD4 (WmiSetNetworkNotify.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x14006E848 (WmipUnreferenceRegEntry.c)
 */

void __fastcall WmipFreeTraceDeviceList(__int64 *a1, unsigned int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi

  if ( a2 )
  {
    v3 = a1;
    v4 = a2;
    do
    {
      WmipUnreferenceRegEntry(*v3);
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
  ExFreePoolWithTag(a1, 0x70696D57u);
}
