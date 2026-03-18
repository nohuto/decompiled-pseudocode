/*
 * XREFs of CiThreadInsertInTree @ 0x1C0001A20
 * Callers:
 *     CiThreadCreate @ 0x1C000A7C0 (CiThreadCreate.c)
 * Callees:
 *     <none>
 */

bool __fastcall CiThreadInsertInTree(__int64 a1)
{
  char v2; // di
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  v2 = 0;
  v3 = *(_QWORD **)&WPP_MAIN_CB.DeviceQueue.Type;
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = KeGetCurrentThread();
  LOBYTE(v4) = 0;
  v5 = *(_QWORD *)(a1 + 96);
  if ( *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
  {
    while ( 1 )
    {
      v6 = v3[7];
      if ( v5 >= v6 )
      {
        if ( v5 <= v6 )
        {
          v2 = 1;
          goto LABEL_9;
        }
        v4 = (_QWORD *)v3[1];
        if ( !v4 )
        {
          LOBYTE(v4) = 1;
          break;
        }
      }
      else
      {
        v4 = (_QWORD *)*v3;
        if ( !*v3 )
          break;
      }
      v3 = v4;
    }
  }
  RtlRbInsertNodeEx(&WPP_MAIN_CB.DeviceQueue, v3, (unsigned __int8)v4, a1 + 40);
LABEL_9:
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, 0);
  return v2 == 0;
}
