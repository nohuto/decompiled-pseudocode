/*
 * XREFs of xxxActivateApp @ 0x1C00544F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00E34AC (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

__int64 __fastcall xxxActivateApp(ULONG_PTR a1, __int64 a2)
{
  int v3; // r8d

  if ( *(_QWORD *)(a1 + 16) == *(_QWORD *)a2 )
  {
    v3 = *(_DWORD *)(a2 + 12);
    if ( (v3 & 2) != 0 )
    {
      QueueNotifyTransformableMessage((struct tagWND *)a1, 0x1Cu, v3 & 1, *(unsigned int *)(a2 + 8), 0, 0);
    }
    else
    {
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(a1, 0, 0, 0LL, 1, 1);
    }
  }
  return 1LL;
}
