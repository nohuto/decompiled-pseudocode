/*
 * XREFs of ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C010F7B8
 * Callers:
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C011DC48 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x1C010D4A8 (-AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0111610 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C011ABA4 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall CTouchProcessor::CreateAndReferenceMsgData(
        struct _KTHREAD **this,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6)
{
  unsigned __int16 v8; // r14
  int v10; // esi
  struct CInputPointerNode *NodeById; // rbp
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rcx

  v8 = a2;
  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v10 = 0;
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)this, v8, 0, 0);
  if ( !NodeById )
    return 0LL;
  v13 = Win32AllocPoolZInit(0x38uLL, 0x64707355u);
  v14 = v13;
  if ( !v13 )
    return 0LL;
  *((_WORD *)v13 + 8) = v8;
  *((_DWORD *)v13 + 7) = a3;
  *((_DWORD *)v13 + 8) = a4;
  LOBYTE(v10) = (a5 & 0x40004) == 0;
  *((_DWORD *)v13 + 9) = *((_DWORD *)v13 + 9) & 0xFFFFFFF0 | (4 * (a6 & 1)) | v10 & 0xFFFFFFF1 | ((a5 & 0x2000 | (a5 >> 5) & 0x800) >> 10);
  CTouchProcessor::AssignPointerCaptureData(this, NodeById, (struct CPointerMsgData *)v13);
  v15 = (_QWORD *)((char *)NodeById + 288);
  v16 = *((_QWORD *)NodeById + 36);
  if ( *(struct CInputPointerNode **)(v16 + 8) != (struct CInputPointerNode *)((char *)NodeById + 288) )
    __fastfail(3u);
  *v14 = v16;
  v14[1] = v15;
  *(_QWORD *)(v16 + 8) = v14;
  *v15 = v14;
  CTouchProcessor::ReferenceMsgData(this, v14, 1LL);
  return v14;
}
