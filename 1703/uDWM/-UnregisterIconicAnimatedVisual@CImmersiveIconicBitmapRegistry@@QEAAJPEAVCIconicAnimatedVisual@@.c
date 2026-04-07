/*
 * XREFs of ?UnregisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z @ 0x18007C044
 * Callers:
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x18000AB28 (--1CAnimationComponent@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::UnregisterIconicAnimatedVisual(
        CImmersiveIconicBitmapRegistry *this,
        struct CIconicAnimatedVisual *a2)
{
  __int64 v2; // r11
  unsigned int v4; // ecx
  __int64 i; // r8
  __int64 v6; // rcx

  v2 = *((_QWORD *)this + 6);
  v4 = *((_DWORD *)this + 18);
  for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
  {
    if ( a2 == *(struct CIconicAnimatedVisual **)(v2 + 8 * i) )
      break;
  }
  if ( (unsigned int)i < v4 )
  {
    if ( (unsigned int)i < v4 - 1 )
    {
      do
      {
        v6 = (unsigned int)i;
        LODWORD(i) = i + 1;
        *(_QWORD *)(v2 + 8 * v6) = *(_QWORD *)(v2 + 8LL * (unsigned int)i);
      }
      while ( (unsigned int)i < *((_DWORD *)this + 18) - 1 );
    }
    --*((_DWORD *)this + 18);
    CBaseObject::Release(a2);
  }
  return 0LL;
}
