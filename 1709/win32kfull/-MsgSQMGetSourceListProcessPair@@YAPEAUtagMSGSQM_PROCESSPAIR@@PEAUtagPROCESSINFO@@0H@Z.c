/*
 * XREFs of ?MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z @ 0x1C01F27D4
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C00A1890 (xxxInterSendMsgEx.c)
 *     MSGSQMAddMessage @ 0x1C00CD264 (MSGSQMAddMessage.c)
 * Callees:
 *     ?MsgSQMAddTargetNode@@YAHPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x1C01F23F8 (-MsgSQMAddTargetNode@@YAHPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSPAIR@@@Z.c)
 *     ?MsgSQMCleanupMsgCache@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C01F245C (-MsgSQMCleanupMsgCache@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?MsgSQMGetMsgCache@@YAPEAUtagMSGSQM_CACHE@@PEAUtagPROCESSINFO@@H@Z @ 0x1C01F269C (-MsgSQMGetMsgCache@@YAPEAUtagMSGSQM_CACHE@@PEAUtagPROCESSINFO@@H@Z.c)
 */

struct tagMSGSQM_PROCESSPAIR *__fastcall MsgSQMGetSourceListProcessPair(
        struct tagPROCESSINFO *a1,
        struct tagPROCESSINFO *a2)
{
  struct tagMSGSQM_PROCESSPAIR *result; // rax
  __int64 v5; // r8
  __int64 *v6; // rax
  __int64 *v7; // rdi
  __int64 v8; // rdx
  __int64 *v9; // rcx
  struct tagMSGSQM_PROCESSPAIR *v10; // rbx
  struct tagMSGSQM_PROCESSPAIR *v11; // rax
  struct tagMSGSQM_PROCESSPAIR **v12; // rax

  result = MsgSQMGetMsgCache(a1, 1);
  if ( result )
  {
    v6 = (__int64 *)((char *)result + 48);
    v7 = v6;
    v8 = *v6;
    if ( (__int64 *)*v6 == v6 )
      goto LABEL_10;
    v9 = (__int64 *)v6[1];
    if ( v9[5] > (unsigned __int64)a2 )
    {
      v7 = (__int64 *)*v6;
      do
      {
        v9 = v7;
        if ( v7[5] >= (unsigned __int64)a2 )
          break;
        v7 = (__int64 *)*v7;
      }
      while ( v7 != v6 );
    }
    v10 = 0LL;
    if ( (struct tagPROCESSINFO *)v9[5] == a2 )
      v10 = (struct tagMSGSQM_PROCESSPAIR *)v9;
    if ( !v10 )
    {
LABEL_10:
      v11 = (struct tagMSGSQM_PROCESSPAIR *)Win32AllocPoolZInit(56LL, 1937077077LL);
      v10 = v11;
      if ( v11 )
      {
        if ( !(unsigned int)MsgSQMAddTargetNode(a2, v11) )
        {
          Win32FreePool(v10, v8, v5);
          v10 = 0LL;
        }
        if ( v10 )
        {
          *((_QWORD *)v10 + 4) = a1;
          v12 = (struct tagMSGSQM_PROCESSPAIR **)v7[1];
          if ( *v12 != (struct tagMSGSQM_PROCESSPAIR *)v7 )
            __fastfail(3u);
          *(_QWORD *)v10 = v7;
          *((_QWORD *)v10 + 1) = v12;
          *v12 = v10;
          v7[1] = (__int64)v10;
        }
      }
    }
    MsgSQMCleanupMsgCache(a1, v8, v5);
    return v10;
  }
  return result;
}
