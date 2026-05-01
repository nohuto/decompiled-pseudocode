/*
 * XREFs of ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@I@Z @ 0x1801AF35C
 * Callers:
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1801AC970 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHMONITOR__@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHMONITOR__@@NU?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@N@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHMONITOR__@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180194ED8 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUHMONITOR__@@@2@V-$tuple@$$V@2@@-$_Tre.c)
 *     ??$_Insert_hint@AEAU?$pair@QEAUHMONITOR__@@N@std@@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@NU?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@N@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@@1@AEAU?$pair@QEAUHMONITOR__@@N@1@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@1@@Z @ 0x1801AF664 (--$_Insert_hint@AEAU-$pair@QEAUHMONITOR__@@N@std@@PEAU-$_Tree_node@U-$pair@QEAUHMONITOR__@@N@std.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     sqrt @ 0x1801E2E70 (sqrt.c)
 */

__int64 __fastcall KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
        unsigned __int64 **a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  double v6; // xmm6_8
  double v10; // xmm0_8
  unsigned __int64 *v11; // rbx
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rax
  unsigned __int64 *v14; // rax
  unsigned __int64 *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  char v18; // r10
  unsigned __int64 *v19; // rbx
  _QWORD *v20; // rax
  float v21; // xmm0_4
  float v22; // xmm4_4
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  double v26; // xmm1_8
  double v27; // xmm0_8
  unsigned __int64 *v29; // [rsp+38h] [rbp-69h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-61h] BYREF
  _BYTE v31[24]; // [rsp+48h] [rbp-59h] BYREF
  int v32; // [rsp+60h] [rbp-41h]
  int v33; // [rsp+64h] [rbp-3Dh]

  v6 = DOUBLE_7_0;
  v30 = a3;
  if ( (unsigned int)GetCurrentDpiInfo(a3, v31) )
  {
    v10 = sqrt(
            (double)(100 * v33) / 2540.0 * ((double)(100 * v33) / 2540.0)
          + (double)(100 * v32) / 2540.0 * ((double)(100 * v32) / 2540.0));
    v6 = v10;
    v11 = *a1;
    v12 = (*a1)[1];
    while ( !*(_BYTE *)(v12 + 25) )
    {
      if ( *(_QWORD *)(v12 + 32) >= v30 )
      {
        v11 = (unsigned __int64 *)v12;
        v12 = *(_QWORD *)v12;
      }
      else
      {
        v12 = *(_QWORD *)(v12 + 16);
      }
    }
    if ( v11 == *a1 || v30 < v11[4] )
    {
      v29 = &v30;
      v13 = std::_Tree_comp_alloc<std::_Tmap_traits<HMONITOR__ *,double,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,double>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<HMONITOR__ * const &>,std::tuple<>>(
              a1,
              v30,
              &v29);
      std::_Tree<std::_Tmap_traits<HMONITOR__ *,double,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,double>>,0>>::_Insert_hint<std::pair<HMONITOR__ * const,double> &,std::_Tree_node<std::pair<HMONITOR__ * const,double>,void *> *>(
        (int)a1,
        v13);
      v11 = v29;
    }
    *((double *)v11 + 5) = v10;
  }
  else
  {
    v14 = *a1;
    v15 = *a1;
    v16 = (*a1)[1];
    v17 = v16;
    v18 = *(_BYTE *)(v16 + 25);
    if ( !v18 )
    {
      do
      {
        if ( *(_QWORD *)(v17 + 32) >= v30 )
        {
          v15 = (unsigned __int64 *)v17;
          v17 = *(_QWORD *)v17;
        }
        else
        {
          v17 = *(_QWORD *)(v17 + 16);
        }
      }
      while ( !*(_BYTE *)(v17 + 25) );
    }
    if ( v15 == v14 || v30 < v15[4] )
      v15 = *a1;
    if ( v15 != v14 )
    {
      v19 = *a1;
      if ( !v18 )
      {
        do
        {
          if ( *(_QWORD *)(v16 + 32) >= v30 )
          {
            v19 = (unsigned __int64 *)v16;
            v16 = *(_QWORD *)v16;
          }
          else
          {
            v16 = *(_QWORD *)(v16 + 16);
          }
        }
        while ( !*(_BYTE *)(v16 + 25) );
      }
      if ( v19 == v14 || v30 < v19[4] )
      {
        v29 = &v30;
        v20 = std::_Tree_comp_alloc<std::_Tmap_traits<HMONITOR__ *,double,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,double>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<HMONITOR__ * const &>,std::tuple<>>(
                a1,
                v17,
                &v29);
        std::_Tree<std::_Tmap_traits<HMONITOR__ *,double,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,double>>,0>>::_Insert_hint<std::pair<HMONITOR__ * const,double> &,std::_Tree_node<std::pair<HMONITOR__ * const,double>,void *> *>(
          (int)a1,
          v20);
        v19 = v29;
      }
      v6 = *((double *)v19 + 5);
    }
  }
  *(_QWORD *)a2 = 0LL;
  v21 = *(float *)(a4 + 8);
  if ( v6 >= 8.0 )
    v21 = v21 * 0.89999998;
  *(_DWORD *)a2 = (int)v21;
  v22 = *(float *)(a4 + 12);
  if ( v6 >= 8.0 )
  {
    if ( v6 >= 23.5 )
    {
      v27 = (double)a6;
      if ( v6 >= 55.0 )
        v23 = (int)(v27 * 6.299212598425197);
      else
        v23 = (int)((v6 * 260.0 + 1700.0) / 2540.0 * v27);
      if ( a5 )
        v23 = 100 * v23 / a5;
    }
    else
    {
      v24 = 1600;
      if ( v6 >= 19.5 )
        v24 = 1900;
      v25 = (int)((double)v24 / 2540.0 * 4.0 * (double)a6
                + (double)a6 * 0.07874015748031496
                + (double)a6 * ((double)v24 / 2540.0));
      if ( a5 )
        v25 = 100 * v25 / a5;
      v23 = v25;
      v26 = v22 * 0.43;
      if ( (double)v25 > v26 )
        v23 = (int)v26;
    }
  }
  else
  {
    v23 = (int)(float)(v22 * 0.5);
  }
  *(_DWORD *)(a2 + 4) = v23;
  return a2;
}
