/*
 * XREFs of Display_TSS @ 0x1C000A31C
 * Callers:
 *     InitAcpiThrottleStates @ 0x1C001C2C4 (InitAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 *     memset @ 0x1C0004EC0 (memset.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C000A8E8 (WPP_RECORDER_SF_Ds.c)
 */

unsigned int __fastcall Display_TSS(unsigned int *a1)
{
  unsigned int result; // eax
  PDEVICE_OBJECT v3; // rcx
  unsigned int i; // edi
  int v5; // edx
  int v6; // r8d
  int v7; // edx
  int v8; // r8d
  int v9; // [rsp+20h] [rbp-78h]
  char DstBuf[40]; // [rsp+40h] [rbp-58h] BYREF

  result = (unsigned int)memset(DstBuf, 0, 0x21uLL);
  if ( a1 )
  {
    v3 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      result = WPP_RECORDER_SF_(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 5u,
                 2u,
                 0x64u,
                 (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      v3 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        result = WPP_RECORDER_SF_(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   5u,
                   2u,
                   0x65u,
                   (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
        v3 = WPP_GLOBAL_Control;
      }
    }
    for ( i = 0; i < *a1; ++i )
    {
      if ( LOWORD(v3->DeviceType) )
      {
        WPP_RECORDER_SF_D(
          (__int64)v3->DeviceExtension,
          5u,
          2u,
          0x66u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x67u,
            (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x68u,
              (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x69u,
                (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
          }
        }
      }
      _itoa_s(a1[5 * i + 4], DstBuf, 0x21uLL, 2);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_Ds(WPP_GLOBAL_Control->DeviceExtension, v5, v6, 106, v9, a1[5 * i + 4], (__int64)DstBuf);
      result = _itoa_s(a1[5 * i + 5], DstBuf, 0x21uLL, 2);
      v3 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        result = WPP_RECORDER_SF_Ds(
                   WPP_GLOBAL_Control->DeviceExtension,
                   v7,
                   v8,
                   107,
                   v9,
                   a1[5 * i + 5],
                   (__int64)DstBuf);
        v3 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          result = WPP_RECORDER_SF_(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2u,
                     0x6Cu,
                     (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
          v3 = WPP_GLOBAL_Control;
        }
      }
    }
  }
  return result;
}
