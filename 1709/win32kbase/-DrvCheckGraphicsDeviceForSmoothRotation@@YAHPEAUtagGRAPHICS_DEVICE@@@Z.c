/*
 * XREFs of ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00F610C
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F8848 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C008AA14 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 */

__int64 __fastcall DrvCheckGraphicsDeviceForSmoothRotation(struct tagGRAPHICS_DEVICE *a1)
{
  unsigned __int16 v3; // ax
  wchar_t *i; // rbx
  unsigned __int16 v5; // ax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  v6 = 0;
  if ( !a1 )
    return 0LL;
  v3 = -1;
  if ( !gForceDisconnect )
    v3 = gProtocolType;
  if ( !(unsigned int)GetPrimaryAttachFlags(a1, v3, &v7, &v6) || !v6 )
    return 0LL;
  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    if ( a1 != (struct tagGRAPHICS_DEVICE *)i )
    {
      v5 = -1;
      if ( !gForceDisconnect )
        v5 = gProtocolType;
      if ( (unsigned int)GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)i, v5, &v7, &v6) && v6 )
        return 0LL;
    }
  }
  return 1LL;
}
