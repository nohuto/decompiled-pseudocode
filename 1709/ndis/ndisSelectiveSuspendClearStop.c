/*
 * XREFs of ndisSelectiveSuspendClearStop @ 0x1C0070D84
 * Callers:
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00738A4 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0073EE0 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00748E4 (-ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00BAFC4 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ndisStartDeviceSynchronous @ 0x1C00C0AB8 (ndisStartDeviceSynchronous.c)
 *     ndisPowerSaveClearStop @ 0x1C00C62E0 (ndisPowerSaveClearStop.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00E9D70 (NdisWdfPnpPowerEventHandler.c)
 *     ndisPmInitializeMiniport @ 0x1C010DF4C (ndisPmInitializeMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisSetIdleTimer @ 0x1C00713C4 (ndisSetIdleTimer.c)
 */

void __fastcall ndisSelectiveSuspendClearStop(__int64 a1, int a2)
{
  __int64 v3; // rbx
  int v4; // ebp
  KIRQL v6; // r14
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi

  v3 = *(_QWORD *)(a1 + 4480);
  v4 = *(_DWORD *)(a1 + 120) & 0x80;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3);
  if ( (unsigned __int8)byte_1C0098756 >= 4u )
    WPP_SF_qD(0x22u, &WPP_72bd2a87b7f83093ce8d5792cc2b4ff7_Traceguids, a1, a2);
  v7 = a2 - 1;
  if ( v7 )
  {
    v8 = v7 - 3;
    if ( v8 )
    {
      v9 = v8 - 2;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 2;
              if ( v13 )
              {
                if ( v13 == 2 )
                  *(_DWORD *)(v3 + 508) &= ~0x1000u;
              }
              else
              {
                *(_DWORD *)(v3 + 508) &= ~0x400u;
              }
            }
            else
            {
              *(_DWORD *)(v3 + 508) &= ~0x100u;
            }
          }
          else if ( (*(_DWORD *)(v3 + 536))-- == 1 )
          {
            *(_DWORD *)(v3 + 508) &= ~0x80u;
          }
        }
        else
        {
          *(_DWORD *)(v3 + 508) &= ~0x40u;
        }
      }
      else
      {
        *(_DWORD *)(v3 + 508) &= ~0x20u;
      }
    }
    else
    {
      *(_DWORD *)(v3 + 508) &= ~8u;
    }
  }
  else
  {
    *(_DWORD *)(v3 + 508) &= ~1u;
  }
  if ( v4 )
  {
    if ( !*(_DWORD *)(v3 + 512)
      && !*(_DWORD *)(v3 + 516)
      && !*(_DWORD *)(v3 + 528)
      && !*(_DWORD *)(v3 + 532)
      && !*(_DWORD *)(v3 + 520)
      && !*(_DWORD *)(v3 + 524)
      && !*(_DWORD *)(v3 + 576)
      && !*(_DWORD *)(v3 + 508) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v3, v6);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 3784) + 360LL) + 48LL))(*(_QWORD *)(a1 + 24));
      return;
    }
  }
  else if ( !*(_DWORD *)(v3 + 508) )
  {
    *(_DWORD *)(v3 + 504) &= ~0x200u;
    KeReleaseSpinLock((PKSPIN_LOCK)v3, v6);
    ndisSetIdleTimer(a1);
    return;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v3, v6);
}
