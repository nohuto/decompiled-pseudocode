/*
 * XREFs of xxxTouchTargetWindow @ 0x1C01D2798
 * Callers:
 *     xxxDCompSpeedHitTest @ 0x1C00B6DB8 (xxxDCompSpeedHitTest.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPEAI@Z @ 0x1C01CF5E8 (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPE.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     EditionTryDwmHitTest @ 0x1C005F960 (EditionTryDwmHitTest.c)
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1C01CEB3C (-ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C01CEC10 (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C01CEF74 (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1C01CEFA4 (-ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall xxxTouchTargetWindow(
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
        _DWORD *a12)
{
  bool v15; // zf
  __int64 *v16; // rsi
  int v17; // r13d
  unsigned int v19; // edi
  unsigned __int64 v20; // r13
  __int128 *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm0
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  int v32; // eax
  __int64 v33; // rax
  const struct _D3DMATRIX *v34; // rcx
  int Prop; // eax
  unsigned __int64 v36; // r8
  unsigned int v37; // r12d
  const struct _D3DMATRIX *v38; // rcx
  __int64 v39; // rax
  int v40; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v41[3]; // [rsp+64h] [rbp-9Ch] BYREF
  __int128 v42; // [rsp+70h] [rbp-90h]
  __int128 v43; // [rsp+80h] [rbp-80h]
  __int128 v44; // [rsp+90h] [rbp-70h]
  __int128 v45; // [rsp+A0h] [rbp-60h]
  __int128 v46; // [rsp+B0h] [rbp-50h]
  __int128 v47; // [rsp+C0h] [rbp-40h]
  __int128 v48; // [rsp+D0h] [rbp-30h]
  __int128 v49; // [rsp+E0h] [rbp-20h]
  __int128 v50; // [rsp+F0h] [rbp-10h]
  __int128 v51; // [rsp+100h] [rbp+0h]
  __int128 v52; // [rsp+110h] [rbp+10h]
  __int128 v53; // [rsp+120h] [rbp+20h]
  _BYTE v54[240]; // [rsp+130h] [rbp+30h] BYREF
  int v55; // [rsp+230h] [rbp+130h]

  v15 = (*((_BYTE *)a1 + 71) & 0x10) == 0;
  v16 = 0LL;
  v17 = 0;
  v55 = 0;
  v40 = 0;
  v41[0] = 0;
  if ( v15
    || (*((_BYTE *)a1 + 66) & 8) != 0 && (*((_BYTE *)a1 + 64) & 0x20) != 0
    || a7 && (unsigned int)GetWindowCloakState((__int64)a1) )
  {
    return 0LL;
  }
  v19 = 1;
  if ( a8 && EditionTryDwmHitTest(a1) && !(unsigned int)CanPointStartResize(a1, a2, *a3) )
  {
    v20 = *(_QWORD *)a1;
    v21 = (__int128 *)DCompHitTest(v54, 2LL, 0LL, *a3, a9, 0, 0, &v40, v41);
    v22 = v21[1];
    v42 = *v21;
    v23 = v21[2];
    v43 = v22;
    v24 = v21[3];
    v44 = v23;
    v25 = v21[4];
    v45 = v24;
    v26 = v21[5];
    v46 = v25;
    v27 = v21[6];
    v47 = v26;
    v48 = v27;
    v28 = v21[7];
    v21 += 8;
    v49 = v28;
    v29 = v21[1];
    v50 = *v21;
    v30 = v21[2];
    v51 = v29;
    v31 = v21[3];
    v52 = v30;
    v53 = v31;
    if ( HIDWORD(v47) == 2 )
      v32 = -(BYTE8(v47) & 1);
    else
      v32 = 0;
    if ( !v32 )
    {
      v55 = 1;
      if ( HIDWORD(v47) == 2 )
        v16 = (__int64 *)v47;
    }
    v33 = HMValidateHandleNoSecure(v20, 1);
    if ( !v33 || *(char *)(v33 + 59) < 0 )
    {
      EtwTraceDITSpeedHitTestFailedRevalidation(v20);
      return 0LL;
    }
    v17 = v55;
  }
  if ( a7 )
  {
    v34 = (const struct _D3DMATRIX *)*((_QWORD *)a1 + 36);
    if ( v34 )
      ApplyWindowTransform(v34, a3, (struct tagRECT *)a2, 1);
  }
  Prop = GetProp((__int64)a1, gatomPtrTargetFlags, 1);
  v36 = (unsigned __int64)*a3;
  *a4 = Prop;
  v37 = BasicTargetingHitTest((__int64)a1, (__int64)a2, v36, a5, a6, a7, 0LL, 4, 1, Prop, v17);
  if ( !v37 || *a5 )
    v19 = 0;
  ClipContact(a1, a2, v19, 0LL);
  if ( a7 )
  {
    v38 = (const struct _D3DMATRIX *)*((_QWORD *)a1 + 36);
    if ( v38 )
      ApplyWindowTransform(v38, 0LL, (struct tagRECT *)a2, 0);
  }
  if ( a10 )
  {
    v39 = 0LL;
    if ( v16 )
      v39 = *v16;
    *a10 = v39;
  }
  if ( a11 )
    *a11 = v40;
  if ( a12 )
    *a12 = v41[0];
  return v37;
}
