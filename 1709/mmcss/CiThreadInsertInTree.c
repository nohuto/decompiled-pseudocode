/*
 * XREFs of CiThreadInsertInTree @ 0x1C00023F4
 * Callers:
 *     CiThreadCreate @ 0x1C000A9F4 (CiThreadCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiThreadInsertInTree(__int64 a1)
{
  __int64 v2; // r8
  _QWORD *v3; // rdx
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rax
  _QWORD *v6; // rax
  unsigned __int8 v7; // bl

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  LOBYTE(v2) = 0;
  v3 = *(_QWORD **)&WPP_MAIN_CB.DeviceQueue.Type;
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = KeGetCurrentThread();
  v4 = *(_QWORD *)(a1 + 96);
  if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
    goto LABEL_10;
  while ( 1 )
  {
    v5 = v3[7];
    if ( v4 < v5 )
      break;
    if ( v4 <= v5 )
    {
      v7 = 0;
      goto LABEL_11;
    }
    v6 = (_QWORD *)v3[1];
    if ( !v6 )
    {
      LOBYTE(v2) = 1;
      goto LABEL_10;
    }
LABEL_7:
    v3 = v6;
  }
  v6 = (_QWORD *)*v3;
  if ( *v3 )
    goto LABEL_7;
  LOBYTE(v2) = 0;
LABEL_10:
  RtlRbInsertNodeEx(&WPP_MAIN_CB.DeviceQueue, v3, v2, a1 + 40);
  v7 = 1;
LABEL_11:
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, 0);
  return v7;
}
