/*
 * XREFs of ?MsgSQMUpdateMsgRecord@@YAHPEAUtagMSGSQM_MSGRECORD@@KK@Z @ 0x1C01E6920
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C0058A60 (xxxInterSendMsgEx.c)
 *     MSGSQMAddMessage @ 0x1C00C98EC (MSGSQMAddMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MsgSQMUpdateMsgRecord(struct tagMSGSQM_MSGRECORD *a1, int a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r8
  unsigned int v5; // ecx
  __int64 result; // rax

  v2 = *((_QWORD *)a1 + 4);
  v3 = v2 + (unsigned int)(a2 - *((_DWORD *)a1 + 7));
  if ( v3 < v2 )
    return 0LL;
  v5 = *((_DWORD *)a1 + 6);
  if ( v5 + 1 < v5 )
    return 0LL;
  *((_QWORD *)a1 + 4) = v3;
  result = 1LL;
  *((_DWORD *)a1 + 6) = v5 + 1;
  *((_DWORD *)a1 + 7) = a2;
  return result;
}
