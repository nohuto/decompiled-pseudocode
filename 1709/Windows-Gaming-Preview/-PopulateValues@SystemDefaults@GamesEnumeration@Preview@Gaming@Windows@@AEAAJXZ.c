/*
 * XREFs of ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003F090
 * Callers:
 *     ?PopulateValuesThreadProc@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003F020 (-PopulateValuesThreadProc@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CAL.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010A78 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180014338 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z @ 0x180015874 (-JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z.c)
 *     ??0?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAA@AEBV01@@Z @ 0x18002B8EC (--0-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetDefaultGameModeProfile@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@PEAKPEA_K1PEA_N3@Z @ 0x18003F380 (-GetDefaultGameModeProfile@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV-$share.c)
 *     std::shared_ptr_ExecutionModel::IGameConfigStore_::_Resetp_ExecutionModel::IGameConfigStore__lambda_c62bb885f9f6d79a34c1c24d88aff06c___ @ 0x18003F558 (std--shared_ptr_ExecutionModel--IGameConfigStore_--_Resetp_ExecutionModel--IGameCon_ea_18003F558.c)
 *     __security_check_cookie @ 0x180040F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateValues(
        Windows::Gaming::Preview::GamesEnumeration::SystemDefaults *this)
{
  int v2; // eax
  __int64 v3; // r8
  unsigned int v4; // edi
  __int64 v5; // rsi
  DWORD ActiveProcessorCount; // r14d
  _QWORD *v7; // rax
  bool *v8; // rdi
  int *v9; // r12
  __int64 v10; // rcx
  int DefaultGameModeProfile; // eax
  int v12; // eax
  HRESULT v13; // eax
  HSTRING v14; // rdi
  __int64 v15; // rcx
  int ActivationFactory; // eax
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rbx
  _BYTE v23[8]; // [rsp+58h] [rbp-49h] BYREF
  __int64 v24; // [rsp+60h] [rbp-41h] BYREF
  __int128 v25; // [rsp+68h] [rbp-39h] BYREF
  __int64 v26; // [rsp+78h] [rbp-29h] BYREF
  __int128 v27; // [rsp+80h] [rbp-21h] BYREF
  _QWORD v28[3]; // [rsp+90h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp+7h] BYREF
  HSTRING string; // [rsp+C0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v28[2] = -2LL;
  v26 = 0LL;
  v25 = 0LL;
  v2 = CreateGameConfigStoreClient(&v26);
  v4 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x88,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)v2);
    v5 = *((_QWORD *)&v25 + 1);
    goto LABEL_26;
  }
  v23[1] = 0;
  v27 = 0LL;
  LOBYTE(v3) = 0;
  std::shared_ptr_ExecutionModel::IGameConfigStore_::_Resetp_ExecutionModel::IGameConfigStore__lambda_c62bb885f9f6d79a34c1c24d88aff06c___(
    &v27,
    v26,
    v3);
  v5 = *((_QWORD *)&v27 + 1);
  v25 = v27;
  ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
  v23[0] = 0;
  v7 = std::shared_ptr<ExecutionModel::IGameConfigStore>::shared_ptr<ExecutionModel::IGameConfigStore>(
         v28,
         (__int64 *)&v25);
  v8 = (bool *)this + 28;
  v9 = (int *)((char *)this + 24);
  DefaultGameModeProfile = Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::GetDefaultGameModeProfile(
                             v10,
                             v7,
                             (char *)this + 8,
                             (char *)this + 16,
                             (char *)this + 24,
                             (char *)this + 28,
                             v23);
  if ( DefaultGameModeProfile >= 0 )
  {
    if ( v23[0] )
      goto LABEL_10;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x91,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)DefaultGameModeProfile);
  }
  if ( ActiveProcessorCount == 2 )
  {
    *v9 = 0;
  }
  else
  {
    *v8 = 1;
    if ( ActiveProcessorCount == 4 )
      *v9 = 2;
  }
LABEL_10:
  WindowsDeleteString(*((HSTRING *)this + 4));
  *((_QWORD *)this + 4) = 0LL;
  v12 = JsonDocumentFromGameConfigValues(
          *((_DWORD *)this + 2),
          *((HSTRING *)this + 2),
          *v9,
          1,
          *v8,
          0,
          0,
          0LL,
          (HSTRING *)this + 4);
  v4 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xB5,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_26;
  }
  v24 = 0LL;
  string = 0LL;
  v13 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v13 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
    __debugbreak();
  }
  v14 = string;
  v15 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  ActivationFactory = RoGetActivationFactory(v14, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v24);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v17 = 186LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_24;
  }
  v18 = v24;
  v19 = *((_QWORD *)this + 5);
  if ( v19 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v18 + 144LL))(
                        v18,
                        *((_QWORD *)this + 4),
                        (char *)this + 40);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v17 = 188LL;
    goto LABEL_22;
  }
  v4 = 0;
LABEL_24:
  v20 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
LABEL_26:
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
    {
      v21 = *((_QWORD *)&v25 + 1);
      (***((void (__fastcall ****)(_QWORD))&v25 + 1))(*((_QWORD *)&v25 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v25 + 1) + 8LL))(*((_QWORD *)&v25 + 1));
    }
  }
  return v4;
}
