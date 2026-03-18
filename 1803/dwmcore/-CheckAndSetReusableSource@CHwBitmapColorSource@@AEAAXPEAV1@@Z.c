/*
 * XREFs of ?CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x1801EE550
 * Callers:
 *     ?CheckAndSetReusableSources@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x1801EE6A8 (-CheckAndSetReusableSources@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800839A8 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetDirtyRects@CHwBitmapColorSource@@AEBA_NPEAPEBUtagRECT@@PEAI1@Z @ 0x1801F0084 (-GetDirtyRects@CHwBitmapColorSource@@AEBA_NPEAPEBUtagRECT@@PEAI1@Z.c)
 *     ?IsValid@CHwBitmapColorSource@@QEBA_NXZ @ 0x1801F0148 (-IsValid@CHwBitmapColorSource@@QEBA_NXZ.c)
 */

void __fastcall CHwBitmapColorSource::CheckAndSetReusableSource(
        CHwBitmapColorSource *this,
        struct CHwBitmapColorSource *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdx
  _DWORD *v6; // rdx
  _DWORD *v7; // r8
  struct tagRECT *v8; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+20h] BYREF

  if ( CHwBitmapColorSource::IsValid(a2)
    && (*((_BYTE *)this + 256) & 0x20) != 0
    && (*(_BYTE *)(v4 + 256) & 0x20) != 0
    && *((_DWORD *)this + 38) == *(_DWORD *)(v4 + 152)
    && *((_DWORD *)this + 39) == *(_DWORD *)(v4 + 156)
    && !TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)this + 49)
    && !TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v5)
    && v7[2] > *v6
    && v6[2] > *v7
    && v7[3] > v6[1]
    && v6[3] > v7[1] )
  {
    if ( !*((_QWORD *)a2 + 27)
      || *((_DWORD *)this + 44) != *((_DWORD *)a2 + 44)
      && (v9 = 0, v10 = -1, CHwBitmapColorSource::GetDirtyRects(a2, (const struct tagRECT **)&v8, &v9, &v10))
      && (v9 != 1
       || v8->left > 0
       || v8->top > 0
       || v8->right < *((_DWORD *)this + 36)
       || v8->bottom < *((_DWORD *)this + 37)) )
    {
      *((_QWORD *)a2 + 34) = *((_QWORD *)this + 34);
      *((_QWORD *)this + 34) = a2;
      (**(void (__fastcall ***)(struct CHwBitmapColorSource *))a2)(a2);
    }
  }
}
