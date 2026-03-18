/*
 * XREFs of ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPEAIK@Z @ 0x1C012876C
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C012371C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0048044 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C011CBD0 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C011E480 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C01265C4 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0128B84 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C01292BC (-UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0129854 (WPP_RECORDER_SF_LL.c)
 */

__int64 __fastcall CTouchProcessor::UpdateActivePointer(
        CTouchProcessor *a1,
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
  void *v14; // rdx
  struct CInputPointerNode *NodeById; // rax
  int v16; // edx
  int v17; // r8d
  struct CInputPointerNode *Node; // rbx
  int v19; // edx
  int v20; // edx
  PDEVICE_OBJECT v21; // rcx
  int v22; // r9d
  int v24; // eax
  int v25; // edx
  unsigned __int16 v26; // bx
  int v27; // edx
  CInputDest *v28; // rax
  _QWORD *Target; // rax
  int v30; // edx
  __int16 v31; // cx
  __int16 v32; // cx
  int v33; // [rsp+20h] [rbp-248h]
  int v34; // [rsp+50h] [rbp-218h]
  _BYTE v36[208]; // [rsp+70h] [rbp-1F8h] BYREF
  _BYTE v37[208]; // [rsp+140h] [rbp-128h] BYREF

  v11 = *(_WORD *)a2;
  v12 = *(_DWORD *)(a2 + 8);
  v13 = *(_DWORD *)(a2 + 20);
  v34 = 0;
  v14 = &WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v14) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v14,
      11,
      44,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  *a6 = 0;
  *a7 = 0;
  NodeById = CTouchProcessor::FindNodeById(a1, v11, 1, 1);
  Node = NodeById;
  if ( NodeById )
  {
    v24 = *((_DWORD *)NodeById + 10);
    if ( v24 != v12 )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_LL(*((_QWORD *)a1 + 1), v16, v17, 47, v33, v24, v12);
      v26 = 0;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v25) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v25,
          11,
          48,
          (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      }
      goto LABEL_18;
    }
    if ( !(unsigned int)CTouchProcessor::SetNewValidState(a1, v13, Node) )
    {
      LOBYTE(v27) = 2;
      WPP_RECORDER_SF_(*((_QWORD *)a1 + 1), v27, 11, 49, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v21 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_8;
      v22 = 50;
      goto LABEL_7;
    }
  }
  else
  {
    v34 = 1;
    Node = CTouchProcessor::CreateNode(a1, v16, v12, v13);
    if ( !Node )
    {
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_(*((_QWORD *)a1 + 1), v19, 11, 45, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v21 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
LABEL_8:
        CInputDest::SetEmpty(a3);
        return 0LL;
      }
      v22 = 46;
LABEL_7:
      LOBYTE(v20) = 5;
      WPP_RECORDER_SF_(v21->DeviceExtension, v20, 11, v22, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      goto LABEL_8;
    }
  }
  CTouchProcessor::UpdateStateIndicator(a1, Node, v13, *(_QWORD *)(a2 + 88), *(struct tagPOINT *)(a2 + 48));
  v28 = CInputDest::CInputDest((CInputDest *)v36, a3);
  Target = (_QWORD *)CTouchProcessor::UpdateInputCaptureAndGetTarget(a1, v37, a2, Node, v13, v28, a6, a7, a8);
  CInputDest::operator=(a4, Target);
  CInputDest::SetEmpty((CInputDest *)v37);
  *a6 |= v34 != 0;
  v31 = (2 * (*((_BYTE *)Node + 344) & 4)) | *a6;
  *a6 = v31;
  v32 = (2 * (*((_BYTE *)Node + 344) & 1)) | v31;
  *a6 = v32;
  *a6 = (2 * (*((_BYTE *)Node + 344) & 2)) | v32;
  *a5 = *((_DWORD *)Node + 11) & 0x1F0;
  *((_DWORD *)Node + 11) = v13;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v30) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v30,
      11,
      51,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  v26 = *((_WORD *)Node + 16);
LABEL_18:
  CInputDest::SetEmpty(a3);
  return v26;
}
