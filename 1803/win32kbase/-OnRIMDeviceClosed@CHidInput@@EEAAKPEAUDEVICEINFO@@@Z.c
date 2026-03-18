/*
 * XREFs of ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C0127530
 * Callers:
 *     <none>
 * Callees:
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C0117E90 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?IsPublicPointerDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C0126F20 (-IsPublicPointerDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     ?UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z @ 0x1C0127DEC (-UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z.c)
 */

__int64 __fastcall CHidInput::OnRIMDeviceClosed(CHidInput *this, struct DEVICEINFO *a2)
{
  struct DEVICEINFO *v3; // r8
  unsigned int v4; // edi
  __int64 v5; // r8
  int v6; // r9d
  CHidInput *v7; // r10
  CTouchProcessor *v8; // rcx

  v3 = CBaseInput::_spDevList;
  v4 = 0;
  while ( v3 )
  {
    CHidInput::IsPublicPointerDevice(this, v3);
    if ( (struct DEVICEINFO *)v5 == a2 )
      break;
    v3 = *(struct DEVICEINFO **)(v5 + 56);
  }
  if ( CHidInput::IsPublicPointerDevice(this, a2) )
  {
    v4 = v6 + 1;
    CHidInput::UpdatePointerDeviceCount(v7, 2u);
  }
  v8 = (CTouchProcessor *)*((unsigned int *)a2 + 50);
  if ( (char)v8 < 0 && gpTouchProcessor )
    CTouchProcessor::OnRimDeviceClosed(v8, *(void **)a2);
  return v4;
}
