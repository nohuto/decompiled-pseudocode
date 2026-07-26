/*
 * XREFs of NdisCoDeleteVc @ 0x1C0107BF0
 * Callers:
 *     NdisMCmDeleteVc @ 0x1C0108D50 (NdisMCmDeleteVc.c)
 * Callees:
 *     ndisSetupWmiNode @ 0x1C001C8F4 (ndisSetupWmiNode.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     Template_qqq @ 0x1C0043A1C (Template_qqq.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     WPP_SF_qLLqL @ 0x1C0053324 (WPP_SF_qLLqL.c)
 *     ndisDereferenceVcPtr @ 0x1C0109638 (ndisDereferenceVcPtr.c)
 */

NDIS_STATUS __stdcall NdisCoDeleteVc(NDIS_HANDLE NdisVcHandle)
{
  KIRQL v2; // al
  _DWORD *v3; // rcx
  KIRQL v4; // r15
  int v5; // edi
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  int v8; // edi
  NDIS_HANDLE *v9; // rdx
  NDIS_HANDLE *v10; // rcx
  KSPIN_LOCK *v11; // rcx
  void (__fastcall *v12)(_QWORD); // rax
  NDIS_HANDLE *v13; // rdx
  NDIS_HANDLE *v14; // rcx
  __int64 v15; // rcx
  NDIS_HANDLE *v16; // rdx
  NDIS_HANDLE *v17; // rcx
  PVOID WnodeEventItem; // [rsp+70h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C009261A >= 4u )
    WPP_SF_qLLqL(
      (__int64)NdisVcHandle,
      **((unsigned int **)NdisVcHandle + 1),
      (__int64)NdisVcHandle,
      *((_DWORD *)NdisVcHandle + 1));
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v3 = (_DWORD *)*((_QWORD *)NdisVcHandle + 1);
  v4 = v2;
  if ( (*v3 & 3) != 0 )
  {
    v5 = 65539;
  }
  else if ( (*v3 & 4) != 0 )
  {
    v5 = -1073676286;
  }
  else
  {
    *((_DWORD *)NdisVcHandle + 1) |= 0x80000000;
    if ( *((_DWORD *)NdisVcHandle + 22) && *((_QWORD *)NdisVcHandle + 27) )
      *v3 |= 8u;
    if ( *((_QWORD *)NdisVcHandle + 38) )
    {
      ndisSetupWmiNode(
        *((_QWORD *)NdisVcHandle + 24),
        (const void **)NdisVcHandle + 37,
        0,
        (__int128 *)&GUID_NDIS_NOTIFY_VC_REMOVAL,
        &WnodeEventItem);
      if ( WnodeEventItem )
      {
        v6 = IoWMIWriteEvent(WnodeEventItem);
        v8 = v6;
        if ( v6 < 0 )
        {
          if ( (unsigned __int8)byte_1C0092619 >= 2u )
            WPP_SF_d(0x1Au, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids, v6);
          if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
            Template_qqq(v7, &IoWMIWriteEventFailed, (const GUID *)(*((_QWORD *)NdisVcHandle + 24) + 4032LL), v8, 15, 0);
          ExFreePoolWithTag(WnodeEventItem, 0);
        }
      }
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 24) + 1344LL));
      v9 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 40);
      v10 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 41);
      if ( v9[1] != (char *)NdisVcHandle + 320 || *v10 != (char *)NdisVcHandle + 320 )
        __fastfail(3u);
      *v10 = v9;
      v9[1] = v10;
      --*(_WORD *)(*((_QWORD *)NdisVcHandle + 24) + 1384LL);
      ExFreePoolWithTag(*((PVOID *)NdisVcHandle + 38), 0);
      v11 = (KSPIN_LOCK *)(*((_QWORD *)NdisVcHandle + 24) + 1344LL);
      *((_QWORD *)NdisVcHandle + 38) = 0LL;
      *((_WORD *)NdisVcHandle + 149) = 0;
      *((_WORD *)NdisVcHandle + 148) = 0;
      KeReleaseSpinLockFromDpcLevel(v11);
    }
    v12 = (void (__fastcall *)(_QWORD))*((_QWORD *)NdisVcHandle + 12);
    if ( v12 )
      v12(*((_QWORD *)NdisVcHandle + 13));
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 10) + 232LL));
    v13 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 4);
    v14 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 5);
    if ( v13[1] != (char *)NdisVcHandle + 32 || *v14 != (char *)NdisVcHandle + 32 )
      __fastfail(3u);
    *v14 = v13;
    v13[1] = v14;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 10) + 232LL));
    v15 = *((_QWORD *)NdisVcHandle + 17);
    if ( v15 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v15 + 232));
      v16 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 19);
      v17 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 20);
      if ( v16[1] != (char *)NdisVcHandle + 152 || *v17 != (char *)NdisVcHandle + 152 )
        __fastfail(3u);
      *v17 = v16;
      v16[1] = v17;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 17) + 232LL));
    }
    v5 = 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v4);
  if ( !v5 )
    ndisDereferenceVcPtr(NdisVcHandle);
  if ( (unsigned __int8)byte_1C009261A >= 4u )
    WPP_SF_d(0x1Bu, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids, v5);
  return v5;
}
