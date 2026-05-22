/*
 * XREFs of ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@@Z @ 0x18000FBB0
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x180010200 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x1800489D0 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800CC2F0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Win32kInterop::ProcessInputMessage(__int64 a1, int a2, __int64 a3)
{
  Win32kInterop *v4; // r15
  __int16 v5; // si
  int v6; // eax
  int v7; // eax
  __int16 v8; // r14
  __int16 v9; // cx
  int v10; // eax
  int v11; // eax
  struct KeyboardModifierState *v12; // rbx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  __int16 v16; // ax
  int v17; // edx
  int v18; // edx
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct KeyboardModifierState *v26[2]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v27[178]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v28[356]; // [rsp+B80h] [rbp+A80h] BYREF
  _DWORD v29[656]; // [rsp+16A0h] [rbp+15A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2118h] [rbp+2018h]

  if ( a2 )
    return;
  v25[1] = -2LL;
  v4 = Win32kInterop::s_pInterop;
  memset(v27, 0, sizeof(v27));
  DWORD2(v27[2]) = 2848;
  v5 = 2;
  LODWORD(v27[0]) = 2;
  DWORD1(v27[0]) = *(_DWORD *)(a3 + 232);
  DWORD2(v27[0]) = *(_DWORD *)(a3 + 216);
  *(_QWORD *)&v27[1] = *(_QWORD *)(a3 + 224);
  *(_QWORD *)&v27[2] = *(_QWORD *)(a3 + 168);
  LODWORD(v27[3]) = 1;
  v27[35] = *(_OWORD *)(a3 + 104);
  v27[36] = *(_OWORD *)(a3 + 120);
  v27[37] = *(_OWORD *)(a3 + 136);
  v27[38] = *(_OWORD *)(a3 + 152);
  *((_QWORD *)&v27[34] + 1) = *(_QWORD *)(a3 + 24);
  LODWORD(v27[39]) = *(_DWORD *)(a3 + 12) & 1;
  if ( (*(_BYTE *)(a3 + 240) & 2) != 0 )
  {
    *((_QWORD *)&v27[39] + 1) = 0x6400000001LL;
    LODWORD(v27[40]) = 100;
  }
  v25[0] = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)Win32kInterop::s_pInterop + 7) + 80LL))(
         *((_QWORD *)Win32kInterop::s_pInterop + 7),
         v25);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x309,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v24 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v25[0] + 48LL))(
         v25[0],
         DWORD1(v27[0]),
         0LL,
         &v24);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x30C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  *(_OWORD *)((char *)&v27[40] + 8) = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, struct KeyboardModifierState **))(*(_QWORD *)v24 + 40LL))(
                                                   v24,
                                                   v26);
  v8 = 64;
  if ( *(_QWORD *)(a3 + 200) )
  {
    v9 = *(_WORD *)(a3 + 200);
    v10 = v27[34];
    if ( (v9 & 1) != 0 )
    {
      v10 = LODWORD(v27[34]) | 0x10;
      LODWORD(v27[34]) |= 0x10u;
    }
    if ( (v9 & 2) != 0 )
    {
      v10 |= 0x20u;
      LODWORD(v27[34]) = v10;
    }
    if ( (v9 & 0x10) != 0 )
    {
      v10 |= 0x40u;
      LODWORD(v27[34]) = v10;
    }
    if ( (v9 & 0x20) != 0 )
    {
      v10 |= 0x80u;
      LODWORD(v27[34]) = v10;
    }
    if ( (v9 & 0x40) != 0 )
      LODWORD(v27[34]) = v10 | 0x100;
  }
  v26[0] = 0LL;
  v11 = KeyboardModifierState::Create(v26);
  v12 = v26[0];
  if ( v11 >= 0 )
  {
    v13 = *((_DWORD *)v26[0] + 21);
    DWORD1(v27[34]) = v13;
    if ( (*(_BYTE *)(a3 + 240) & 1) != 0 )
      DWORD1(v27[34]) = v13 | 1;
  }
  DWORD2(v27[3]) = 1;
  DWORD1(v27[4]) = *(__int16 *)(a3 + 208);
  DWORD2(v27[4]) = *(__int16 *)(a3 + 210);
  *(_QWORD *)((char *)&v27[4] + 12) = *(_QWORD *)((char *)&v27[4] + 4);
  v14 = 1;
  if ( LODWORD(v27[34]) )
    v14 = 3;
  HIDWORD(v27[3]) = v14;
  v15 = *(_DWORD *)(a3 + 192);
  if ( (unsigned int)(v15 - 512) <= 0xE )
  {
    v16 = word_1800DE618[v15 - 512];
    WORD6(v27[43]) = v16;
    if ( (v16 & 0xC0) != 0 && *(_WORD *)(a3 + 202) == 2 )
      WORD6(v27[43]) = 4 * v16;
  }
  if ( ((v15 - 522) & 0xFFFFFFFB) == 0 )
    HIWORD(v27[43]) = *(_WORD *)(a3 + 202);
  v17 = v15 - 513;
  if ( !v17 )
    goto LABEL_36;
  v18 = v17 - 1;
  if ( !v18 )
  {
    v8 = 65;
LABEL_36:
    v5 = 1;
    goto LABEL_37;
  }
  v19 = v18 - 2;
  if ( !v19 )
  {
LABEL_37:
    memset(v28, 0, sizeof(v28));
    LODWORD(v28[5]) = 2848;
    *(_QWORD *)((char *)v28 + 4) = *(_QWORD *)((char *)v27 + 4);
    LODWORD(v28[0]) = 4;
    v28[2] = *(_QWORD *)&v27[1];
    WORD1(v28[87]) = v5;
    WORD2(v28[87]) = v8;
    v29[0] = 0;
    v29[1] = 4;
    memset(&v29[2], 0, 0xA38uLL);
    v23 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _DWORD *, _QWORD, __int64 *))(**((_QWORD **)v4 + 7) + 64LL))(
           *((_QWORD *)v4 + 7),
           0LL,
           v29,
           0LL,
           &v23) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD *, __int64))(**((_QWORD **)v4 + 7) + 72LL))(*((_QWORD *)v4 + 7), v28, v23);
    v20 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    goto LABEL_41;
  }
  if ( v19 == 1 )
  {
    v8 = 65;
    goto LABEL_37;
  }
LABEL_41:
  (*(void (__fastcall **)(_QWORD, __int64, _OWORD *))(**((_QWORD **)v4 + 7) + 112LL))(*((_QWORD *)v4 + 7), a3, v27);
  if ( v12 )
    (*(void (__fastcall **)(struct KeyboardModifierState *))(*(_QWORD *)v12 + 16LL))(v12);
  v21 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = v25[0];
  if ( v25[0] )
  {
    v25[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
}
