/*
 * XREFs of Display_CST @ 0x1C0002B00
 * Callers:
 *     InitAcpiCStates @ 0x1C001BF78 (InitAcpiCStates.c)
 * Callees:
 *     DisplayGenAddr @ 0x1C0002BA8 (DisplayGenAddr.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall Display_CST(unsigned int *a1)
{
  PDEVICE_OBJECT v2; // r10
  unsigned int i; // ebx
  unsigned int *v4; // rsi
  __int64 result; // rax

  if ( a1 )
  {
    v2 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      result = WPP_RECORDER_SF_(
                 WPP_GLOBAL_Control->DeviceExtension,
                 5,
                 2,
                 120,
                 (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      v2 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        result = WPP_RECORDER_SF_(
                   WPP_GLOBAL_Control->DeviceExtension,
                   5,
                   2,
                   121,
                   (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
        v2 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          result = WPP_RECORDER_SF_D(
                     WPP_GLOBAL_Control->DeviceExtension,
                     5,
                     2,
                     122,
                     (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                     *a1);
          v2 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            result = WPP_RECORDER_SF_(
                       WPP_GLOBAL_Control->DeviceExtension,
                       5,
                       2,
                       123,
                       (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
            v2 = WPP_GLOBAL_Control;
          }
        }
      }
    }
    for ( i = 0; i < *a1; ++i )
    {
      v4 = &a1[5 * i];
      if ( LOWORD(v2->DeviceType) )
      {
        WPP_RECORDER_SF_D(v2->DeviceExtension, 5, 2, 124, (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids, i);
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            5,
            2,
            125,
            (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
            *((_BYTE *)v4 + 16));
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_D(
              WPP_GLOBAL_Control->DeviceExtension,
              5,
              2,
              126,
              (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
              *((_WORD *)v4 + 9));
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_D(
                WPP_GLOBAL_Control->DeviceExtension,
                5,
                2,
                127,
                (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                v4[5]);
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  5,
                  2,
                  128,
                  (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
            }
          }
        }
      }
      result = DisplayGenAddr(v4 + 1, "    ");
      v2 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        result = WPP_RECORDER_SF_(
                   WPP_GLOBAL_Control->DeviceExtension,
                   5,
                   2,
                   129,
                   (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
        v2 = WPP_GLOBAL_Control;
      }
    }
  }
  return result;
}
