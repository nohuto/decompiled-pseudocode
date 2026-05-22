/*
 * XREFs of ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@@Z @ 0x18001436C
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x180014D40 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000FE74 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800136A0 (-ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x180013BD8 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ContextualInputProcessing@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180016448 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ContextualInputProcessing@@@.c)
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x18003A904 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800E3190 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall Win32kInterop::ProcessInputMessage(__int64 a1, int a2, __int64 a3)
{
  Win32kInterop *v4; // rsi
  unsigned int v5; // r12d
  __int16 v6; // r14
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rcx
  __int16 v11; // r15
  int v12; // eax
  int v13; // eax
  struct KeyboardModifierState *v14; // rdi
  int v15; // eax
  int v16; // eax
  int v17; // edx
  __int16 v18; // ax
  int v19; // edx
  int v20; // edx
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  wil::details::in1diag3 *v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  _OWORD *v29; // rcx
  _OWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+38h] [rbp-C8h] BYREF
  int v40; // [rsp+40h] [rbp-C0h]
  __int16 v41; // [rsp+44h] [rbp-BCh]
  __int64 v42; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v43[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct KeyboardModifierState *v44[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v45[2]; // [rsp+70h] [rbp-90h] BYREF
  int v46; // [rsp+78h] [rbp-88h]
  __int64 v47; // [rsp+80h] [rbp-80h]
  int v48; // [rsp+88h] [rbp-78h]
  __int64 v49; // [rsp+98h] [rbp-68h]
  int v50; // [rsp+A0h] [rbp-60h]
  int v51; // [rsp+A8h] [rbp-58h]
  int v52; // [rsp+ACh] [rbp-54h]
  int v53; // [rsp+B0h] [rbp-50h]
  int v54; // [rsp+B4h] [rbp-4Ch]
  int v55; // [rsp+B8h] [rbp-48h]
  int v56; // [rsp+BCh] [rbp-44h]
  int v57; // [rsp+C0h] [rbp-40h]
  int v58; // [rsp+C4h] [rbp-3Ch]
  int v59; // [rsp+1E8h] [rbp+E8h]
  int v60; // [rsp+1ECh] [rbp+ECh]
  __int64 v61; // [rsp+1F0h] [rbp+F0h]
  __int128 v62; // [rsp+1F8h] [rbp+F8h]
  __int128 v63; // [rsp+208h] [rbp+108h]
  __int128 v64; // [rsp+218h] [rbp+118h]
  __int128 v65; // [rsp+228h] [rbp+128h]
  int v66; // [rsp+238h] [rbp+138h]
  int v67; // [rsp+23Ch] [rbp+13Ch]
  int v68; // [rsp+240h] [rbp+140h]
  int v69; // [rsp+244h] [rbp+144h]
  _OWORD v70[3]; // [rsp+248h] [rbp+148h] BYREF
  __int16 v71; // [rsp+27Ch] [rbp+17Ch]
  __int16 v72; // [rsp+27Eh] [rbp+17Eh]
  _DWORD v73[4]; // [rsp+740h] [rbp+640h] BYREF
  __int64 v74; // [rsp+750h] [rbp+650h]
  int v75; // [rsp+758h] [rbp+658h]
  __int16 v76; // [rsp+94Ah] [rbp+84Ah]
  __int16 v77; // [rsp+94Ch] [rbp+84Ch]
  _BYTE v78[4]; // [rsp+E10h] [rbp+D10h] BYREF
  int v79; // [rsp+E14h] [rbp+D14h]
  int v80; // [rsp+E18h] [rbp+D18h]
  wil::details::in1diag3 *retaddr; // [rsp+1228h] [rbp+1128h]

  if ( a2 )
    return;
  v43[1] = -2LL;
  v4 = Win32kInterop::s_pInterop;
  v5 = *(_DWORD *)(a3 + 216);
  InputETW::Win32kInterop::ReceivedInputMessage(v5);
  v6 = 1;
  if ( !Win32kInterop::IsDeviceAttached(v4, v5, 1) )
    return;
  memset_0(v45, 0, 0x6C8uLL);
  v48 = 1736;
  v45[0] = 2;
  v45[1] = v5;
  v46 = *(_DWORD *)(a3 + 200);
  v47 = *(_QWORD *)(a3 + 208);
  v49 = *(_QWORD *)(a3 + 160);
  v50 = 1;
  v62 = *(_OWORD *)(a3 + 96);
  v63 = *(_OWORD *)(a3 + 112);
  v64 = *(_OWORD *)(a3 + 128);
  v65 = *(_OWORD *)(a3 + 144);
  v61 = *(_QWORD *)(a3 + 16);
  v66 = *(_DWORD *)(a3 + 12) & 1;
  if ( (*(_BYTE *)(a3 + 232) & 2) != 0 )
  {
    v67 = 1;
    v68 = 100;
    v69 = 100;
  }
  v43[0] = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)v4 + 6) + 72LL))(*((_QWORD *)v4 + 6), v43);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2CD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_73;
  }
  v42 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v43[0] + 48LL))(v43[0], v5, 0LL, &v42);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_73:
    wil::details::in1diag3::FailFast_Hr(
      v9,
      (void *)0x2D0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_74;
  }
  v70[0] = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, struct KeyboardModifierState **))(*(_QWORD *)v42 + 40LL))(
                        v42,
                        v44);
  v10 = *(_QWORD *)(a3 + 184);
  v11 = 64;
  if ( v10 )
  {
    v12 = v59;
    if ( (v10 & 1) != 0 )
    {
      v12 = v59 | 0x10;
      v59 |= 0x10u;
    }
    if ( (v10 & 2) != 0 )
    {
      v12 |= 0x20u;
      v59 = v12;
    }
    if ( (v10 & 0x10) != 0 )
    {
      v12 |= 0x40u;
      v59 = v12;
    }
    if ( (v10 & 0x20) != 0 )
    {
      v12 |= 0x80u;
      v59 = v12;
    }
    if ( (v10 & 0x40) != 0 )
      v59 = v12 | 0x100;
  }
  v44[0] = 0LL;
  v13 = KeyboardModifierState::Create(v44);
  v14 = v44[0];
  if ( v13 >= 0 )
  {
    v15 = *((_DWORD *)v44[0] + 21);
    v60 = v15;
    if ( (*(_BYTE *)(a3 + 232) & 1) != 0 )
      v60 = v15 | 1;
  }
  v51 = 1;
  v53 = *(__int16 *)(a3 + 192);
  v54 = *(__int16 *)(a3 + 194);
  v55 = v53;
  v56 = v54;
  v57 = *(_DWORD *)(a3 + 224);
  v58 = *(_DWORD *)(a3 + 228);
  v16 = 1;
  if ( v59 )
    v16 = 3;
  v52 = v16;
  v17 = *(_DWORD *)(a3 + 176);
  if ( (unsigned int)(v17 - 512) <= 0xE )
  {
    v18 = word_1800F9320[v17 - 512];
    v71 = v18;
    if ( (v18 & 0xC0) != 0 && *(_WORD *)(a3 + 186) == 2 )
      v71 = 4 * v18;
  }
  if ( ((v17 - 522) & 0xFFFFFFFB) == 0 )
    v72 = *(_WORD *)(a3 + 186);
  v19 = v17 - 513;
  if ( !v19 )
    goto LABEL_35;
  v20 = v19 - 1;
  if ( v20 )
  {
    v21 = v20 - 2;
    if ( !v21 )
    {
      v6 = 2;
      goto LABEL_35;
    }
    if ( v21 != 1 )
      goto LABEL_41;
    v6 = 2;
  }
  v11 = 65;
LABEL_35:
  memset_0(v73, 0, 0x6C8uLL);
  v75 = 1736;
  v73[1] = v5;
  v73[0] = 4;
  v73[2] = v46;
  v74 = v47;
  v76 = v6;
  v77 = v11;
  memset_0(v78, 0, 0x3D8uLL);
  v80 = 984;
  v79 = 4;
  v38 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD, __int64 *))(**((_QWORD **)v4 + 6) + 64LL))(
         *((_QWORD *)v4 + 6),
         0LL,
         v78,
         0LL,
         &v38) >= 0 )
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v38 + 24LL))(v38, v73);
  v22 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
LABEL_41:
  v39 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**((_QWORD **)v4 + 6) + 96LL))(
    *((_QWORD *)v4 + 6),
    a3,
    *((_QWORD *)v4 + 28),
    &v39);
  v23 = *((_QWORD *)v4 + 28);
  if ( v39 != v23 )
  {
    if ( v23 )
    {
      *((_DWORD *)v4 + 152) = 0;
      v24 = 0;
      if ( (v52 & 4) != 0 )
        v24 = 4;
      *((_DWORD *)v4 + 73) = v24;
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v4 + 28) + 24LL))(*((_QWORD *)v4 + 28), (__int64)v4 + 232);
    }
    *((_BYTE *)v4 + 1968) = 1;
LABEL_48:
    v38 = 0LL;
    v25 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v4 + 6) + 72LL))(*((_QWORD *)v4 + 6), &v38);
    v26 = retaddr;
    if ( v25 >= 0 )
    {
      v27 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v38 + 32LL))(v38, v70);
      if ( v27 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3E4,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
          (const char *)(unsigned int)v27);
        JUMPOUT(0x180014AA5LL);
      }
      *((_BYTE *)v4 + 1968) = 0;
      v28 = v38;
      if ( v38 )
      {
        v38 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      goto LABEL_52;
    }
LABEL_74:
    wil::details::in1diag3::FailFast_Hr(
      v26,
      (void *)0x3E3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v25);
    __debugbreak();
  }
  if ( *((_BYTE *)v4 + 1968) )
    goto LABEL_48;
LABEL_52:
  v29 = (_OWORD *)((char *)v4 + 232);
  v30 = v45;
  v31 = 13LL;
  v32 = 128LL;
  do
  {
    *v29 = *v30;
    v29[1] = v30[1];
    v29[2] = v30[2];
    v29[3] = v30[3];
    v29[4] = v30[4];
    v29[5] = v30[5];
    v29[6] = v30[6];
    v29 += 8;
    *(v29 - 1) = v30[7];
    v30 += 8;
    --v31;
  }
  while ( v31 );
  *v29 = *v30;
  v29[1] = v30[1];
  v29[2] = v30[2];
  v29[3] = v30[3];
  *((_QWORD *)v29 + 8) = *((_QWORD *)v30 + 8);
  if ( gbIsRunningWithCShell )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_ContextualInputProcessing>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_ContextualInputProcessing>::GetCachedFeatureEnabledState(v29, 0LL, 128LL);
    v40 = 0;
    LOBYTE(v41) = 2;
    LODWORD(v38) = 0;
    WORD2(v38) = v41;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_ContextualInputProcessing>::GetFeaturePropertyCache'::`2'::data,
      0xAABF26u,
      (const struct FEATURE_LOGGED_TRAITS *)&v38,
      0,
      3u);
  }
  (*(void (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)v39 + 24LL))(v39, v45, v32);
  v33 = *((_QWORD *)v4 + 28);
  v34 = v39;
  if ( v33 != v39 )
  {
    v35 = v39;
    if ( v39 )
    {
      (*(void (**)(void))(*(_QWORD *)v39 + 8LL))();
      v33 = *((_QWORD *)v4 + 28);
      v34 = v39;
    }
    *((_QWORD *)v4 + 28) = v35;
    if ( v33 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      v34 = v39;
    }
  }
  if ( v34 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  if ( v14 )
    (*(void (__fastcall **)(struct KeyboardModifierState *))(*(_QWORD *)v14 + 16LL))(v14);
  v36 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  v37 = v43[0];
  if ( v43[0] )
  {
    v43[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
}
