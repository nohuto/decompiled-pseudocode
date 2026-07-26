/*
 * XREFs of NdisCmRegisterAddressFamilyEx @ 0x1C00519D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0001B74 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0010048 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ndisCreateNotifyQueue @ 0x1C010BE58 (ndisCreateNotifyQueue.c)
 */

NDIS_STATUS __stdcall NdisCmRegisterAddressFamilyEx(NDIS_HANDLE NdisBindingHandle, PCO_ADDRESS_FAMILY AddressFamily)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  KIRQL v6; // al
  KIRQL v7; // r14
  NDIS_STATUS v8; // ebx
  __int64 **i; // rcx
  unsigned __int64 v10; // rdx
  _QWORD *PoolWithTag; // r14
  __int128 v12; // xmm1
  __int64 v13; // rcx
  KIRQL v15; // [rsp+70h] [rbp+8h]
  __int64 v16; // [rsp+80h] [rbp+18h] BYREF

  v16 = 0LL;
  v3 = *((_QWORD *)NdisBindingHandle + 2);
  v5 = *((_QWORD *)NdisBindingHandle + 3);
  if ( (unsigned __int8)byte_1C009875A >= 4u )
    WPP_SF_qqq(0x40u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids, v3, v5, NdisBindingHandle);
  ndisReferencePackage(&ndisPkgs);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  v7 = v6;
  v15 = v6;
  *(_DWORD *)(v3 + 1856) = 1578762;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
  *((_DWORD *)NdisBindingHandle + 56) |= 0x20000u;
  if ( *(_BYTE *)(v5 + 632) == 0xA5 )
  {
    if ( (*((_DWORD *)NdisBindingHandle + 56) & 0x18000) != 0 )
    {
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
      v8 = -1073676286;
    }
    else
    {
      ndisMReferenceOpen((__int64)NdisBindingHandle, 0xDu);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
      if ( (*(_DWORD *)(v3 + 120) & 0x20000) != 0 )
      {
        if ( *(_BYTE *)(v5 + 56) >= 5u )
        {
          for ( i = *(__int64 ***)(v3 + 512); i; i = (__int64 **)*i )
          {
            v10 = (unsigned __int64)i[2] - *(_QWORD *)&AddressFamily->AddressFamily;
            if ( !v10 )
              v10 = *((unsigned int *)i + 6) - (unsigned __int64)AddressFamily->MinorVersion;
            if ( !v10 )
            {
              v8 = -1073741823;
              goto LABEL_26;
            }
          }
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x140uLL, 0x6F63444Eu);
          if ( PoolWithTag )
          {
            v8 = ndisCreateNotifyQueue(v3, 0LL, AddressFamily, &v16);
            if ( v8 )
            {
              ExFreePoolWithTag(PoolWithTag, 0);
            }
            else
            {
              PoolWithTag[2] = *(_QWORD *)&AddressFamily->AddressFamily;
              *((_DWORD *)PoolWithTag + 6) = AddressFamily->MinorVersion;
              *(_OWORD *)(PoolWithTag + 21) = *(_OWORD *)(v5 + 632);
              *(_OWORD *)(PoolWithTag + 23) = *(_OWORD *)(v5 + 648);
              *(_OWORD *)(PoolWithTag + 25) = *(_OWORD *)(v5 + 664);
              *(_OWORD *)(PoolWithTag + 27) = *(_OWORD *)(v5 + 680);
              *(_OWORD *)(PoolWithTag + 29) = *(_OWORD *)(v5 + 696);
              *(_OWORD *)(PoolWithTag + 31) = *(_OWORD *)(v5 + 712);
              *(_OWORD *)(PoolWithTag + 33) = *(_OWORD *)(v5 + 728);
              *(_OWORD *)(PoolWithTag + 35) = *(_OWORD *)(v5 + 744);
              v12 = *(_OWORD *)(v5 + 760);
              PoolWithTag[1] = NdisBindingHandle;
              *(_OWORD *)(PoolWithTag + 37) = v12;
              v13 = v16;
              *PoolWithTag = *(_QWORD *)(v3 + 512);
              *((_DWORD *)PoolWithTag + 78) = 6;
              *(_QWORD *)(v3 + 512) = PoolWithTag;
              *((_QWORD *)NdisBindingHandle + 130) = *(_QWORD *)(v5 + 640);
              *((_QWORD *)NdisBindingHandle + 131) = *(_QWORD *)(v5 + 648);
              *((_QWORD *)NdisBindingHandle + 132) = *(_QWORD *)(v5 + 728);
              *((_QWORD *)NdisBindingHandle + 133) = *(_QWORD *)(v5 + 736);
              *((_QWORD *)NdisBindingHandle + 143) = *(_QWORD *)(v5 + 760);
              *((_QWORD *)NdisBindingHandle + 144) = *(_QWORD *)(v5 + 752);
              if ( v13 )
                ExQueueWorkItem((PWORK_QUEUE_ITEM)(v13 + 8), (WORK_QUEUE_TYPE)40);
            }
          }
          else
          {
            v8 = -1073741670;
          }
          v7 = v15;
        }
        else
        {
          v8 = -1073676284;
        }
      }
      else
      {
        v8 = -1073676283;
      }
LABEL_26:
      ndisMDereferenceOpenLocked((__int64)NdisBindingHandle);
    }
  }
  else
  {
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
    v8 = -1073676283;
  }
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v7);
  ndisDereferencePackage(&ndisPkgs);
  if ( (unsigned __int8)byte_1C009875A >= 4u )
    WPP_SF_qqqL(0x41u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids, v3, v5, NdisBindingHandle, v8);
  return v8;
}
