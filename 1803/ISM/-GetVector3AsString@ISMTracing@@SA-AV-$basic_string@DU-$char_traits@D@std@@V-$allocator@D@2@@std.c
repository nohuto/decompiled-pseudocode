/*
 * XREFs of ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x18004AFDC
 * Callers:
 *     ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18004B0E0 (-LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x18004A828 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x18004AB50 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18004AB50.c)
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@M@Z @ 0x18004AE9C (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@M@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ISMTracing::GetVector3AsString(__int64 a1, float *a2)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r8
  size_t *v8; // rax
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // r8
  size_t *v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned __int64 v21[4]; // [rsp+30h] [rbp-81h] BYREF
  unsigned __int64 v22[4]; // [rsp+50h] [rbp-61h] BYREF
  unsigned __int64 v23[4]; // [rsp+70h] [rbp-41h] BYREF
  unsigned __int64 v24[4]; // [rsp+90h] [rbp-21h] BYREF
  unsigned __int64 v25[4]; // [rsp+B0h] [rbp-1h] BYREF
  unsigned __int64 Src[4]; // [rsp+D0h] [rbp+1Fh] BYREF

  v4 = std::to_string(Src, a2[2]);
  v5 = std::to_string(v25, a2[1]);
  v6 = std::to_string(v24, *a2);
  v8 = (size_t *)std::operator+<char>((__int64)v23, v6, v7);
  v10 = (_QWORD *)std::operator+<char>((__int64)v22, v8, (__int64)v5, v9);
  v12 = (size_t *)std::operator+<char>((__int64)v21, v10, v11);
  std::operator+<char>(a1, v12, (__int64)v4, v13);
  std::string::~string(v21, v14);
  std::string::~string(v22, v15);
  std::string::~string(v23, v16);
  std::string::~string(v24, v17);
  std::string::~string(v25, v18);
  std::string::~string(Src, v19);
  return a1;
}
