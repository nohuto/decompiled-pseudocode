/*
 * XREFs of ndisSelectiveSuspendClearStop @ 0x1C00715E4
 * Callers:
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0074118 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0074750 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0075140 (-ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ndisPowerSaveClearStop @ 0x1C00B0570 (ndisPowerSaveClearStop.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BBF78 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00BC208 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ndisStartDeviceSynchronous @ 0x1C00C6274 (ndisStartDeviceSynchronous.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00EC2B0 (NdisWdfPnpPowerEventHandler.c)
 *     ndisPmInitializeMiniport @ 0x1C010FEDC (ndisPmInitializeMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisSetIdleTimer @ 0x1C0071C24 (ndisSetIdleTimer.c)
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
  if ( (unsigned __int8)byte_1C0099616 >= 4u )
    WPP_SF_qD(0x22u, &WPP_250ba6082b573e143e643b46f787ca55_Traceguids, a1, a2);
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
