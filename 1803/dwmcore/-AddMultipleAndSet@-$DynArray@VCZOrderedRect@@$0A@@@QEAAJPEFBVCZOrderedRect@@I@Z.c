/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z @ 0x1800652C4
 * Callers:
 *     ?AddAntiOccluderRect@CArrayBasedCoverageSet@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x180064BF0 (-AddAntiOccluderRect@CArrayBasedCoverageSet@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?Add@CArrayBasedCoverageSet@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x180064C60 (-Add@CArrayBasedCoverageSet@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<CZOrderedRect,0>::AddMultipleAndSet(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v5; // r8d
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _OWORD *v10; // rax
  __int64 v11; // rdx
  _OWORD *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((unsigned int *)a1 + 6);
  v5 = v2 + 1;
  v6 = (int)v2 + 1 < (unsigned int)v2 ? 0x80070216 : 0;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
  }
  else if ( v5 > *((_DWORD *)a1 + 5) )
  {
    v12 = (_OWORD *)a2;
    v6 = DynArrayImpl<0>::Grow((_DWORD)a1, 36, 1, 0, (__int64)&v12);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xC0u);
    }
    else
    {
      v10 = v12;
      v11 = *a1 + (unsigned int)(36 * *((_DWORD *)a1 + 6));
      *(_OWORD *)v11 = *v12;
      *(_OWORD *)(v11 + 16) = v10[1];
      *(_DWORD *)(v11 + 32) = *((_DWORD *)v10 + 8);
      ++*((_DWORD *)a1 + 6);
    }
  }
  else
  {
    v7 = *a1;
    v8 = 9 * v2;
    *(_OWORD *)(v7 + 4 * v8) = *(_OWORD *)a2;
    *(_OWORD *)(v7 + 4 * v8 + 16) = *(_OWORD *)(a2 + 16);
    *(_DWORD *)(v7 + 4 * v8 + 32) = *(_DWORD *)(a2 + 32);
    *((_DWORD *)a1 + 6) = v5;
  }
  return (unsigned int)v6;
}
