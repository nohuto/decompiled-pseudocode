/*
 * XREFs of ?AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAX@Z @ 0x140019DF0
 * Callers:
 *     ?AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ @ 0x140019E8C (-AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ.c)
 * Callees:
 *     ?ExtractHandle@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAPEAX@Z @ 0x140030140 (-ExtractHandle@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@P.c)
 *     ?ValidateStopListening@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@@Z @ 0x140047A04 (-ValidateStopListening@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@@Z.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerProcessClientRequest(
        HandleSendReceiveServer *this,
        struct _AE_API_MSG *a2,
        struct _ALPC_MESSAGE_ATTRIBUTES *a3,
        void *a4)
{
  struct _AE_API_MSG *v4; // rdi
  unsigned int v5; // ebx
  volatile __int64 *v6; // rsi
  __int64 MessageAttribute; // rax
  void *v8; // rcx
  __int64 result; // rax
  int v10; // eax
  struct _AE_API_MSG *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  v4 = a2;
  v5 = *((_WORD *)a2 + 1) != 48 ? 0xC00000AF : 0;
  if ( *((_WORD *)a2 + 1) == 48 )
  {
    switch ( *((_DWORD *)a2 + 10) )
    {
      case 1:
        v6 = (volatile __int64 *)*((_QWORD *)this + 4);
        v5 = 0;
        if ( (*((_DWORD *)a3 + 1) & 0x10000000) != 0 )
        {
          MessageAttribute = AlpcGetMessageAttribute(a3, 0x10000000LL);
          if ( MessageAttribute )
          {
            v8 = *(void **)(MessageAttribute + 8);
            if ( v6 )
            {
              _InterlockedExchange64(v6, (__int64)v8);
              v4 = v11;
            }
            else
            {
              NtClose(v8);
            }
            goto LABEL_7;
          }
          v10 = -1073741816;
          *((_DWORD *)v4 + 11) = -1073741816;
LABEL_14:
          v5 = v10;
          goto LABEL_7;
        }
        *((_DWORD *)a2 + 11) = -1073741649;
        break;
      case 2:
        v10 = HandleSendReceiveServer::ValidateStopListening(this, &v11);
        goto LABEL_14;
      case 3:
        v10 = HandleSendReceiveServer::ExtractHandle(
                (HandleSendReceiveServer *)(unsigned int)(*((_DWORD *)a2 + 10) - 2),
                &v11,
                a3,
                *((void ***)this + 5));
        goto LABEL_14;
    }
    v5 = -1073741649;
  }
LABEL_7:
  result = v5;
  *((_DWORD *)v4 + 11) = v5;
  return result;
}
