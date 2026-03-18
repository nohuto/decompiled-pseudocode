/*
 * XREFs of IoResolveDependency @ 0x14015F160
 * Callers:
 *     <none>
 * Callees:
 *     PnpAcquireDependencyRelationsLock @ 0x14048AC20 (PnpAcquireDependencyRelationsLock.c)
 *     PipAttemptDependentsStart @ 0x1404A7558 (PipAttemptDependentsStart.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1404D9F20 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x1404DA024 (PipAddtoRebuildPowerRelationsQueue.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1405BF130 (PnpReleaseDependencyRelationsLock.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1405BF154 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipAddBindingId @ 0x1405BF184 (PipAddBindingId.c)
 *     PipQueryBindingResolution @ 0x1405BF204 (PipQueryBindingResolution.c)
 *     PipDereferenceDependencyNode @ 0x1405BF2A8 (PipDereferenceDependencyNode.c)
 *     PipCreateDependencyNode @ 0x1405BF2BC (PipCreateDependencyNode.c)
 *     PipDeleteBindingId @ 0x140692F48 (PipDeleteBindingId.c)
 *     PipIsProviderStarted @ 0x140693158 (PipIsProviderStarted.c)
 *     PipLinkDeviceObjectAndDependencyNode @ 0x140693194 (PipLinkDeviceObjectAndDependencyNode.c)
 *     PipMergeDependencyNodes @ 0x140693318 (PipMergeDependencyNodes.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x1406934C8 (PipUnlinkDeviceObjectAndDependencyNode.c)
 */

__int64 __fastcall IoResolveDependency(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-18h] BYREF
  __int64 v21; // [rsp+28h] [rbp-10h]

  v2 = a1;
  LOBYTE(a1) = 1;
  v4 = 0;
  PnpAcquireDependencyRelationsLock(a1);
  v20 = 1;
  v21 = v2;
  v5 = PipQueryBindingResolution(&v20);
  v7 = v5;
  if ( v5 )
  {
    v16 = *(_QWORD *)(v5 + 48);
    if ( v16 )
    {
      if ( v16 == a2 )
        goto LABEL_15;
      v4 = PipDeleteBindingId(v7, v2);
      v7 = 0LL;
    }
    if ( v7 )
    {
      if ( !*(_QWORD *)(v7 + 48) )
      {
        if ( a2 )
          v17 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 80LL);
        else
          v17 = 0LL;
        if ( v17 )
        {
          if ( a2 )
            v18 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 80LL);
          else
            v18 = 0LL;
          PipMergeDependencyNodes(v18, v7);
        }
        else
        {
          PipLinkDeviceObjectAndDependencyNode(a2, v7);
        }
      }
      goto LABEL_8;
    }
  }
  if ( a2 )
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 80LL);
  else
    v8 = 0LL;
  if ( !v8 )
  {
    v20 = 0;
    v21 = a2;
    v9 = PipCreateDependencyNode(&v20, v6, v7);
    v11 = v9;
    if ( v9 )
    {
      v4 = PipAddBindingId(v9, v2, v10);
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
LABEL_15:
    PnpReleaseDependencyRelationsLock();
    return (unsigned int)v4;
  }
  if ( a2 )
    v15 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 80LL);
  else
    v15 = 0LL;
  v4 = PipAddBindingId(v15, v2, v7);
  if ( v4 < 0 )
    goto LABEL_15;
LABEL_8:
  if ( a2 )
  {
    v12 = *(_QWORD *)(a2 + 312);
    v13 = *(_QWORD *)(v12 + 40);
    if ( v13 )
    {
      if ( (*(_DWORD *)(v13 + 396) & 0x20000) == 0 && (unsigned __int8)PipIsProviderStarted(*(_QWORD *)(v12 + 40)) )
        PipAttemptDependentsStart(v19);
    }
  }
  PipAddtoRebuildPowerRelationsQueue(a2);
  PipAddDependentsToRebuildPowerRelationsQueue(a2);
  PnpReleaseDependencyRelationsLock();
  PipProcessRebuildPowerRelationsQueue();
  return (unsigned int)v4;
}
