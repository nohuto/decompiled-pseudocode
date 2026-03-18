/*
 * XREFs of ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C0019350
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPublicPointerDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C00195C8 (-IsPublicPointerDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 */

__int64 __fastcall CHidInput::OnRIMDeviceOpened(CHidInput *this, struct DEVICEINFO *a2)
{
  int IsPublicPointerDevice; // eax
  __int64 v3; // r8
  unsigned int v4; // ecx

  IsPublicPointerDevice = CHidInput::IsPublicPointerDevice(this, a2);
  v4 = 0;
  if ( IsPublicPointerDevice )
    return (unsigned int)++*(_DWORD *)(v3 + 960);
  return v4;
}
