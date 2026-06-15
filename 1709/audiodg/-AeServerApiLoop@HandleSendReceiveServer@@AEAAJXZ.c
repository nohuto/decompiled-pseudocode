/*
 * XREFs of ?AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ @ 0x140019E8C
 * Callers:
 *     ?AeServerApiProc@HandleSendReceiveServer@@CAKPEAX@Z @ 0x140019DE0 (-AeServerApiProc@HandleSendReceiveServer@@CAKPEAX@Z.c)
 * Callees:
 *     ?AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAX@Z @ 0x140019DF0 (-AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_A.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     memset @ 0x14001D9AC (memset.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerApiLoop(HandleSendReceiveServer *this)
{
  __int64 result; // rax
  _BYTE *v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  void *v6; // r9
  void *v7; // rcx
  char v8; // dl
  int v9; // [rsp+40h] [rbp-C0h]
  __int64 v10; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v12[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v13[4]; // [rsp+68h] [rbp-98h] BYREF
  __int16 v14; // [rsp+6Ch] [rbp-94h]
  unsigned __int64 v15; // [rsp+70h] [rbp-90h]
  _QWORD v16[10]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v17[64]; // [rsp+F0h] [rbp-10h] BYREF

  result = AlpcInitializeMessageAttribute(805306368LL, v17, 64LL, v12);
  if ( (int)result >= 0 )
  {
    AlpcGetMessageAttribute(v17, 0x20000000LL);
    v3 = 0LL;
    memset(v16, 0, 0x48uLL);
    v16[2] = 48LL;
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 14, 1, 1) )
    {
      while ( 1 )
      {
        v4 = *((_QWORD *)this + 1);
        v10 = 48LL;
        v5 = NtAlpcSendWaitReceivePort(
               v4,
               0x10000LL,
               v3,
               0LL,
               v13,
               &v10,
               v17,
               &HandleSendReceiveServer::AeServerApiThreadTimeout);
        if ( v5 < 0 )
          goto LABEL_11;
        if ( v5 != 258 )
          break;
LABEL_12:
        if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 14, 1, 1) )
          return 0LL;
      }
      if ( (unsigned __int8)v14 == 1 )
      {
        HandleSendReceiveServer::AeServerProcessClientRequest(
          this,
          (struct _AE_API_MSG *)v13,
          (struct _ALPC_MESSAGE_ATTRIBUTES *)v17,
          v6);
        v3 = v13;
        goto LABEL_12;
      }
      if ( (unsigned __int8)v14 != 3 )
      {
        if ( (unsigned __int8)v14 == 5 )
        {
          v7 = (void *)*((_QWORD *)this + 3);
          if ( v7 )
          {
            NtClose(v7);
            *((_QWORD *)this + 3) = 0LL;
          }
          _InterlockedExchange((volatile __int32 *)this + 14, 1);
        }
        else if ( (unsigned __int8)v14 == 10 )
        {
          LODWORD(v16[0]) = 0;
          v8 = 0;
          LODWORD(v16[8]) = 0;
          if ( v15 <= 0xFFFFFFFF && (_DWORD)v15 == *((_DWORD *)this + 4) )
          {
            v8 = 1;
            LODWORD(v16[0]) = 0x80000;
            LODWORD(v16[8]) = 16;
          }
          LOBYTE(v9) = v8;
          NtAlpcAcceptConnectPort(&v11, *((_QWORD *)this + 1), 0LL, 0LL, v16, 0LL, v13, v17, v9);
          *((_QWORD *)this + 3) = v11;
          *((_BYTE *)this + 60) = 1;
        }
      }
LABEL_11:
      v3 = 0LL;
      goto LABEL_12;
    }
    return 0LL;
  }
  return result;
}
