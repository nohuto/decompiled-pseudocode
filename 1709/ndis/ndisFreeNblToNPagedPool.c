/*
 * XREFs of ndisFreeNblToNPagedPool @ 0x1C0014490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeNblToNPagedPool(_QWORD *Buffer, PLOOKASIDE_LIST_EX Lookaside)
{
  void *v3; // rcx
  KIRQL v4; // al
  char *v5; // rdx
  __int64 v6; // rcx
  char **v7; // r8

  v3 = (void *)Buffer[46];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(Buffer - 4) + 8LL));
  v5 = (char *)(Buffer - 3);
  v6 = *(Buffer - 3);
  if ( *(_QWORD **)(v6 + 8) != Buffer - 3 || (v7 = (char **)*((_QWORD *)v5 + 1), *v7 != v5) )
    __fastfail(3u);
  *v7 = (char *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  KeReleaseSpinLock((PKSPIN_LOCK)(*(Buffer - 4) + 8LL), v4);
  ExFreePoolWithTag(Buffer - 4, 0);
}
