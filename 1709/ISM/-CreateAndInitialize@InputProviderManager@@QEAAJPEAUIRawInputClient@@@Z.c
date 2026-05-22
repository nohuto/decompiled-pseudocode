/*
 * XREFs of ?CreateAndInitialize@InputProviderManager@@QEAAJPEAUIRawInputClient@@@Z @ 0x18003606C
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004384 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAX$$QEAUInputProvider@@@Z @ 0x180036244 (--$emplace_back@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@st.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x1800CB21C (IsGetMPCInputPostProcessorPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputProviderManager::CreateAndInitialize(InputProviderManager *this, struct IRawInputClient *a2)
{
  const char *v4; // r9
  int v5; // ebx
  __int64 v6; // rcx
  int v7; // edi
  unsigned int v8; // esi
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int128 v13; // [rsp+30h] [rbp-71h] BYREF
  __int64 v14; // [rsp+40h] [rbp-61h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp-59h] BYREF
  char v16; // [rsp+58h] [rbp-49h]
  int v17; // [rsp+60h] [rbp-41h]
  __int64 (__fastcall *v18)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+68h] [rbp-39h]
  __int64 v19; // [rsp+70h] [rbp-31h]
  char v20; // [rsp+78h] [rbp-29h]
  int v21; // [rsp+80h] [rbp-21h]
  __int64 (__fastcall *v22)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+88h] [rbp-19h]
  __int64 v23; // [rsp+90h] [rbp-11h]
  bool v24; // [rsp+98h] [rbp-9h]
  int v25; // [rsp+A0h] [rbp-1h]
  __int64 (__fastcall *v26)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+A8h] [rbp+7h]
  __int64 v27; // [rsp+B0h] [rbp+Fh]
  bool v28; // [rsp+B8h] [rbp+17h]
  int v29; // [rsp+C0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v15[0] = LegacyInjectionRawInputProvider::Create;
  v15[1] = 23989LL;
  v16 = 1;
  v17 = 0;
  v18 = WGIRawInputProvider::Create;
  v19 = 0x7FFFLL;
  v20 = 1;
  v21 = 0;
  v22 = MPCRawInputProvider::Create;
  v23 = 0x7FFFLL;
  v24 = (unsigned __int8)IsGetMPCInputPostProcessorPresent(this) != 0;
  v25 = 0;
  v26 = RIMRawInputProvider::Create;
  v27 = 0x7FFFLL;
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v4);
    __debugbreak();
  }
  v28 = *(_BYTE *)ISMTestMode::s_instance == 0;
  v5 = 0;
  v6 = gdwDeviceFamily;
  if ( ((1LL << gdwDeviceFamily) & 0x5DB5) != 0 )
  {
    v6 = gdwMitConfig;
    v5 = (8 * ((gdwMitConfig & 4) == 0)) | (16 * ((gdwMitConfig & 4) == 0)) | (32 * ((gdwMitConfig & 4) == 0)) | (2 * ((gdwMitConfig & 1) == 0)) | (4 * ((gdwMitConfig & 2) == 0)) | 0xC0;
  }
  v29 = v5 | ((unsigned __int8)IsGetMPCInputPostProcessorPresent(v6) != 0 ? 27648 : 18432);
  v7 = 0;
  v8 = 0;
  v9 = v15;
  do
  {
    if ( v7 < 0 )
      break;
    v10 = 0LL;
    v14 = 0LL;
    v11 = v9[1];
    if ( _bittest64(&v11, gdwDeviceFamily) && *((_BYTE *)v9 + 16) )
    {
      v7 = ((__int64 (__fastcall *)(struct IRawInputClient *, _QWORD, __int64 *))*v9)(
             a2,
             *((unsigned int *)v9 + 6),
             &v14);
      if ( v7 >= 0 )
      {
        v13 = *(_OWORD *)(v9 + 1);
        std::vector<InputProvider>::emplace_back<InputProvider>(this, &v13);
      }
      v10 = v14;
    }
    if ( v10 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    ++v8;
    v9 += 4;
  }
  while ( v8 < 4 );
  return (unsigned int)v7;
}
