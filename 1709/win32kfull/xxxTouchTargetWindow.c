/*
 * XREFs of xxxTouchTargetWindow @ 0x1C01D6F54
 * Callers:
 *     xxxDCompSpeedHitTest @ 0x1C005DFBC (xxxDCompSpeedHitTest.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01D3CDC (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPE.c)
 * Callees:
 *     EditionTryDwmHitTest @ 0x1C005DF50 (EditionTryDwmHitTest.c)
 *     GetWindowCloakState @ 0x1C0063F5C (GetWindowCloakState.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1C01D3078 (-ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C01D314C (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C01D3668 (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1C01D3698 (-ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z.c)
 */

_BOOL8 __fastcall xxxTouchTargetWindow(
        struct tagWND *a1,
        struct tagTOUCHTARGETINGCONTACT *a2,
        struct tagPOINT *a3,
        int *a4,
        unsigned __int16 *a5,
        __int64 a6,
        unsigned int a7,
        int a8,
        __int64 a9,
        _QWORD *a10,
        _DWORD *a11,
        _DWORD *a12,
        _OWORD *a13)
{
  bool v16; // zf
  __int64 *v17; // rsi
  int v18; // r13d
  unsigned int v20; // edi
  unsigned __int64 v21; // r13
  __int128 *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm0
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  int v36; // eax
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int64 v47; // rax
  const struct _D3DMATRIX *v48; // rcx
  int Prop; // eax
  unsigned __int64 v50; // r8
  BOOL v51; // r12d
  const struct _D3DMATRIX *v52; // rcx
  __int64 v53; // rax
  int v54; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v55[3]; // [rsp+64h] [rbp-9Ch] BYREF
  __int128 v56; // [rsp+70h] [rbp-90h]
  __int128 v57; // [rsp+80h] [rbp-80h]
  __int128 v58; // [rsp+90h] [rbp-70h]
  __int128 v59; // [rsp+A0h] [rbp-60h]
  __int128 v60; // [rsp+B0h] [rbp-50h]
  __int128 v61; // [rsp+C0h] [rbp-40h]
  __int128 v62; // [rsp+D0h] [rbp-30h]
  __int128 v63; // [rsp+E0h] [rbp-20h]
  __int128 v64; // [rsp+F0h] [rbp-10h]
  __int128 v65; // [rsp+100h] [rbp+0h]
  __int128 v66; // [rsp+110h] [rbp+10h]
  __int128 v67; // [rsp+120h] [rbp+20h]
  _BYTE v68[240]; // [rsp+130h] [rbp+30h] BYREF
  int v69; // [rsp+230h] [rbp+130h]

  v16 = (*((_BYTE *)a1 + 71) & 0x10) == 0;
  v17 = 0LL;
  v18 = 0;
  v69 = 0;
  v54 = 0;
  v55[0] = 0;
  if ( v16
    || (*((_BYTE *)a1 + 66) & 8) != 0 && (*((_BYTE *)a1 + 64) & 0x20) != 0
    || a7 && (unsigned int)GetWindowCloakState((__int64)a1) )
  {
    return 0LL;
  }
  v20 = 1;
  if ( a8 && EditionTryDwmHitTest(a1) && !(unsigned int)CanPointStartResize(a1, a2, *a3) )
  {
    v21 = *(_QWORD *)a1;
    v22 = (__int128 *)DCompHitTest(v68, 2LL, 0LL, *a3, a9, 0, 0, &v54, v55);
    v25 = 128LL;
    v26 = v22[1];
    v56 = *v22;
    v27 = v22[2];
    v57 = v26;
    v28 = v22[3];
    v58 = v27;
    v29 = v22[4];
    v59 = v28;
    v30 = v22[5];
    v60 = v29;
    v31 = v22[6];
    v61 = v30;
    v62 = v31;
    v32 = v22[7];
    v22 += 8;
    v63 = v32;
    v33 = v22[1];
    v64 = *v22;
    v34 = v22[2];
    v65 = v33;
    v35 = v22[3];
    v66 = v34;
    v67 = v35;
    if ( HIDWORD(v61) == 2 )
      v36 = -(BYTE8(v61) & 1);
    else
      v36 = 0;
    if ( !v36 )
    {
      if ( a13 )
      {
        v37 = v57;
        *a13 = v56;
        v38 = v58;
        a13[1] = v37;
        v39 = v59;
        a13[2] = v38;
        v40 = v60;
        a13[3] = v39;
        v41 = v61;
        a13[4] = v40;
        v42 = v62;
        a13[5] = v41;
        v43 = v63;
        a13[6] = v42;
        a13[7] = v43;
        v44 = v65;
        a13[8] = v64;
        v45 = v66;
        a13[9] = v44;
        v46 = v67;
        a13[10] = v45;
        a13[11] = v46;
      }
      v69 = 1;
      if ( HIDWORD(v61) == 2 )
        v17 = (__int64 *)v61;
    }
    LOBYTE(v25) = 1;
    v47 = HMValidateHandleNoSecure(v21, v25, v23, v24);
    if ( !v47 || *(char *)(v47 + 59) < 0 )
    {
      EtwTraceDITSpeedHitTestFailedRevalidation(v21);
      return 0LL;
    }
    v18 = v69;
  }
  if ( a7 )
  {
    v48 = (const struct _D3DMATRIX *)*((_QWORD *)a1 + 36);
    if ( v48 )
      ApplyWindowTransform(v48, a3, (struct tagRECT *)a2, 1);
  }
  Prop = GetProp((__int64)a1, gatomPtrTargetFlags, 1);
  v50 = (unsigned __int64)*a3;
  *a4 = Prop;
  v51 = BasicTargetingHitTest((__int64)a1, (__int64)a2, v50, a5, a6, a7, 0LL, 4, 1, Prop, v18);
  if ( !v51 || *a5 )
    v20 = 0;
  ClipContact(a1, a2, v20, 0LL);
  if ( a7 )
  {
    v52 = (const struct _D3DMATRIX *)*((_QWORD *)a1 + 36);
    if ( v52 )
      ApplyWindowTransform(v52, 0LL, (struct tagRECT *)a2, 0);
  }
  if ( a10 )
  {
    v53 = 0LL;
    if ( v17 )
      v53 = *v17;
    *a10 = v53;
  }
  if ( a11 )
    *a11 = v54;
  if ( a12 )
    *a12 = v55[0];
  return v51;
}
