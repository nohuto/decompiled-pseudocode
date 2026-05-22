/*
 * XREFs of ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1800B7758
 * Callers:
 *     ?Thunk_RegisterComboButton_0@?$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z @ 0x1800B8970 (-Thunk_RegisterComboButton_0@-$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18001907C (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?_Tidy@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXXZ @ 0x18002576C (-_Tidy@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAXXZ.c)
 *     ??4?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800B7F00 (--4-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800B8060 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@@Z @ 0x1800B81F8 (-erase@-$_Tree@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$allocat_ea_1800B81F8.c)
 *     ??$_Range_construct_or_tidy@PEBW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXPEBW4_Button@@0Uforward_iterator_tag@1@@Z @ 0x1800B8720 (--$_Range_construct_or_tidy@PEBW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@st.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@_JU?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1800B8790 (--$_Sort_unchecked@PEAW4_Button@@_JU-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800B8CF4 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree__ea_1800B8CF4.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIUComboButtonRegistration@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIUComboButtonRegistration@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@1@@Z @ 0x1800B8D58 (--$_Insert_hint@AEAU-$pair@$$CBIUComboButtonRegistration@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUC.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ButtonRecognizer::RegisterComboButton(
        ButtonRecognizer *this,
        struct tagMsgRoutingInfo *a2,
        char a3,
        struct ButtonRegistrationABI *a4)
{
  __int64 v7; // r9
  unsigned int *v8; // rdx
  unsigned int *i; // rbx
  __int64 v10; // rdi
  unsigned __int128 v11; // kr00_16
  char v12; // r14
  unsigned int *v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  char *v16; // rsi
  _QWORD *v17; // rdi
  _QWORD *v18; // rbx
  _DWORD *v19; // rdx
  __int64 **v20; // rax
  __int64 *k; // rcx
  __int64 j; // rax
  _QWORD *v23; // r8
  unsigned int v24; // ecx
  int *v25; // rdx
  __int64 *v26; // rax
  int *v27; // rbx
  void *v28; // rax
  int v29; // edi
  int v30; // ebx
  int v32; // [rsp+28h] [rbp-E0h]
  char v33; // [rsp+48h] [rbp-C0h]
  int v34; // [rsp+4Ch] [rbp-BCh] BYREF
  int *v35; // [rsp+50h] [rbp-B8h] BYREF
  int *v36; // [rsp+58h] [rbp-B0h] BYREF
  void *v37[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+70h] [rbp-98h]
  __int64 v39; // [rsp+78h] [rbp-90h]
  _DWORD v40[5]; // [rsp+80h] [rbp-88h] BYREF
  char v41[4]; // [rsp+94h] [rbp-74h] BYREF
  char v42; // [rsp+98h] [rbp-70h]
  _DWORD *v43; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v44; // [rsp+A8h] [rbp-60h]
  __int128 v45; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v46; // [rsp+C8h] [rbp-40h]
  __int64 v47; // [rsp+D8h] [rbp-30h]
  int v48; // [rsp+E8h] [rbp-20h]
  char v49; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v50[3]; // [rsp+F8h] [rbp-10h] BYREF
  _OWORD v51[2]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v52; // [rsp+130h] [rbp+28h]

  v39 = -2LL;
  v40[0] = *(_DWORD *)a4;
  v40[1] = *((_DWORD *)a4 + 1);
  v40[2] = *((_DWORD *)a4 + 2);
  v40[3] = *((_DWORD *)a4 + 3);
  v40[4] = *((_DWORD *)a4 + 4);
  *(_OWORD *)v37 = 0LL;
  v38 = 0LL;
  std::vector<enum _Button>::_Range_construct_or_tidy<enum _Button const *>(v37, v40, v41);
  v11 = *(_OWORD *)v37;
  v8 = (unsigned int *)(v11 >> 64);
  v10 = v11;
  for ( i = (unsigned int *)v37[0]; i != v37[1]; ++i )
  {
    if ( *i == 240 )
      break;
  }
  v12 = 1;
  if ( i != v37[1] )
  {
    v13 = i + 1;
    v14 = 0LL;
    v15 = (unsigned __int64)((char *)v37[1] - (char *)(i + 1) + 3) >> 2;
    if ( i + 1 > v37[1] )
      v15 = 0LL;
    if ( v15 )
    {
      do
      {
        v7 = *v13;
        if ( (_DWORD)v7 != 240 )
          *i++ = v7;
        ++v13;
        ++v14;
      }
      while ( v14 != v15 );
    }
    if ( i != v8 )
    {
      memmove(i, v8, 0LL);
      v8 = i;
      v37[1] = i;
    }
  }
  if ( !a3 )
  {
    LOBYTE(v7) = v33;
    std::_Sort_unchecked<enum _Button *,__int64,std::less<void>>(v10, v8, ((__int64)v8 - v10) >> 2, v7);
  }
  v43 = 0LL;
  v44 = 0LL;
  v42 = a3;
  std::vector<enum _Button>::operator=(&v43, v37);
  v45 = *(_OWORD *)a2;
  v46 = *((_OWORD *)a2 + 1);
  v47 = *((_QWORD *)a2 + 4);
  v16 = (char *)this + 32;
  v17 = (_QWORD *)*((_QWORD *)this + 4);
  v18 = (_QWORD *)*v17;
  if ( (_QWORD *)*v17 != v17 )
  {
    while ( 1 )
    {
      v48 = *((_DWORD *)v18 + 8);
      v49 = *((_BYTE *)v18 + 40);
      std::vector<enum _Button>::vector<enum _Button>(v50, v18 + 6);
      v51[0] = *(_OWORD *)(v18 + 9);
      v51[1] = *(_OWORD *)(v18 + 11);
      v52 = v18[13];
      if ( v42 == v49 )
      {
        v19 = v43;
        if ( (__int64)(v44 - (_QWORD)v43) >> 2 == (__int64)(v50[1] - v50[0]) >> 2 )
        {
          if ( v43 == (_DWORD *)v44 )
          {
LABEL_21:
            if ( operator==((__int64)&v45, (__int64)v51) )
              goto LABEL_23;
          }
          else
          {
            while ( *v19 == *(_DWORD *)((char *)v19 + v50[0] - (_QWORD)v43) )
            {
              if ( ++v19 == (_DWORD *)v44 )
                goto LABEL_21;
            }
          }
        }
      }
      v12 = 0;
LABEL_23:
      std::vector<enum _Button>::_Tidy(v50);
      if ( !v12 )
      {
        if ( !*((_BYTE *)v18 + 25) )
        {
          v20 = (__int64 **)v18[2];
          if ( *((_BYTE *)v20 + 25) )
          {
            for ( j = v18[1]; !*(_BYTE *)(j + 25) && v18 == *(_QWORD **)(j + 16); j = *(_QWORD *)(j + 8) )
              v18 = (_QWORD *)j;
            v18 = (_QWORD *)j;
          }
          else
          {
            v18 = (_QWORD *)v18[2];
            for ( k = *v20; !*((_BYTE *)k + 25); k = (__int64 *)*k )
              v18 = k;
          }
        }
        v12 = 1;
        if ( v18 != v17 )
          continue;
      }
      break;
    }
  }
  v23 = *(_QWORD **)v16;
  if ( v18 == *(_QWORD **)v16 )
  {
    v24 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 5) = v24 + 1;
    v23 = *(_QWORD **)v16;
  }
  else
  {
    v24 = *((_DWORD *)v18 + 8);
  }
  v34 = v24;
  if ( *((_QWORD *)this + 5) )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::erase(
      (char *)this + 32,
      &v36,
      *v23);
    v24 = v34;
  }
  v25 = *(int **)v16;
  v26 = *(__int64 **)(*(_QWORD *)v16 + 8LL);
  v27 = *(int **)v16;
  if ( *((_BYTE *)v26 + 25) )
    goto LABEL_47;
  do
  {
    if ( *((_DWORD *)v26 + 8) >= v24 )
    {
      v27 = (int *)v26;
      v26 = (__int64 *)*v26;
    }
    else
    {
      v26 = (__int64 *)v26[2];
    }
  }
  while ( !*((_BYTE *)v26 + 25) );
  if ( v27 == v25 || v24 < v27[8] )
  {
LABEL_47:
    v35 = &v34;
    v28 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                    (char *)this + 32,
                    v25,
                    &v35);
    std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Insert_hint<std::pair<unsigned int const,ComboButtonRegistration> &,std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *> *>(
      (_DWORD)this + 32,
      v28);
    v27 = v35;
  }
  *((_BYTE *)v27 + 40) = v42;
  if ( v27 + 12 != (int *)&v43 )
    std::vector<enum _Button>::operator=(v27 + 12, &v43);
  *(_OWORD *)(v27 + 18) = v45;
  *(_OWORD *)(v27 + 22) = v46;
  *((_QWORD *)v27 + 13) = v47;
  v29 = v34;
  v35 = 0LL;
  v30 = (*(__int64 (__fastcall **)(_QWORD, struct tagMsgRoutingInfo *, int **))(**((_QWORD **)this + 20) + 96LL))(
          *((_QWORD *)this + 20),
          a2,
          &v35);
  if ( v30 >= 0 )
  {
    v36 = v35;
    LOWORD(v32) = 1;
    v30 = CoreUICallSend(*((_QWORD *)this + 24), &v36, 1LL, 1LL, v32, &unk_1801004FF, v29);
    if ( v30 >= 0 )
      (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 20) + 144LL))(*((_QWORD *)this + 20), v35);
  }
  std::vector<enum _Button>::_Tidy((unsigned __int64 *)&v43);
  std::vector<enum _Button>::_Tidy((unsigned __int64 *)v37);
  return (unsigned int)v30;
}
