/*
 * XREFs of ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00463B4
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00464F0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0047C70 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetMonitorDpiFlags@CInputDest@@QEBAKXZ @ 0x1C0047E80 (-GetMonitorDpiFlags@CInputDest@@QEBAKXZ.c)
 *     ?GetDpiAwareness@CInputDest@@QEBAKXZ @ 0x1C0047ED8 (-GetDpiAwareness@CInputDest@@QEBAKXZ.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C0047FC4 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00480FC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C00498B0 (PhysicalToLogicalDPIPoint.c)
 *     IsWindowDesktopComposed @ 0x1C0070100 (IsWindowDesktopComposed.c)
 *     HMValidateSharedHandleNoRip @ 0x1C007772C (HMValidateSharedHandleNoRip.c)
 *     ApiSetEditionPostInputMessage @ 0x1C00805C8 (ApiSetEditionPostInputMessage.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C008BB10 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C008C9E0 (-GetInputDestFromForegroundCapture@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

char __fastcall CMouseProcessor::HandleCapture_MakeNoMouseOwner(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3,
        __int64 a4,
        struct tagPOINT a5,
        unsigned int a6)
{
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
  __int64 v23; // rcx
  unsigned int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int MonitorDpiFlags; // eax
  int v28; // r8d
  unsigned int v29; // ebx
  int v30; // r8d
  __int64 PtiFromInputDest; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _WORD v34[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v36[12]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v37[192]; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v38[20]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v39; // [rsp+250h] [rbp+150h]
  int v40; // [rsp+25Ch] [rbp+15Ch]

  InputDestFromForegroundCapture = (_OWORD *)QHelper::GetInputDestFromForegroundCapture(v37);
  v11 = InputDestFromForegroundCapture[1];
  v36[0] = *InputDestFromForegroundCapture;
  v12 = InputDestFromForegroundCapture[2];
  v36[1] = v11;
  v13 = InputDestFromForegroundCapture[3];
  v36[2] = v12;
  v14 = InputDestFromForegroundCapture[4];
  v36[3] = v13;
  v15 = InputDestFromForegroundCapture[5];
  v36[4] = v14;
  v16 = InputDestFromForegroundCapture[6];
  v36[5] = v15;
  v36[6] = v16;
  v17 = InputDestFromForegroundCapture[7];
  InputDestFromForegroundCapture += 8;
  v36[7] = v17;
  v18 = InputDestFromForegroundCapture[1];
  v36[8] = *InputDestFromForegroundCapture;
  v19 = InputDestFromForegroundCapture[2];
  v36[9] = v18;
  v20 = InputDestFromForegroundCapture[3];
  v36[10] = v19;
  v36[11] = v20;
  CInputDest::CInputDest((CInputDest *)v38, (const struct CInputDest *)v36);
  v21 = 0;
  if ( !v38[0] || CInputDest::IsEqualByQ(a2, (const struct CInputDest *)v38) )
    goto LABEL_2;
  v23 = 0LL;
  if ( v40 == 2 )
    v23 = v39;
  if ( !v23 || (unsigned int)IsWindowDesktopComposed() )
  {
    v24 = CInputDest::GetDpiAwareness(a2) & 0xF;
    if ( v24 != (CInputDest::GetDpiAwareness((CInputDest *)v38) & 0xF) )
    {
      v25 = 0LL;
      if ( v40 == 2 )
        v25 = v39;
      if ( v25 )
        v26 = HMValidateSharedHandleNoRip(*(_QWORD *)(v25 + 360));
      else
        v26 = 0LL;
      v35 = v26;
      MonitorDpiFlags = CInputDest::GetMonitorDpiFlags((CInputDest *)v38);
      PhysicalToLogicalDPIPoint(v34, &a5, MonitorDpiFlags, &v35);
      a4 = v34[0] | (v34[2] << 16);
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)a3 + 84LL) == 1
    || (unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*(_QWORD *)a3 + 108LL), v38, (char *)this + 8) )
  {
    v28 = 0;
    if ( v40 == 2 )
      v28 = v39;
    v29 = a6;
    ApiSetEditionPostInputMessage(
      (unsigned int)v38,
      0,
      v28,
      a6,
      0LL,
      a4,
      0,
      0LL,
      0LL,
      0,
      *(_QWORD *)a3 + 80LL,
      0LL,
      0LL,
      0);
    v30 = 0;
    if ( v40 == 2 )
      v30 = v39;
    ApiSetEditionPostInputMessage(
      (unsigned int)v38,
      0,
      v30,
      v29 + 1,
      0LL,
      a4,
      0,
      0LL,
      0LL,
      0,
      *(_QWORD *)a3 + 80LL,
      0LL,
      0LL,
      0);
  }
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(v38, 2LL);
  if ( !PtiFromInputDest
    || !*(_QWORD *)(PtiFromInputDest + 592)
    || (v32 = anonymous_namespace_::GetPtiFromInputDest(v38, 2LL)) != 0
    && (v33 = *(_QWORD *)(v32 + 528)) != 0
    && (*(_DWORD *)(v33 + 8) & 1) != 0 )
  {
LABEL_2:
    *((_DWORD *)this + 634) |= *((_DWORD *)a3 + 3);
    CInputDest::operator=((char *)this + 2544, a2);
    v21 = 1;
    _InterlockedExchange((volatile __int32 *)this + 686, 1);
  }
  CInputDest::SetEmpty((CInputDest *)v38);
  return v21;
}
