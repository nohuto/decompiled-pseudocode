/*
 * XREFs of NdisIfAddIfStackEntry @ 0x1C001B790
 * Callers:
 *     ndisFilterAttachCleanUp @ 0x1C0001114 (ndisFilterAttachCleanUp.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01021E4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisIfFindInterface @ 0x1C001B8E4 (ndisIfFindInterface.c)
 *     ?ndisIfFindStackEntry@@YAPEAU_NDIS_IF_STACK_ENTRY@@KK@Z @ 0x1C001B91C (-ndisIfFindStackEntry@@YAPEAU_NDIS_IF_STACK_ENTRY@@KK@Z.c)
 *     ?ndisIfStackTablePathExist@@YAEKKG@Z @ 0x1C001B94C (-ndisIfStackTablePathExist@@YAEKKG@Z.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_dL @ 0x1C0040FA0 (WPP_SF_dL_ea_1C0040FA0.c)
 *     WPP_SF_llL @ 0x1C0040FE4 (WPP_SF_llL.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 */

NDIS_STATUS __stdcall NdisIfAddIfStackEntry(NET_IFINDEX HigherLayerIfIndex, NET_IFINDEX LowerLayerIfIndex)
{
  ULONG_PTR v2; // rdi
  ULONG_PTR v3; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  KIRQL v6; // r14
  __int64 v7; // rcx
  __int64 Interface; // rax
  __int64 v9; // r10
  _QWORD *v10; // rcx
  NDIS_STATUS v11; // ebp
  __int64 v12; // rdx
  ULONG VerifierFlags; // [rsp+60h] [rbp+18h] BYREF

  v2 = LowerLayerIfIndex;
  v3 = HigherLayerIfIndex;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_dL(52LL, LowerLayerIfIndex, HigherLayerIfIndex, LowerLayerIfIndex);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6669444Eu);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memset(PoolWithTag, 0, 0x28uLL);
  *((_DWORD *)v5 + 4) = v3;
  *((_DWORD *)v5 + 5) = v2;
  v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
  if ( (_DWORD)v3 == (_DWORD)v2 || ndisIfStackTablePathExist(v3, v2, 0) )
  {
    if ( MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) )
    {
      VerifierFlags = 0;
      if ( MmIsVerifierEnabled(&VerifierFlags) < 0 || (VerifierFlags & 0x400000) == 0 )
        ndisBugCheckEx(0x1BuLL, v3, v2, 0LL);
    }
    v11 = -1073741811;
    goto LABEL_12;
  }
  if ( ndisIfFindStackEntry(v3, v2) )
  {
    ExFreePoolWithTag(v5, 0);
    v5 = 0LL;
  }
  else
  {
    ndisIfFindInterface(v7);
    Interface = ndisIfFindInterface((unsigned int)v2);
    if ( !v9 || !Interface )
    {
      v11 = -1071448021;
      goto LABEL_12;
    }
    v5[3] = v9;
    v5[4] = Interface;
    v10 = ndisIfStackEntryList;
    if ( *((PVOID **)ndisIfStackEntryList + 1) != &ndisIfStackEntryList )
      __fastfail(3u);
    *v5 = ndisIfStackEntryList;
    v5[1] = &ndisIfStackEntryList;
    v10[1] = v5;
    ndisIfStackEntryList = v5;
    ++*(_DWORD *)(v9 + 1296);
    ++*(_DWORD *)(Interface + 1300);
  }
  v11 = 0;
LABEL_12:
  KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
  KeReleaseSpinLock(&ndisIfListLock, v6);
  if ( v11 )
    ExFreePoolWithTag(v5, 0);
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_llL(53LL, v12, (unsigned int)v3, (unsigned int)v2, v11);
  return v11;
}
