/*
 * XREFs of ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C01201F8
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0124108 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011F470 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     WPP_RECORDER_SF_HL @ 0x1C01296DC (WPP_RECORDER_SF_HL.c)
 */

void __fastcall CTouchProcessor::GenerateWindowLeaveMessage(
        CTouchProcessor *a1,
        __int64 a2,
        CInputDest *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7)
{
  __int64 v9; // rsi
  int v11; // edx
  PDEVICE_OBJECT v12; // rcx
  int v13; // r9d
  struct CPointerInputFrame *FrameById; // rax
  int v15; // edx
  struct CPointerInputFrame *v16; // rdi
  __int64 v17; // r14
  int v18; // edx
  int v19; // r8d
  int v20; // [rsp+20h] [rbp-118h]
  _BYTE v21[208]; // [rsp+40h] [rbp-F8h] BYREF

  v9 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      193,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  if ( v9 )
  {
    FrameById = CTouchProcessor::FindFrameById(a1, *(_DWORD *)(v9 + 28));
    v16 = FrameById;
    if ( FrameById )
    {
      _InterlockedIncrement((volatile signed __int32 *)FrameById + 11);
      v17 = *((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(v9 + 32);
      if ( !a5 )
      {
        memset(v21, 0, 0xC8uLL);
        v21[192] = 0;
        if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                              (__int64)a1,
                              v17,
                              v9,
                              0x24Au,
                              a4,
                              a6,
                              a7,
                              (CInputDest *)v21) )
          WPP_RECORDER_SF_HL(*((_QWORD *)a1 + 1), v18, v19, 198, v20, *(_WORD *)(v9 + 16), *(_WORD *)(v17 + 240));
      }
      CTouchProcessor::UnreferenceFrameInt(a1, v16);
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 199;
        goto LABEL_14;
      }
    }
    else
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_(*((_QWORD *)a1 + 1), v15, 11, 196, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 197;
        goto LABEL_14;
      }
    }
  }
  else
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(*((_QWORD *)a1 + 1), a2, 11, 194, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 195;
LABEL_14:
      LOBYTE(v11) = 5;
      WPP_RECORDER_SF_(v12->DeviceExtension, v11, 11, v13, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    }
  }
  CInputDest::SetEmpty(a3);
}
