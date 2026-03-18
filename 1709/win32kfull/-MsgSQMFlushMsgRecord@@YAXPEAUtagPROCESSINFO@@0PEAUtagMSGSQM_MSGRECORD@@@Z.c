/*
 * XREFs of ?MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z @ 0x1C01F24F8
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C00A1890 (xxxInterSendMsgEx.c)
 *     MSGSQMAddMessage @ 0x1C00CD264 (MSGSQMAddMessage.c)
 *     ?MsgSQMFreeMsgList@@YAXPEAUtagPROCESSINFO@@0PEAPEAUtagMSGSQM_MSGRECORD@@@Z @ 0x1C01F2604 (-MsgSQMFreeMsgList@@YAXPEAUtagPROCESSINFO@@0PEAPEAUtagMSGSQM_MSGRECORD@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?MsgSQMWriteOutMsgRecord@@YAXPEBUtagMSGSQM_PROCESSSQMINFO@@0PEAUtagMSGSQM_BASERECORD@@KK_KPEBG@Z @ 0x1C01F29B4 (-MsgSQMWriteOutMsgRecord@@YAXPEBUtagMSGSQM_PROCESSSQMINFO@@0PEAUtagMSGSQM_BASERECORD@@KK_KPEBG@Z.c)
 */

void __fastcall MsgSQMFlushMsgRecord(
        struct tagPROCESSINFO *a1,
        struct tagPROCESSINFO *a2,
        struct tagMSGSQM_MSGRECORD *a3)
{
  const struct tagMSGSQM_PROCESSSQMINFO *v3; // r14
  const struct tagMSGSQM_PROCESSSQMINFO *v5; // rsi
  BOOL v6; // r8d
  int v7; // eax
  unsigned __int64 v8; // rbp
  __int64 v9; // rcx
  _BYTE v10[512]; // [rsp+40h] [rbp-238h] BYREF

  v3 = (const struct tagMSGSQM_PROCESSSQMINFO *)*((_QWORD *)a1 + 102);
  v5 = (const struct tagMSGSQM_PROCESSSQMINFO *)*((_QWORD *)a2 + 102);
  v6 = 0;
  if ( v3 || v5 )
  {
    v7 = *((_DWORD *)a3 + 6);
    if ( v7 == 1 )
      LODWORD(v8) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                  - *((_DWORD *)a3 + 7);
    else
      v8 = *((_QWORD *)a3 + 4) / (unsigned __int64)(unsigned int)(v7 - 1);
    v9 = *((unsigned __int16 *)a3 + 4);
    if ( (unsigned __int16)v9 >= 0xC000u )
      v6 = UserGetAtomName(v9, v10, 255LL) != 0;
    MsgSQMWriteOutMsgRecord(
      v3,
      v5,
      (struct tagMSGSQM_MSGRECORD *)((char *)a3 + 8),
      *((_DWORD *)a3 + 6),
      v8,
      *((_QWORD *)a3 + 2),
      (const unsigned __int16 *)((unsigned __int64)v10 & -(__int64)v6));
  }
  *((_DWORD *)a3 + 6) = 0;
  *((_QWORD *)a3 + 4) = 0LL;
}
