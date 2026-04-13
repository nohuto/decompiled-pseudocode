/*
 * XREFs of ?_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x18009C598
 * Callers:
 *     ?_Locimp_ctor@_Locimp@locale@std@@CAXPEAV123@AEBV123@@Z @ 0x18009C4B8 (-_Locimp_ctor@_Locimp@locale@std@@CAXPEAV123@AEBV123@@Z.c)
 * Callees:
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x18004A650 (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x180097E54 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x180097ED8 (--1_Lockit@std@@QEAA@XZ.c)
 *     _Getctype @ 0x1800988F0 (_Getctype.c)
 *     ??$use_facet@V?$codecvt@DDH@std@@@std@@YAAEBV?$codecvt@DDH@0@AEBVlocale@0@@Z @ 0x1800990FC (--$use_facet@V-$codecvt@DDH@std@@@std@@YAAEBV-$codecvt@DDH@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x180099238 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x180099374 (--$use_facet@V-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     ??$use_facet@V?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800994B0 (--$use_facet@V-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x1800995EC (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ?_Init@?$numpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18009BEC0 (-_Init@-$numpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z @ 0x18009C3C8 (-_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z.c)
 *     ?_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800A70C4 (-_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800A7D84 (-_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800AFD80 (-_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 */

// Hidden C++ exception states: #wind=10
void **__fastcall std::locale::_Locimp::_Makeloc(
        const struct std::_Locinfo *a1,
        int a2,
        void **a3,
        const struct std::locale *a4)
{
  int v8; // r15d
  char *v9; // rax
  struct std::locale::facet *v10; // rbx
  unsigned __int64 v11; // r8
  struct std::locale::facet *v12; // rdx
  unsigned __int64 v13; // rbx
  struct std::_Facet_base *v14; // rax
  struct std::locale::facet *v15; // rax
  struct std::locale::facet *v16; // rbx
  unsigned __int64 v17; // r8
  struct std::locale::facet *v18; // rax
  struct std::locale::facet *v19; // rbx
  unsigned __int64 v20; // r8
  struct std::locale::facet *v21; // rdx
  unsigned __int64 v22; // rbx
  struct std::_Facet_base *v23; // rax
  unsigned __int64 v24; // rbx
  struct std::_Facet_base *v25; // rax
  struct std::locale::facet *v26; // rax
  struct std::locale::facet *v27; // rbx
  unsigned __int64 v28; // r8
  struct std::locale::facet *v29; // rdx
  unsigned __int64 v30; // rbx
  struct std::_Facet_base *v31; // rax
  struct std::locale::facet *v32; // rax
  struct std::locale::facet *v33; // rbx
  unsigned __int64 v34; // r8
  struct std::locale::facet *v35; // rdx
  unsigned __int64 v36; // rbx
  struct std::_Facet_base *v37; // rax
  _BYTE *v38; // rdx
  _Ctypevec v40; // [rsp+28h] [rbp-28h] BYREF
  char v41; // [rsp+98h] [rbp+48h] BYREF

  v8 = a2 & 2;
  if ( (a2 & 2) != 0 )
  {
    if ( a4 )
    {
      v13 = std::ctype<char>::id;
      if ( !std::ctype<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v41, 0);
        if ( !std::ctype<char>::id )
          std::ctype<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v41);
        v13 = std::ctype<char>::id;
      }
      v14 = std::use_facet<std::ctype<char>>((__int64 *)a4);
      v11 = v13;
      v12 = v14;
    }
    else
    {
      v9 = (char *)operator new(0x30uLL);
      v10 = (struct std::locale::facet *)v9;
      if ( v9 )
      {
        *((_DWORD *)v9 + 2) = 0;
        *(_QWORD *)v9 = &std::ctype<char>::`vftable';
        *(_Ctypevec *)(v9 + 16) = *Getctype(&v40);
      }
      else
      {
        v10 = 0LL;
      }
      v11 = std::ctype<char>::id;
      if ( !std::ctype<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v41, 0);
        if ( !std::ctype<char>::id )
          std::ctype<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v41);
        v11 = std::ctype<char>::id;
      }
      v12 = v10;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v12, v11);
  }
  if ( (a2 & 8) != 0 )
  {
    if ( a4 )
    {
      v22 = std::num_get<char,std::istreambuf_iterator<char>>::id;
      if ( !std::num_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v41, 0);
        if ( !std::num_get<char,std::istreambuf_iterator<char>>::id )
          std::num_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v41);
        v22 = std::num_get<char,std::istreambuf_iterator<char>>::id;
      }
      v23 = std::use_facet<std::num_get<char,std::istreambuf_iterator<char>>>((__int64 *)a4);
      std::locale::_Locimp::_Locimp_Addfac(a3, v23, v22);
      v24 = std::num_put<char,std::ostreambuf_iterator<char>>::id;
      if ( !std::num_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v41, 0);
        if ( !std::num_put<char,std::ostreambuf_iterator<char>>::id )
          std::num_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v41);
        v24 = std::num_put<char,std::ostreambuf_iterator<char>>::id;
      }
      v25 = std::use_facet<std::num_put<char,std::ostreambuf_iterator<char>>>((__int64 *)a4);
      v20 = v24;
      v21 = v25;
    }
    else
    {
      v15 = (struct std::locale::facet *)operator new(0x10uLL);
      v16 = v15;
      if ( v15 )
      {
        *((_DWORD *)v15 + 2) = 0;
        *(_QWORD *)v15 = &std::num_get<char,std::istreambuf_iterator<char>>::`vftable';
      }
      else
      {
        v16 = 0LL;
      }
      v17 = std::num_get<char,std::istreambuf_iterator<char>>::id;
      if ( !std::num_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v41, 0);
        if ( !std::num_get<char,std::istreambuf_iterator<char>>::id )
          std::num_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v41);
        v17 = std::num_get<char,std::istreambuf_iterator<char>>::id;
      }
      std::locale::_Locimp::_Locimp_Addfac(a3, v16, v17);
      v18 = (struct std::locale::facet *)operator new(0x10uLL);
      v19 = v18;
      if ( v18 )
      {
        *((_DWORD *)v18 + 2) = 0;
        *(_QWORD *)v18 = &std::num_put<char,std::ostreambuf_iterator<char>>::`vftable';
      }
      else
      {
        v19 = 0LL;
      }
      v20 = std::num_put<char,std::ostreambuf_iterator<char>>::id;
      if ( !std::num_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v41, 0);
        if ( !std::num_put<char,std::ostreambuf_iterator<char>>::id )
          std::num_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v41);
        v20 = std::num_put<char,std::ostreambuf_iterator<char>>::id;
      }
      v21 = v19;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v21, v20);
  }
  if ( (a2 & 8) != 0 )
  {
    if ( a4 )
    {
      v30 = std::numpunct<char>::id;
      if ( !std::numpunct<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v41, 0);
        if ( !std::numpunct<char>::id )
          std::numpunct<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v41);
        v30 = std::numpunct<char>::id;
      }
      v31 = std::use_facet<std::numpunct<char>>((__int64 *)a4);
      v28 = v30;
      v29 = v31;
    }
    else
    {
      v26 = (struct std::locale::facet *)operator new(0x30uLL);
      v27 = v26;
      if ( v26 )
      {
        *((_DWORD *)v26 + 2) = 0;
        *(_QWORD *)v26 = &std::numpunct<char>::`vftable';
        std::numpunct<char>::_Init((__int64)v26, (__int64)a1, 0);
      }
      else
      {
        v27 = 0LL;
      }
      v28 = std::numpunct<char>::id;
      if ( !std::numpunct<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v41, 0);
        if ( !std::numpunct<char>::id )
          std::numpunct<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v41);
        v28 = std::numpunct<char>::id;
      }
      v29 = v27;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v29, v28);
  }
  if ( v8 )
  {
    if ( a4 )
    {
      v36 = std::codecvt<char,char,int>::id;
      if ( !std::codecvt<char,char,int>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v41, 0);
        if ( !std::codecvt<char,char,int>::id )
          std::codecvt<char,char,int>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v41);
        v36 = std::codecvt<char,char,int>::id;
      }
      v37 = std::use_facet<std::codecvt<char,char,int>>((__int64 *)a4);
      v34 = v36;
      v35 = v37;
    }
    else
    {
      v32 = (struct std::locale::facet *)operator new(0x10uLL);
      v33 = v32;
      if ( v32 )
      {
        *((_DWORD *)v32 + 2) = 0;
        *(_QWORD *)v32 = &std::codecvt<char,char,int>::`vftable';
      }
      else
      {
        v33 = 0LL;
      }
      v34 = std::codecvt<char,char,int>::id;
      if ( !std::codecvt<char,char,int>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v41, 0);
        if ( !std::codecvt<char,char,int>::id )
          std::codecvt<char,char,int>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v41);
        v34 = std::codecvt<char,char,int>::id;
      }
      v35 = v33;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v35, v34);
  }
  std::locale::_Locimp::_Makexloc(a1, a2, (struct std::locale::_Locimp *)a3, a4);
  std::locale::_Locimp::_Makewloc(a1, a2, (struct std::locale::_Locimp *)a3, a4);
  std::locale::_Locimp::_Makeushloc(a1, a2, (struct std::locale::_Locimp *)a3, a4);
  *((_DWORD *)a3 + 8) |= a2;
  v38 = (_BYTE *)*((_QWORD *)a1 + 11);
  if ( !v38 )
    v38 = (char *)a1 + 96;
  std::_Yarn<char>::operator=(a3 + 5, v38);
  return a3;
}
