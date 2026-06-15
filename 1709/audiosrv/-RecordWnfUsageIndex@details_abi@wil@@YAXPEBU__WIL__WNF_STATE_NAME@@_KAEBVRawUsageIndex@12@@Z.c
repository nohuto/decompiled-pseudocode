/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18000688C
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180006C14 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180005278 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180005C3C (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180006ABC (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x180006BA8 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x180007504 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180007594 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180036B20 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  const struct __WIL__WNF_STATE_NAME *v5; // rbx
  const struct __WIL__WNF_STATE_NAME *v6; // r15
  unsigned __int64 v7; // r14
  char v8; // r9
  __int16 v9; // r8
  char v10; // dl
  __int16 v11; // cx
  FARPROC ProcAddress; // rax
  int v13; // edx
  unsigned int v14; // edi
  unsigned int v15; // eax
  char v16; // di
  const struct __WIL__WNF_TYPE_ID *v17; // r9
  int updated; // eax
  const struct __WIL__WNF_TYPE_ID *v19; // r9
  HMODULE NtDllModuleHandle; // rax
  _WORD *v21; // [rsp+20h] [rbp-E0h]
  unsigned int v22; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-B8h]
  _WORD v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v25; // [rsp+54h] [rbp-ACh]
  __int16 v26; // [rsp+56h] [rbp-AAh]
  char v27; // [rsp+58h] [rbp-A8h]
  unsigned __int64 Size; // [rsp+60h] [rbp-A0h]
  void *v29; // [rsp+68h] [rbp-98h]
  __int64 v30; // [rsp+70h] [rbp-90h]
  __int64 v31; // [rsp+78h] [rbp-88h]
  void *v32; // [rsp+80h] [rbp-80h]
  __int16 v33; // [rsp+88h] [rbp-78h]
  char v34; // [rsp+8Ah] [rbp-76h]
  __int64 v35; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+98h] [rbp-68h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+C0h] [rbp-40h]
  __int64 (__fastcall **v40)(); // [rsp+C8h] [rbp-38h] BYREF
  __int128 v41; // [rsp+D0h] [rbp-30h]
  _WORD *v42; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall ***v43)(); // [rsp+130h] [rbp+30h]
  _WORD v44[2048]; // [rsp+140h] [rbp+40h] BYREF

  v39 = -2LL;
  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v36 = 0LL;
  while ( 1 )
  {
    v8 = *(_BYTE *)(a3 + 8);
    v9 = *(_WORD *)(a3 + 6);
    v10 = *(_BYTE *)(a3 + 4);
    v11 = *(_WORD *)(a3 + 2);
    v24[0] = *(_WORD *)a3;
    v24[1] = v11;
    v25 = v10;
    v26 = v9;
    v27 = v8;
    if ( v9 )
    {
      LOWORD(v37) = v9;
      BYTE2(v37) = v8;
      DWORD1(v37) = 0;
      WORD4(v37) = 0;
      v38 = 0LL;
      Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v37);
    }
    else
    {
      Size = 0LL;
    }
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0;
    v34 = 0;
    LODWORD(v23) = 4096;
    ProcAddress = (FARPROC)g_wil_details_pfnNtQueryWnfStateData;
    if ( g_wil_details_pfnNtQueryWnfStateData
      || (NtDllModuleHandle = wil_details_GetNtDllModuleHandle(),
          ProcAddress = GetProcAddress(NtDllModuleHandle, "NtQueryWnfStateData"),
          (g_wil_details_pfnNtQueryWnfStateData = (int (*)(const struct __WIL__WNF_STATE_NAME *, const struct __WIL__WNF_TYPE_ID *, const void *, unsigned int *, void *, unsigned int *))ProcAddress) != 0LL) )
    {
      v21 = v44;
      v14 = ((__int64 (__fastcall *)(const struct __WIL__WNF_STATE_NAME *, _QWORD, _QWORD, unsigned int *))ProcAddress)(
              v5,
              0LL,
              0LL,
              &v22);
    }
    else
    {
      v14 = -1073741511;
    }
    wil::details::NtStatusToHr((wil::details *)v14, v13);
    if ( v14 )
    {
      v15 = 0;
      LODWORD(v23) = 0;
      v22 = 0;
    }
    else
    {
      v15 = v23;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v24, v44, v15, (const char *)0x1000);
    if ( HIBYTE(v33) )
      break;
    v35 = 0LL;
    *(_QWORD *)&v37 = &v35;
    *((_QWORD *)&v37 + 1) = &v36;
    *(_QWORD *)&v38 = v24;
    v40 = off_1800F2050;
    v41 = v37;
    v42 = v24;
    v43 = &v40;
    v16 = wil::details_abi::RawUsageIndex::Iterate(a3, (__int64)&v40);
    if ( (_BYTE)v33 )
    {
      updated = wil_details_NtUpdateWnfStateData(v5, v29, (int)v30 - (int)v29, v17, v21, v22, 1u);
      if ( updated == -1073741823 )
      {
        ++v7;
        v16 = 0;
        goto LABEL_11;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData(v5, v29, v30 - (_DWORD)v29, v19, v21, 0, 0);
    }
    v5 = (const struct __WIL__WNF_STATE_NAME *)((char *)v5 + 8);
    v36 = v35;
LABEL_11:
    if ( v32 )
      operator delete(v32);
    if ( v16 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  if ( v32 )
    operator delete(v32);
}
