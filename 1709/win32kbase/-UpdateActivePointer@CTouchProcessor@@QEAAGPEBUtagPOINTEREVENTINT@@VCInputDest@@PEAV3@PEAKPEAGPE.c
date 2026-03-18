/*
 * XREFs of ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPEAIK@Z @ 0x1C0127FAC
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C0122D6C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00173D4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C011BA34 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C011D248 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C0125BA4 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C01283B8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C0128B6C (-UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C01291A0 (WPP_RECORDER_SF_LL.c)
 */

__int64 __fastcall CTouchProcessor::UpdateActivePointer(
        __int64 *a1,
        __int64 a2,
        CInputDest *a3,
        __int64 a4,
        int *a5,
        _WORD *a6,
        _DWORD *a7,
        int a8)
{
  unsigned __int16 v11; // r12
  unsigned int v12; // ebp
  unsigned int v13; // r15d
  struct CInputPointerNode *NodeById; // rax
  int v15; // edx
  int v16; // r8d
  struct CInputPointerNode *Node; // rbx
  PDEVICE_OBJECT v18; // rcx
  unsigned __int16 v19; // r9
  int v21; // eax
  unsigned __int16 v22; // bx
  CInputDest *v23; // rax
  _QWORD *Target; // rax
  __int16 v25; // cx
  __int16 v26; // dx
  int v27; // [rsp+20h] [rbp-248h]
  __int16 v28; // [rsp+50h] [rbp-218h]
  _BYTE v30[208]; // [rsp+70h] [rbp-1F8h] BYREF
  _BYTE v31[208]; // [rsp+140h] [rbp-128h] BYREF

  v11 = *(_WORD *)a2;
  v12 = *(_DWORD *)(a2 + 8);
  v13 = *(_DWORD *)(a2 + 20);
  v28 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x2Cu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  *a6 = 0;
  *a7 = 0;
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)a1, v11, 1, 1);
  Node = NodeById;
  if ( NodeById )
  {
    v21 = *((_DWORD *)NodeById + 10);
    if ( v21 != v12 )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_LL(a1[1], v15, v16, 47, v27, v21, v12);
      v22 = 0;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0xBu,
          0x30u,
          (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      goto LABEL_18;
    }
    if ( !(unsigned int)CTouchProcessor::SetNewValidState((CTouchProcessor *)a1, v13, Node) )
    {
      WPP_RECORDER_SF_(a1[1], 2u, 0xBu, 0x31u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v18 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_8;
      v19 = 50;
      goto LABEL_7;
    }
  }
  else
  {
    v28 = 1;
    Node = CTouchProcessor::CreateNode((CTouchProcessor *)a1, v15, v12, v13);
    if ( !Node )
    {
      WPP_RECORDER_SF_(a1[1], 2u, 0xBu, 0x2Du, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v18 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
LABEL_8:
        CInputDest::SetEmpty(a3);
        return 0LL;
      }
      v19 = 46;
LABEL_7:
      WPP_RECORDER_SF_(
        (__int64)v18->DeviceExtension,
        5u,
        0xBu,
        v19,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      goto LABEL_8;
    }
  }
  CTouchProcessor::UpdateStateIndicator(
    (CTouchProcessor *)a1,
    Node,
    v13,
    *(_QWORD *)(a2 + 88),
    *(struct tagPOINT *)(a2 + 48));
  v23 = CInputDest::CInputDest((CInputDest *)v30, a3);
  Target = (_QWORD *)CTouchProcessor::UpdateInputCaptureAndGetTarget(a1, v31, a2, Node, v13, v23, a6, a7, a8);
  CInputDest::operator=(a4, Target);
  CInputDest::SetEmpty((CInputDest *)v31);
  *a6 |= v28;
  v25 = *a6 | (2 * (*((_DWORD *)Node + 86) & 4));
  *a6 = v25;
  v26 = v25 | (2 * (*((_WORD *)Node + 172) & 1));
  *a6 = v26;
  *a6 = v26 | (2 * (*((_DWORD *)Node + 86) & 2));
  *a5 = *((_DWORD *)Node + 11) & 0x1F0;
  *((_DWORD *)Node + 11) = v13;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x33u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v22 = *((_WORD *)Node + 16);
LABEL_18:
  CInputDest::SetEmpty(a3);
  return v22;
}
