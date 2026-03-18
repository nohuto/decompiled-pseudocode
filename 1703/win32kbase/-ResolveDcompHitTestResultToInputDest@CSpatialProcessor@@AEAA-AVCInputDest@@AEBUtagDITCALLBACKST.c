/*
 * XREFs of ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBUtagDITCALLBACKSTRUCT@@_KW4HitTestToInputDestOptional@@@Z @ 0x1C006EECC
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI@Z @ 0x1C006F03C (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX0KPEAUtagINPUTDEST@@@Z @ 0x1C000103C (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX0KPEAUtagINPUTDEST@@@Z.c)
 *     ApiSetEditionUpdateInputTransformFromHitTest @ 0x1C0004B74 (ApiSetEditionUpdateInputTransformFromHitTest.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?ResolveHitTestView@CSpatialProcessor@@AEAAKPEAPEAXI@Z @ 0x1C012E0E0 (-ResolveHitTestView@CSpatialProcessor@@AEAAKPEAPEAXI@Z.c)
 */

CInputDest *__fastcall CSpatialProcessor::ResolveDcompHitTestResultToInputDest(
        CSpatialProcessor *a1,
        CInputDest *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  void *v5; // rdi
  int v7; // r12d
  void *v9; // r14
  __int64 v11; // rdx
  CSpatialProcessor *v12; // rcx
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v18; // rdx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v22[24]; // [rsp+40h] [rbp-C0h] BYREF

  v5 = *(void **)(a3 + 32);
  v7 = *(_DWORD *)a3;
  v9 = (void *)*(int *)(a3 + 124);
  v21 = a4;
  memset(v22, 0, sizeof(v22));
  if ( v9 )
  {
    if ( !v5 )
    {
      v19 = *(_OWORD *)(a3 + 128);
      LODWORD(v22[0]) |= 2u;
      v20 = *(_OWORD *)(a3 + 144);
      v22[2] = v9;
      *(_OWORD *)&v22[5] = v19;
      v22[9] = *(_QWORD *)(a3 + 160);
      *(_OWORD *)&v22[7] = v20;
      goto LABEL_6;
    }
  }
  else if ( !v5 )
  {
    v12 = *(CSpatialProcessor **)(a3 + 24);
    if ( v12 )
    {
      LOBYTE(v11) = 1;
      v13 = HMValidateHandleNoSecure(v12, v11);
      if ( v13 )
      {
        LODWORD(v22[0]) |= 4u;
        LODWORD(v22[11]) |= 1u;
        HIDWORD(v22[11]) = 2;
        v22[10] = v13;
      }
    }
    goto LABEL_6;
  }
  if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(a1, v5, v9, v7, (struct tagINPUTDEST *)v22) && HIDWORD(v22[11]) )
  {
    v18 = 0LL;
    if ( HIDWORD(v22[11]) == 2 )
    {
      LOBYTE(v18) = 1;
      v18 = HMValidateHandleNoSecure(*(_QWORD *)(a3 + 24), v18);
    }
    ApiSetEditionUpdateInputTransformFromHitTest(
      (__int64)v22,
      v18,
      (__int64)v5,
      -(BYTE4(v22[1]) & 1),
      a3 + 56,
      (__int64)&v21);
  }
LABEL_6:
  if ( LODWORD(v22[0]) )
  {
    v14 = *(_OWORD *)(a3 + 72);
    *(_OWORD *)&v22[13] = *(_OWORD *)(a3 + 56);
    v15 = *(_OWORD *)(a3 + 88);
    *(_OWORD *)&v22[15] = v14;
    v16 = *(_OWORD *)(a3 + 104);
    *(_OWORD *)&v22[17] = v15;
    *(_OWORD *)&v22[19] = v16;
    if ( (a5 & 1) != 0 )
      v22[12] = CSpatialProcessor::ResolveHitTestView(v12, *(void ***)(a3 + 40), *(_DWORD *)(a3 + 48));
    if ( (a5 & 2) != 0 )
      LODWORD(v22[22]) = *(_DWORD *)(a3 + 180);
  }
  CInputDest::CInputDest(a2, (const struct CInputDest *)v22);
  return a2;
}
