/*
 * XREFs of _anonymous_namespace_::SendFramesReport @ 0x1800D1C28
 * Callers:
 *     _anonymous_namespace_::SendFramesReports @ 0x1800CFD60 (_anonymous_namespace_--SendFramesReports.c)
 * Callees:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::clear @ 0x180024034 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--Animat.c)
 *     std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buyheadnode @ 0x180024128 (std--_Tree_comp_alloc_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155a6.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _anonymous_namespace_::QpcToFileTimeAndGetCurrentFileTime @ 0x1800CFE94 (_anonymous_namespace_--QpcToFileTimeAndGetCurrentFileTime.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@@Z @ 0x1800D1AD8 (-_Erase@-$_Tree@V-$_Tmap_traits@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     _anonymous_namespace_::GlobalResourceCountersEncoder::Serialize @ 0x1800D1B0C (_anonymous_namespace_--GlobalResourceCountersEncoder--Serialize.c)
 *     ??$_Insert_range@PEAD@?$vector@DV?$allocator@D@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@D@std@@@std@@@1@PEAD1Uforward_iterator_tag@1@@Z @ 0x1800D2434 (--$_Insert_range@PEAD@-$vector@DV-$allocator@D@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 *     ??$emplace_back@AEBE@?$vector@EV?$allocator@E@std@@@std@@QEAAXAEBE@Z @ 0x1800D2608 (--$emplace_back@AEBE@-$vector@EV-$allocator@E@std@@@std@@QEAAXAEBE@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800D26B4 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     _anonymous_namespace_::ProcessAttributionResourceCountersEncoder::Serialize @ 0x1800D26EC (_anonymous_namespace_--ProcessAttributionResourceCountersEncoder--Serialize.c)
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x1800D28B0 (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x1800D3084 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x1800D30DC (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?EncodeBlock@Base853Encoder@@AEAAXXZ @ 0x1800D3354 (-EncodeBlock@Base853Encoder@@AEAAXXZ.c)
 *     ??$_Lbound@I@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@1@AEBI@Z @ 0x1800D35E4 (--$_Lbound@I@-$_Tree@V-$_Tmap_traits@IIU-$less@I@std@@V-$allocator@U-$pair@$$CBII@std@@@2@$0A@@s.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800D3740 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap_.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@0@Z @ 0x1800D38A0 (-erase@-$_Tree@V-$_Tmap_traits@IIU-$less@I@std@@V-$allocator@U-$pair@$$CBII@std@@@2@$0A@@std@@@s.c)
 *     _TlgCreateSz @ 0x1800D4258 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?AppendByte@Base853Encoder@@QEAAXE@Z @ 0x180140A64 (-AppendByte@Base853Encoder@@QEAAXE@Z.c)
 *     ??$_Try_emplace@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@std@@_N@1@$$QEAPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180147138 (--$_Try_emplace@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@PEBV-.c)
 *     std::map__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Try_emplace__anonymous_namespace_::AnimationId_const_&___ptr64_ @ 0x1801471F4 (std--map__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--AnimationId--_ea_1801471F4.c)
 *     std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64______std::_Iterator_base0_::operator__ @ 0x1801473EC (std--_Tree_unchecked_const_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180147438 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@V-$basic_string@GU-$char_.c)
 *     _anonymous_namespace_::Compressor::Compress @ 0x18014ADAC (_anonymous_namespace_--Compressor--Compress.c)
 */

void __fastcall anonymous_namespace_::SendFramesReport(__int64 **a1)
{
  __int64 **v1; // r15
  __int64 v2; // rdx
  _QWORD *v3; // r10
  char *v4; // r12
  __int64 v5; // r13
  int v6; // edi
  __int64 *v7; // rbx
  unsigned int **v8; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // r14
  unsigned int **v11; // r15
  unsigned int *v12; // r13
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // r10
  LPCSTR *v16; // rax
  LPCSTR *v17; // r9
  LPCSTR *v18; // r8
  char *v19; // r9
  _QWORD *v20; // rax
  int v21; // edi
  __int64 *v22; // rbx
  __int64 **v23; // rbx
  __int64 **v24; // rax
  void *v25; // rax
  int v26; // esi
  __int64 *v27; // rax
  __int64 **v28; // rbx
  __int64 **v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // r12
  LPCSTR *v33; // rax
  LPCSTR *v34; // rcx
  LPCSTR *v35; // r14
  LPCSTR *v36; // rax
  signed __int64 v37; // rsi
  __int64 v38; // rdi
  LPCSTR *v39; // rax
  DWORD CurrentProcessId; // eax
  const CHAR *v41; // rdx
  __int64 v42; // rax
  unsigned __int16 v43; // dx
  int v44; // eax
  const CHAR *v45; // rdx
  const CHAR *v46; // rdx
  __int64 *v47; // rbx
  __int64 v48; // rax
  __int16 *v49; // rdi
  int v50; // r14d
  int *v51; // r15
  int v52; // r12d
  __int16 *v53; // rsi
  __int16 *v54; // r15
  __int16 v55; // di
  unsigned __int8 *v56; // rdi
  __int64 v57; // rsi
  __m128i si128; // xmm0
  unsigned __int64 v59; // rbx
  __int128 v60; // xmm0
  __m128i v61; // xmm1
  __int64 v62; // rdi
  _DWORD *v63; // rax
  unsigned int v64; // edx
  signed int LastError; // eax
  char v66; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v67[7]; // [rsp+39h] [rbp-CFh] BYREF
  __int64 v68; // [rsp+40h] [rbp-C8h] BYREF
  int v69[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 **v70; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v71; // [rsp+58h] [rbp-B0h] BYREF
  void *v72; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v73; // [rsp+68h] [rbp-A0h]
  char *v74; // [rsp+70h] [rbp-98h] BYREF
  __int64 v75; // [rsp+78h] [rbp-90h]
  __int64 v76; // [rsp+80h] [rbp-88h]
  LPCSTR *v77; // [rsp+88h] [rbp-80h] BYREF
  __int64 v78; // [rsp+90h] [rbp-78h]
  int v79; // [rsp+98h] [rbp-70h]
  void *v80; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v81; // [rsp+A8h] [rbp-60h]
  int v82; // [rsp+B0h] [rbp-58h]
  __int128 v83; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v84; // [rsp+C8h] [rbp-40h]
  __int64 v85; // [rsp+D0h] [rbp-38h] BYREF
  DWORD pSessionId; // [rsp+E0h] [rbp-28h] BYREF
  int v87[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v88; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v89; // [rsp+100h] [rbp-8h]
  unsigned __int64 v90; // [rsp+108h] [rbp+0h] BYREF
  unsigned __int64 v91; // [rsp+110h] [rbp+8h]
  __int64 v92; // [rsp+120h] [rbp+18h] BYREF
  __int64 v93; // [rsp+128h] [rbp+20h] BYREF
  int v94; // [rsp+130h] [rbp+28h] BYREF
  void *lpMem[2]; // [rsp+138h] [rbp+30h]
  LPCSTR psz[2]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v97; // [rsp+158h] [rbp+50h]
  unsigned __int64 v98; // [rsp+160h] [rbp+58h]
  LPCSTR v99[2]; // [rsp+168h] [rbp+60h] BYREF
  __m128i v100; // [rsp+178h] [rbp+70h]
  LPCSTR v101[2]; // [rsp+188h] [rbp+80h] BYREF
  __m128i v102; // [rsp+198h] [rbp+90h]
  __int128 v103; // [rsp+1A8h] [rbp+A0h] BYREF
  __m128i v104; // [rsp+1B8h] [rbp+B0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C8h] [rbp+C0h] BYREF
  int *v106; // [rsp+1E8h] [rbp+E0h]
  __int64 v107; // [rsp+1F0h] [rbp+E8h]
  __int64 *v108; // [rsp+1F8h] [rbp+F0h]
  __int64 v109; // [rsp+200h] [rbp+F8h]
  DWORD *p_pSessionId; // [rsp+208h] [rbp+100h]
  __int64 v111; // [rsp+210h] [rbp+108h]
  __int64 v112; // [rsp+218h] [rbp+110h]
  __int64 v113; // [rsp+220h] [rbp+118h]
  __int64 *v114; // [rsp+228h] [rbp+120h]
  __int64 v115; // [rsp+230h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+238h] [rbp+130h] BYREF
  __int64 *v117; // [rsp+248h] [rbp+140h]
  __int64 v118; // [rsp+250h] [rbp+148h]
  char *v119; // [rsp+258h] [rbp+150h]
  int v120; // [rsp+260h] [rbp+158h]
  int v121; // [rsp+264h] [rbp+15Ch]
  __int64 v122; // [rsp+268h] [rbp+160h]
  int v123; // [rsp+270h] [rbp+168h]
  int v124; // [rsp+274h] [rbp+16Ch]
  struct _EVENT_DATA_DESCRIPTOR v125; // [rsp+278h] [rbp+170h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v126; // [rsp+288h] [rbp+180h] BYREF
  void *retaddr; // [rsp+2D0h] [rbp+1C8h]

  v70 = a1;
  v1 = a1;
  v97 = 0LL;
  v98 = 15LL;
  LOBYTE(psz[0]) = 0;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v3 = (_QWORD *)std::_Allocate<std::_Default_allocate_traits<1>>(1uLL, 0x28uLL);
  *(_QWORD *)v87 = 0LL;
  v4 = 0LL;
  v75 = 0LL;
  *v3 = v3;
  v5 = 0LL;
  v3[1] = v3;
  v6 = 0;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  v7 = *v1;
  v72 = v3;
  *(_QWORD *)v69 = 0LL;
  v76 = 0LL;
  v8 = (unsigned int **)v7[12];
  v9 = v7[13] - (_QWORD)v8;
  v85 = 0LL;
  v10 = (unsigned __int64)(v9 + 7) >> 3;
  if ( (unsigned __int64)v8 > v7[13] )
    v10 = 0LL;
  if ( v10 )
  {
    v67[0] = 0;
    v11 = v8;
    while ( 1 )
    {
      v12 = *v11;
      v13 = **v11;
      v69[0] = v13;
      v14 = std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Lbound<unsigned int>(
              &v72,
              v69);
      if ( v14 == v15 || v13 < *(_DWORD *)(v14 + 28) )
      {
        v68 = (__int64)v69;
        v14 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                           (int)&v72,
                           (int)v87,
                           (__int64)&v68);
      }
      *(_DWORD *)(v14 + 32) = v6;
      v66 = v13;
      v69[0] = v6 + 1;
      std::vector<unsigned char>::emplace_back<unsigned char const &>(&v74, &v66);
      v66 = BYTE1(v13);
      std::vector<unsigned char>::emplace_back<unsigned char const &>(&v74, &v66);
      v66 = BYTE2(v13);
      std::vector<unsigned char>::emplace_back<unsigned char const &>(&v74, &v66);
      v66 = HIBYTE(v13);
      std::vector<unsigned char>::emplace_back<unsigned char const &>(&v74, &v66);
      v66 = v13;
      std::vector<unsigned char>::emplace_back<unsigned char const &>(&v74, &v66);
      v66 = BYTE1(v13);
      std::vector<unsigned char>::emplace_back<unsigned char const &>(&v74, &v66);
      v66 = BYTE2(v13);
      std::vector<unsigned char>::emplace_back<unsigned char const &>(&v74, &v66);
      v66 = HIBYTE(v13);
      std::vector<unsigned char>::emplace_back<unsigned char const &>(&v74, &v66);
      v97 = 0LL;
      v16 = psz;
      if ( v98 >= 0x10 )
        v16 = (LPCSTR *)psz[0];
      *(_BYTE *)v16 = 0;
      anonymous_namespace_::ProcessAttributionResourceCountersEncoder::Serialize(v12 + 1, psz);
      v17 = psz;
      v18 = psz;
      if ( v98 >= 0x10 )
        v17 = (LPCSTR *)psz[0];
      v19 = (char *)v17 + v97;
      if ( v98 >= 0x10 )
        v18 = (LPCSTR *)psz[0];
      std::vector<char>::_Insert_range<char *>(&v74, v75, v18, v19);
      std::vector<unsigned char>::emplace_back<unsigned char const &>(&v74, v67);
      operator delete(v12, 0x58uLL);
      ++v11;
      if ( ++v85 == v10 )
        break;
      v6 = v69[0];
    }
    v1 = v70;
    v5 = v76;
    v4 = v74;
    v7 = *v70;
    *(_QWORD *)v69 = v76;
    *(_QWORD *)v87 = v75;
  }
  LOWORD(v71) = v73;
  if ( v7[19] )
  {
    v47 = (__int64 *)v7[18];
    v88 = 0LL;
    v89 = 0LL;
    v48 = *v47;
    v85 = *v47;
    while ( (__int64 *)v48 != v47 )
    {
      v49 = (__int16 *)(v48 + 32);
      v50 = 0xFFFF;
      v51 = (int *)(v48 + 48);
      if ( *(_DWORD *)(v48 + 48) < 0xFFFFu )
        v50 = *v51;
      v67[0] = v50;
      std::vector<unsigned char>::emplace_back<unsigned char const &>(&v88, v67);
      v67[0] = BYTE1(v50);
      std::vector<unsigned char>::emplace_back<unsigned char const &>(&v88, v67);
      v52 = 0;
      v53 = v49;
      if ( *((_QWORD *)v49 + 3) >= 8uLL )
      {
        v53 = *(__int16 **)v49;
        v49 = *(__int16 **)v49;
      }
      if ( v53 != &v49[*(_QWORD *)v51] )
      {
        v54 = &v49[*(_QWORD *)v51];
        do
        {
          v55 = *v53;
          v67[0] = *v53;
          std::vector<unsigned char>::emplace_back<unsigned char const &>(&v88, v67);
          v67[0] = HIBYTE(v55);
          std::vector<unsigned char>::emplace_back<unsigned char const &>(&v88, v67);
          if ( ++v52 == v50 )
            break;
          ++v53;
        }
        while ( v53 != v54 );
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::wstring>>,std::_Iterator_base0>::operator++(&v85);
      v48 = v85;
    }
    anonymous_namespace_::Compressor::Compress(&v90, v2, &v88);
    v56 = (unsigned __int8 *)v90;
    v57 = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v59 = v91 - v90;
    v1 = v70;
    v4 = v74;
    if ( v90 > v91 )
      v59 = 0LL;
    LOBYTE(v103) = 0;
    v78 = 0LL;
    v79 = 0;
    v5 = *(_QWORD *)v69;
    v77 = (LPCSTR *)&v103;
    v104 = si128;
    if ( v59 )
    {
      do
      {
        Base853Encoder::AppendByte((Base853Encoder *)&v77, *v56++);
        ++v57;
      }
      while ( v57 != v59 );
    }
    Base853Encoder::EnsureZeroesAreSerialized((Base853Encoder *)&v77);
    if ( HIDWORD(v78) )
      Base853Encoder::EncodeBlock((Base853Encoder *)&v77);
    v60 = v103;
    LOBYTE(v103) = 0;
    v61 = v104;
    *(_OWORD *)v99 = v60;
    v104 = _mm_load_si128((const __m128i *)&_xmm);
    v100 = v61;
    std::vector<unsigned char>::_Tidy(&v90);
    std::vector<unsigned char>::_Tidy(&v88);
  }
  else
  {
    v100.m128i_i64[1] = 15LL;
    LOBYTE(v99[0]) = 0;
    v100.m128i_i64[0] = 0LL;
    memmove(v99, &word_18025290E, 0LL);
    LOBYTE(v99[0]) = 0;
  }
  v80 = 0LL;
  v81 = 0LL;
  v20 = (_QWORD *)std::_Allocate<std::_Default_allocate_traits<1>>(1uLL, 0x30uLL);
  v21 = 0;
  *v20 = v20;
  v20[1] = v20;
  v20[2] = v20;
  *((_WORD *)v20 + 12) = 257;
  v22 = *v1;
  v80 = v20;
  v23 = (__int64 **)v22[18];
  v24 = (__int64 **)*v23;
  v70 = (__int64 **)*v23;
  while ( v24 != v23 )
  {
    v68 = (__int64)(v24 + 4);
    std::map<std::wstring const *,unsigned int>::_Try_emplace<std::wstring const *,>((int)&v80);
    *(_DWORD *)(v85 + 40) = v21++;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::wstring>>,std::_Iterator_base0>::operator++(&v70);
    v24 = v70;
  }
  *(_OWORD *)lpMem = 0LL;
  v25 = (void *)std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buyheadnode();
  v78 = 0LL;
  v26 = 0;
  lpMem[0] = v25;
  v77 = v101;
  v27 = *v1;
  v102 = _mm_load_si128((const __m128i *)&_xmm);
  LOBYTE(v101[0]) = 0;
  v79 = 0;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v77, *((_DWORD *)v27 + 34));
  v28 = (__int64 **)(*v1)[16];
  v29 = (__int64 **)*v28;
  v70 = (__int64 **)*v28;
  while ( v29 != v28 )
  {
    v62 = (__int64)(v29 + 4);
    v63 = (_DWORD *)std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Lbound<unsigned int>(
                      &v72,
                      v29 + 4);
    if ( v63 == v72 || *(_DWORD *)v62 < v63[7] )
    {
      v68 = v62;
      v63 = *(_DWORD **)std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                          (int)&v72,
                          (int)v69,
                          (__int64)&v68);
    }
    Base853Encoder::AppendVarInt((Base853Encoder *)&v77, v63[8]);
    Base853Encoder::AppendVarInt((Base853Encoder *)&v77, *(_DWORD *)(v62 + 4));
    v85 = *(_QWORD *)(v62 + 8);
    if ( v85 )
    {
      std::map<std::wstring const *,unsigned int>::_Try_emplace<std::wstring const *,>((int)&v80);
      v64 = *(_DWORD *)(v90 + 40) + 1;
    }
    else
    {
      v64 = 0;
    }
    Base853Encoder::AppendVarInt((Base853Encoder *)&v77, v64);
    std::map__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Try_emplace__anonymous_namespace_::AnimationId_const_____ptr64_((int)&v94);
    *(_DWORD *)(v88 + 40) = v26++;
    std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64______std::_Iterator_base0_::operator__(&v70);
    v29 = v70;
  }
  Base853Encoder::EnsureZeroesAreSerialized((Base853Encoder *)&v77);
  if ( HIDWORD(v78) )
    Base853Encoder::EncodeBlock((Base853Encoder *)&v77);
  v82 = 0;
  v84 = 0LL;
  v67[0] = 0;
  v83 = 0LL;
  std::vector<unsigned char>::emplace_back<unsigned char const &>(&v83, v67);
  v67[0] = 0;
  std::vector<unsigned char>::emplace_back<unsigned char const &>(&v83, v67);
  v30 = (*v1)[1];
  v31 = **v1;
  if ( v31 != v30 )
  {
    v66 = 0;
    v32 = v30;
    do
    {
      v33 = psz;
      v97 = 0LL;
      if ( v98 >= 0x10 )
        v33 = (LPCSTR *)psz[0];
      *(_BYTE *)v33 = 0;
      anonymous_namespace_::SequenceEncoder::Serialize(v31, &v72, &v94, psz);
      ++v82;
      v34 = psz;
      v35 = psz;
      if ( v98 >= 0x10 )
        v34 = (LPCSTR *)psz[0];
      v36 = (LPCSTR *)((char *)v34 + v97);
      if ( v98 >= 0x10 )
        v35 = (LPCSTR *)psz[0];
      v37 = (char *)v36 - (char *)v35;
      v38 = 0LL;
      if ( v35 > v36 )
        v37 = 0LL;
      if ( v37 )
      {
        do
        {
          v67[0] = *((_BYTE *)v35 + v38);
          std::vector<unsigned char>::emplace_back<unsigned char const &>(&v83, v67);
          ++v38;
        }
        while ( v38 != v37 );
      }
      std::vector<unsigned char>::emplace_back<unsigned char const &>(&v83, &v66);
      v31 += 480LL;
    }
    while ( v31 != v32 );
    v4 = v74;
  }
  v97 = 0LL;
  v39 = psz;
  if ( v98 >= 0x10 )
    v39 = (LPCSTR *)psz[0];
  *(_BYTE *)v39 = 0;
  anonymous_namespace_::GlobalResourceCountersEncoder::Serialize((unsigned int *)*v1 + 6, (__int64)psz);
  anonymous_namespace_::QpcToFileTimeAndGetCurrentFileTime(*(_QWORD *)(**v1 + 464), &v93, &v92);
  CurrentProcessId = GetCurrentProcessId();
  if ( !ProcessIdToSessionId(CurrentProcessId, &pSessionId) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    ModuleFailFastForHRESULT((unsigned int)LastError, retaddr);
  }
  if ( dword_1802D3FA0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FA0, 0x400000000000uLL) )
  {
    v69[0] = 0;
    v106 = v69;
    v41 = (const CHAR *)psz;
    v107 = 4LL;
    v108 = &v92;
    v109 = 8LL;
    p_pSessionId = &pSessionId;
    v42 = (__int64)(*v1 + 20);
    v111 = 4LL;
    v112 = v42;
    if ( v98 >= 0x10 )
      v41 = psz[0];
    v113 = 16LL;
    v114 = &v93;
    v115 = 8LL;
    TlgCreateSz(&pDesc, v41);
    v117 = &v71;
    v120 = v87[0] - (_DWORD)v4;
    v118 = 2LL;
    v119 = v4;
    v121 = 0;
    *(_WORD *)v83 = v82;
    v43 = WORD4(v83) - v83;
    *(_WORD *)v83 = v82;
    v122 = v83;
    v44 = v43;
    v45 = (const CHAR *)v99;
    if ( v100.m128i_i64[1] >= 0x10uLL )
      v45 = v99[0];
    v123 = v44;
    v124 = 0;
    TlgCreateSz(&v125, v45);
    v46 = (const CHAR *)v101;
    if ( v102.m128i_i64[1] >= 0x10uLL )
      v46 = v101[0];
    TlgCreateSz(&v126, v46);
    TlgWrite((TraceLoggingHProvider)&dword_1802D3FA0, &unk_1802A5621, 0LL, 0LL, 0xDu, &pData);
  }
  std::vector<unsigned char>::_Tidy(&v83);
  if ( v102.m128i_i64[1] >= 0x10uLL )
    std::_Deallocate((char *)v101[0], v102.m128i_i64[1] + 1, 1uLL);
  v102 = _mm_load_si128((const __m128i *)&_xmm);
  LOBYTE(v101[0]) = 0;
  std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::clear((__int64)&v94);
  std::_Deallocate((char *)lpMem[0], 1uLL, 0x30uLL);
  std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Erase(
    (__int64)&v80,
    *((char **)v80 + 1));
  *((_QWORD *)v80 + 1) = v80;
  *(_QWORD *)v80 = v80;
  *((_QWORD *)v80 + 2) = v80;
  v81 = 0LL;
  std::_Deallocate((char *)v80, 1uLL, 0x30uLL);
  if ( v100.m128i_i64[1] >= 0x10uLL )
    std::_Deallocate((char *)v99[0], v100.m128i_i64[1] + 1, 1uLL);
  LOBYTE(v99[0]) = 0;
  v100 = _mm_load_si128((const __m128i *)&_xmm);
  if ( v4 )
    std::_Deallocate(v4, v5 - (_QWORD)v4, 1uLL);
  std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::erase(
    &v72,
    &v68,
    *(_QWORD *)v72,
    v72);
  std::_Deallocate((char *)v72, 1uLL, 0x28uLL);
  if ( v98 >= 0x10 )
    std::_Deallocate((char *)psz[0], v98 + 1, 1uLL);
}
