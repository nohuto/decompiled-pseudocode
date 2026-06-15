/*
 * XREFs of IsSkipAPOFailureCheck @ 0x14001D53C
 * Callers:
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x1400067A0 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

char IsSkipAPOFailureCheck()
{
  int v1; // [rsp+50h] [rbp+8h] BYREF
  DWORD v2; // [rsp+58h] [rbp+10h] BYREF

  if ( !byte_1400881C0 )
  {
    v1 = 0;
    v2 = 4;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Policy",
            L"SkipAPOFailureCheck",
            0x10u,
            0LL,
            &v1,
            &v2) )
      byte_140088270 = v1 != 0;
    byte_1400881C0 = 1;
  }
  return byte_140088270;
}
