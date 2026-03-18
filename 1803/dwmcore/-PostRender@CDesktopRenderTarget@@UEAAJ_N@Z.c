/*
 * XREFs of ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800440D0
 * Callers:
 *     ?PostRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180047BF0 (-PostRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 * Callees:
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180050F60 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x180050F80 (-Release@CVisual@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x180158600 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x1801A86BC (-PurgeOldRenderPassInfos@CVisual@@QEAAXXZ.c)
 *     ?GetNewContentBounds@CComposeTop@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ADAA4 (-GetNewContentBounds@CComposeTop@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ADAF8 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 */

__int64 __fastcall CDesktopRenderTarget::PostRender(CDesktopRenderTarget *this, char a2)
{
  __int64 v3; // r8
  CComposeTop *v4; // rbx
  __int64 i; // r15
  __int64 v6; // rsi
  int v7; // eax
  __int64 j; // rbp
  int v9; // eax
  __int64 m; // rbp
  void (__fastcall ***v12)(_QWORD, __int64); // rcx
  __int64 v13; // r13
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v15; // r14
  struct _LIST_ENTRY *k; // rbx
  CVisual *v17; // rbx
  _BYTE v18[16]; // [rsp+20h] [rbp-48h] BYREF

  *((_BYTE *)this + 146) = 0;
  if ( !a2 )
  {
    v3 = 0LL;
    if ( *((_DWORD *)this + 8) )
    {
      while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8 * v3) + 850LL) )
      {
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= *((_DWORD *)this + 8) )
          goto LABEL_5;
      }
      *((_BYTE *)this + 146) = 1;
    }
  }
LABEL_5:
  v4 = (CComposeTop *)*((_QWORD *)this + 19);
  if ( v4 && *((_QWORD *)v4 + 1) )
  {
    if ( a2 && (int)CComposeTop::GetNewContentBounds(*((_QWORD *)this + 19), v18) >= 0 )
      CComposeTop::NewContentRendered(v4);
    v12 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v4 + 1);
    if ( v12 )
      (**v12)(v12, 1LL);
    *((_QWORD *)v4 + 1) = 0LL;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * i);
    v7 = *(_DWORD *)(v6 + 720) - 1;
    for ( j = v7; j >= 0; --j )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(v6 + 696) + 8 * j);
      *(_WORD *)(v13 + 923) = 0;
      RenderPassInfoList = CVisual::GetRenderPassInfoList((CVisual *)v13);
      v15 = RenderPassInfoList;
      if ( RenderPassInfoList )
      {
        for ( k = RenderPassInfoList->Flink; k != v15; k = k->Flink )
          CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)&k[-6].Blink);
      }
      CVisual::Release((CVisual *)v13);
    }
    v9 = *(_DWORD *)(v6 + 792) - 1;
    for ( m = v9; m >= 0; --m )
    {
      v17 = *(CVisual **)(*(_QWORD *)(v6 + 768) + 8 * m);
      CVisual::PurgeOldRenderPassInfos(v17);
      (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    *(_DWORD *)(v6 + 720) = 0;
    DynArrayImpl<0>::ShrinkToSize(v6 + 696, 8LL);
    *(_DWORD *)(v6 + 792) = 0;
  }
  return 0LL;
}
