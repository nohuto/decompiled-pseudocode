/*
 * XREFs of ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C011F058
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0123778 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011D210 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011E310 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0127C84 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     WPP_RECORDER_SF_HL @ 0x1C0128F34 (WPP_RECORDER_SF_HL.c)
 */

void __fastcall CTouchProcessor::GenerateWindowLeaveMessage(
        __int64 *a1,
        __int64 a2,
        CInputDest *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7)
{
  PDEVICE_OBJECT v11; // rcx
  unsigned __int16 v12; // r9
  struct CPointerInputFrame *FrameById; // rax
  struct CPointerInputFrame *v14; // rdi
  __int64 v15; // r14
  int v16; // edx
  int v17; // r8d
  int v18; // [rsp+20h] [rbp-118h]
  _BYTE v19[208]; // [rsp+40h] [rbp-F8h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xC1u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  if ( a2 )
  {
    FrameById = CTouchProcessor::FindFrameById((CTouchProcessor *)a1, *(_DWORD *)(a2 + 28));
    v14 = FrameById;
    if ( FrameById )
    {
      _InterlockedIncrement((volatile signed __int32 *)FrameById + 11);
      v15 = *((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(a2 + 32);
      if ( !a5 )
      {
        memset(v19, 0, 0xC8uLL);
        v19[192] = 0;
        if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                              (__int64)a1,
                              v15,
                              a2,
                              0x24Au,
                              a4,
                              a6,
                              a7,
                              (CInputDest *)v19) )
          WPP_RECORDER_SF_HL(a1[1], v16, v17, 198, v18, *(_WORD *)(a2 + 16), *(_WORD *)(v15 + 240));
      }
      CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)a1, v14);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0xBu,
          0xC7u,
          (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    }
    else
    {
      WPP_RECORDER_SF_(a1[1], 2u, 0xBu, 0xC4u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 197;
        goto LABEL_14;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_(a1[1], 4u, 0xBu, 0xC2u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v12 = 195;
LABEL_14:
      WPP_RECORDER_SF_(
        (__int64)v11->DeviceExtension,
        5u,
        0xBu,
        v12,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    }
  }
  CInputDest::SetEmpty(a3);
}
