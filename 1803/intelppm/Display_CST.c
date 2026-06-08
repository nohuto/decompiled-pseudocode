/*
 * XREFs of Display_CST @ 0x1C0002A10
 * Callers:
 *     InitAcpiCStates @ 0x1C0020F60 (InitAcpiCStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001D9C (WPP_RECORDER_SF_D.c)
 *     DisplayGenAddr @ 0x1C0002B38 (DisplayGenAddr.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003834 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Display_CST(int *a1)
{
  unsigned int i; // ebx
  int *v3; // rsi
  __int64 result; // rax
  __int64 v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+28h] [rbp-20h]

  if ( a1 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = WPP_RECORDER_SF_(
                 WPP_GLOBAL_Control->DeviceExtension,
                 5,
                 2,
                 120,
                 (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = WPP_RECORDER_SF_(
                 WPP_GLOBAL_Control->DeviceExtension,
                 5,
                 2,
                 121,
                 (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v6 = *a1;
      result = WPP_RECORDER_SF_D(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 5u,
                 2u,
                 0x7Au,
                 (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
                 v6);
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = WPP_RECORDER_SF_(
                 WPP_GLOBAL_Control->DeviceExtension,
                 5,
                 2,
                 123,
                 (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    for ( i = 0; i < *a1; ++i )
    {
      v3 = &a1[5 * i];
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v5) = i;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x7Cu,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
          v5);
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v5) = *((unsigned __int8 *)v3 + 16);
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x7Du,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
          v5);
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v5) = *((unsigned __int16 *)v3 + 9);
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x7Eu,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
          v5);
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v5) = v3[5];
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x7Fu,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
          v5);
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          2,
          128,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      result = DisplayGenAddr(v3 + 1, "    ");
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_(
                   WPP_GLOBAL_Control->DeviceExtension,
                   5,
                   2,
                   129,
                   (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    }
  }
  return result;
}
