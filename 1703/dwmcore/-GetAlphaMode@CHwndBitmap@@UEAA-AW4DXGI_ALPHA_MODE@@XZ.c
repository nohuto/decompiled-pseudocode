/*
 * XREFs of ?GetAlphaMode@CHwndBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180164910
 * Callers:
 *     <none>
 * Callees:
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18008AE28 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectAlpha@CVisual@@QEBAMXZ @ 0x18012B6A8 (-GetEffectAlpha@CVisual@@QEBAMXZ.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x180162890 (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 */

__int64 __fastcall CHwndBitmap::GetAlphaMode(CHwndBitmap *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  CWindowNode *v4; // rcx
  float v5; // xmm2_4
  float v6; // xmm4_4

  v2 = 1;
  v3 = *((_QWORD *)this + 59);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL))(v3, 34LL) )
    {
      v4 = (CWindowNode *)*((_QWORD *)this + 59);
      if ( (*((_BYTE *)v4 + 876) & 1) != 0 )
      {
        if ( CWindowNode::IsClipSimpleRect(v4) )
        {
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(CVisual::GetEffectAlpha(*((CVisual **)this + 59)) - 1.0)) & _xmm) < 0.0000011920929 )
          {
            v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(fminf(
                                                               1.0,
                                                               fmaxf(
                                                                 CVisual::GetOpacityInternal(*((CVisual **)this + 59)),
                                                                 0.0))
                                                           - 1.0)) & _xmm);
            if ( v6 > v5 )
              return 3;
          }
        }
      }
    }
  }
  return v2;
}
