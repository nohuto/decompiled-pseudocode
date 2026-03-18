/*
 * XREFs of ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x180012104
 * Callers:
 *     ?ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETCOLORSTOPS@@PEBXI@Z @ 0x18001245C (-ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETCOLOR.c)
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1801B34C4 (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 * Callees:
 *     ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x180012020 (-FlattenStops@CGradientBrush@@AEAAXXZ.c)
 *     ??$_Insert_range@V?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@V?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@1Uforward_iterator_tag@1@@Z @ 0x180012BE0 (--$_Insert_range@V-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@@-.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CGradientBrush::SetStops(CResource *this, __int64 *a2, char a3)
{
  __int64 v3; // rsi
  __int64 i; // rbx
  int v8; // eax
  struct CResource **v9; // r14
  __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD v15[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *a2;
  for ( i = 0LL; i != v3; ++i )
  {
    v8 = CResource::RegisterNotifier(this, *(struct CResource **)(a2[1] + 8 * i));
    if ( v8 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v8, retaddr);
  }
  if ( !a3 )
  {
    v9 = (struct CResource **)*((_QWORD *)this + 14);
    v10 = 0LL;
    v11 = (unsigned __int64)(*((_QWORD *)this + 15) - (_QWORD)v9 + 7LL) >> 3;
    if ( (unsigned __int64)v9 > *((_QWORD *)this + 15) )
      v11 = 0LL;
    if ( v11 )
    {
      do
      {
        CResource::UnRegisterNotifierInternal(this, *v9);
        ++v10;
        ++v9;
      }
      while ( v10 != v11 );
    }
    *((_QWORD *)this + 15) = *((_QWORD *)this + 14);
  }
  v12 = *((_QWORD *)this + 15);
  v15[1] = *a2;
  v15[0] = a2;
  v16 = (unsigned __int64)a2;
  std::vector<CColorGradientStop *>::_Insert_range<gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>>(
    (char *)this + 112,
    v12,
    &v16,
    v15);
  CGradientBrush::FlattenStops(this);
  v13 = *(_QWORD *)this;
  *((_BYTE *)this + 168) = 0;
  return (*(__int64 (__fastcall **)(CResource *, __int64, CResource *))(v13 + 64))(this, 6LL, this);
}
