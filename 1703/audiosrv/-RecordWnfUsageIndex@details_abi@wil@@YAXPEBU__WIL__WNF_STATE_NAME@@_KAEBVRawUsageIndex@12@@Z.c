/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180028780
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180029600 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180029684 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180029D90 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x180029F50 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18002A208 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x18002A220 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180057F30 (_alloca_probe.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x1800AD9E8 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        unsigned __int16 *a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  const struct __WIL__WNF_STATE_NAME *v5; // rdi
  const struct __WIL__WNF_STATE_NAME *v6; // r15
  unsigned __int64 v7; // rsi
  const struct __WIL__WNF_TYPE_ID *v8; // rdx
  const void *v9; // r8
  wil::details *v10; // rbx
  int v11; // edx
  unsigned int v12; // eax
  char v13; // bl
  int updated; // eax
  void *v15; // [rsp+20h] [rbp-E0h]
  int v16; // [rsp+28h] [rbp-D8h]
  unsigned int v17; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+60h] [rbp-A0h]
  _BYTE *v22; // [rsp+70h] [rbp-90h]
  _BYTE v23[24]; // [rsp+80h] [rbp-80h] BYREF
  void *v24; // [rsp+98h] [rbp-68h]
  __int64 v25; // [rsp+A0h] [rbp-60h]
  void *v26; // [rsp+B0h] [rbp-50h]
  char v27; // [rsp+B8h] [rbp-48h]
  char v28; // [rsp+B9h] [rbp-47h]
  __int64 v29; // [rsp+C0h] [rbp-40h]
  __int64 (__fastcall **v30)(); // [rsp+C8h] [rbp-38h] BYREF
  __int128 v31; // [rsp+D0h] [rbp-30h]
  _BYTE *v32; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall ***v33)(); // [rsp+130h] [rbp+30h]
  _BYTE v34[4096]; // [rsp+140h] [rbp+40h] BYREF

  v29 = -2LL;
  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v20 = 0LL;
  while ( 1 )
  {
    LOBYTE(v16) = *((_BYTE *)a3 + 8);
    LOWORD(v15) = a3[3];
    LOBYTE(a4) = *((_BYTE *)a3 + 4);
    wil::details_abi::RawUsageIndex::RawUsageIndex(v23, *a3, a3[1], a4, (_DWORD)v15, v16);
    v18 = 4096;
    v10 = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(v5, v8, v9, &v17, v34, &v18);
    wil::details::NtStatusToHr(v10, v11);
    if ( (_DWORD)v10 )
    {
      v12 = 0;
      v18 = 0;
      v17 = 0;
    }
    else
    {
      v12 = v18;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v23, v34, v12, 0x1000uLL);
    if ( v28 )
      break;
    v19 = 0LL;
    *(_QWORD *)&v21 = &v19;
    *((_QWORD *)&v21 + 1) = &v20;
    v22 = v23;
    v30 = off_1800DBFE0;
    v31 = v21;
    v32 = v23;
    v33 = &v30;
    v13 = wil::details_abi::RawUsageIndex::Iterate(a3, &v30);
    if ( v27 )
    {
      updated = wil_details_NtUpdateWnfStateData(v5, v24, (int)v25 - (int)v24, a4, v15, v17, 1u);
      if ( updated == -1073741823 )
      {
        ++v7;
        v13 = 0;
        goto LABEL_7;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData(v5, v24, v25 - (_DWORD)v24, a4, v15, 0, 0);
    }
    v5 = (const struct __WIL__WNF_STATE_NAME *)((char *)v5 + 8);
    v20 = v19;
LABEL_7:
    if ( v26 )
      operator delete(v26);
    if ( v13 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  if ( v26 )
    operator delete(v26);
}
