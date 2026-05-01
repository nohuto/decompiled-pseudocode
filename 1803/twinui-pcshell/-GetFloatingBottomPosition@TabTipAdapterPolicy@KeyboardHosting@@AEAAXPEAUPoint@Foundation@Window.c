/*
 * XREFs of ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x180251CB0
 * Callers:
 *     ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x180060230 (-OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800F3430 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180253660 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180250934 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@1@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@1@@Z @ 0x180250D4C (--$_Insert_hint@AEAU-$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAU-$_Tree_nod.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18025151C (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(
        KeyboardHosting::TabTipAdapterPolicy *this,
        struct Windows::Foundation::Point *a2,
        unsigned int a3)
{
  char v3; // al
  __int64 *v4; // rdi
  float *v6; // r14
  __int64 v8; // r8
  __m128 v9; // xmm8
  __int64 v10; // xmm1_8
  __m128 v11; // xmm3
  __int64 v12; // r8
  struct Windows::Foundation::Point *v13; // rbx
  __int64 *v14; // rax
  bool v15; // zf
  float v16; // xmm7_4
  float v17; // xmm8_4
  char v18; // cl
  char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  float v22; // xmm6_4
  __int64 v23; // rbx
  __int64 v24; // r9
  char v25; // r8
  char *v26; // rax
  float v27; // xmm0_4
  unsigned int v28; // [rsp+38h] [rbp-69h] BYREF
  int v29[4]; // [rsp+40h] [rbp-61h] BYREF
  __int128 v30; // [rsp+50h] [rbp-51h]
  __int64 v31; // [rsp+90h] [rbp-11h]

  v3 = *((_BYTE *)this + 448);
  v4 = (__int64 *)((char *)this + 416);
  v28 = a3;
  v6 = (float *)a2;
  v8 = v3 != 0 ? 0x38 : 0;
  v9 = *(__m128 *)((char *)this + v8 + 224);
  v10 = *(_QWORD *)((char *)this + v8 + 272);
  v11 = *(__m128 *)((char *)this + v8 + 240);
  v12 = *((_QWORD *)this + 52);
  v31 = v10;
  v13 = (struct Windows::Foundation::Point *)v12;
  v14 = *(__int64 **)(v12 + 8);
  v15 = *((_BYTE *)v14 + 25) == 0;
  v16 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
  v17 = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
  *(float *)v29 = (float)((float)(int)v10 * v16) / 100.0;
  *(float *)&v29[1] = (float)((float)(int)v10 * v17) / 100.0;
  *(float *)&v29[2] = (float)((float)(int)v10 * v11.m128_f32[0]) / 100.0;
  *(float *)&v29[3] = (float)((float)(int)v10 * _mm_shuffle_ps(v11, v11, 85).m128_f32[0]) / 100.0;
  v30 = *(_OWORD *)v29;
  if ( !v15 )
    goto LABEL_10;
  do
  {
    a2 = (struct Windows::Foundation::Point *)v14;
    if ( *((_DWORD *)v14 + 7) >= a3 )
    {
      v14 = (__int64 *)*v14;
      v18 = 0;
    }
    else
    {
      v14 = (__int64 *)v14[2];
      v18 = 1;
    }
    if ( !v18 )
      v13 = a2;
  }
  while ( !*((_BYTE *)v14 + 25) );
  if ( v13 == (struct Windows::Foundation::Point *)v12 || a3 < *((_DWORD *)v13 + 7) )
  {
LABEL_10:
    *(_QWORD *)v29 = &v28;
    v19 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
            v4,
            (__int64)a2,
            (_DWORD **)v29);
    std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Insert_hint<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen> &,std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *> *>(
      v4,
      (char **)v29,
      (__int64)v13,
      (unsigned int *)v19 + 7,
      v19);
    v13 = *(struct Windows::Foundation::Point **)v29;
  }
  std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
    (__int64 *)this + 54,
    (__int64)v29,
    &v28);
  v21 = *(_QWORD *)(*v4 + 8);
  v22 = (float)(*((float *)&v30 + 2) - *(float *)(*(_QWORD *)v29 + 32LL)) * *((float *)v13 + 8);
  v23 = *v4;
  if ( *(_BYTE *)(v21 + 25) )
    goto LABEL_21;
  v20 = v28;
  do
  {
    v24 = v21;
    if ( *(_DWORD *)(v21 + 28) >= v28 )
    {
      v21 = *(_QWORD *)v21;
      v25 = 0;
    }
    else
    {
      v21 = *(_QWORD *)(v21 + 16);
      v25 = 1;
    }
    if ( !v25 )
      v23 = v24;
  }
  while ( !*(_BYTE *)(v21 + 25) );
  if ( v23 == *v4 || v28 < *(_DWORD *)(v23 + 28) )
  {
LABEL_21:
    *(_QWORD *)v29 = &v28;
    v26 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
            v4,
            v20,
            (_DWORD **)v29);
    std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Insert_hint<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen> &,std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *> *>(
      v4,
      (char **)v29,
      v23,
      (unsigned int *)v26 + 7,
      v26);
    v23 = *(_QWORD *)v29;
  }
  std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
    (__int64 *)this + 54,
    (__int64)v29,
    &v28);
  v27 = (float)(*((float *)&v30 + 3) - *(float *)(*(_QWORD *)v29 + 36LL)) * *(float *)(v23 + 36);
  *v6 = v16 + v22;
  v6[1] = v27 + v17;
}
