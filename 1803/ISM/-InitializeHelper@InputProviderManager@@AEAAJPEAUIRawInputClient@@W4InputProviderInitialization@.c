/*
 * XREFs of ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x18001A088
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x1800040D8 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?DeferredInitializeStatic@OneCoreUAPInputHost@@SAJPEAX_NPEAU_FILETIME@@@Z @ 0x180004400 (-DeferredInitializeStatic@OneCoreUAPInputHost@@SAJPEAX_NPEAU_FILETIME@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAAEAUInputProvider@@$$QEAU2@@Z @ 0x18001A260 (--$emplace_back@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@st.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x1800E262C (IsGetMPCInputPostProcessorPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputProviderManager::InitializeHelper(__int64 a1, __int64 a2, int a3)
{
  const char *v6; // r9
  __int64 v7; // rdi
  int v8; // ebx
  int v9; // ecx
  int v10; // eax
  int v11; // edi
  unsigned int v12; // esi
  _DWORD *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int128 v17; // [rsp+30h] [rbp-71h] BYREF
  _QWORD v18[3]; // [rsp+40h] [rbp-61h] BYREF
  char v19; // [rsp+58h] [rbp-49h]
  _DWORD v20[3]; // [rsp+5Ch] [rbp-45h] BYREF
  __int64 (__fastcall *v21)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+68h] [rbp-39h]
  __int64 v22; // [rsp+70h] [rbp-31h]
  char v23; // [rsp+78h] [rbp-29h]
  int v24; // [rsp+7Ch] [rbp-25h]
  int v25; // [rsp+80h] [rbp-21h]
  __int64 (__fastcall *v26)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+88h] [rbp-19h]
  __int64 v27; // [rsp+90h] [rbp-11h]
  bool v28; // [rsp+98h] [rbp-9h]
  int v29; // [rsp+9Ch] [rbp-5h]
  int v30; // [rsp+A0h] [rbp-1h]
  __int64 (__fastcall *v31)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+A8h] [rbp+7h]
  __int64 v32; // [rsp+B0h] [rbp+Fh]
  bool v33; // [rsp+B8h] [rbp+17h]
  int v34; // [rsp+BCh] [rbp+1Bh]
  int v35; // [rsp+C0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v18[1] = LegacyInjectionRawInputProvider::Create;
  v18[2] = 56757LL;
  v19 = 1;
  v20[0] = 0;
  v20[1] = 0;
  v21 = WGIRawInputProvider::Create;
  v22 = 0xFFFFLL;
  v23 = 1;
  v24 = 0;
  v25 = 0;
  v26 = MPCRawInputProvider::Create;
  v27 = 0xFFFFLL;
  v28 = (unsigned __int8)IsGetMPCInputPostProcessorPresent(a1) != 0;
  v29 = 0;
  v30 = 0;
  v31 = RIMRawInputProvider::Create;
  v32 = 0xFFFFLL;
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v6);
    JUMPOUT(0x18001A25CLL);
  }
  v33 = *(_BYTE *)ISMTestMode::s_instance == 0;
  v34 = 1;
  v7 = 1LL << gdwDeviceFamily;
  v8 = ((1LL << gdwDeviceFamily) & 0xDDB5) != 0 ? 0xC0 : 0;
  v9 = (unsigned __int8)IsGetMPCInputPostProcessorPresent(gdwDeviceFamily) != 0 ? 27648 : 18432;
  v10 = v8 | 0x80000;
  if ( (v7 & 0x224A) == 0 )
    v10 = v8;
  v35 = v10 | v9;
  v11 = 0;
  v12 = 0;
  v13 = v20;
  do
  {
    if ( v11 < 0 )
      break;
    v18[0] = 0LL;
    v14 = *(_QWORD *)(v13 - 3);
    if ( _bittest64(&v14, gdwDeviceFamily) )
    {
      if ( *((_BYTE *)v13 - 4) )
      {
        if ( *v13 == a3 )
        {
          v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(v13 - 5))(a2, (unsigned int)v13[1], v18);
          if ( v11 >= 0 )
          {
            v17 = *(_OWORD *)(v13 - 3);
            std::vector<InputProvider>::emplace_back<InputProvider>(a1, &v17);
          }
        }
      }
    }
    v15 = v18[0];
    if ( v18[0] )
    {
      v18[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    ++v12;
    v13 += 8;
  }
  while ( v12 < 4 );
  return (unsigned int)v11;
}
