/*
 * XREFs of ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C0127810
 * Callers:
 *     <none>
 * Callees:
 *     ?OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C0117F6C (-OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?IsPublicPointerDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C0126F20 (-IsPublicPointerDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     ?UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z @ 0x1C0127DEC (-UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z.c)
 */

__int64 __fastcall CHidInput::OnRIMDeviceOpened(CHidInput *this, struct DEVICEINFO *a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v5; // rdx

  v2 = 0;
  if ( (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
  {
    v5 = *(_QWORD *)a2;
    if ( gpTouchProcessor )
      CTouchProcessor::OnRimDeviceOpened(this, v5);
  }
  if ( CHidInput::IsPublicPointerDevice(this, a2) )
    return CHidInput::UpdatePointerDeviceCount(this, 1u);
  return v2;
}
