/*
 * XREFs of Display_CST @ 0x1C0003D98
 * Callers:
 *     InitAcpiCStates @ 0x1C00251A0 (InitAcpiCStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000127C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
 *     DisplayGenAddr @ 0x1C00043E4 (DisplayGenAddr.c)
 */

_UNKNOWN **__fastcall Display_CST(int *a1)
{
  _UNKNOWN **result; // rax
  unsigned int i; // ebx
  int *v4; // rsi
  __int64 v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+28h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = &retaddr;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = (_UNKNOWN **)WPP_RECORDER_SF_(
                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                              5u,
                              2u,
                              0x78u,
                              (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = (_UNKNOWN **)WPP_RECORDER_SF_(
                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                              5u,
                              2u,
                              0x79u,
                              (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v6 = *a1;
      result = (_UNKNOWN **)WPP_RECORDER_SF_D(
                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                              5u,
                              2u,
                              0x7Au,
                              (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                              v6);
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = (_UNKNOWN **)WPP_RECORDER_SF_(
                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                              5u,
                              2u,
                              0x7Bu,
                              (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    for ( i = 0; i < *a1; ++i )
    {
      v4 = &a1[5 * i];
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v5) = i;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x7Cu,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
          v5);
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v5) = *((unsigned __int8 *)v4 + 16);
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x7Du,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
          v5);
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v5) = *((unsigned __int16 *)v4 + 9);
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x7Eu,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
          v5);
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v5) = v4[5];
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x7Fu,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
          v5);
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x80u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      result = (_UNKNOWN **)DisplayGenAddr(v4 + 1, "    ");
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                5u,
                                2u,
                                0x81u,
                                (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    }
  }
  return result;
}
