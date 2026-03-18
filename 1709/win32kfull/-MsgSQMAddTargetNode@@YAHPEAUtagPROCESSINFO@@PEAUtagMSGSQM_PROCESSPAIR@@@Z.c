/*
 * XREFs of ?MsgSQMAddTargetNode@@YAHPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x1C01F23F8
 * Callers:
 *     ?MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z @ 0x1C01F27D4 (-MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z.c)
 * Callees:
 *     ?MsgSQMGetMsgCache@@YAPEAUtagMSGSQM_CACHE@@PEAUtagPROCESSINFO@@H@Z @ 0x1C01F269C (-MsgSQMGetMsgCache@@YAPEAUtagMSGSQM_CACHE@@PEAUtagPROCESSINFO@@H@Z.c)
 */

__int64 __fastcall MsgSQMAddTargetNode(struct tagPROCESSINFO *a1, struct tagMSGSQM_PROCESSPAIR *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rdx

  result = (__int64)MsgSQMGetMsgCache(a1, 1);
  if ( result )
  {
    v5 = result + 64;
    *((_QWORD *)a2 + 5) = a1;
    v6 = (_QWORD *)((char *)a2 + 16);
    v7 = *(_QWORD **)(v5 + 8);
    if ( *v7 != v5 )
      __fastfail(3u);
    *v6 = v5;
    *((_QWORD *)a2 + 3) = v7;
    *v7 = v6;
    *(_QWORD *)(v5 + 8) = v6;
    return 1LL;
  }
  return result;
}
