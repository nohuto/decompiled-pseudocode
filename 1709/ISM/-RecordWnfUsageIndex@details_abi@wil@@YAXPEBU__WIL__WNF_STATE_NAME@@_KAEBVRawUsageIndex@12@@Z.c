/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18000CE94
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x18000D334 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800033BC (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18000AE6C (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x18000B2DC (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x18000B374 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18000C31C (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x18000C520 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800CC2F0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
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
  const struct __WIL__WNF_STATE_NAME *v6; // r13
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
  unsigned int v17; // r14d
  __int64 v18; // r12
  __int64 (__fastcall ***v19)(); // rdx
  char v20; // bl
  __int64 (__fastcall ***v21)(); // rdx
  int updated; // eax
  const struct __WIL__WNF_TYPE_ID *v23; // r9
  void *v24; // r14
  HANDLE ProcessHeap; // rax
  void *v26; // rbx
  HANDLE v27; // rax
  __int64 *v28; // [rsp+20h] [rbp-E0h]
  void *v29; // [rsp+20h] [rbp-E0h]
  unsigned int v30; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 *v32; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+68h] [rbp-98h]
  _WORD v35[2]; // [rsp+80h] [rbp-80h] BYREF
  char v36; // [rsp+84h] [rbp-7Ch]
  unsigned __int16 v37; // [rsp+86h] [rbp-7Ah]
  char v38; // [rsp+88h] [rbp-78h]
  __int64 v39; // [rsp+90h] [rbp-70h]
  void *v40; // [rsp+98h] [rbp-68h]
  __int64 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  LPVOID lpMem; // [rsp+B0h] [rbp-50h]
  __int16 v44; // [rsp+B8h] [rbp-48h]
  char v45; // [rsp+BAh] [rbp-46h]
  __int64 v46; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v47; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v49; // [rsp+D8h] [rbp-28h] BYREF
  char v50; // [rsp+DAh] [rbp-26h]
  unsigned int v51; // [rsp+DCh] [rbp-24h]
  unsigned __int16 v52; // [rsp+E0h] [rbp-20h]
  __int128 v53; // [rsp+E8h] [rbp-18h]
  __int64 v54; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v55; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v56[3]; // [rsp+108h] [rbp+8h] BYREF
  __int64 (__fastcall **v57)(); // [rsp+120h] [rbp+20h] BYREF
  __int128 v58; // [rsp+128h] [rbp+28h]
  _WORD *v59; // [rsp+138h] [rbp+38h]
  wil::details::in1diag3 *v60; // [rsp+188h] [rbp+88h]
  _WORD v61[2048]; // [rsp+190h] [rbp+90h] BYREF

  v56[1] = -2LL;
  v4 = a3;
  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v47 = 0LL;
  while ( 1 )
  {
    LOBYTE(a3) = *((_BYTE *)v4 + 8);
    v8 = *((_WORD *)v4 + 3);
    LOBYTE(a2) = *((_BYTE *)v4 + 4);
    v9 = *((_WORD *)v4 + 1);
    v35[0] = *(_WORD *)v4;
    v35[1] = v9;
    v36 = (char)a2;
    v37 = v8;
    v38 = (char)a3;
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
      v39 = v10;
    }
    else
    {
      v39 = 0LL;
    }
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    lpMem = 0LL;
    v44 = 0;
    v45 = 0;
    v30 = 4096;
    v11 = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(v5, a2, a3, &v31, v61, &v30);
    wil::details::NtStatusToHr(v11);
    if ( (_DWORD)v11 )
    {
      v12 = 0;
      v30 = 0;
      v31 = 0;
    }
    else
    {
      v12 = v30;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v35, v61, v12, (const char *)0x1000);
    if ( HIBYTE(v44) )
      break;
    v46 = 0LL;
    *(_QWORD *)&v33 = &v46;
    *((_QWORD *)&v33 + 1) = &v47;
    *(_QWORD *)&v34 = v35;
    v57 = off_1800D3278;
    v58 = v33;
    v59 = v35;
    v60 = (wil::details::in1diag3 *)&v57;
    v56[2] = &v57;
    v32 = (unsigned __int8 *)(*((_QWORD *)v4 + 3) + 10LL);
    v13 = *((_BYTE *)v4 + 4);
    LOWORD(v33) = *((_WORD *)v4 + 1);
    BYTE2(v33) = v13;
    DWORD1(v33) = 0;
    WORD4(v33) = 0;
    v34 = 0LL;
    v14 = *((_BYTE *)v4 + 8);
    v49 = *((_WORD *)v4 + 3);
    v50 = v14;
    v51 = 0;
    v52 = 0;
    v53 = 0LL;
LABEL_14:
    while ( wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v33,
              &v32,
              *((unsigned __int8 **)v4 + 4)) )
    {
      v16 = 0;
      v17 = DWORD1(v33);
      if ( DWORD1(v33) )
      {
        v18 = *((_QWORD *)&v34 + 1);
        while ( wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v49,
                  &v32,
                  *((unsigned __int8 **)v4 + 4)) )
        {
          v30 = v51;
          v54 = v52;
          v55 = *((_QWORD *)&v53 + 1);
          v56[0] = WORD4(v33);
          v48 = v18;
          if ( !v60 )
            wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
          v28 = &v54;
          if ( !(*(unsigned __int8 (__fastcall **)(wil::details::in1diag3 *, __int64 *, _QWORD *, __int64 *))(*(_QWORD *)v60 + 16LL))(
                  v60,
                  &v48,
                  v56,
                  &v55) )
          {
            if ( v60 )
            {
              v19 = &v57;
              LOBYTE(v19) = v60 != (wil::details::in1diag3 *)&v57;
              (*(void (__fastcall **)(wil::details::in1diag3 *, __int64 (__fastcall ***)()))(*(_QWORD *)v60 + 24LL))(
                v60,
                v19);
            }
            v20 = 0;
            goto LABEL_28;
          }
          if ( ++v16 >= v17 )
            goto LABEL_14;
        }
      }
    }
    if ( v60 )
    {
      v21 = &v57;
      LOBYTE(v21) = v60 != (wil::details::in1diag3 *)&v57;
      (*(void (__fastcall **)(wil::details::in1diag3 *, __int64 (__fastcall ***)()))(*(_QWORD *)v60 + 24LL))(v60, v21);
    }
    v20 = 1;
LABEL_28:
    if ( !(_BYTE)v44 )
      goto LABEL_33;
    updated = wil_details_NtUpdateWnfStateData(v5, v40, (int)v41 - (int)v40, v15, v28, v31, 1u);
    if ( updated != -1073741823 )
    {
      if ( updated )
        wil_details_NtUpdateWnfStateData(v5, v40, v41 - (_DWORD)v40, v23, v29, 0, 0);
LABEL_33:
      v5 = (const struct __WIL__WNF_STATE_NAME *)((char *)v5 + 8);
      v47 = v46;
      goto LABEL_34;
    }
    ++v7;
    v20 = 0;
LABEL_34:
    v24 = lpMem;
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v24);
    }
    if ( v20 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v26 = lpMem;
  if ( lpMem )
  {
    v27 = GetProcessHeap();
    HeapFree(v27, 0, v26);
  }
}
