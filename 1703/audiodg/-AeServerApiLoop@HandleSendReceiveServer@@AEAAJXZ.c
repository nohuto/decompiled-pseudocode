/*
 * XREFs of ?AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ @ 0x140017EC0
 * Callers:
 *     ?AeServerApiProc@HandleSendReceiveServer@@CAKPEAX@Z @ 0x140017EB0 (-AeServerApiProc@HandleSendReceiveServer@@CAKPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     ?ExtractHandle@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAPEAX@Z @ 0x140030508 (-ExtractHandle@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@P.c)
 *     ?ValidateStopListening@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@@Z @ 0x140046A28 (-ValidateStopListening@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@@Z.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerApiLoop(HandleSendReceiveServer *this)
{
  __int64 result; // rax
  _BYTE *v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  char v6; // cl
  void *v7; // rcx
  int v8; // esi
  volatile __int64 *v9; // rdi
  __int64 MessageAttribute; // rax
  void *v11; // rcx
  int v12; // [rsp+40h] [rbp-C0h]
  struct _AE_API_MSG *v13; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v16[2]; // [rsp+68h] [rbp-98h] BYREF
  __int16 v17; // [rsp+6Ah] [rbp-96h]
  __int16 v18; // [rsp+6Ch] [rbp-94h]
  unsigned __int64 v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+90h] [rbp-70h]
  int v21; // [rsp+94h] [rbp-6Ch]
  _BYTE v22[8]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v23[10]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v24[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v25; // [rsp+F4h] [rbp-Ch]

  result = AlpcInitializeMessageAttribute(805306368LL, v24, 64LL, v22);
  if ( (int)result >= 0 )
  {
    AlpcGetMessageAttribute(v24, 0x20000000LL);
    v3 = 0LL;
    memset(v23, 0, 0x48uLL);
    v23[2] = 48LL;
    while ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 14, 1, 1) )
    {
      v4 = *((_QWORD *)this + 1);
      v14 = 48LL;
      v5 = NtAlpcSendWaitReceivePort(
             v4,
             0x10000LL,
             v3,
             0LL,
             v16,
             &v14,
             v24,
             &HandleSendReceiveServer::AeServerApiThreadTimeout);
      if ( v5 < 0 )
      {
        v3 = 0LL;
        continue;
      }
      if ( v5 != 258 )
      {
        if ( (unsigned __int8)v18 == 1 )
        {
          v13 = (struct _AE_API_MSG *)v16;
          if ( v17 != 48 )
            goto LABEL_29;
          switch ( v20 )
          {
            case 1:
              v8 = 0;
              v9 = (volatile __int64 *)*((_QWORD *)this + 4);
              if ( (v25 & 0x10000000) != 0 )
              {
                MessageAttribute = AlpcGetMessageAttribute(v24, 0x10000000LL);
                if ( MessageAttribute )
                {
                  v11 = *(void **)(MessageAttribute + 8);
                  if ( v9 )
                    _InterlockedExchange64(v9, (__int64)v11);
                  else
                    NtClose(v11);
                }
                else
                {
                  v8 = -1073741816;
                }
                break;
              }
LABEL_29:
              v8 = -1073741649;
              break;
            case 2:
              v8 = HandleSendReceiveServer::ValidateStopListening(this, &v13);
              break;
            case 3:
              v8 = HandleSendReceiveServer::ExtractHandle(
                     (HandleSendReceiveServer *)(unsigned int)(v20 - 2),
                     &v13,
                     (struct _ALPC_MESSAGE_ATTRIBUTES *)v24,
                     *((void ***)this + 5));
              break;
            default:
              goto LABEL_29;
          }
          v21 = v8;
          v3 = v16;
          continue;
        }
        if ( (unsigned __int8)v18 != 3 )
        {
          switch ( (unsigned __int8)v18 )
          {
            case 5u:
              v7 = (void *)*((_QWORD *)this + 3);
              if ( v7 )
              {
                NtClose(v7);
                *((_QWORD *)this + 3) = 0LL;
              }
              v3 = 0LL;
              _InterlockedExchange((volatile __int32 *)this + 14, 1);
              continue;
            case 0xAu:
              v6 = 0;
              LODWORD(v23[0]) = 0;
              LODWORD(v23[8]) = 0;
              if ( v19 <= 0xFFFFFFFF && (_DWORD)v19 == *((_DWORD *)this + 4) )
              {
                v6 = 1;
                LODWORD(v23[0]) = 0x80000;
                LODWORD(v23[8]) = 16;
              }
              LOBYTE(v12) = v6;
              NtAlpcAcceptConnectPort(&v15, *((_QWORD *)this + 1), 0LL, 0LL, v23, 0LL, v16, v24, v12);
              *((_QWORD *)this + 3) = v15;
              *((_BYTE *)this + 60) = 1;
              break;
            case 0xCu:
              break;
            default:
              v3 = 0LL;
              continue;
          }
        }
        v3 = 0LL;
      }
    }
    return 0LL;
  }
  return result;
}
