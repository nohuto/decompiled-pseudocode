/*
 * XREFs of ?GetSDRBoost@CDesktopRenderTarget@@UEBAMXZ @ 0x180016270
 * Callers:
 *     ?GetSDRBoost@CDesktopRenderTarget@@WDA@EBAMXZ @ 0x1800C5EE0 (-GetSDRBoost@CDesktopRenderTarget@@WDA@EBAMXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CDesktopRenderTarget::GetSDRBoost(CDesktopRenderTarget *this)
{
  __int64 v1; // rdx
  unsigned int v2; // r8d
  float result; // xmm0_4

  v1 = 0LL;
  v2 = *((_DWORD *)this + 20);
  result = FLOAT_1_0;
  if ( v2 )
  {
    do
    {
      result = *(float *)(*(_QWORD *)(*((_QWORD *)this + 7) + 8 * v1) + 456LL);
      if ( result != 1.0 )
        break;
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (unsigned int)v1 < v2 );
  }
  return result;
}
