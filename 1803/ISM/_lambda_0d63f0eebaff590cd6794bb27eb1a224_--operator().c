/*
 * XREFs of _lambda_0d63f0eebaff590cd6794bb27eb1a224_::operator() @ 0x18003AF20
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_0d63f0eebaff590cd6794bb27eb1a224_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800424C0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_0d63f0eebaff590cd6794bb27eb1a224_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001AE4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??0?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@1@@Z @ 0x1800407FC (--0-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$variant@K_NM@2@U-$less.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@2@0@Z @ 0x180040C34 (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180044C48 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18004BB24 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?AddAndPopulateDeviceType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@Z @ 0x18004BE04 (-AddAndPopulateDeviceType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV-$map@V-$basic.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800E2000 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=53
void __fastcall lambda_0d63f0eebaff590cd6794bb27eb1a224_::operator()(_QWORD *a1)
{
  __int64 v2; // rdi
  struct MPCConstantManager *Instance; // rax
  __int128 v4; // [rsp+20h] [rbp-E8h] BYREF
  __int64 *v5; // [rsp+30h] [rbp-D8h]
  void *v6[4]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v7[32]; // [rsp+58h] [rbp-B0h] BYREF
  int v8; // [rsp+78h] [rbp-90h]
  char v9; // [rsp+7Ch] [rbp-8Ch]
  _BYTE v10[32]; // [rsp+80h] [rbp-88h] BYREF
  int v11; // [rsp+A0h] [rbp-68h]
  char v12; // [rsp+A4h] [rbp-64h]
  _BYTE v13[32]; // [rsp+A8h] [rbp-60h] BYREF
  float v14; // [rsp+C8h] [rbp-40h]
  char v15; // [rsp+CCh] [rbp-3Ch]
  _BYTE v16[32]; // [rsp+D0h] [rbp-38h] BYREF
  int v17; // [rsp+F0h] [rbp-18h]
  char v18; // [rsp+F4h] [rbp-14h]
  _BYTE v19[32]; // [rsp+F8h] [rbp-10h] BYREF
  int v20; // [rsp+118h] [rbp+10h]
  char v21; // [rsp+11Ch] [rbp+14h]
  _BYTE v22[32]; // [rsp+120h] [rbp+18h] BYREF
  int v23; // [rsp+140h] [rbp+38h]
  char v24; // [rsp+144h] [rbp+3Ch]
  _BYTE v25[32]; // [rsp+148h] [rbp+40h] BYREF
  int v26; // [rsp+168h] [rbp+60h]
  char v27; // [rsp+16Ch] [rbp+64h]
  _BYTE v28[32]; // [rsp+170h] [rbp+68h] BYREF
  float v29; // [rsp+190h] [rbp+88h]
  char v30; // [rsp+194h] [rbp+8Ch]
  _BYTE v31[32]; // [rsp+198h] [rbp+90h] BYREF
  float v32; // [rsp+1B8h] [rbp+B0h]
  char v33; // [rsp+1BCh] [rbp+B4h]
  _BYTE v34[32]; // [rsp+1C0h] [rbp+B8h] BYREF
  float v35; // [rsp+1E0h] [rbp+D8h]
  char v36; // [rsp+1E4h] [rbp+DCh]
  _BYTE v37[32]; // [rsp+1E8h] [rbp+E0h] BYREF
  float v38; // [rsp+208h] [rbp+100h]
  char v39; // [rsp+20Ch] [rbp+104h]
  _BYTE v40[40]; // [rsp+210h] [rbp+108h] BYREF
  _BYTE v41[32]; // [rsp+238h] [rbp+130h] BYREF
  float v42; // [rsp+258h] [rbp+150h]
  char v43; // [rsp+25Ch] [rbp+154h]
  _BYTE v44[32]; // [rsp+260h] [rbp+158h] BYREF
  int v45; // [rsp+280h] [rbp+178h]
  char v46; // [rsp+284h] [rbp+17Ch]
  _BYTE v47[32]; // [rsp+288h] [rbp+180h] BYREF
  float v48; // [rsp+2A8h] [rbp+1A0h]
  char v49; // [rsp+2ACh] [rbp+1A4h]
  _BYTE v50[32]; // [rsp+2B0h] [rbp+1A8h] BYREF
  float v51; // [rsp+2D0h] [rbp+1C8h]
  char v52; // [rsp+2D4h] [rbp+1CCh]
  _BYTE v53[32]; // [rsp+2D8h] [rbp+1D0h] BYREF
  float v54; // [rsp+2F8h] [rbp+1F0h]
  char v55; // [rsp+2FCh] [rbp+1F4h]
  _BYTE v56[32]; // [rsp+300h] [rbp+1F8h] BYREF
  int v57; // [rsp+320h] [rbp+218h]
  char v58; // [rsp+324h] [rbp+21Ch]
  _BYTE v59[32]; // [rsp+328h] [rbp+220h] BYREF
  int v60; // [rsp+348h] [rbp+240h]
  char v61; // [rsp+34Ch] [rbp+244h]
  _BYTE v62[32]; // [rsp+350h] [rbp+248h] BYREF
  float v63; // [rsp+370h] [rbp+268h]
  char v64; // [rsp+374h] [rbp+26Ch]
  _BYTE v65[32]; // [rsp+378h] [rbp+270h] BYREF
  int v66; // [rsp+398h] [rbp+290h]
  char v67; // [rsp+39Ch] [rbp+294h]
  _BYTE v68[32]; // [rsp+3A0h] [rbp+298h] BYREF
  int v69; // [rsp+3C0h] [rbp+2B8h]
  char v70; // [rsp+3C4h] [rbp+2BCh]
  _BYTE v71[32]; // [rsp+3C8h] [rbp+2C0h] BYREF
  int v72; // [rsp+3E8h] [rbp+2E0h]
  char v73; // [rsp+3ECh] [rbp+2E4h]
  _BYTE v74[32]; // [rsp+3F0h] [rbp+2E8h] BYREF
  int v75; // [rsp+410h] [rbp+308h]
  char v76; // [rsp+414h] [rbp+30Ch]
  _BYTE v77[32]; // [rsp+418h] [rbp+310h] BYREF
  int v78; // [rsp+438h] [rbp+330h]
  char v79; // [rsp+43Ch] [rbp+334h]
  _BYTE v80[32]; // [rsp+440h] [rbp+338h] BYREF
  float v81; // [rsp+460h] [rbp+358h]
  char v82; // [rsp+464h] [rbp+35Ch]
  _BYTE v83[32]; // [rsp+468h] [rbp+360h] BYREF
  int v84; // [rsp+488h] [rbp+380h]
  char v85; // [rsp+48Ch] [rbp+384h]
  _BYTE v86[32]; // [rsp+490h] [rbp+388h] BYREF
  int v87; // [rsp+4B0h] [rbp+3A8h]
  char v88; // [rsp+4B4h] [rbp+3ACh]
  _BYTE v89[32]; // [rsp+4B8h] [rbp+3B0h] BYREF
  float v90; // [rsp+4D8h] [rbp+3D0h]
  char v91; // [rsp+4DCh] [rbp+3D4h]
  _BYTE v92[40]; // [rsp+4E0h] [rbp+3D8h] BYREF
  _BYTE v93[40]; // [rsp+508h] [rbp+400h] BYREF
  _BYTE v94[40]; // [rsp+530h] [rbp+428h] BYREF
  _BYTE v95[32]; // [rsp+558h] [rbp+450h] BYREF
  int v96; // [rsp+578h] [rbp+470h]
  char v97; // [rsp+57Ch] [rbp+474h]
  _BYTE v98[32]; // [rsp+580h] [rbp+478h] BYREF
  int v99; // [rsp+5A0h] [rbp+498h]
  char v100; // [rsp+5A4h] [rbp+49Ch]
  _BYTE v101[32]; // [rsp+5A8h] [rbp+4A0h] BYREF
  int v102; // [rsp+5C8h] [rbp+4C0h]
  char v103; // [rsp+5CCh] [rbp+4C4h]
  _BYTE v104[32]; // [rsp+5D0h] [rbp+4C8h] BYREF
  int v105; // [rsp+5F0h] [rbp+4E8h]
  char v106; // [rsp+5F4h] [rbp+4ECh]
  _BYTE v107[32]; // [rsp+5F8h] [rbp+4F0h] BYREF
  int v108; // [rsp+618h] [rbp+510h]
  char v109; // [rsp+61Ch] [rbp+514h]
  _BYTE v110[32]; // [rsp+620h] [rbp+518h] BYREF
  int v111; // [rsp+640h] [rbp+538h]
  char v112; // [rsp+644h] [rbp+53Ch]
  _BYTE v113[32]; // [rsp+648h] [rbp+540h] BYREF
  int v114; // [rsp+668h] [rbp+560h]
  char v115; // [rsp+66Ch] [rbp+564h]
  _BYTE v116[32]; // [rsp+670h] [rbp+568h] BYREF
  int v117; // [rsp+690h] [rbp+588h]
  char v118; // [rsp+694h] [rbp+58Ch]
  _BYTE v119[32]; // [rsp+698h] [rbp+590h] BYREF
  int v120; // [rsp+6B8h] [rbp+5B0h]
  char v121; // [rsp+6BCh] [rbp+5B4h]
  _BYTE v122[32]; // [rsp+6C0h] [rbp+5B8h] BYREF
  int v123; // [rsp+6E0h] [rbp+5D8h]
  char v124; // [rsp+6E4h] [rbp+5DCh]
  _BYTE v125[32]; // [rsp+6E8h] [rbp+5E0h] BYREF
  int v126; // [rsp+708h] [rbp+600h]
  char v127; // [rsp+70Ch] [rbp+604h]
  _BYTE v128[32]; // [rsp+710h] [rbp+608h] BYREF
  int v129; // [rsp+730h] [rbp+628h]
  char v130; // [rsp+734h] [rbp+62Ch]
  _BYTE v131[32]; // [rsp+738h] [rbp+630h] BYREF
  int v132; // [rsp+758h] [rbp+650h]
  char v133; // [rsp+75Ch] [rbp+654h]
  _BYTE v134[32]; // [rsp+760h] [rbp+658h] BYREF
  int v135; // [rsp+780h] [rbp+678h]
  char v136; // [rsp+784h] [rbp+67Ch]
  _BYTE v137[32]; // [rsp+788h] [rbp+680h] BYREF
  int v138; // [rsp+7A8h] [rbp+6A0h]
  char v139; // [rsp+7ACh] [rbp+6A4h]
  _BYTE v140[32]; // [rsp+7B0h] [rbp+6A8h] BYREF
  int v141; // [rsp+7D0h] [rbp+6C8h]
  char v142; // [rsp+7D4h] [rbp+6CCh]
  _BYTE v143[32]; // [rsp+7D8h] [rbp+6D0h] BYREF
  int v144; // [rsp+7F8h] [rbp+6F0h]
  char v145; // [rsp+7FCh] [rbp+6F4h]
  _BYTE v146[32]; // [rsp+800h] [rbp+6F8h] BYREF
  int v147; // [rsp+820h] [rbp+718h]
  char v148; // [rsp+824h] [rbp+71Ch]
  _BYTE v149[32]; // [rsp+828h] [rbp+720h] BYREF
  int v150; // [rsp+848h] [rbp+740h]
  char v151; // [rsp+84Ch] [rbp+744h]
  _BYTE v152[32]; // [rsp+850h] [rbp+748h] BYREF
  int v153; // [rsp+870h] [rbp+768h]
  char v154; // [rsp+874h] [rbp+76Ch]
  __int64 v155; // [rsp+878h] [rbp+770h] BYREF

  v6[2] = (void *)-2LL;
  std::string::string(v7);
  v8 = 1056964608;
  v9 = 2;
  std::string::string(v10);
  v11 = 1036831949;
  v12 = 2;
  std::string::string(v13);
  v14 = FLOAT_30_0;
  v15 = 2;
  std::string::string(v16);
  v17 = 1065353216;
  v18 = 2;
  std::string::string(v19);
  v20 = 1015222895;
  v21 = 2;
  std::string::string(v22);
  v23 = 1015222895;
  v24 = 2;
  std::string::string(v25);
  v26 = 0;
  v27 = 2;
  std::string::string(v28);
  v29 = FLOAT_27_5;
  v30 = 2;
  std::string::string(v31);
  v32 = FLOAT_45_0;
  v33 = 2;
  std::string::string(v34);
  v35 = FLOAT_0_80000001;
  v36 = 2;
  std::string::string(v37);
  v38 = FLOAT_0_029999999;
  v39 = 2;
  std::string::string(v40);
  v40[32] = 1;
  v40[36] = 1;
  std::string::string(v41);
  v42 = FLOAT_15_0;
  v43 = 2;
  std::string::string(v44);
  v45 = 1065353216;
  v46 = 2;
  std::string::string(v47);
  v48 = FLOAT_300_0;
  v49 = 2;
  std::string::string(v50);
  v51 = FLOAT_1000_0;
  v52 = 2;
  std::string::string(v53);
  v54 = FLOAT_0_001;
  v55 = 2;
  std::string::string(v56);
  v57 = 1028443341;
  v58 = 2;
  std::string::string(v59);
  v60 = 10;
  v2 = 0LL;
  v61 = 0;
  std::string::string(v62);
  v63 = FLOAT_0_017999999;
  v64 = 2;
  std::string::string(v65);
  v66 = 1028443341;
  v67 = 2;
  std::string::string(v68);
  v69 = 1028443341;
  v70 = 2;
  std::string::string(v71);
  v72 = 1036831949;
  v73 = 2;
  std::string::string(v74);
  v75 = 15625;
  v76 = 0;
  std::string::string(v77);
  v78 = 1056964608;
  v79 = 2;
  std::string::string(v80);
  v81 = FLOAT_0_2;
  v82 = 2;
  std::string::string(v83);
  v84 = 8;
  v85 = 0;
  std::string::string(v86);
  v87 = 1050253722;
  v88 = 2;
  std::string::string(v89);
  v90 = FLOAT_0_25;
  v91 = 2;
  std::string::string(v92);
  v92[32] = 1;
  v92[36] = 1;
  std::string::string(v93);
  v93[32] = 1;
  v93[36] = 1;
  std::string::string(v94);
  v94[32] = 0;
  v94[36] = 1;
  std::string::string(v95);
  v96 = 1060320051;
  v97 = 2;
  std::string::string(v98);
  v99 = 1060320051;
  v100 = 2;
  std::string::string(v101);
  v102 = 1050253722;
  v103 = 2;
  std::string::string(v104);
  v105 = 1176256512;
  v106 = 2;
  std::string::string(v107);
  v108 = 1176256512;
  v109 = 2;
  std::string::string(v110);
  v111 = 1176256512;
  v112 = 2;
  std::string::string(v113);
  v114 = 1176256512;
  v115 = 2;
  std::string::string(v116);
  v117 = 1176256512;
  v118 = 2;
  std::string::string(v119);
  v120 = 1176256512;
  v121 = 2;
  std::string::string(v122);
  v123 = 1176256512;
  v124 = 2;
  std::string::string(v125);
  v126 = 1176256512;
  v127 = 2;
  std::string::string(v128);
  v129 = 1176256512;
  v130 = 2;
  std::string::string(v131);
  v132 = 1176256512;
  v133 = 2;
  std::string::string(v134);
  v135 = 1176256512;
  v136 = 2;
  std::string::string(v137);
  v138 = 1176256512;
  v139 = 2;
  std::string::string(v140);
  v141 = 1056964608;
  v142 = 2;
  std::string::string(v143);
  v144 = 0;
  v145 = 2;
  std::string::string(v146);
  v147 = 1120403456;
  v148 = 2;
  std::string::string(v149);
  v150 = 1120403456;
  v151 = 2;
  std::string::string(v152);
  v153 = 1;
  v154 = 0;
  *((_QWORD *)&v4 + 1) = v7;
  v5 = &v155;
  std::map<std::string,std::variant<unsigned long,bool,float>>::map<std::string,std::variant<unsigned long,bool,float>>((int)v6);
  if ( *a1 )
    v2 = *a1 + 24LL;
  Instance = MPCConstantManager::GetInstance();
  MPCConstantManager::AddAndPopulateDeviceType(Instance, v2, v6);
  std::_Tree<std::_Tmap_traits<std::string,std::variant<unsigned long,bool,float>,std::less<std::string>,std::allocator<std::pair<std::string const,std::variant<unsigned long,bool,float>>>,0>>::erase(
    v6,
    (char *)&v4 + 8,
    *(_QWORD *)v6[0]);
  std::_Deallocate((char *)v6[0], 1uLL, 0x48uLL);
  `eh vector destructor iterator'(
    v7,
    0x28uLL,
    0x34uLL,
    std::pair<std::string const,std::variant<unsigned long,bool,float>>::~pair<std::string const,std::variant<unsigned long,bool,float>>);
}
