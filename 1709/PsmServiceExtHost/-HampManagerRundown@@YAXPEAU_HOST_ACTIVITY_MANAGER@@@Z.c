/*
 * XREFs of ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180042EC0
 * Callers:
 *     RmpDestroyResourceManagerServer @ 0x180031264 (RmpDestroyResourceManagerServer.c)
 * Callees:
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F4E4 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180042DF8 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180042E9C (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall HampManagerRundown(struct _HOST_ACTIVITY_MANAGER *a1, __int64 a2)
{
  unsigned int v3; // esi
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)a1 + 30) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)a1 + 30) = 0LL;
  }
  v3 = 0;
  v4 = (_QWORD *)((char *)a1 + 16);
  do
  {
    while ( (_QWORD *)*v4 != v4 )
      HampClientDestroy((struct _HAM_CLIENT_CONTEXT *)(*v4 - 8LL));
    ++v3;
    v4 += 2;
  }
  while ( v3 < 4 );
  while ( 1 )
  {
    HampManagerAcquireLockShared(a1, a2);
    v6 = *((_QWORD *)a1 + 28);
    HampManagerReleaseLockShared(a1, v5);
    if ( !v6 )
      break;
    RtlWaitOnAddress((char *)a1 + 224, &v6, 8LL);
  }
}
