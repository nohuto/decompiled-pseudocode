/*
 * XREFs of ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C004E770
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPublicPointerDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C004ECC8 (-IsPublicPointerDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 */

__int64 __fastcall CHidInput::OnRIMDeviceClosed(unsigned __int64 this, struct DEVICEINFO *a2)
{
  int v2; // ebx
  struct DEVICEINFO *i; // r9
  int IsPublicPointerDevice; // eax
  __int64 v6; // r9
  unsigned int v7; // r10d
  unsigned int v8; // r8d
  int v9; // r10d
  __int64 v10; // r11

  v2 = *(_DWORD *)(this + 640);
  for ( i = CBaseInput::_spDevList; i; i = *(struct DEVICEINFO **)(v6 + 56) )
  {
    IsPublicPointerDevice = CHidInput::IsPublicPointerDevice((CHidInput *)this, i);
    this = v7 - 1;
    if ( !IsPublicPointerDevice )
      this = v7;
    if ( (struct DEVICEINFO *)v6 == a2 )
      break;
  }
  if ( (unsigned int)CHidInput::IsPublicPointerDevice((CHidInput *)this, a2) )
  {
    *(_DWORD *)(v10 + 640) = v2 - 1;
    return (unsigned int)(v9 + 1);
  }
  return v8;
}
