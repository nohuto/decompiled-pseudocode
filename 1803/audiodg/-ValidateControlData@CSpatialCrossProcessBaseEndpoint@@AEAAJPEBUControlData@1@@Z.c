/*
 * XREFs of ?ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@1@@Z @ 0x14005D360
 * Callers:
 *     ?GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005BFC8 (-GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005C310 (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z @ 0x14005CC1C (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AE50 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::ValidateControlData(
        CSpatialCrossProcessBaseEndpoint *this,
        const struct CSpatialCrossProcessBaseEndpoint::ControlData *a2)
{
  unsigned int v2; // ebx
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v2 = -2147467261;
LABEL_8:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::ValidateControlData", 571, v2);
    v5 = 1;
    (**((void (__fastcall ***)(char *, __int64, int *))this + 92))((char *)this + 736, 2LL, &v5);
    return v2;
  }
  if ( *(_DWORD *)a2 != 806
    || *((_DWORD *)a2 + 1) != 1396785988
    || !(*((_DWORD *)a2 + 130) + *((_DWORD *)a2 + 131))
    || *((_DWORD *)a2 + 132) < 0x340u )
  {
    v2 = -2005139387;
    goto LABEL_8;
  }
  return v2;
}
