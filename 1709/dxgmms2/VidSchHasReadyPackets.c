/*
 * XREFs of VidSchHasReadyPackets @ 0x1C002B900
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

  KeAcquireInStackQueuedSpinLock(a1 + 236, &LockHandle);
  v2 = a1[50];
  v3 = v2 != 0;
  if ( !v2 )
  {
    v4 = (_QWORD *)a1[32];
    if ( v4 != a1 + 32 )
    {
      v3 = 1;
      do
      {
        for ( i = (_QWORD *)*(v4 - 2); i != v4 - 2; i = (_QWORD *)*i )
        {
          v6 = i[78];
          if ( (_QWORD *)v6 != i + 78 && (*(_DWORD *)(v6 + 16) != 4 || (*(_DWORD *)(v6 + 256) & 1) != 0) )
            goto LABEL_12;
        }
        v4 = (_QWORD *)*v4;
      }
      while ( v4 != a1 + 32 );
      v3 = v2 != 0;
    }
  }
LABEL_12:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
