/*
 * XREFs of ?GetGrantedDynamicObjectCount@CSpatialCrossProcessClientEndpoint@@UEAAJPEAI@Z @ 0x140060580
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005D9E0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005EA18 (-GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientEndpoint::GetGrantedDynamicObjectCount(
        CSpatialCrossProcessClientEndpoint *this,
        unsigned int *a2)
{
  int GrantedDynamicObjectCount; // ebx

  if ( !a2 )
  {
    GrantedDynamicObjectCount = -2147467261;
LABEL_6:
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessClientEndpoint::GetGrantedDynamicObjectCount",
      227,
      GrantedDynamicObjectCount);
    return (unsigned int)GrantedDynamicObjectCount;
  }
  if ( !*((_BYTE *)this - 832) )
  {
    GrantedDynamicObjectCount = -2005139437;
    goto LABEL_6;
  }
  GrantedDynamicObjectCount = CSpatialCrossProcessBaseEndpoint::GetGrantedDynamicObjectCount(
                                (const struct CSpatialCrossProcessBaseEndpoint::ControlData **)this - 113,
                                a2);
  if ( GrantedDynamicObjectCount < 0 )
    goto LABEL_6;
  return (unsigned int)GrantedDynamicObjectCount;
}
