/*
 * XREFs of ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBUtagDITCALLBACKSTRUCT@@_KW4HitTestToInputDestOptional@@@Z @ 0x1C0012F80
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI@Z @ 0x1C0013170 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI.c)
 * Callees:
 *     ApiSetEditionUpdateInputTransformFromHitTest @ 0x1C0012954 (ApiSetEditionUpdateInputTransformFromHitTest.c)
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 *     ?ResolveHitTestView@CSpatialProcessor@@AEAAKPEAPEAXI@Z @ 0x1C0013100 (-ResolveHitTestView@CSpatialProcessor@@AEAAKPEAPEAXI@Z.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX_KKPEAUtagINPUTDEST@@@Z @ 0x1C00134C0 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX_KKPEAUtagINPUTDEST@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

CInputDest *__fastcall CSpatialProcessor::ResolveDcompHitTestResultToInputDest(
        CSpatialProcessor *a1,
        CInputDest *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  void *v5; // rdi
  unsigned int v7; // r12d
  unsigned __int64 v9; // r14
  __int64 v11; // rdx
  CSpatialProcessor *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v26[24]; // [rsp+40h] [rbp-C0h] BYREF

  v5 = *(void **)(a3 + 32);
  v7 = *(_DWORD *)a3;
  v9 = *(_QWORD *)(a3 + 128);
  v25 = a4;
  memset(v26, 0, sizeof(v26));
  if ( v9 )
  {
    if ( !v5 )
    {
      v23 = *(_OWORD *)(a3 + 136);
      LODWORD(v26[0]) |= 2u;
      v24 = *(_OWORD *)(a3 + 152);
      v26[2] = v9;
      *(_OWORD *)&v26[5] = v23;
      v26[9] = *(_QWORD *)(a3 + 168);
      *(_OWORD *)&v26[7] = v24;
      goto LABEL_6;
    }
  }
  else if ( !v5 )
  {
    v12 = *(CSpatialProcessor **)(a3 + 24);
    if ( v12 )
    {
      LOBYTE(v11) = 1;
      v15 = HMValidateHandleNoSecure((unsigned __int64)v12, v11, v13, v14);
      if ( v15 )
      {
        LODWORD(v26[0]) |= 4u;
        LODWORD(v26[11]) |= 1u;
        HIDWORD(v26[11]) = 2;
        v26[10] = v15;
      }
    }
    goto LABEL_6;
  }
  if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(a1, v5, v9, v7, (struct tagINPUTDEST *)v26) && HIDWORD(v26[11]) )
  {
    v22 = 0LL;
    if ( HIDWORD(v26[11]) == 2 )
    {
      LOBYTE(v22) = 1;
      v22 = HMValidateHandleNoSecure(*(_QWORD *)(a3 + 24), v22, v20, v21);
    }
    ApiSetEditionUpdateInputTransformFromHitTest(
      (__int64)v26,
      v22,
      (__int64)v5,
      -(BYTE4(v26[1]) & 1),
      a3 + 56,
      (__int64)&v25);
  }
LABEL_6:
  if ( LODWORD(v26[0]) )
  {
    v16 = *(_OWORD *)(a3 + 72);
    *(_OWORD *)&v26[13] = *(_OWORD *)(a3 + 56);
    v17 = *(_OWORD *)(a3 + 88);
    *(_OWORD *)&v26[15] = v16;
    v18 = *(_OWORD *)(a3 + 104);
    *(_OWORD *)&v26[17] = v17;
    *(_OWORD *)&v26[19] = v18;
    if ( (a5 & 1) != 0 )
      v26[12] = CSpatialProcessor::ResolveHitTestView(v12, *(void ***)(a3 + 40), *(_DWORD *)(a3 + 48));
    if ( (a5 & 2) != 0 )
      LODWORD(v26[22]) = *(_DWORD *)(a3 + 188);
  }
  CInputDest::CInputDest(a2, (const struct CInputDest *)v26);
  return a2;
}
