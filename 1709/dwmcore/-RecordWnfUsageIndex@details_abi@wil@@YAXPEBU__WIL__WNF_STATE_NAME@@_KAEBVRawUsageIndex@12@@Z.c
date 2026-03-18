/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x1800796C0
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x18007A158 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x18007A6F4 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x18007A824 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x18007A9E4 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18007AE98 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x18007AEB0 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800C0D9C (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800C5DF0 (_alloca_probe.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x180135054 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
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
  void *v13; // rdx
  void *v14; // rdx
  char v15; // bl
  int updated; // eax
  void *v17; // [rsp+20h] [rbp-E0h]
  int v18; // [rsp+28h] [rbp-D8h]
  unsigned int v19; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v23; // [rsp+58h] [rbp-A8h]
  _BYTE *v24; // [rsp+68h] [rbp-98h]
  _BYTE v25[24]; // [rsp+70h] [rbp-90h] BYREF
  void *v26; // [rsp+88h] [rbp-78h]
  __int64 v27; // [rsp+90h] [rbp-70h]
  wil::details *v28; // [rsp+A0h] [rbp-60h]
  char v29; // [rsp+A8h] [rbp-58h]
  char v30; // [rsp+A9h] [rbp-57h]
  __int64 (__fastcall **v31)(); // [rsp+B0h] [rbp-50h] BYREF
  __int128 v32; // [rsp+B8h] [rbp-48h]
  _BYTE *v33; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall ***v34)(); // [rsp+118h] [rbp+18h]
  _BYTE v35[4096]; // [rsp+120h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v22 = 0LL;
  v7 = this;
  while ( 1 )
  {
    LOBYTE(a4) = *((_BYTE *)a3 + 4);
    LOBYTE(v18) = *((_BYTE *)a3 + 8);
    LOWORD(v17) = a3[3];
    wil::details_abi::RawUsageIndex::RawUsageIndex(v25, *a3, a3[1], a4, (_DWORD)v17, v18);
    v19 = 4096;
    v10 = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(v7, v8, v9, &v20, v35, &v19);
    wil::details::NtStatusToHr(v10, v11);
    if ( (_DWORD)v10 )
    {
      v12 = 0;
      v20 = 0;
      v19 = 0;
    }
    else
    {
      v12 = v19;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v25, v35, v12, 0x1000uLL);
    if ( v30 )
      break;
    v21 = 0LL;
    *(_QWORD *)&v23 = &v21;
    *((_QWORD *)&v23 + 1) = &v22;
    v24 = v25;
    v31 = off_1801DD390;
    v34 = &v31;
    v32 = v23;
    v33 = v25;
    v15 = wil::details_abi::RawUsageIndex::Iterate(a3, &v31);
    if ( v29 )
    {
      updated = wil_details_NtUpdateWnfStateData(v7, v26, (int)v27 - (int)v26, a4, v17, v20, 1u);
      if ( updated == -1073741823 )
      {
        ++v4;
        v15 = 0;
        goto LABEL_7;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData(v7, v26, v27 - (_DWORD)v26, a4, v17, 0, 0);
    }
    v7 = (const struct __WIL__WNF_STATE_NAME *)((char *)v7 + 8);
    v22 = v21;
LABEL_7:
    if ( v28 )
      wil::details::FreeProcessHeap(v28, v14);
    if ( v15 || v7 >= v5 || v4 >= 0x32 )
      return;
  }
  if ( v28 )
    wil::details::FreeProcessHeap(v28, v13);
}
