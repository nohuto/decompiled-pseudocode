/*
 * XREFs of ?_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800AFD80
 * Callers:
 *     ?_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x18009C598 (-_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x180097E54 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x180097ED8 (--1_Lockit@std@@QEAA@XZ.c)
 *     ?_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z @ 0x18009C3C8 (-_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z.c)
 *     ??$use_facet@V?$collate@D@std@@@std@@YAAEBV?$collate@D@0@AEBVlocale@0@@Z @ 0x1800AD4DC (--$use_facet@V-$collate@D@std@@@std@@YAAEBV-$collate@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$messages@D@std@@@std@@YAAEBV?$messages@D@0@AEBVlocale@0@@Z @ 0x1800AD618 (--$use_facet@V-$messages@D@std@@@std@@YAAEBV-$messages@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800AD754 (--$use_facet@V-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEB.c)
 *     ??$use_facet@V?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800AD890 (--$use_facet@V-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEB.c)
 *     ??$use_facet@V?$moneypunct@D$00@std@@@std@@YAAEBV?$moneypunct@D$00@0@AEBVlocale@0@@Z @ 0x1800AD9CC (--$use_facet@V-$moneypunct@D$00@std@@@std@@YAAEBV-$moneypunct@D$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@D$0A@@std@@@std@@YAAEBV?$moneypunct@D$0A@@0@AEBVlocale@0@@Z @ 0x1800ADB08 (--$use_facet@V-$moneypunct@D$0A@@std@@@std@@YAAEBV-$moneypunct@D$0A@@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800ADC44 (--$use_facet@V-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEBV.c)
 *     ??$use_facet@V?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800ADD80 (--$use_facet@V-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEBV.c)
 *     ?_Getcat@?$collate@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800AE028 (-_Getcat@-$collate@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Init@?$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x1800AFB9C (-_Init@-$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?_Init@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x1800AFD44 (-_Init@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@IEAAXAEBV_Locinfo@2.c)
 *     _Getcoll @ 0x1800B2FEC (_Getcoll.c)
 */

// Hidden C++ exception states: #wind=22
void __fastcall std::locale::_Locimp::_Makexloc(
        const struct std::_Locinfo *a1,
        int a2,
        void **a3,
        const struct std::locale *a4)
{
  char v6; // r15
  _Collvec *v8; // rax
  struct std::locale::facet *v9; // rbx
  unsigned __int64 v10; // r8
  struct std::locale::facet *v11; // rdx
  unsigned __int64 v12; // rbx
  struct std::_Facet_base *v13; // rax
  struct std::locale::facet *v14; // rax
  struct std::locale::facet *v15; // rbx
  unsigned __int64 v16; // r8
  struct std::locale::facet *v17; // rdx
  unsigned __int64 v18; // rbx
  struct std::_Facet_base *v19; // rax
  struct std::locale::facet *v20; // rax
  struct std::locale::facet *v21; // rbx
  unsigned __int64 v22; // r8
  struct std::locale::facet *v23; // rax
  struct std::locale::facet *v24; // rbx
  unsigned __int64 v25; // r8
  struct std::locale::facet *v26; // rdx
  unsigned __int64 v27; // rbx
  struct std::_Facet_base *v28; // rax
  unsigned __int64 v29; // rbx
  struct std::_Facet_base *v30; // rax
  _DWORD *v31; // rbx
  unsigned __int64 v32; // r8
  struct std::locale::facet *v33; // rax
  struct std::locale::facet *v34; // rbx
  unsigned __int64 v35; // r8
  struct std::locale::facet *v36; // rdx
  unsigned __int64 v37; // rbx
  struct std::_Facet_base *v38; // rax
  unsigned __int64 v39; // rbx
  struct std::_Facet_base *v40; // rax
  struct std::locale::facet *v41; // rax
  struct std::locale::facet *v42; // rbx
  unsigned __int64 v43; // r8
  struct std::locale::facet *v44; // rax
  struct std::locale::facet *v45; // rbx
  unsigned __int64 v46; // r8
  struct std::locale::facet *v47; // rdx
  unsigned __int64 v48; // rbx
  struct std::_Facet_base *v49; // rax
  unsigned __int64 v50; // rbx
  struct std::_Facet_base *v51; // rax
  _Collvec v52; // [rsp+28h] [rbp-18h] BYREF
  char v53; // [rsp+78h] [rbp+38h] BYREF

  v6 = a2;
  if ( ((1 << std::collate<char>::_Getcat(0LL, 0LL) >> 1) & a2) != 0 )
  {
    if ( a4 )
    {
      v12 = std::collate<char>::id;
      if ( !std::collate<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v53, 0);
        if ( !std::collate<char>::id )
          std::collate<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v53);
        v12 = std::collate<char>::id;
      }
      v13 = std::use_facet<std::collate<char>>((__int64 *)a4);
      v10 = v12;
      v11 = v13;
    }
    else
    {
      v8 = (_Collvec *)operator new(0x20uLL);
      v9 = (struct std::locale::facet *)v8;
      *(_QWORD *)&v52._Page = v8;
      if ( v8 )
      {
        LODWORD(v8->_LocaleName) = 0;
        *(_QWORD *)&v8->_Page = &std::collate<char>::`vftable';
        v8[1] = *Getcoll(&v52);
      }
      else
      {
        v9 = 0LL;
      }
      v10 = std::collate<char>::id;
      if ( !std::collate<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v53, 0);
        if ( !std::collate<char>::id )
          std::collate<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v53);
        v10 = std::collate<char>::id;
      }
      v11 = v9;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v11, v10);
  }
  if ( (v6 & 0x20) != 0 )
  {
    if ( a4 )
    {
      v18 = std::messages<char>::id;
      if ( !std::messages<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v53, 0);
        if ( !std::messages<char>::id )
          std::messages<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v53);
        v18 = std::messages<char>::id;
      }
      v19 = std::use_facet<std::messages<char>>((__int64 *)a4);
      v16 = v18;
      v17 = v19;
    }
    else
    {
      v14 = (struct std::locale::facet *)operator new(0x10uLL);
      v15 = v14;
      *(_QWORD *)&v52._Page = v14;
      if ( v14 )
      {
        *((_DWORD *)v14 + 2) = 0;
        *(_QWORD *)v14 = &std::messages<char>::`vftable';
      }
      else
      {
        v15 = 0LL;
      }
      v16 = std::messages<char>::id;
      if ( !std::messages<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v53, 0);
        if ( !std::messages<char>::id )
          std::messages<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v53);
        v16 = std::messages<char>::id;
      }
      v17 = v15;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v17, v16);
  }
  if ( (v6 & 4) != 0 )
  {
    if ( a4 )
    {
      v27 = std::money_get<char,std::istreambuf_iterator<char>>::id;
      if ( !std::money_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v53, 0);
        if ( !std::money_get<char,std::istreambuf_iterator<char>>::id )
          std::money_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v53);
        v27 = std::money_get<char,std::istreambuf_iterator<char>>::id;
      }
      v28 = std::use_facet<std::money_get<char,std::istreambuf_iterator<char>>>((__int64 *)a4);
      std::locale::_Locimp::_Locimp_Addfac(a3, v28, v27);
      v29 = std::money_put<char,std::ostreambuf_iterator<char>>::id;
      if ( !std::money_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v53, 0);
        if ( !std::money_put<char,std::ostreambuf_iterator<char>>::id )
          std::money_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v53);
        v29 = std::money_put<char,std::ostreambuf_iterator<char>>::id;
      }
      v30 = std::use_facet<std::money_put<char,std::ostreambuf_iterator<char>>>((__int64 *)a4);
      v25 = v29;
      v26 = v30;
    }
    else
    {
      v20 = (struct std::locale::facet *)operator new(0x10uLL);
      v21 = v20;
      *(_QWORD *)&v52._Page = v20;
      if ( v20 )
      {
        *((_DWORD *)v20 + 2) = 0;
        *(_QWORD *)v20 = &std::money_get<char,std::istreambuf_iterator<char>>::`vftable';
      }
      else
      {
        v21 = 0LL;
      }
      v22 = std::money_get<char,std::istreambuf_iterator<char>>::id;
      if ( !std::money_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v53, 0);
        if ( !std::money_get<char,std::istreambuf_iterator<char>>::id )
          std::money_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v53);
        v22 = std::money_get<char,std::istreambuf_iterator<char>>::id;
      }
      std::locale::_Locimp::_Locimp_Addfac(a3, v21, v22);
      v23 = (struct std::locale::facet *)operator new(0x10uLL);
      v24 = v23;
      *(_QWORD *)&v52._Page = v23;
      if ( v23 )
      {
        *((_DWORD *)v23 + 2) = 0;
        *(_QWORD *)v23 = &std::money_put<char,std::ostreambuf_iterator<char>>::`vftable';
      }
      else
      {
        v24 = 0LL;
      }
      v25 = std::money_put<char,std::ostreambuf_iterator<char>>::id;
      if ( !std::money_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v53, 0);
        if ( !std::money_put<char,std::ostreambuf_iterator<char>>::id )
          std::money_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v53);
        v25 = std::money_put<char,std::ostreambuf_iterator<char>>::id;
      }
      v26 = v24;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v26, v25);
  }
  if ( (v6 & 4) != 0 )
  {
    if ( a4 )
    {
      v37 = std::moneypunct<char,0>::id;
      if ( !std::moneypunct<char,0>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v53, 0);
        if ( !std::moneypunct<char,0>::id )
          std::moneypunct<char,0>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v53);
        v37 = std::moneypunct<char,0>::id;
      }
      v38 = std::use_facet<std::moneypunct<char,0>>((__int64 *)a4);
      std::locale::_Locimp::_Locimp_Addfac(a3, v38, v37);
      v39 = std::moneypunct<char,1>::id;
      if ( !std::moneypunct<char,1>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v53, 0);
        if ( !std::moneypunct<char,1>::id )
          std::moneypunct<char,1>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v53);
        v39 = std::moneypunct<char,1>::id;
      }
      v40 = std::use_facet<std::moneypunct<char,1>>((__int64 *)a4);
      v35 = v39;
      v36 = v40;
    }
    else
    {
      v31 = operator new(0x78uLL);
      *(_QWORD *)&v52._Page = v31;
      if ( v31 )
      {
        v31[2] = 0;
        *(_QWORD *)v31 = &std::moneypunct<char,1>::`vftable';
        *((_BYTE *)v31 + 68) = 0;
        std::_Mpunct<char>::_Init((__int64)v31, (__int64)a1, 0);
        *(_QWORD *)v31 = &std::moneypunct<char,1>::`vftable';
      }
      else
      {
        v31 = 0LL;
      }
      v32 = std::moneypunct<char,0>::id;
      if ( !std::moneypunct<char,0>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v53, 0);
        if ( !std::moneypunct<char,0>::id )
          std::moneypunct<char,0>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v53);
        v32 = std::moneypunct<char,0>::id;
      }
      std::locale::_Locimp::_Locimp_Addfac(a3, (struct std::locale::facet *)v31, v32);
      v33 = (struct std::locale::facet *)operator new(0x78uLL);
      v34 = v33;
      *(_QWORD *)&v52._Page = v33;
      if ( v33 )
      {
        *((_DWORD *)v33 + 2) = 0;
        *(_QWORD *)v33 = &std::moneypunct<char,1>::`vftable';
        *((_BYTE *)v33 + 68) = 1;
        std::_Mpunct<char>::_Init((__int64)v33, (__int64)a1, 0);
        *(_QWORD *)v34 = &std::moneypunct<char,1>::`vftable';
      }
      else
      {
        v34 = 0LL;
      }
      v35 = std::moneypunct<char,1>::id;
      if ( !std::moneypunct<char,1>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v53, 0);
        if ( !std::moneypunct<char,1>::id )
          std::moneypunct<char,1>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v53);
        v35 = std::moneypunct<char,1>::id;
      }
      v36 = v34;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v36, v35);
  }
  if ( (v6 & 0x10) != 0 )
  {
    if ( a4 )
    {
      v48 = std::time_get<char,std::istreambuf_iterator<char>>::id;
      if ( !std::time_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v53, 0);
        if ( !std::time_get<char,std::istreambuf_iterator<char>>::id )
          std::time_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v53);
        v48 = std::time_get<char,std::istreambuf_iterator<char>>::id;
      }
      v49 = std::use_facet<std::time_get<char,std::istreambuf_iterator<char>>>((__int64 *)a4);
      std::locale::_Locimp::_Locimp_Addfac(a3, v49, v48);
      v50 = std::time_put<char,std::ostreambuf_iterator<char>>::id;
      if ( !std::time_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v53, 0);
        if ( !std::time_put<char,std::ostreambuf_iterator<char>>::id )
          std::time_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v53);
        v50 = std::time_put<char,std::ostreambuf_iterator<char>>::id;
      }
      v51 = std::use_facet<std::time_put<char,std::ostreambuf_iterator<char>>>((__int64 *)a4);
      v46 = v50;
      v47 = v51;
    }
    else
    {
      v41 = (struct std::locale::facet *)operator new(0x60uLL);
      v42 = v41;
      *(_QWORD *)&v52._Page = v41;
      if ( v41 )
      {
        *((_DWORD *)v41 + 2) = 0;
        *(_QWORD *)v41 = &std::time_get<char,std::istreambuf_iterator<char>>::`vftable';
        std::time_get<char,std::istreambuf_iterator<char>>::_Init((__int64)v41, (__int64)a1);
      }
      else
      {
        v42 = 0LL;
      }
      v43 = std::time_get<char,std::istreambuf_iterator<char>>::id;
      if ( !std::time_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v53, 0);
        if ( !std::time_get<char,std::istreambuf_iterator<char>>::id )
          std::time_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v53);
        v43 = std::time_get<char,std::istreambuf_iterator<char>>::id;
      }
      std::locale::_Locimp::_Locimp_Addfac(a3, v42, v43);
      v44 = (struct std::locale::facet *)operator new(0x18uLL);
      v45 = v44;
      *(_QWORD *)&v52._Page = v44;
      if ( v44 )
      {
        *((_DWORD *)v44 + 2) = 0;
        *(_QWORD *)v44 = &std::time_put<char,std::ostreambuf_iterator<char>>::`vftable';
        *((_QWORD *)v44 + 2) = 0LL;
        *((_QWORD *)v44 + 2) = _Gettnames();
        free(0LL);
      }
      else
      {
        v45 = 0LL;
      }
      v46 = std::time_put<char,std::ostreambuf_iterator<char>>::id;
      if ( !std::time_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v53, 0);
        if ( !std::time_put<char,std::ostreambuf_iterator<char>>::id )
          std::time_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v53);
        v46 = std::time_put<char,std::ostreambuf_iterator<char>>::id;
      }
      v47 = v45;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v47, v46);
  }
}
