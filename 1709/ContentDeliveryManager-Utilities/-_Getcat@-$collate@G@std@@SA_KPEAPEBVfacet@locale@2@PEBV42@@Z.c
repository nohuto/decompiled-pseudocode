/*
 * XREFs of ?_Getcat@?$collate@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800A3BD0
 * Callers:
 *     ??$use_facet@V?$collate@G@std@@@std@@YAAEBV?$collate@G@0@AEBVlocale@0@@Z @ 0x1800A1830 (--$use_facet@V-$collate@G@std@@@std@@YAAEBV-$collate@G@0@AEBVlocale@0@@Z.c)
 *     ?_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800A70C4 (-_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 * Callees:
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x18002630C (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x1800263A4 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 *     ?name@locale@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800AD13C (-name@locale@std@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@XZ.c)
 *     _Getcoll @ 0x1800B2FEC (_Getcoll.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800B3E2F (--3@YAXPEAX@Z_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::collate<unsigned short>::_Getcat(_Collvec **a1, __int64 a2)
{
  char v4; // bl
  _Collvec *v5; // rdi
  __int64 v6; // rax
  _Collvec v8; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v9[104]; // [rsp+40h] [rbp-A8h] BYREF
  void *v10[4]; // [rsp+A8h] [rbp-40h] BYREF

  v4 = 0;
  if ( a1 && !*a1 )
  {
    v5 = (_Collvec *)operator new(0x20uLL);
    *(_QWORD *)&v8._Page = v5;
    if ( v5 )
    {
      v6 = std::locale::name(a2, v10);
      if ( *(_QWORD *)(v6 + 24) >= 0x10uLL )
        v6 = *(_QWORD *)v6;
      std::_Locinfo::_Locinfo((std::_Locinfo *)v9, (const char *)v6);
      v4 = 3;
      LODWORD(v5->_LocaleName) = 0;
      *(_QWORD *)&v5->_Page = &std::collate<unsigned short>::`vftable';
      v5[1] = *Getcoll(&v8);
    }
    else
    {
      v5 = 0LL;
    }
    *a1 = v5;
    if ( (v4 & 2) != 0 )
    {
      v4 &= ~2u;
      std::_Locinfo::~_Locinfo((std::_Locinfo *)v9);
    }
    if ( (v4 & 1) != 0 && v10[3] >= (void *)0x10 )
      operator delete(v10[0]);
  }
  return 1LL;
}
