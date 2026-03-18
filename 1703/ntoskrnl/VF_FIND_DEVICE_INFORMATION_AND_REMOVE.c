/*
 * XREFs of VF_FIND_DEVICE_INFORMATION_AND_REMOVE @ 0x140768824
 * Callers:
 *     VfIoDeleteDevice @ 0x140772498 (VfIoDeleteDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

ULONG_PTR *__fastcall VF_FIND_DEVICE_INFORMATION_AND_REMOVE(__int64 a1)
{
  ULONG_PTR *v2; // rbx
  KIRQL v3; // si
  ULONG_PTR *i; // rax
  ULONG_PTR v6; // rdx
  ULONG_PTR **v7; // rcx

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&Lock);
  for ( i = (ULONG_PTR *)ViAdapterList; &ViAdapterList != i; i = (ULONG_PTR *)*i )
  {
    if ( i[3] == a1 )
    {
      v6 = *i;
      v2 = i;
      v7 = (ULONG_PTR **)i[1];
      if ( *(ULONG_PTR **)(*i + 8) != i || *v7 != i )
        __fastfail(3u);
      *v7 = (ULONG_PTR *)v6;
      *(_QWORD *)(v6 + 8) = v7;
      break;
    }
  }
  KxReleaseSpinLock(&Lock);
  __writecr8(v3);
  return v2;
}
