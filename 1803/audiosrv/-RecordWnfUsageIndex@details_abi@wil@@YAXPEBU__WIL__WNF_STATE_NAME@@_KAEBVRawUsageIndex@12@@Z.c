/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180007968
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180006CEC (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x18000637C (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180006AC8 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x180006C14 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180007AEC (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x180017DE4 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180065740 (_alloca_probe.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x1800B3A84 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  const struct __WIL__WNF_STATE_NAME *v5; // rdi
  const struct __WIL__WNF_STATE_NAME *v6; // r15
  unsigned __int64 v7; // rsi
  const struct __WIL__WNF_TYPE_ID *v8; // rdx
  const void *v9; // r8
  unsigned int v10; // ebx
  int v11; // edx
  unsigned int v12; // eax
  char v13; // bl
  const struct __WIL__WNF_TYPE_ID *v14; // r9
  int updated; // eax
  const struct __WIL__WNF_TYPE_ID *v16; // r9
  void *v17; // [rsp+20h] [rbp-E0h]
  void *v18; // [rsp+20h] [rbp-E0h]
  unsigned int v19; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+60h] [rbp-A0h]
  _BYTE *v24; // [rsp+70h] [rbp-90h]
  _BYTE v25[24]; // [rsp+80h] [rbp-80h] BYREF
  void *v26; // [rsp+98h] [rbp-68h]
  __int64 v27; // [rsp+A0h] [rbp-60h]
  void *v28; // [rsp+B0h] [rbp-50h]
  char v29; // [rsp+B8h] [rbp-48h]
  char v30; // [rsp+B9h] [rbp-47h]
  __int64 v31; // [rsp+C0h] [rbp-40h]
  __int64 (__fastcall **v32)(); // [rsp+C8h] [rbp-38h] BYREF
  __int128 v33; // [rsp+D0h] [rbp-30h]
  _BYTE *v34; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall ***v35)(); // [rsp+130h] [rbp+30h]
  _WORD v36[2048]; // [rsp+140h] [rbp+40h] BYREF

  v31 = -2LL;
  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v22 = 0LL;
  while ( 1 )
  {
    wil::details_abi::RawUsageIndex::RawUsageIndex(
      (__int64)v25,
      *(_WORD *)a3,
      *(_WORD *)(a3 + 2),
      *(_BYTE *)(a3 + 4),
      *(_WORD *)(a3 + 6),
      *(_BYTE *)(a3 + 8));
    v20 = 4096;
    v10 = wil_details_NtQueryWnfStateData(v5, v8, v9, &v19, v36, &v20);
    wil::details::NtStatusToHr((wil::details *)v10, v11);
    if ( v10 )
    {
      v12 = 0;
      v20 = 0;
      v19 = 0;
    }
    else
    {
      v12 = v20;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v25, v36, v12, (const char *)0x1000);
    if ( v30 )
      break;
    v21 = 0LL;
    *(_QWORD *)&v23 = &v21;
    *((_QWORD *)&v23 + 1) = &v22;
    v24 = v25;
    v32 = off_1801217C8;
    v33 = v23;
    v34 = v25;
    v35 = &v32;
    v13 = wil::details_abi::RawUsageIndex::Iterate(a3, (__int64)&v32);
    if ( v29 )
    {
      updated = wil_details_NtUpdateWnfStateData(v5, v26, (int)v27 - (int)v26, v14, v17, v19, 1u);
      if ( updated == -1073741823 )
      {
        ++v7;
        v13 = 0;
        goto LABEL_7;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData(v5, v26, v27 - (_DWORD)v26, v16, v18, 0, 0);
    }
    v5 = (const struct __WIL__WNF_STATE_NAME *)((char *)v5 + 8);
    v22 = v21;
LABEL_7:
    if ( v28 )
      operator delete(v28);
    if ( v13 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  if ( v28 )
    operator delete(v28);
}
