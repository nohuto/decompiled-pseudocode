/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180031434
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180031B48 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x1800320D0 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180032200 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x1800323C0 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18003434C (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x180034364 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180036B40 (-MemoryFree@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800467B0 (_alloca_probe.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x180068734 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 */

void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        unsigned __int16 *a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  unsigned __int64 v4; // rsi
  const struct __WIL__WNF_STATE_NAME *v5; // r15
  const struct __WIL__WNF_STATE_NAME *v7; // rdi
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
  unsigned int v18; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v21; // [rsp+58h] [rbp-A8h]
  _BYTE *v22; // [rsp+68h] [rbp-98h]
  _BYTE v23[24]; // [rsp+70h] [rbp-90h] BYREF
  void *v24; // [rsp+88h] [rbp-78h]
  __int64 v25; // [rsp+90h] [rbp-70h]
  void *v26; // [rsp+A0h] [rbp-60h]
  char v27; // [rsp+A8h] [rbp-58h]
  char v28; // [rsp+A9h] [rbp-57h]
  __int64 (__fastcall **v29)(); // [rsp+B0h] [rbp-50h] BYREF
  __int128 v30; // [rsp+B8h] [rbp-48h]
  _BYTE *v31; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall ***v32)(); // [rsp+118h] [rbp+18h]
  _BYTE v33[4096]; // [rsp+120h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v20 = 0LL;
  v7 = this;
  while ( 1 )
  {
    LOBYTE(a4) = *((_BYTE *)a3 + 4);
    LOBYTE(v16) = *((_BYTE *)a3 + 8);
    LOWORD(v15) = a3[3];
    wil::details_abi::RawUsageIndex::RawUsageIndex(v23, *a3, a3[1], a4, (_DWORD)v15, v16);
    v17 = 4096;
    v10 = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(v7, v8, v9, &v18, v33, &v17);
    wil::details::NtStatusToHr(v10, v11);
    if ( (_DWORD)v10 )
    {
      v12 = 0;
      v18 = 0;
      v17 = 0;
    }
    else
    {
      v12 = v17;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v23, v33, v12, 0x1000uLL);
    if ( v28 )
      break;
    v19 = 0LL;
    *(_QWORD *)&v21 = &v19;
    *((_QWORD *)&v21 + 1) = &v20;
    v22 = v23;
    v29 = off_1800A40F0;
    v32 = &v29;
    v30 = v21;
    v31 = v23;
    v13 = wil::details_abi::RawUsageIndex::Iterate(a3, &v29);
    if ( v27 )
    {
      updated = wil_details_NtUpdateWnfStateData(v7, v24, (int)v25 - (int)v24, a4, v15, v18, 1u);
      if ( updated == -1073741823 )
      {
        ++v4;
        v13 = 0;
        goto LABEL_7;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData(v7, v24, v25 - (_DWORD)v24, a4, v15, 0, 0);
    }
    v7 = (const struct __WIL__WNF_STATE_NAME *)((char *)v7 + 8);
    v20 = v19;
LABEL_7:
    if ( v26 )
      MemoryFree(v26);
    if ( v13 || v7 >= v5 || v4 >= 0x32 )
      return;
  }
  if ( v26 )
    MemoryFree(v26);
}
