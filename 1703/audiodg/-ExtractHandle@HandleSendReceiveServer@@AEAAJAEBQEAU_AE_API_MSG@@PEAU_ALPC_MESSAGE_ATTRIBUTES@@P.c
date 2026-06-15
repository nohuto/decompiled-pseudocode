/*
 * XREFs of ?ExtractHandle@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAPEAX@Z @ 0x140030508
 * Callers:
 *     ?AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ @ 0x140017EC0 (-AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HandleSendReceiveServer::ExtractHandle(
        HandleSendReceiveServer *this,
        struct _AE_API_MSG *const *a2,
        struct _ALPC_MESSAGE_ATTRIBUTES *a3,
        void **a4)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 MessageAttribute; // rax
  void *v8; // rcx
  int v9; // eax

  v4 = (__int64)*a2;
  v5 = 0;
  if ( (*((_DWORD *)a3 + 1) & 0x10000000) == 0 )
  {
    v9 = -1073741649;
    goto LABEL_8;
  }
  MessageAttribute = AlpcGetMessageAttribute(a3, 0x10000000LL);
  if ( !MessageAttribute )
  {
    v9 = -1073741816;
LABEL_8:
    v5 = v9;
    *(_DWORD *)(v4 + 44) = v9;
    return v5;
  }
  v8 = *(void **)(MessageAttribute + 8);
  if ( a4 )
    _InterlockedExchange64((volatile __int64 *)a4, (__int64)v8);
  else
    NtClose(v8);
  return v5;
}
