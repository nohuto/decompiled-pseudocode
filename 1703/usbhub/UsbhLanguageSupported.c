/*
 * XREFs of UsbhLanguageSupported @ 0x1C0052FD0
 * Callers:
 *     UsbhGetProductIdString @ 0x1C0052E10 (UsbhGetProductIdString.c)
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 */

char __fastcall UsbhLanguageSupported(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  _DWORD *v4; // rax
  _WORD *v5; // rcx

  v4 = PdoExt(a2);
  v5 = (_WORD *)*((_QWORD *)v4 + 272);
  if ( v5 )
  {
    if ( v4[543] )
    {
      while ( *v5 )
      {
        if ( *v5 == a3 )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              0,
              1u,
              0x14u,
              (__int64)&WPP_716811dc45ea3a5f9b6ecc0e5223d871_Traceguids,
              a3);
          return 1;
        }
        ++v5;
      }
    }
    goto LABEL_13;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x15u,
      (__int64)&WPP_716811dc45ea3a5f9b6ecc0e5223d871_Traceguids);
LABEL_13:
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x16u,
        (__int64)&WPP_716811dc45ea3a5f9b6ecc0e5223d871_Traceguids,
        a3);
  }
  return 0;
}
