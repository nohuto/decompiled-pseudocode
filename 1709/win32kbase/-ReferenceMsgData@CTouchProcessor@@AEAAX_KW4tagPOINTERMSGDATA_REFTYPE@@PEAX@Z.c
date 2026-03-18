/*
 * XREFs of ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0125184
 * Callers:
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C01198A0 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x1C0119B10 (-AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDES.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C011ABD0 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C011B920 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z.c)
 *     ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_K_JHPEAX@Z @ 0x1C01224E0 (-MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_K_JHPEAX@Z.c)
 *     ?ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0125210 (-ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0129364 (WPP_RECORDER_SF_Lq.c)
 */

__int64 __fastcall CTouchProcessor::ReferenceMsgData(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-28h]

  v3 = a3;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 24));
  if ( a3 == 1 )
  {
    result = *(unsigned int *)(a2 + 36);
    if ( (result & 0x20) != 0 )
      result = WPP_RECORDER_SF_q(
                 *(_QWORD *)(a1 + 8),
                 2u,
                 a3 + 10,
                 0x114u,
                 (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    *(_DWORD *)(a2 + 36) |= 0x20u;
  }
  if ( (*(_BYTE *)(v3 + a2 + 48))++ == 0xFF )
    return WPP_RECORDER_SF_Lq(*(_QWORD *)(a1 + 8), a2, a3, 277, v8, v3, a2);
  return result;
}
