/*
 * XREFs of ?LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJI@Z @ 0x1800F36DC
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800F3430 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180253660 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIPEBG@std@@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@AEAU?$pair@$$CBIPEBG@1@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@1@@Z @ 0x1802461A4 (--$_Insert_hint@AEAU-$pair@$$CBIPEBG@std@@PEAU-$_Tree_node@U-$pair@$$CBIPEBG@std@@PEAX@2@@-$_Tre.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180250934 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@1@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@1@@Z @ 0x180250D4C (--$_Insert_hint@AEAU-$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAU-$_Tree_nod.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802B5BA4 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 */

LSTATUS __fastcall KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionIfNecessary(
        KeyboardHosting::TabTipAdapterPolicy *this,
        __int64 a2)
{
  char *v2; // rdi
  __int64 *v3; // r8
  __int64 *v5; // rbx
  __int64 *v6; // rax
  __int64 *v7; // r9
  char v8; // cl
  void *v9; // rax
  __int64 *v10; // rcx
  __int64 *v11; // rbx
  __int64 *v12; // rax
  __int64 *v13; // r9
  char v14; // r8
  void *v15; // rax
  LSTATUS result; // eax
  __int64 v17; // rdx
  bool v18; // cc
  __int64 v19; // rdx
  __int64 *v20; // rcx
  __int64 *v21; // rbx
  __int64 *v22; // rax
  __int64 *v23; // r9
  char v24; // r8
  void *v25; // rax
  __int64 v26; // rdx
  __int64 *v27; // rbx
  __int64 *v28; // rax
  __int64 *v29; // r9
  char v30; // r8
  void *v31; // rax
  __int64 *v32; // rdx
  __int64 *v33; // rbx
  __int64 *v34; // rax
  __int64 *v35; // r9
  char v36; // r8
  void *v37; // rax
  __int64 *v38; // rdx
  __int64 *v39; // rbx
  __int64 *v40; // rax
  __int64 *v41; // r9
  char v42; // r8
  void *v43; // rax
  DWORD v44; // [rsp+40h] [rbp-18h] BYREF
  int v45[2]; // [rsp+48h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+30h]
  int pvData; // [rsp+90h] [rbp+38h] BYREF
  unsigned int v48; // [rsp+98h] [rbp+40h] BYREF
  int v49; // [rsp+A0h] [rbp+48h] BYREF
  DWORD pcbData; // [rsp+A8h] [rbp+50h] BYREF

  v48 = a2;
  v2 = (char *)this + 416;
  v3 = (__int64 *)*((_QWORD *)this + 52);
  v5 = v3;
  v6 = (__int64 *)v3[1];
  if ( *((_BYTE *)v6 + 25) )
    goto LABEL_10;
  do
  {
    v7 = v6;
    if ( *((_DWORD *)v6 + 7) >= (unsigned int)a2 )
    {
      v6 = (__int64 *)*v6;
      v8 = 0;
    }
    else
    {
      v6 = (__int64 *)v6[2];
      v8 = 1;
    }
    if ( !v8 )
      v5 = v7;
  }
  while ( !*((_BYTE *)v6 + 25) );
  if ( v5 == v3 || (unsigned int)a2 < *((_DWORD *)v5 + 7) )
  {
LABEL_10:
    *(_QWORD *)v45 = &v48;
    v9 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                   v2,
                   a2,
                   v45);
    std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Insert_hint<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen> &,std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *> *>(
      (int)v2,
      (int)v45,
      (int)v5,
      v9);
    a2 = v48;
    v5 = *(__int64 **)v45;
  }
  if ( *((_BYTE *)v5 + 40) )
    return 0;
  pcbData = 4;
  v10 = (__int64 *)*((_QWORD *)this + 9);
  v11 = v10;
  v12 = (__int64 *)v10[1];
  if ( *((_BYTE *)v12 + 25) )
    goto LABEL_21;
  do
  {
    v13 = v12;
    if ( *((_DWORD *)v12 + 8) >= (unsigned int)a2 )
    {
      v12 = (__int64 *)*v12;
      v14 = 0;
    }
    else
    {
      v12 = (__int64 *)v12[2];
      v14 = 1;
    }
    if ( !v14 )
      v11 = v13;
  }
  while ( !*((_BYTE *)v12 + 25) );
  if ( v11 == v10 || (unsigned int)a2 < *((_DWORD *)v11 + 8) )
  {
LABEL_21:
    *(_QWORD *)v45 = &v48;
    v15 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
                    (char *)this + 72,
                    a2,
                    v45);
    std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_hint<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
      (_DWORD)this + 72,
      (int)v45,
      (int)v11,
      v15);
    v11 = *(__int64 **)v45;
  }
  result = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
             (LPCWSTR)v11[5],
             0x10u,
             0LL,
             &pvData,
             &pcbData);
  v18 = result <= 0;
  if ( result )
    goto LABEL_23;
  if ( (unsigned int)pvData > *((_DWORD *)this + 27) )
  {
    v19 = 1008LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)0x80004005LL);
    return -2147467259;
  }
  v44 = 4;
  v20 = (__int64 *)*((_QWORD *)this + 11);
  v21 = v20;
  v22 = (__int64 *)v20[1];
  if ( *((_BYTE *)v22 + 25) )
    goto LABEL_38;
  v17 = v48;
  do
  {
    v23 = v22;
    if ( *((_DWORD *)v22 + 8) >= v48 )
    {
      v22 = (__int64 *)*v22;
      v24 = 0;
    }
    else
    {
      v22 = (__int64 *)v22[2];
      v24 = 1;
    }
    if ( !v24 )
      v21 = v23;
  }
  while ( !*((_BYTE *)v22 + 25) );
  if ( v21 == v20 || v48 < *((_DWORD *)v21 + 8) )
  {
LABEL_38:
    *(_QWORD *)v45 = &v48;
    v25 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
                    (char *)this + 88,
                    v17,
                    v45);
    std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_hint<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
      (_DWORD)this + 88,
      (int)v45,
      (int)v21,
      v25);
    v21 = *(__int64 **)v45;
  }
  result = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
             (LPCWSTR)v21[5],
             0x10u,
             0LL,
             &v49,
             &v44);
  v18 = result <= 0;
  if ( !result )
  {
    if ( (unsigned int)v49 > *((_DWORD *)this + 27) )
    {
      v19 = 1013LL;
      goto LABEL_27;
    }
    v27 = *(__int64 **)v2;
    v28 = *(__int64 **)(*(_QWORD *)v2 + 8LL);
    if ( *((_BYTE *)v28 + 25) )
      goto LABEL_52;
    v26 = v48;
    do
    {
      v29 = v28;
      if ( *((_DWORD *)v28 + 7) >= v48 )
      {
        v28 = (__int64 *)*v28;
        v30 = 0;
      }
      else
      {
        v28 = (__int64 *)v28[2];
        v30 = 1;
      }
      if ( !v30 )
        v27 = v29;
    }
    while ( !*((_BYTE *)v28 + 25) );
    if ( v27 == *(__int64 **)v2 || v48 < *((_DWORD *)v27 + 7) )
    {
LABEL_52:
      *(_QWORD *)v45 = &v48;
      v31 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                      v2,
                      v26,
                      v45);
      std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Insert_hint<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen> &,std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *> *>(
        (int)v2,
        (int)v45,
        (int)v27,
        v31);
      v27 = *(__int64 **)v45;
    }
    *((float *)v27 + 8) = (float)pvData / (float)*((int *)this + 27);
    v32 = *(__int64 **)v2;
    v33 = *(__int64 **)v2;
    v34 = *(__int64 **)(*(_QWORD *)v2 + 8LL);
    if ( *((_BYTE *)v34 + 25) )
      goto LABEL_62;
    do
    {
      v35 = v34;
      if ( *((_DWORD *)v34 + 7) >= v48 )
      {
        v34 = (__int64 *)*v34;
        v36 = 0;
      }
      else
      {
        v34 = (__int64 *)v34[2];
        v36 = 1;
      }
      if ( !v36 )
        v33 = v35;
    }
    while ( !*((_BYTE *)v34 + 25) );
    if ( v33 == v32 || v48 < *((_DWORD *)v33 + 7) )
    {
LABEL_62:
      *(_QWORD *)v45 = &v48;
      v37 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                      v2,
                      v32,
                      v45);
      std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Insert_hint<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen> &,std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *> *>(
        (int)v2,
        (int)v45,
        (int)v33,
        v37);
      v33 = *(__int64 **)v45;
    }
    *((float *)v33 + 9) = (float)v49 / (float)*((int *)this + 27);
    v38 = *(__int64 **)v2;
    v39 = *(__int64 **)v2;
    v40 = *(__int64 **)(*(_QWORD *)v2 + 8LL);
    if ( *((_BYTE *)v40 + 25) )
      goto LABEL_72;
    do
    {
      v41 = v40;
      if ( *((_DWORD *)v40 + 7) >= v48 )
      {
        v40 = (__int64 *)*v40;
        v42 = 0;
      }
      else
      {
        v40 = (__int64 *)v40[2];
        v42 = 1;
      }
      if ( !v42 )
        v39 = v41;
    }
    while ( !*((_BYTE *)v40 + 25) );
    if ( v39 == v38 || v48 < *((_DWORD *)v39 + 7) )
    {
LABEL_72:
      *(_QWORD *)v45 = &v48;
      v43 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                      v2,
                      v38,
                      v45);
      std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Insert_hint<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen> &,std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *> *>(
        (int)v2,
        (int)v45,
        (int)v39,
        v43);
      v39 = *(__int64 **)v45;
    }
    *((_BYTE *)v39 + 40) = 1;
    return 0;
  }
LABEL_23:
  if ( !v18 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
