/*
 * XREFs of ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01D3CDC
 * Callers:
 *     xxxPointerSpeedHitTest @ 0x1C01D6750 (xxxPointerSpeedHitTest.c)
 *     xxxPointerWindowHitTest @ 0x1C01D6B30 (xxxPointerWindowHitTest.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0142520 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     ?GetScreenRect@@YA?AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z @ 0x1C01D3930 (-GetScreenRect@@YA-AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z.c)
 *     xxxTouchTargetWindow @ 0x1C01D6F54 (xxxTouchTargetWindow.c)
 */

struct tagRECT *__fastcall TopLevelTouchTarget(
        struct tagWND *a1,
        struct tagTOUCHTARGETINGCONTACT *a2,
        struct tagPOINT *a3,
        struct tagPOINT *a4,
        int a5,
        unsigned __int64 a6,
        int *a7,
        unsigned int *a8,
        struct tagINPUTDEST *a9)
{
  struct tagRECT *v10; // r15
  int v11; // esi
  struct tagPOINT v13; // rbx
  struct tagPOINT v14; // rdi
  unsigned int v15; // r13d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  int v21; // eax
  __int64 v22; // rdx
  int v23; // esi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  struct tagRECT v27; // xmm0
  int v28; // esi
  struct tagRECT *ScreenRect; // rax
  struct tagRECT v30; // xmm0
  __m128i v31; // xmm6
  struct tagRECT v32; // xmm6
  struct tagRECT v33; // xmm6
  struct tagRECT v34; // xmm6
  __int64 v35; // rax
  int v37; // [rsp+70h] [rbp-90h]
  struct tagRECT v38; // [rsp+80h] [rbp-80h] BYREF
  __int16 v39; // [rsp+90h] [rbp-70h]
  BOOL v40; // [rsp+94h] [rbp-6Ch]
  __int64 v41; // [rsp+98h] [rbp-68h] BYREF
  int v42; // [rsp+A0h] [rbp-60h]
  struct _D3DMATRIX *v43; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v44; // [rsp+B0h] [rbp-50h]
  struct tagRECT v45; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v46; // [rsp+D0h] [rbp-30h] BYREF
  struct tagPOINT v47; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v48; // [rsp+E0h] [rbp-20h]
  _BYTE v49[8]; // [rsp+E8h] [rbp-18h] BYREF
  struct tagRECT v50; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v51; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT v52; // [rsp+110h] [rbp+10h] BYREF
  struct tagRECT v53; // [rsp+120h] [rbp+20h] BYREF
  struct tagRECT v54; // [rsp+130h] [rbp+30h] BYREF
  struct tagRECT v55; // [rsp+140h] [rbp+40h] BYREF
  struct tagRECT v56; // [rsp+150h] [rbp+50h] BYREF
  struct tagRECT v57; // [rsp+160h] [rbp+60h] BYREF
  __int64 v58; // [rsp+1C0h] [rbp+C0h] BYREF
  struct tagTOUCHTARGETINGCONTACT *v59; // [rsp+1C8h] [rbp+C8h]
  struct tagPOINT *v60; // [rsp+1D0h] [rbp+D0h]

  v60 = a3;
  v59 = a2;
  v42 = 4094;
  v40 = 0;
  v10 = 0LL;
  v48 = 0LL;
  v44 = 0LL;
  v11 = 0;
  v37 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v49);
  if ( !g_bHitTestDwmFirstForTouch && (unsigned int)IsDwmInputThread(v17, v16, v18, v19) )
    UserAtomicCheck::Detach((UserAtomicCheck *)v49);
  v20 = *((_QWORD *)a1 + 14);
  if ( !v20 )
    goto LABEL_19;
  do
  {
    v46 = 0LL;
    v41 = 0LL;
    if ( !*((_DWORD *)v59 + 44) && !*((_DWORD *)v59 + 45) )
      break;
    v47 = *v60;
    v21 = xxxTouchTargetWindow(
            (struct tagWND *)v20,
            v59,
            &v47,
            (__int64)&v58,
            (__int64)a4,
            a5,
            !g_bHitTestDwmFirstForTouch,
            a6,
            (__int64)&v46,
            (__int64)&v41,
            (__int64)&v41 + 4,
            (__int64)a9);
    LOBYTE(v22) = 1;
    v23 = v21;
    v26 = HMValidateHandleNoSecure(v44, v22, v24, v25);
    v10 = (struct tagRECT *)v26;
    if ( !v23 )
      goto LABEL_15;
    if ( !v26 )
      goto LABEL_14;
    v27 = *(struct tagRECT *)(v26 + 128);
    v28 = a5;
    v43 = *(struct _D3DMATRIX **)(v26 + 288);
    v45 = v27;
    ScreenRect = GetScreenRect(&v50, a5, v43, &v45);
    v30 = *(struct tagRECT *)(v20 + 128);
    v31 = *(__m128i *)ScreenRect;
    *(_QWORD *)&v45.left = *(_QWORD *)(v20 + 288);
    v38 = v30;
    if ( _mm_cvtsi128_si32(v31) < _mm_cvtsi128_si32(
                                    _mm_srli_si128(
                                      *(__m128i *)GetScreenRect(&v51, v28, *(const struct _D3DMATRIX **)&v45.left, &v38),
                                      8)) )
    {
      v38 = *(struct tagRECT *)(v20 + 128);
      v32 = *GetScreenRect(&v52, v28, *(const struct _D3DMATRIX **)&v45.left, &v38);
      v38 = v10[8];
      if ( _mm_cvtsi128_si32((__m128i)v32) < _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)GetScreenRect(
                                                                                            &v53,
                                                                                            v28,
                                                                                            v43,
                                                                                            &v38), 8)) )
      {
        v38 = v10[8];
        v33 = *GetScreenRect(&v54, v28, v43, &v38);
        v38 = *(struct tagRECT *)(v20 + 128);
        if ( _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v33, 4)) < _mm_srli_si128(
                                                                    *(__m128i *)GetScreenRect(
                                                                                  &v55,
                                                                                  v28,
                                                                                  *(const struct _D3DMATRIX **)&v45,
                                                                                  &v38),
                                                                    8).m128i_i32[1] )
        {
          v38 = *(struct tagRECT *)(v20 + 128);
          v34 = *GetScreenRect(&v56, v28, *(const struct _D3DMATRIX **)&v45.left, &v38);
          v38 = v10[8];
          if ( _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v34, 4)) < _mm_srli_si128(
                                                                      *(__m128i *)GetScreenRect(&v57, v28, v43, &v38),
                                                                      8).m128i_i32[1] )
            goto LABEL_15;
        }
      }
    }
    v18 = 4095LL;
    v16 = (unsigned __int16)v58 + (v39 != 3 ? 0xFFF : 0);
    if ( (unsigned int)v16 >= (unsigned __int16)v42 + (!v40 ? 0xFFF : 0) )
    {
LABEL_15:
      v11 = v37;
    }
    else
    {
LABEL_14:
      v10 = (struct tagRECT *)v20;
      v40 = v39 == 3;
      v44 = *(_QWORD *)v20;
      v11 = v41;
      v15 = HIDWORD(v41);
      v13 = *a4;
      v14 = v47;
      v48 = v46;
      v42 = (unsigned __int16)v58;
      v37 = v41;
    }
    v20 = *(_QWORD *)(v20 + 88);
  }
  while ( v20 );
  if ( v10 )
  {
    *v60 = v14;
    *a4 = v13;
  }
  else
  {
LABEL_19:
    a4->x = 0;
    a4->y = 0;
  }
  if ( v48 )
  {
    LOBYTE(v16) = 1;
    v35 = HMValidateHandleNoSecure(v48, v16, v18, v19);
    if ( v35 )
    {
      v10 = (struct tagRECT *)v35;
    }
    else
    {
      v11 = 0;
      v15 = 0;
    }
  }
  if ( a7 )
    *a7 = v11;
  if ( a8 )
    *a8 = v15;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v49);
  return v10;
}
