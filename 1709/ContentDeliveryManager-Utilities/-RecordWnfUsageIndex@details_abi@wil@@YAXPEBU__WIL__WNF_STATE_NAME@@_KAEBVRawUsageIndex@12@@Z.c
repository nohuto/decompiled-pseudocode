/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x1800098C0
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180009D58 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180001EA0 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180002FA8 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x180007310 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x1800073A8 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180008B40 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180008D48 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x1800B4D70 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        const void *a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  const void *v4; // rdi
  const struct __WIL__WNF_STATE_NAME *v5; // rsi
  const struct __WIL__WNF_STATE_NAME *v6; // r12
  unsigned __int64 v7; // r15
  unsigned __int16 v8; // r9
  __int16 v9; // cx
  __int64 v10; // rax
  wil::details *v11; // rbx
  unsigned int v12; // eax
  char v13; // cl
  char v14; // cl
  const struct __WIL__WNF_TYPE_ID *v15; // r9
  int v16; // ebx
  __int64 (__fastcall ***v17)(); // rdx
  char v18; // bl
  __int64 (__fastcall ***v19)(); // rdx
  int updated; // eax
  const struct __WIL__WNF_TYPE_ID *v21; // r9
  void *v22; // r14
  HANDLE ProcessHeap; // rax
  void *v24; // rbx
  HANDLE v25; // rax
  __int64 *v26; // [rsp+20h] [rbp-E0h]
  void *v27; // [rsp+20h] [rbp-E0h]
  unsigned int v28; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 *v30; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v32; // [rsp+68h] [rbp-98h]
  _WORD v33[2]; // [rsp+80h] [rbp-80h] BYREF
  char v34; // [rsp+84h] [rbp-7Ch]
  unsigned __int16 v35; // [rsp+86h] [rbp-7Ah]
  char v36; // [rsp+88h] [rbp-78h]
  __int64 v37; // [rsp+90h] [rbp-70h]
  void *v38; // [rsp+98h] [rbp-68h]
  __int64 v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  LPVOID lpMem; // [rsp+B0h] [rbp-50h]
  __int16 v42; // [rsp+B8h] [rbp-48h]
  char v43; // [rsp+BAh] [rbp-46h]
  __int64 v44; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v46; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v47; // [rsp+D8h] [rbp-28h] BYREF
  char v48; // [rsp+DAh] [rbp-26h]
  unsigned int v49; // [rsp+DCh] [rbp-24h]
  unsigned __int16 v50; // [rsp+E0h] [rbp-20h]
  __int128 v51; // [rsp+E8h] [rbp-18h]
  __int64 v52; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v53; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v54[3]; // [rsp+108h] [rbp+8h] BYREF
  __int64 (__fastcall **v55)(); // [rsp+120h] [rbp+20h] BYREF
  __int128 v56; // [rsp+128h] [rbp+28h]
  _WORD *v57; // [rsp+138h] [rbp+38h]
  wil::details::in1diag3 *v58; // [rsp+188h] [rbp+88h]
  _WORD v59[2048]; // [rsp+190h] [rbp+90h] BYREF

  v54[1] = -2LL;
  v4 = a3;
  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v45 = 0LL;
  while ( 1 )
  {
    LOBYTE(a3) = *((_BYTE *)v4 + 8);
    v8 = *((_WORD *)v4 + 3);
    LOBYTE(a2) = *((_BYTE *)v4 + 4);
    v9 = *((_WORD *)v4 + 1);
    v33[0] = *(_WORD *)v4;
    v33[1] = v9;
    v34 = (char)a2;
    v35 = v8;
    v36 = (char)a3;
    if ( v8 )
    {
      v10 = v8;
      if ( (_BYTE)a3 == 1 )
      {
        v10 = v8 + 2LL;
      }
      else if ( (_BYTE)a3 == 2 )
      {
        v10 = v8 + 4LL;
      }
      v37 = v10;
    }
    else
    {
      v37 = 0LL;
    }
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    lpMem = 0LL;
    v42 = 0;
    v43 = 0;
    v28 = 4096;
    v11 = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(v5, a2, a3, &v29, v59, &v28);
    wil::details::NtStatusToHr(v11);
    if ( (_DWORD)v11 )
    {
      v12 = 0;
      v28 = 0;
      v29 = 0;
    }
    else
    {
      v12 = v28;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v33, v59, v12, (const char *)0x1000);
    if ( HIBYTE(v42) )
      break;
    v44 = 0LL;
    *(_QWORD *)&v31 = &v44;
    *((_QWORD *)&v31 + 1) = &v45;
    *(_QWORD *)&v32 = v33;
    v55 = off_1800C0908;
    v56 = v31;
    v57 = v33;
    v58 = (wil::details::in1diag3 *)&v55;
    v54[2] = &v55;
    v30 = (unsigned __int8 *)(*((_QWORD *)v4 + 3) + 10LL);
    v13 = *((_BYTE *)v4 + 4);
    LOWORD(v31) = *((_WORD *)v4 + 1);
    BYTE2(v31) = v13;
    DWORD1(v31) = 0;
    WORD4(v31) = 0;
    v32 = 0LL;
    v14 = *((_BYTE *)v4 + 8);
    v47 = *((_WORD *)v4 + 3);
    v48 = v14;
    v49 = 0;
    v50 = 0;
    v51 = 0LL;
LABEL_14:
    while ( wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v31,
              &v30,
              *((unsigned __int8 **)v4 + 4)) )
    {
      v16 = 0;
      if ( DWORD1(v31) )
      {
        while ( wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v47,
                  &v30,
                  *((unsigned __int8 **)v4 + 4)) )
        {
          v28 = v49;
          v52 = v50;
          v53 = *((_QWORD *)&v51 + 1);
          v54[0] = WORD4(v31);
          v46 = *((_QWORD *)&v32 + 1);
          if ( !v58 )
            wil::details::in1diag3::FailFastImmediate_Unexpected(0LL);
          v26 = &v52;
          if ( !(*(unsigned __int8 (__fastcall **)(wil::details::in1diag3 *, __int64 *, _QWORD *, __int64 *))(*(_QWORD *)v58 + 16LL))(
                  v58,
                  &v46,
                  v54,
                  &v53) )
          {
            if ( v58 )
            {
              v17 = &v55;
              LOBYTE(v17) = v58 != (wil::details::in1diag3 *)&v55;
              (*(void (__fastcall **)(wil::details::in1diag3 *, __int64 (__fastcall ***)()))(*(_QWORD *)v58 + 24LL))(
                v58,
                v17);
            }
            v18 = 0;
            goto LABEL_27;
          }
          if ( (unsigned int)++v16 >= DWORD1(v31) )
            goto LABEL_14;
        }
      }
    }
    if ( v58 )
    {
      v19 = &v55;
      LOBYTE(v19) = v58 != (wil::details::in1diag3 *)&v55;
      (*(void (__fastcall **)(wil::details::in1diag3 *, __int64 (__fastcall ***)()))(*(_QWORD *)v58 + 24LL))(v58, v19);
    }
    v18 = 1;
LABEL_27:
    if ( !(_BYTE)v42 )
      goto LABEL_32;
    updated = wil_details_NtUpdateWnfStateData(v5, v38, (int)v39 - (int)v38, v15, v26, v29, 1u);
    if ( updated != -1073741823 )
    {
      if ( updated )
        wil_details_NtUpdateWnfStateData(v5, v38, v39 - (_DWORD)v38, v21, v27, 0, 0);
LABEL_32:
      v5 = (const struct __WIL__WNF_STATE_NAME *)((char *)v5 + 8);
      v45 = v44;
      goto LABEL_33;
    }
    ++v7;
    v18 = 0;
LABEL_33:
    v22 = lpMem;
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v22);
    }
    if ( v18 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v24 = lpMem;
  if ( lpMem )
  {
    v25 = GetProcessHeap();
    HeapFree(v25, 0, v24);
  }
}
