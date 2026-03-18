/*
 * XREFs of ExpEnumerateCallback @ 0x1400CC950
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

__int64 __fastcall ExpEnumerateCallback(__int64 a1, _QWORD *a2)
{
  KSPIN_LOCK *v2; // rbp
  KIRQL v5; // r14
  __int64 *v6; // rbx
  __int64 v7; // r10
  __int64 v8; // rdi
  __int64 **v9; // rcx
  __int64 *i; // rax
  int v11; // eax
  bool v12; // zf

  v2 = (KSPIN_LOCK *)(a1 + 8);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 8));
  v6 = (__int64 *)(a1 + 16);
  v7 = *a2 & -(__int64)(*a2 != 0LL);
  v8 = 0LL;
  v9 = (__int64 **)v6;
  if ( *a2 )
    v9 = (__int64 **)*a2;
  for ( i = *v9; i != v6; i = (__int64 *)*i )
  {
    if ( !*((_BYTE *)i + 44) )
    {
      ++*((_DWORD *)i + 10);
      v8 = i[3];
      *a2 = i;
      break;
    }
  }
  if ( v7 )
  {
    v11 = *(_DWORD *)(v7 + 40) - 1;
    v12 = *(_BYTE *)(v7 + 44) == 0;
    *(_DWORD *)(v7 + 40) = v11;
    if ( !v12 && !v11 )
      KeSetEvent(&ExpCallbackEvent, 0, 0);
  }
  KxReleaseSpinLock(v2);
  __writecr8(v5);
  return v8;
}
