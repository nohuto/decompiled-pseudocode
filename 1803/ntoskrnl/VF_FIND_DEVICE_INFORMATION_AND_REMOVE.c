/*
 * XREFs of VF_FIND_DEVICE_INFORMATION_AND_REMOVE @ 0x14081752C
 * Callers:
 *     VfIoDeleteDevice @ 0x1408213F8 (VfIoDeleteDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

ULONG_PTR __fastcall VF_FIND_DEVICE_INFORMATION_AND_REMOVE(__int64 a1)
{
  ULONG_PTR v2; // rbx
  KIRQL v3; // si
  ULONG_PTR v4; // rax
  ULONG_PTR *v5; // rcx
  ULONG_PTR **v7; // rdx

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&Lock);
  v4 = ViAdapterList;
  if ( &ViAdapterList != (ULONG_PTR *)ViAdapterList )
  {
    while ( 1 )
    {
      v5 = *(ULONG_PTR **)v4;
      if ( *(_QWORD *)(v4 + 24) == a1 )
        break;
      v4 = *(_QWORD *)v4;
      if ( &ViAdapterList == v5 )
        goto LABEL_4;
    }
    v2 = v4;
    if ( v5[1] != v4 || (v7 = *(ULONG_PTR ***)(v4 + 8), *v7 != (ULONG_PTR *)v4) )
      __fastfail(3u);
    *v7 = v5;
    v5[1] = (ULONG_PTR)v7;
  }
LABEL_4:
  KxReleaseSpinLock(&Lock);
  __writecr8(v3);
  return v2;
}
