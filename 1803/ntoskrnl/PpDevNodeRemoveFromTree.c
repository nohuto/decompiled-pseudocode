/*
 * XREFs of PpDevNodeRemoveFromTree @ 0x140145460
 * Callers:
 *     PnpUnlinkDeviceRemovalRelations @ 0x1405C9074 (PnpUnlinkDeviceRemovalRelations.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PnpOrphanNotification @ 0x1405C9B68 (PnpOrphanNotification.c)
 */

char __fastcall PpDevNodeRemoveFromTree(_QWORD *a1)
{
  char v2; // bp
  KIRQL v3; // al
  __int64 v4; // rcx
  KIRQL v5; // di
  _QWORD **v6; // rcx
  _QWORD *i; // rdx
  _QWORD *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  char result; // al
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // r8
  _QWORD *v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // r8
  _QWORD *v25; // rdx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v4 = a1[2];
  v5 = v3;
  if ( v4 )
  {
    v6 = (_QWORD **)(v4 + 8);
    for ( i = *v6; i != a1; i = (_QWORD *)*i )
      v6 = (_QWORD **)i;
    v8 = (_QWORD *)*a1;
    *v6 = (_QWORD *)*a1;
    v9 = a1[2];
    if ( *(_QWORD *)(v9 + 8) )
    {
      for ( ; v8; v8 = (_QWORD *)*v8 )
        v6 = (_QWORD **)v8;
    }
    else
    {
      v6 = 0LL;
    }
    *(_QWORD *)(v9 + 24) = v6;
    KxReleaseSpinLock(&PnpSpinLock);
    __writecr8(v5);
    v10 = a1[78];
    if ( *(_QWORD **)(v10 + 8) != a1 + 78 || (v11 = (_QWORD *)a1[79], (_QWORD *)*v11 != a1 + 78) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    PnpOrphanNotification(a1);
    v2 = 1;
  }
  else
  {
    KxReleaseSpinLock(&PnpSpinLock);
    __writecr8(v5);
  }
  v12 = (_QWORD *)a1[20];
  while ( v12 != a1 + 20 )
  {
    v15 = v12 - 3;
    v16 = v12;
    v17 = *(v12 - 3);
    v12 = (_QWORD *)*v12;
    if ( *(_QWORD **)(v17 + 8) != v15 || (v18 = (_QWORD *)v15[1], (_QWORD *)*v18 != v15) )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    v19 = *v16;
    if ( *(_QWORD **)(*v16 + 8LL) != v16 || (v20 = (_QWORD *)v16[1], (_QWORD *)*v20 != v16) )
      __fastfail(3u);
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
    ExFreePoolWithTag(v15, 0x72775044u);
  }
  v13 = (_QWORD *)a1[22];
  while ( v13 != a1 + 22 )
  {
    v21 = *v13;
    v22 = v13;
    v13 = (_QWORD *)v21;
    if ( *(_QWORD **)(v21 + 8) != v22 || (v23 = (_QWORD *)v22[1], (_QWORD *)*v23 != v22) )
      __fastfail(3u);
    *v23 = v21;
    *(_QWORD *)(v21 + 8) = v23;
    v24 = v22[3];
    if ( *(_QWORD **)(v24 + 8) != v22 + 3 || (v25 = (_QWORD *)v22[4], (_QWORD *)*v25 != v22 + 3) )
      __fastfail(3u);
    *v25 = v24;
    *(_QWORD *)(v24 + 8) = v25;
    ExFreePoolWithTag(v22, 0x72775044u);
  }
  a1[2] = 0LL;
  result = v2;
  a1[1] = 0LL;
  *a1 = 0LL;
  a1[3] = 0LL;
  return result;
}
