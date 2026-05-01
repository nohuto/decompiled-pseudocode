/*
 * XREFs of ?UpdateBackgroundSurface@CStartSizingFrame@@AEAAJXZ @ 0x1800D11DC
 * Callers:
 *     ?InitializeDComp@CStartSizingFrame@@AEAAJPEAUHWND__@@@Z @ 0x1800D0E6C (-InitializeDComp@CStartSizingFrame@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CStartSizingFrame::UpdateBackgroundSurface(CStartSizingFrame *this)
{
  int v2; // r9d
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  _BYTE v15[5]; // [rsp+48h] [rbp-9h] BYREF
  unsigned __int8 v16; // [rsp+4Bh] [rbp-6h]
  __int64 v17; // [rsp+50h] [rbp-1h] BYREF
  __int64 v18; // [rsp+58h] [rbp+7h] BYREF
  __int64 v19; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+68h] [rbp+17h] BYREF
  _QWORD v21[2]; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v22; // [rsp+80h] [rbp+2Fh] BYREF
  int v23; // [rsp+88h] [rbp+37h]
  int v24; // [rsp+8Ch] [rbp+3Bh]
  int v25; // [rsp+90h] [rbp+3Fh]
  int v26; // [rsp+94h] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v21[1] = -2LL;
  v2 = *((_DWORD *)this + 11);
  v16 = (int)(*((double *)this + 6) * 255.0);
  v15[2] = v16 * (unsigned int)(unsigned __int8)v2 / 0xFF;
  v15[1] = v16 * (unsigned int)BYTE1(v2) / 0xFF;
  v15[0] = v16 * (unsigned int)BYTE2(v2) / 0xFF;
  v3 = 1;
  if ( v16 == 0xFF )
    v3 = 3;
  v4 = *((_QWORD *)this + 18);
  if ( v4 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 14);
  v18 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, __int64 *))(*(_QWORD *)v5 + 64LL))(
         v5,
         1LL,
         1LL,
         87LL,
         v3,
         &v18);
  if ( v6 < 0 )
    goto LABEL_15;
  v7 = v18;
  v17 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *, _QWORD *))(*(_QWORD *)v18 + 24LL))(
         v18,
         0LL,
         &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
         &v17,
         v21);
  if ( v6 >= 0 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL))(v17, &v20);
    v19 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 320LL))(v20, &v19);
    v22 = v21[0];
    v23 = 0;
    v24 = LODWORD(v21[0]) + 1;
    v25 = HIDWORD(v21[0]) + 1;
    v26 = 1;
    (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64 *, _BYTE *, int, int))(*(_QWORD *)v19 + 384LL))(
      v19,
      v17,
      0LL,
      &v22,
      v15,
      4,
      4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
    v8 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  v10 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v6 < 0 )
  {
LABEL_15:
    v11 = 0LL;
    v12 = v18;
  }
  else
  {
    v11 = v18;
    v12 = 0LL;
  }
  *((_QWORD *)this + 18) = v11;
  if ( v12 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v6 < 0 )
  {
    v13 = 553LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startsizingframe.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 19) + 120LL))(
         *((_QWORD *)this + 19),
         *((_QWORD *)this + 18));
  if ( v6 < 0 )
  {
    v13 = 554LL;
    goto LABEL_20;
  }
  return 0LL;
}
