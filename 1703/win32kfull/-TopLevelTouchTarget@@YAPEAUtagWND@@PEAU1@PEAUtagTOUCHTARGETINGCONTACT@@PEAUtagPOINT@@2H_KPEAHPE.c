/*
 * XREFs of ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPEAI@Z @ 0x1C01CF5E8
 * Callers:
 *     xxxPointerSpeedHitTest @ 0x1C01D214C (xxxPointerSpeedHitTest.c)
 *     xxxPointerWindowHitTest @ 0x1C01D237C (xxxPointerWindowHitTest.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?GetScreenRect@@YA?AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z @ 0x1C01CF234 (-GetScreenRect@@YA-AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z.c)
 *     xxxTouchTargetWindow @ 0x1C01D2798 (xxxTouchTargetWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagRECT *__fastcall TopLevelTouchTarget(
        struct tagWND *a1,
        struct tagTOUCHTARGETINGCONTACT *a2,
        struct tagPOINT *a3,
        struct tagPOINT *a4,
        int a5,
        unsigned __int64 a6,
        int *a7,
        unsigned int *a8)
{
  struct tagRECT *v9; // r15
  unsigned int v10; // esi
  struct tagPOINT v12; // rbx
  struct tagPOINT v13; // rdi
  int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  int v20; // esi
  __int64 v21; // rax
  struct tagRECT v22; // xmm0
  int v23; // esi
  struct tagRECT *ScreenRect; // rax
  struct tagRECT v25; // xmm0
  __m128i v26; // xmm6
  struct tagRECT v27; // xmm6
  struct tagRECT v28; // xmm6
  struct tagRECT v29; // xmm6
  __int64 v30; // rax
  unsigned int v32; // [rsp+60h] [rbp-A0h]
  struct tagRECT v33; // [rsp+70h] [rbp-90h] BYREF
  __int16 v34; // [rsp+80h] [rbp-80h]
  BOOL v35; // [rsp+84h] [rbp-7Ch]
  __int64 v36; // [rsp+88h] [rbp-78h] BYREF
  int v37; // [rsp+90h] [rbp-70h]
  char v38[8]; // [rsp+98h] [rbp-68h] BYREF
  struct _D3DMATRIX *v39; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v40; // [rsp+A8h] [rbp-58h]
  struct tagRECT v41; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v42; // [rsp+C0h] [rbp-40h] BYREF
  struct tagPOINT v43; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v44; // [rsp+D0h] [rbp-30h]
  struct tagRECT v45; // [rsp+D8h] [rbp-28h] BYREF
  struct tagRECT v46; // [rsp+E8h] [rbp-18h] BYREF
  struct tagRECT v47; // [rsp+F8h] [rbp-8h] BYREF
  struct tagRECT v48; // [rsp+108h] [rbp+8h] BYREF
  struct tagRECT v49; // [rsp+118h] [rbp+18h] BYREF
  struct tagRECT v50; // [rsp+128h] [rbp+28h] BYREF
  struct tagRECT v51; // [rsp+138h] [rbp+38h] BYREF
  struct tagRECT v52; // [rsp+148h] [rbp+48h] BYREF
  __int64 v53; // [rsp+1B0h] [rbp+B0h] BYREF
  struct tagTOUCHTARGETINGCONTACT *v54; // [rsp+1B8h] [rbp+B8h]
  struct tagPOINT *v55; // [rsp+1C0h] [rbp+C0h]

  v55 = a3;
  v54 = a2;
  v37 = 4094;
  v35 = 0;
  v9 = 0LL;
  v44 = 0LL;
  v40 = 0LL;
  v10 = 0;
  v32 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v38);
  if ( !g_bHitTestDwmFirstForTouch && (unsigned int)IsDwmInputThread(v16, v15, v17, v18) )
  {
    v38[0] = 1;
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v38);
  }
  v19 = *((_QWORD *)a1 + 14);
  if ( !v19 )
    goto LABEL_19;
  do
  {
    v42 = 0LL;
    v36 = 0LL;
    if ( !*((_DWORD *)v54 + 44) && !*((_DWORD *)v54 + 45) )
      break;
    v43 = *v55;
    v20 = xxxTouchTargetWindow(
            (struct tagWND *)v19,
            v54,
            &v43,
            (__int64)&v53,
            (__int64)a4,
            a5,
            !g_bHitTestDwmFirstForTouch,
            a6,
            (__int64)&v42,
            (__int64)&v36,
            (__int64)&v36 + 4);
    v21 = HMValidateHandleNoSecure(v40, 1);
    v9 = (struct tagRECT *)v21;
    if ( !v20 )
      goto LABEL_15;
    if ( !v21 )
      goto LABEL_14;
    v22 = *(struct tagRECT *)(v21 + 128);
    v23 = a5;
    v39 = *(struct _D3DMATRIX **)(v21 + 288);
    v41 = v22;
    ScreenRect = GetScreenRect(&v45, a5, v39, &v41);
    v25 = *(struct tagRECT *)(v19 + 128);
    v26 = *(__m128i *)ScreenRect;
    *(_QWORD *)&v41.left = *(_QWORD *)(v19 + 288);
    v33 = v25;
    if ( _mm_cvtsi128_si32(v26) < _mm_cvtsi128_si32(
                                    _mm_srli_si128(
                                      *(__m128i *)GetScreenRect(&v46, v23, *(const struct _D3DMATRIX **)&v41.left, &v33),
                                      8)) )
    {
      v33 = *(struct tagRECT *)(v19 + 128);
      v27 = *GetScreenRect(&v47, v23, *(const struct _D3DMATRIX **)&v41.left, &v33);
      v33 = v9[8];
      if ( _mm_cvtsi128_si32((__m128i)v27) < _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)GetScreenRect(
                                                                                            &v48,
                                                                                            v23,
                                                                                            v39,
                                                                                            &v33), 8)) )
      {
        v33 = v9[8];
        v28 = *GetScreenRect(&v49, v23, v39, &v33);
        v33 = *(struct tagRECT *)(v19 + 128);
        if ( _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v28, 4)) < _mm_srli_si128(
                                                                    *(__m128i *)GetScreenRect(
                                                                                  &v50,
                                                                                  v23,
                                                                                  *(const struct _D3DMATRIX **)&v41,
                                                                                  &v33),
                                                                    8).m128i_i32[1] )
        {
          v33 = *(struct tagRECT *)(v19 + 128);
          v29 = *GetScreenRect(&v51, v23, *(const struct _D3DMATRIX **)&v41.left, &v33);
          v33 = v9[8];
          if ( _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v29, 4)) < _mm_srli_si128(
                                                                      *(__m128i *)GetScreenRect(&v52, v23, v39, &v33),
                                                                      8).m128i_i32[1] )
            goto LABEL_15;
        }
      }
    }
    if ( (unsigned __int16)v53 + (v34 != 3 ? 0xFFF : 0) >= (unsigned int)((unsigned __int16)v37 + (!v35 ? 0xFFF : 0)) )
    {
LABEL_15:
      v10 = v32;
    }
    else
    {
LABEL_14:
      v9 = (struct tagRECT *)v19;
      v35 = v34 == 3;
      v40 = *(_QWORD *)v19;
      v10 = HIDWORD(v36);
      v14 = v36;
      v12 = *a4;
      v13 = v43;
      v44 = v42;
      v37 = (unsigned __int16)v53;
      v32 = HIDWORD(v36);
    }
    v19 = *(_QWORD *)(v19 + 88);
  }
  while ( v19 );
  if ( v9 )
  {
    *v55 = v13;
    *a4 = v12;
  }
  else
  {
LABEL_19:
    a4->x = 0;
    a4->y = 0;
  }
  if ( v44 )
  {
    v30 = HMValidateHandleNoSecure(v44, 1);
    if ( v30 )
    {
      v9 = (struct tagRECT *)v30;
    }
    else
    {
      v14 = 0;
      v10 = 0;
    }
  }
  if ( a7 )
    *a7 = v14;
  if ( a8 )
    *a8 = v10;
  if ( !v38[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v38);
  }
  return v9;
}
