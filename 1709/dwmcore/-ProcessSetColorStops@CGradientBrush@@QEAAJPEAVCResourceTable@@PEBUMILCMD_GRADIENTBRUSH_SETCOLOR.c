/*
 * XREFs of ?ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETCOLORSTOPS@@PEBXI@Z @ 0x18007148C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180022644 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 *     ?FlattenStops@CGradientBrush@@IEAAXXZ @ 0x18007182C (-FlattenStops@CGradientBrush@@IEAAXXZ.c)
 *     ?IsOfType@CColorGradientStop@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800721C0 (-IsOfType@CColorGradientStop@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?_Tidy@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@IEAAXXZ @ 0x180072284 (-_Tidy@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@std@@@std@@IEAAXXZ.c)
 *     ??$_Insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@std@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x1800722B0 (--$_Insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAVCColorGradientStop@@@std@@@st.c)
 *     ?_Reserve@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@IEAAX_K@Z @ 0x1800724B4 (-_Reserve@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@std@@@std@@IEAA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AA228 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientBrush::ProcessSetColorStops(
        struct CResource ***this,
        struct CResourceTable *a2,
        const struct MILCMD_GRADIENTBRUSH_SETCOLORSTOPS *a3,
        unsigned int *a4,
        unsigned int a5)
{
  unsigned int v5; // r14d
  unsigned int *v6; // rax
  CResourceTable *v7; // r9
  struct CResource **v9; // r13
  struct CResource **v10; // rdi
  struct CResource **v11; // rsi
  unsigned int v12; // ebx
  struct CResource *ResourceWithoutType; // r12
  __int64 (__fastcall *v14)(struct CResource *, __int64); // rax
  struct CResource **v16; // r12
  struct CResource **i; // rbx
  __int128 *v18; // rcx
  struct CResource **v19; // rax
  struct CResource **j; // rbx
  __int64 v22; // r12
  unsigned int v23; // [rsp+20h] [rbp-30h]
  struct CResource *v24; // [rsp+30h] [rbp-20h] BYREF
  __int128 v25; // [rsp+38h] [rbp-18h] BYREF
  struct CResource **v26; // [rsp+48h] [rbp-8h]
  char *v29; // [rsp+A8h] [rbp+58h]
  unsigned int v30; // [rsp+B0h] [rbp+60h]

  v29 = (char *)a4;
  v5 = 0;
  v6 = a4;
  v7 = a2;
  v9 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  if ( *((_DWORD *)a3 + 3) != a5 || (a5 & 3) != 0 )
  {
    v23 = 205;
LABEL_34:
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, v23);
    goto LABEL_23;
  }
  v10 = (struct CResource **)*((_QWORD *)&v25 + 1);
  v11 = (struct CResource **)v25;
  v12 = a5 >> 2;
  v30 = 0;
  if ( v12 )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(v7, *v6);
      v14 = *(__int64 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL);
      if ( !((char *)v14 == (char *)CColorGradientStop::IsOfType
           ? CColorGradientStop::IsOfType(ResourceWithoutType, 17LL)
           : (unsigned __int8)v14(ResourceWithoutType, 17LL)) )
        break;
      v24 = ResourceWithoutType;
      if ( &v24 < v10 && v11 <= &v24 )
      {
        v22 = &v24 - v11;
        if ( v10 == v9 )
        {
          std::vector<CColorGradientStop *>::_Reserve(&v25);
          v9 = v26;
          v10 = (struct CResource **)*((_QWORD *)&v25 + 1);
          v11 = (struct CResource **)v25;
        }
        if ( v10 )
          *v10 = v11[v22];
      }
      else
      {
        if ( v10 == v9 )
        {
          std::vector<CColorGradientStop *>::_Reserve(&v25);
          v9 = v26;
          v10 = (struct CResource **)*((_QWORD *)&v25 + 1);
          v11 = (struct CResource **)v25;
        }
        if ( v10 )
          *v10 = ResourceWithoutType;
      }
      ++v10;
      v6 = (unsigned int *)(v29 + 4);
      *((_QWORD *)&v25 + 1) = v10;
      ++v30;
      v29 += 4;
      if ( v30 >= v12 )
        goto LABEL_14;
      v7 = a2;
    }
    v23 = 214;
    goto LABEL_34;
  }
LABEL_14:
  v16 = v11;
  for ( i = v11; i != v10; ++i )
    CResource::RegisterNotifier((CResource *)this, *i);
  v18 = (__int128 *)(this + 14);
  if ( *((_DWORD *)a3 + 2) )
  {
    std::vector<CColorGradientStop *>::_Insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CColorGradientStop *>>>>(
      v18,
      this[15],
      v11,
      v10);
  }
  else
  {
    if ( &v25 != v18 )
    {
      v11 = *(struct CResource ***)v18;
      v19 = v10;
      *(_QWORD *)v18 = v16;
      v10 = this[15];
      this[15] = v19;
      v26 = this[16];
      *(_QWORD *)&v25 = v11;
      this[16] = v9;
    }
    for ( j = v11; j != v10; ++j )
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, *j);
      *j = 0LL;
    }
  }
  *((_QWORD *)&v25 + 1) = v11;
  CGradientBrush::FlattenStops((CGradientBrush *)this);
  *((_BYTE *)this + 104) = 0;
  CSpriteVisualContent::ReleasePrimitiveCaches((CSpriteVisualContent *)this);
LABEL_23:
  std::vector<CColorGradientStop *>::_Tidy(&v25);
  return v5;
}
