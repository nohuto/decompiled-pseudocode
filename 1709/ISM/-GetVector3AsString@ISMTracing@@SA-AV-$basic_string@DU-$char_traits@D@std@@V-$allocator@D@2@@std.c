/*
 * XREFs of ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x18005EED8
 * Callers:
 *     ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18005EFDC (-LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180028C1C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@M@Z @ 0x18005ED98 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@M@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x1800603CC (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_1800603CC.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x18006047C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18006047C.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ISMTracing::GetVector3AsString(__int64 a1, float *a2)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v11[4]; // [rsp+30h] [rbp-81h] BYREF
  unsigned __int64 v12[4]; // [rsp+50h] [rbp-61h] BYREF
  unsigned __int64 v13[4]; // [rsp+70h] [rbp-41h] BYREF
  unsigned __int64 v14[4]; // [rsp+90h] [rbp-21h] BYREF
  unsigned __int64 v15[4]; // [rsp+B0h] [rbp-1h] BYREF
  unsigned __int64 Src[4]; // [rsp+D0h] [rbp+1Fh] BYREF

  v4 = std::to_string(Src, a2[2]);
  v5 = std::to_string(v15, a2[1]);
  v6 = std::to_string(v14, *a2);
  v7 = std::operator+<char>(v13, v6);
  v8 = std::operator+<char>(v12, v7, v5);
  v9 = std::operator+<char>(v11, v8);
  std::operator+<char>(a1, v9, v4);
  std::string::~string(v11);
  std::string::~string(v12);
  std::string::~string(v13);
  std::string::~string(v14);
  std::string::~string(v15);
  std::string::~string(Src);
  return a1;
}
