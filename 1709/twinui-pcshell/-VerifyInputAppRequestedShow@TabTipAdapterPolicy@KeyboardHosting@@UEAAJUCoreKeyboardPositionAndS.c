/*
 * XREFs of ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x1801AACE0
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1801A3610 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x1801AB934 (-IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 *     ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@@Z @ 0x1801ABA0C (-GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Window.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z @ 0x1801ABB58 (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windo.c)
 *     ?LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x1801ABDD4 (-LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 *     ?CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x1801ABFD0 (-CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NUCoreKeyboardPositionAndSizeRequest@Cor.c)
 *     ??$InputAppRequestedShowBadRequest@IIAEAIAEAI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0AEAI1@Z @ 0x1801AC300 (--$InputAppRequestedShowBadRequest@IIAEAIAEAI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0.c)
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@0UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@PEAU345@@Z @ 0x1801AC5B0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJURect@Foundation@W.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedShow(
        __int64 a1,
        int *a2,
        int a3,
        __int64 a4,
        int *a5,
        _BYTE *a6)
{
  int v6; // eax
  __int128 v10; // xmm1
  bool v11; // al
  __m128i v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __m128i v15; // xmm2
  __int64 v16; // xmm1_8
  __int64 v17; // rcx
  __int128 v18; // xmm6
  __int128 v19; // xmm7
  __int128 v20; // xmm8
  __int64 v21; // xmm9_8
  char v22; // al
  unsigned __int64 v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm5
  __int64 v27; // xmm2_8
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rcx
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  int v34; // eax
  unsigned int v35; // r14d
  _OWORD *v37; // rax
  int v38; // eax
  int v39; // eax
  int v40; // xmm1_4
  int v41; // xmm0_4
  int v42; // xmm0_4
  int v43; // xmm1_4
  __m128i v44; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v45; // [rsp+40h] [rbp-C0h]
  __int64 v46; // [rsp+50h] [rbp-B0h]
  int v47; // [rsp+58h] [rbp-A8h]
  __int64 v48; // [rsp+60h] [rbp-A0h]
  int v49[4]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v50; // [rsp+80h] [rbp-80h] BYREF
  __int128 v51; // [rsp+90h] [rbp-70h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-58h]
  _OWORD v54[3]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v55; // [rsp+E0h] [rbp-20h]
  _OWORD v56[3]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v57; // [rsp+118h] [rbp+18h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v6 = a2[10];
  v44 = *(__m128i *)a2;
  v10 = *((_OWORD *)a2 + 1);
  v47 = v6;
  v46 = *((_QWORD *)a2 + 4);
  v45 = v10;
  if ( *(_BYTE *)(a1 + 360) && v44.m128i_i32[0] == 2 )
  {
    if ( *(__int64 *)((char *)v44.m128i_i64 + 4) != __PAIR64__((int)*(float *)(a1 + 176), (int)*(float *)(a1 + 180)) )
      goto LABEL_8;
    v11 = !KeyboardHosting::TabTipAdapterPolicy::IsCursorPositionValid((KeyboardHosting::TabTipAdapterPolicy *)a1);
  }
  else
  {
    v11 = 0;
  }
  if ( !v11 )
  {
LABEL_8:
    v12 = *(__m128i *)a2;
    v13 = *((_OWORD *)a2 + 1);
    v47 = a2[10];
    v44 = v12;
    v46 = *((_QWORD *)a2 + 4);
    v45 = v13;
    if ( !(unsigned __int8)KeyboardHosting::TabTipAdapterPolicy::CheckRequest(a1, &v44) )
    {
      *a6 = 0;
      v49[0] = a2[5];
      LODWORD(v52) = *a2;
      TouchKeyboardExperienceTelemetryLogger::InputAppRequestedShowBadRequest<unsigned int,unsigned int,unsigned int &,unsigned int &>(
        &v52,
        v49,
        a2 + 2,
        a2 + 1);
      return 0LL;
    }
    v14 = *((_OWORD *)a2 + 1);
    v15 = *(__m128i *)a2;
    v47 = a2[10];
    v16 = *((_QWORD *)a2 + 4);
    v45 = v14;
    v46 = v16;
    *(float *)(a1 + 176) = (float)_mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
    v17 = *(_BYTE *)(a1 + 400) != 0 ? 0x38 : 0;
    *(float *)(a1 + 180) = (float)v15.m128i_i32[1];
    v18 = *(_OWORD *)(v17 + a1 + 192);
    v19 = *(_OWORD *)(v17 + a1 + 208);
    v20 = *(_OWORD *)(v17 + a1 + 224);
    v21 = *(_QWORD *)(v17 + a1 + 240);
    v54[0] = v18;
    v54[1] = v19;
    v54[2] = v20;
    v55 = v21;
    if ( !*(_BYTE *)(a1 + 361) || (v22 = 1, *(_DWORD *)(a1 + 404) != *a2) )
      v22 = 0;
    *(_BYTE *)(a1 + 361) = v22;
    v23 = -(__int64)(v22 != 0) & 0xFFFFFFFFFFFFFF90uLL;
    v24 = *(_OWORD *)(v23 + a1 + 320);
    v25 = *(_OWORD *)(v23 + a1 + 336);
    v26 = *(_OWORD *)(v23 + a1 + 304);
    v27 = *(_QWORD *)(v23 + a1 + 352);
    v28 = *(_QWORD *)(a1 + 184);
    v56[2] = v25;
    v56[1] = v24;
    *(_OWORD *)(v28 + 16) = v18;
    *(_OWORD *)(v28 + 72) = v26;
    *(_OWORD *)(v28 + 32) = v19;
    *(_OWORD *)(v28 + 88) = v24;
    *(_OWORD *)(v28 + 48) = v20;
    *(_OWORD *)(v28 + 104) = v25;
    *(_QWORD *)(v28 + 64) = v21;
    *(_QWORD *)(v28 + 120) = v27;
    v29 = *(__m128i *)a2;
    v30 = *(_QWORD *)(a1 + 184);
    v31 = *((_OWORD *)a2 + 1);
    v52 = 0LL;
    v53 = 0LL;
    LODWORD(v28) = a2[10];
    v44 = v29;
    v29.m128i_i64[0] = *((_QWORD *)a2 + 4);
    v47 = v28;
    LODWORD(v28) = *(_DWORD *)(a1 + 160);
    v46 = v29.m128i_i64[0];
    v32 = *(_OWORD *)(a1 + 144);
    v45 = v31;
    v33 = *(_OWORD *)(a1 + 112);
    v50 = v32;
    v56[0] = v26;
    v57 = v27;
    v51 = v33;
    v34 = ((__int64 (__fastcall *)(__int64, __int128 *, __int128 *, __m128i *, _DWORD, __int64 *))KeyboardHosting::ViewRectProvider::GetViewRectFromPositionAndSizeRequest)(
            v30,
            &v51,
            &v50,
            &v44,
            v28,
            &v52);
    v35 = v34;
    if ( v34 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xEA,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)(unsigned int)v34);
      return v35;
    }
    v37 = v54;
    if ( *a2 != 1 )
      v37 = v56;
    v45 = v37[1];
    v48 = *((_QWORD *)v37 + 6);
    *(float *)&v50 = (float)((int)v48 * (int)*(float *)&v52 / 100);
    *((float *)&v50 + 1) = (float)((int)v48 * (int)*((float *)&v52 + 1) / 100);
    *((float *)&v50 + 2) = (float)((int)v48 * (int)*(float *)&v53 / 100);
    *((float *)&v50 + 3) = (float)((int)v48 * (int)*((float *)&v53 + 1) / 100);
    *(_OWORD *)a5 = v50;
    *a6 = 1;
    *(_BYTE *)(a1 + 360) = 1;
    *(_OWORD *)(a1 + 404) = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 420) = *((_OWORD *)a2 + 1);
    *(_QWORD *)(a1 + 436) = *((_QWORD *)a2 + 4);
    *(_DWORD *)(a1 + 444) = a2[10];
    *(_DWORD *)(a1 + 448) = a3;
    v38 = *a2;
    v45 = *((_OWORD *)a2 + 1);
    if ( v38 == 2 )
      goto LABEL_17;
    if ( v38 == 1 )
    {
      if ( WORD4(v45) )
      {
LABEL_17:
        v39 = 2;
        goto LABEL_22;
      }
      v39 = 3;
    }
    else
    {
      v39 = 0;
    }
LABEL_22:
    *(_DWORD *)(a1 + 364) = v39;
    if ( !a3 && *a2 == 1 && a2[5] == 2 && (*((_BYTE *)a2 + 24) || *((_BYTE *)a2 + 25)) )
    {
      v40 = a5[3];
      *(_DWORD *)(a1 + 392) = a5[2];
      *(_DWORD *)(a1 + 396) = v40;
      KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionIfNecessary((KeyboardHosting::TabTipAdapterPolicy *)a1);
      if ( *(_BYTE *)(a1 + 388) )
      {
        KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(
          (KeyboardHosting::TabTipAdapterPolicy *)a1,
          (struct Windows::Foundation::Point *)&v52);
        if ( *((_BYTE *)a2 + 24) )
          v41 = v52;
        else
          v41 = *a5;
        *a5 = v41;
        if ( *((_BYTE *)a2 + 25) )
          v42 = HIDWORD(v52);
        else
          v42 = a5[1];
        a5[1] = v42;
      }
      else
      {
        v43 = a5[1];
        LODWORD(v52) = *a5;
        HIDWORD(v52) = v43;
        KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
          (KeyboardHosting::TabTipAdapterPolicy *)a1,
          (const struct Windows::Foundation::Point *)&v52);
      }
    }
    if ( *a2 == 2 )
    {
      if ( *((_BYTE *)a2 + 26) && *(_BYTE *)(a1 + 376) )
      {
        *a5 = *(_DWORD *)(a1 + 368);
        a5[1] = *(_DWORD *)(a1 + 372);
      }
      else
      {
        *(_DWORD *)(a1 + 368) = *a5;
        *(_DWORD *)(a1 + 372) = a5[1];
        *(_BYTE *)(a1 + 376) = 1;
      }
    }
    return 0LL;
  }
  *a6 = 0;
  return 0LL;
}
