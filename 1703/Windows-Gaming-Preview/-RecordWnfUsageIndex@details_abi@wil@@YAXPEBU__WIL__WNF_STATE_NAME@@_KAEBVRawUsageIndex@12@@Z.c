/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180021A14
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180021E58 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180002AE4 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18001EDEC (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x18002001C (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x1800200B4 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180020F2C (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180021130 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     __security_check_cookie @ 0x180028AF0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18002A290 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  const struct __WIL__WNF_STATE_NAME *v4; // r12
  unsigned __int64 v5; // r15
  const struct __WIL__WNF_STATE_NAME *v7; // rsi
  const struct __WIL__WNF_TYPE_ID *v8; // rdx
  char v9; // cl
  __int64 v10; // rax
  wil::details *v11; // rbx
  unsigned int v12; // eax
  __int128 v13; // xmm0
  __int64 v14; // rax
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
  __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h] BYREF
  _WORD v35[2]; // [rsp+90h] [rbp-70h] BYREF
  char v36; // [rsp+94h] [rbp-6Ch]
  __int16 v37; // [rsp+96h] [rbp-6Ah]
  char v38; // [rsp+98h] [rbp-68h]
  __int64 v39; // [rsp+A0h] [rbp-60h]
  void *v40; // [rsp+A8h] [rbp-58h]
  __int128 v41; // [rsp+B0h] [rbp-50h]
  LPVOID lpMem; // [rsp+C0h] [rbp-40h]
  __int16 v43; // [rsp+C8h] [rbp-38h]
  char v44; // [rsp+CAh] [rbp-36h]
  __int16 v45; // [rsp+D0h] [rbp-30h] BYREF
  char v46; // [rsp+D2h] [rbp-2Eh]
  unsigned int v47; // [rsp+D4h] [rbp-2Ch]
  unsigned __int16 v48; // [rsp+D8h] [rbp-28h]
  __int128 v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v51; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v52; // [rsp+100h] [rbp+0h] BYREF
  __int64 v53; // [rsp+108h] [rbp+8h] BYREF
  __int64 (__fastcall **v54)(); // [rsp+110h] [rbp+10h] BYREF
  __int128 v55; // [rsp+118h] [rbp+18h]
  _WORD *v56; // [rsp+128h] [rbp+28h]
  wil::details::in1diag3 *v57; // [rsp+178h] [rbp+78h]
  _WORD v58[2048]; // [rsp+180h] [rbp+80h] BYREF

  v4 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v5 = 0LL;
  v34 = 0LL;
  v7 = this;
  while ( 1 )
  {
    v8 = (const struct __WIL__WNF_TYPE_ID *)*(unsigned __int16 *)(a3 + 6);
    v9 = *(_BYTE *)(a3 + 8);
    v35[0] = *(_WORD *)a3;
    v35[1] = *(_WORD *)(a3 + 2);
    v36 = *(_BYTE *)(a3 + 4);
    v37 = (__int16)v8;
    v38 = v9;
    if ( (_WORD)v8 )
    {
      v10 = (unsigned __int16)v8;
      if ( v9 == 1 )
      {
        v10 = (unsigned __int16)v8 + 2LL;
      }
      else if ( v9 == 2 )
      {
        v10 = (unsigned __int16)v8 + 4LL;
      }
      v39 = v10;
    }
    else
    {
      v39 = 0LL;
    }
    v40 = 0LL;
    lpMem = 0LL;
    v41 = 0LL;
    v43 = 0;
    v44 = 0;
    v28 = 4096;
    v11 = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(v7, v8, (const void *)a3, &v29, v58, &v28);
    wil::details::NtStatusToHr(v11);
    if ( (_DWORD)v11 )
    {
      v12 = 0;
      v29 = 0;
      v28 = 0;
    }
    else
    {
      v12 = v28;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v35, v58, v12, (const char *)0x1000);
    if ( HIBYTE(v43) )
      break;
    v33 = 0LL;
    *(_QWORD *)&v31 = &v33;
    *((_QWORD *)&v31 + 1) = &v34;
    v13 = v31;
    *(_QWORD *)&v32 = v35;
    v54 = off_18002F618;
    v57 = (wil::details::in1diag3 *)&v54;
    v14 = *(_QWORD *)(a3 + 24);
    v56 = v35;
    v30 = (unsigned __int8 *)(v14 + 10);
    LOWORD(v31) = *(_WORD *)(a3 + 2);
    BYTE2(v31) = *(_BYTE *)(a3 + 4);
    v45 = *(_WORD *)(a3 + 6);
    LOBYTE(v14) = *(_BYTE *)(a3 + 8);
    v55 = v13;
    v46 = v14;
    DWORD1(v31) = 0;
    WORD4(v31) = 0;
    v32 = 0LL;
    v47 = 0;
    v48 = 0;
    v49 = 0LL;
LABEL_14:
    while ( wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v31,
              &v30,
              *(unsigned __int8 **)(a3 + 32)) )
    {
      v16 = 0;
      if ( DWORD1(v31) )
      {
        while ( wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v45,
                  &v30,
                  *(unsigned __int8 **)(a3 + 32)) )
        {
          v28 = v47;
          v50 = v48;
          v51 = *((_QWORD *)&v49 + 1);
          v52 = WORD4(v31);
          v53 = *((_QWORD *)&v32 + 1);
          if ( !v57 )
            wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
          v26 = &v50;
          if ( !(*(unsigned __int8 (__fastcall **)(wil::details::in1diag3 *, __int64 *, __int64 *, __int64 *))(*(_QWORD *)v57 + 16LL))(
                  v57,
                  &v53,
                  &v52,
                  &v51) )
          {
            if ( v57 )
            {
              v17 = &v54;
              LOBYTE(v17) = v57 != (wil::details::in1diag3 *)&v54;
              (*(void (__fastcall **)(wil::details::in1diag3 *, __int64 (__fastcall ***)()))(*(_QWORD *)v57 + 24LL))(
                v57,
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
    if ( v57 )
    {
      v19 = &v54;
      LOBYTE(v19) = v57 != (wil::details::in1diag3 *)&v54;
      (*(void (__fastcall **)(wil::details::in1diag3 *, __int64 (__fastcall ***)()))(*(_QWORD *)v57 + 24LL))(v57, v19);
    }
    v18 = 1;
LABEL_27:
    if ( (_BYTE)v43 )
    {
      updated = wil_details_NtUpdateWnfStateData(v7, v40, (int)v41 - (int)v40, v15, v26, v29, 1u);
      if ( updated == -1073741823 )
      {
        ++v5;
        v18 = 0;
        goto LABEL_32;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData(v7, v40, v41 - (_DWORD)v40, v21, v27, 0, 0);
    }
    v7 = (const struct __WIL__WNF_STATE_NAME *)((char *)v7 + 8);
    v34 = v33;
LABEL_32:
    v22 = lpMem;
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v22);
    }
    if ( v18 || v7 >= v4 || v5 >= 0x32 )
      return;
  }
  v24 = lpMem;
  if ( lpMem )
  {
    v25 = GetProcessHeap();
    HeapFree(v25, 0, v24);
  }
}
