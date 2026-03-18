/*
 * XREFs of ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C0015224
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0015374 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C0012220 (-GetInputDestFromForegroundCapture@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ApiSetEditionPostInputMessage @ 0x1C00129F8 (ApiSetEditionPostInputMessage.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0016D34 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C0017338 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C001748C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C00596C0 (PhysicalToLogicalDPIPoint.c)
 *     IsWindowDesktopComposed @ 0x1C0062BA0 (IsWindowDesktopComposed.c)
 *     HMValidateSharedHandleNoRip @ 0x1C0070E54 (HMValidateSharedHandleNoRip.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0093DF8 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

char __fastcall CMouseProcessor::HandleCapture_MakeNoMouseOwner(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3,
        __int64 a4,
        struct tagPOINT a5,
        unsigned int a6)
{
  __int64 v7; // r14
  _OWORD *InputDestFromForegroundCapture; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  char v21; // di
  int v23; // esi
  __int64 v24; // rcx
  __int64 v25; // rbx
  unsigned int v26; // r14d
  unsigned int v27; // ecx
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r8
  unsigned int v32; // ebx
  __int64 v33; // r8
  __int64 PtiFromInputDest; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  _WORD v38[4]; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v39[12]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v40[12]; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v41[20]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v42; // [rsp+250h] [rbp+150h]
  int v43; // [rsp+25Ch] [rbp+15Ch]

  v37 = a4;
  v7 = a4;
  InputDestFromForegroundCapture = QHelper::GetInputDestFromForegroundCapture(v40);
  v11 = InputDestFromForegroundCapture[1];
  v39[0] = *InputDestFromForegroundCapture;
  v12 = InputDestFromForegroundCapture[2];
  v39[1] = v11;
  v13 = InputDestFromForegroundCapture[3];
  v39[2] = v12;
  v14 = InputDestFromForegroundCapture[4];
  v39[3] = v13;
  v15 = InputDestFromForegroundCapture[5];
  v39[4] = v14;
  v16 = InputDestFromForegroundCapture[6];
  v39[5] = v15;
  v39[6] = v16;
  v17 = InputDestFromForegroundCapture[7];
  InputDestFromForegroundCapture += 8;
  v39[7] = v17;
  v18 = InputDestFromForegroundCapture[1];
  v39[8] = *InputDestFromForegroundCapture;
  v19 = InputDestFromForegroundCapture[2];
  v39[9] = v18;
  v20 = InputDestFromForegroundCapture[3];
  v39[10] = v19;
  v39[11] = v20;
  CInputDest::CInputDest((CInputDest *)v41, (const struct CInputDest *)v39);
  v21 = 0;
  if ( !v41[0] || CInputDest::IsEqualByQ(a2, (const struct CInputDest *)v41) )
    goto LABEL_2;
  v23 = v43;
  v24 = 0LL;
  v25 = v42;
  if ( v43 == 2 )
    v24 = v42;
  if ( !v24 || (unsigned int)IsWindowDesktopComposed() )
  {
    v26 = 18;
    v27 = 18;
    if ( *((_DWORD *)a2 + 23) == 2 )
      v27 = *(_DWORD *)(*((_QWORD *)a2 + 10) + 368LL);
    v28 = 18;
    if ( v23 == 2 )
      v28 = *(_DWORD *)(v25 + 368);
    if ( (((unsigned __int16)(v27 >> 8) ^ (unsigned __int16)(v28 >> 8)) & 0x1FF) != 0 )
    {
      v29 = 0LL;
      if ( v23 == 2 )
        v29 = v25;
      if ( v29 )
      {
        v30 = HMValidateSharedHandleNoRip(*(_QWORD *)(v29 + 360));
        v23 = v43;
        v25 = v42;
      }
      else
      {
        v30 = 0LL;
      }
      v37 = v30;
      if ( v23 == 2 )
        v26 = *(_DWORD *)(v25 + 368);
      PhysicalToLogicalDPIPoint(v38, &a5, v26, &v37);
      v23 = v43;
      v25 = v42;
      v7 = v38[0] | (v38[2] << 16);
    }
    else
    {
      v7 = v37;
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)a3 + 84LL) != 1 )
  {
    if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*(_QWORD *)a3 + 108LL), v41, (char *)this + 8) )
      goto LABEL_31;
    v23 = v43;
    v25 = v42;
  }
  v31 = 0LL;
  if ( v23 == 2 )
    v31 = v25;
  v32 = a6;
  ApiSetEditionPostInputMessage(
    (__int64)v41,
    0LL,
    v31,
    a6,
    0LL,
    v7,
    0,
    0LL,
    0LL,
    0,
    (__int64 *)(*(_QWORD *)a3 + 80LL),
    0LL,
    0LL);
  v33 = 0LL;
  if ( v43 == 2 )
    v33 = v42;
  ApiSetEditionPostInputMessage(
    (__int64)v41,
    0LL,
    v33,
    v32 + 1,
    0LL,
    v7,
    0,
    0LL,
    0LL,
    0,
    (__int64 *)(*(_QWORD *)a3 + 80LL),
    0LL,
    0LL);
LABEL_31:
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(v41, 2LL);
  if ( !PtiFromInputDest
    || !*(_QWORD *)(PtiFromInputDest + 648)
    || (v35 = anonymous_namespace_::GetPtiFromInputDest(v41, 2LL)) != 0
    && (v36 = *(_QWORD *)(v35 + 584)) != 0
    && (*(_DWORD *)(v36 + 8) & 1) != 0 )
  {
LABEL_2:
    *((_DWORD *)this + 672) |= *((_DWORD *)a3 + 3);
    CInputDest::operator=((char *)this + 2696, a2);
    v21 = 1;
    _InterlockedExchange((volatile __int32 *)this + 724, 1);
  }
  CInputDest::SetEmpty((CInputDest *)v41);
  return v21;
}
