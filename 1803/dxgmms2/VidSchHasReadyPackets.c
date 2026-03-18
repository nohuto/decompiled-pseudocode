/*
 * XREFs of VidSchHasReadyPackets @ 0x1C002E950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall VidSchHasReadyPackets(_QWORD *a1)
{
  __int64 v2; // rax
  bool v3; // bl
  _QWORD *v4; // rcx
  _QWORD *i; // rdx
  __int64 v6; // r11
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 238, &LockHandle);
  v2 = a1[52];
  v3 = v2 != 0;
  if ( !v2 )
  {
    v4 = (_QWORD *)a1[34];
    if ( v4 != a1 + 34 )
    {
      v3 = 1;
      do
      {
        for ( i = (_QWORD *)*(v4 - 4); i != v4 - 4; i = (_QWORD *)*i )
        {
          v6 = i[79];
          if ( (_QWORD *)v6 != i + 79 && (*(_DWORD *)(v6 + 16) != 4 || (*(_DWORD *)(v6 + 240) & 1) != 0) )
            goto LABEL_12;
        }
        v4 = (_QWORD *)*v4;
      }
      while ( v4 != a1 + 34 );
      v3 = v2 != 0;
    }
  }
LABEL_12:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
