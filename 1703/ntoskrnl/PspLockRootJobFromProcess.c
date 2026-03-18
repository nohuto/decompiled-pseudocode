/*
 * XREFs of PspLockRootJobFromProcess @ 0x140547770
 * Callers:
 *     PspSendProcessNotificationToJobChain @ 0x140546E24 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x14054727C (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     PspUnlockJob @ 0x140479650 (PspUnlockJob.c)
 */

__int64 __fastcall PspLockRootJobFromProcess(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+40h] [rbp+8h]
  __int64 v11; // [rsp+48h] [rbp+10h]

  v10 = *(_QWORD *)(a1 + 944);
  v11 = *(_QWORD *)(v10 + 1080);
  v8 = v11;
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  while ( 1 )
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)(v8 + 56), 1u);
    if ( v10 == *(_QWORD *)(a1 + 944) && v11 == *(_QWORD *)(v10 + 1080) )
      break;
    PspUnlockJob(v11, a2);
    v10 = *(_QWORD *)(a1 + 944);
    v11 = *(_QWORD *)(v10 + 1080);
    v8 = v11;
    if ( a2 )
      --*(_WORD *)(a2 + 486);
  }
  *a3 = v10;
  result = v11;
  *a4 = v11;
  return result;
}
