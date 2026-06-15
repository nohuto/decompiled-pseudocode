/*
 * XREFs of ?ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@1@@Z @ 0x14005CF80
 * Callers:
 *     ?GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005BBC8 (-GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005BF0C (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z @ 0x14005C820 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AB90 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
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
  if ( *(_DWORD *)a2 != 798
    || *((_DWORD *)a2 + 1) != 1396785988
    || !(*((_DWORD *)a2 + 128) + *((_DWORD *)a2 + 129))
    || *((_DWORD *)a2 + 130) < 0x320u )
  {
    v2 = -2005139387;
    goto LABEL_8;
  }
  return v2;
}
