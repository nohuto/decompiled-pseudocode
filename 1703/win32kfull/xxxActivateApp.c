/*
 * XREFs of xxxActivateApp @ 0x1C001C140
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00C65F4 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

__int64 __fastcall xxxActivateApp(__int64 a1, __int64 a2)
{
  int v3; // r8d
  __int64 v4; // r9

  if ( *(_QWORD *)(a1 + 16) == *(_QWORD *)a2 )
  {
    v3 = *(_DWORD *)(a2 + 12);
    v4 = *(unsigned int *)(a2 + 8);
    if ( (v3 & 2) != 0 )
    {
      QueueNotifyTransformableMessage((struct tagWND *)a1, 0x1Cu, v3 & 1, v4, 0, 0);
    }
    else
    {
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(a1, 28, v3 & 1, v4, 0, 0, 0LL, 1, 1);
    }
  }
  return 1LL;
}
