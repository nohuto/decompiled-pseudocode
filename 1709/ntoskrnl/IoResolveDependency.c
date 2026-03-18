/*
 * XREFs of IoResolveDependency @ 0x14014E140
 * Callers:
 *     <none>
 * Callees:
 *     PnpAcquireDependencyRelationsLock @ 0x140527148 (PnpAcquireDependencyRelationsLock.c)
 *     PipAttemptDependentsStart @ 0x140552894 (PipAttemptDependentsStart.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1405529D8 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x140552ADC (PipAddtoRebuildPowerRelationsQueue.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1405D2344 (PnpReleaseDependencyRelationsLock.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1405D2368 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipDereferenceDependencyNode @ 0x1405D2398 (PipDereferenceDependencyNode.c)
 *     PipAddBindingId @ 0x1405D23B4 (PipAddBindingId.c)
 *     PipCreateDependencyNode @ 0x1405D2434 (PipCreateDependencyNode.c)
 *     PipQueryBindingResolution @ 0x1405D2510 (PipQueryBindingResolution.c)
 *     PipDeleteBindingId @ 0x1406BEBF8 (PipDeleteBindingId.c)
 *     PipIsProviderStarted @ 0x1406BEE0C (PipIsProviderStarted.c)
 *     PipLinkDeviceObjectAndDependencyNode @ 0x1406BEE48 (PipLinkDeviceObjectAndDependencyNode.c)
 *     PipMergeDependencyNodes @ 0x1406BEFBC (PipMergeDependencyNodes.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x1406BF16C (PipUnlinkDeviceObjectAndDependencyNode.c)
 */

__int64 __fastcall IoResolveDependency(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  void *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // [rsp+20h] [rbp-18h] BYREF
  __int64 v24; // [rsp+28h] [rbp-10h]

  v2 = a1;
  LOBYTE(a1) = 1;
  v4 = 0;
  PnpAcquireDependencyRelationsLock(a1);
  v23 = 1;
  v24 = v2;
  v5 = PipQueryBindingResolution(&v23);
  v8 = (_QWORD *)v5;
  if ( v5 )
  {
    v18 = *(_QWORD *)(v5 + 48);
    if ( v18 )
    {
      if ( v18 == a2 )
        goto LABEL_28;
      v4 = PipDeleteBindingId(v8, v2);
      v8 = 0LL;
    }
    if ( v8 )
    {
      if ( !v8[6] )
      {
        if ( a2 )
          v19 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 80LL);
        else
          v19 = 0LL;
        if ( v19 )
        {
          if ( a2 )
            v20 = *(void **)(*(_QWORD *)(a2 + 312) + 80LL);
          else
            v20 = 0LL;
          PipMergeDependencyNodes(v20, v8);
        }
        else
        {
          PipLinkDeviceObjectAndDependencyNode(a2, v8);
        }
      }
      goto LABEL_8;
    }
  }
  if ( a2 )
    v9 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 80LL);
  else
    v9 = 0LL;
  if ( !v9 )
  {
    v23 = 0;
    v24 = a2;
    v10 = PipCreateDependencyNode(&v23, v6, v8);
    v11 = v10;
    if ( v10 )
    {
      v4 = PipAddBindingId(v10, v2, v8);
      if ( v4 >= 0 )
      {
        PipDereferenceDependencyNode(v11);
        goto LABEL_8;
      }
      PipUnlinkDeviceObjectAndDependencyNode(a2, v11);
      PipDereferenceDependencyNode(v11);
    }
    else
    {
      v4 = -1073741670;
    }
LABEL_28:
    PnpReleaseDependencyRelationsLock(v7, v6, v8);
    return (unsigned int)v4;
  }
  if ( a2 )
    v21 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 80LL);
  else
    v21 = 0LL;
  v4 = PipAddBindingId(v21, v2, v8);
  if ( v4 < 0 )
    goto LABEL_28;
LABEL_8:
  if ( a2 )
  {
    v12 = *(_QWORD *)(a2 + 312);
    v13 = *(_QWORD *)(v12 + 40);
    if ( v13 )
    {
      if ( (*(_DWORD *)(v13 + 396) & 0x20000) == 0 && (unsigned __int8)PipIsProviderStarted(*(_QWORD *)(v12 + 40)) )
        PipAttemptDependentsStart(v22);
    }
  }
  PipAddtoRebuildPowerRelationsQueue(a2);
  PipAddDependentsToRebuildPowerRelationsQueue(a2);
  PnpReleaseDependencyRelationsLock(v15, v14, v16);
  PipProcessRebuildPowerRelationsQueue();
  return (unsigned int)v4;
}
