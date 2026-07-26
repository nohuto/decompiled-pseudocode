/*
 * XREFs of ndisHandleProtocolReconfigNotification @ 0x1C010D2D0
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00CADD4 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisDereferenceProtocol @ 0x1C001A8FC (ndisDereferenceProtocol.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C1F0 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_Z @ 0x1C0041C64 (WPP_SF_Z.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     ndisMapOpenByName @ 0x1C004FF0C (ndisMapOpenByName.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00B860C (ndisDeliverNetPnPEventSynchronously.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BBF78 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC164 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C261C (ndisInitializeNetPnPEvent.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD4D4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisReferenceProtocolByName @ 0x1C010E318 (ndisReferenceProtocolByName.c)
 */

__int64 __fastcall ndisHandleProtocolReconfigNotification(
        const UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        __int64 a3,
        int a4,
        int a5)
{
  __int64 v5; // rdi
  char v6; // r13
  char v7; // r12
  int v10; // esi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  bool v15; // r12
  KIRQL v16; // al
  struct _KEVENT *v17; // rcx
  char v19; // [rsp+30h] [rbp-D0h]
  KIRQL v20; // [rsp+31h] [rbp-CFh]
  __int64 v22; // [rsp+48h] [rbp-B8h]
  struct _KEVENT v25; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v26[20]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+120h] [rbp+20h] BYREF
  int v28; // [rsp+128h] [rbp+28h]
  __int64 v29; // [rsp+130h] [rbp+30h]
  int v30; // [rsp+138h] [rbp+38h]

  v5 = 0LL;
  v22 = 0LL;
  v6 = 0;
  v19 = 0;
  v7 = 0;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_Z(0x1Cu, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, &a2->Length);
  v10 = ndisReferenceProtocolByName(a2);
  if ( v10 >= 0 )
  {
    if ( a1->Length )
    {
      while ( 1 )
      {
        KeWaitForSingleObject((PVOID)0x168, Executive, 0, 0, 0LL);
        ++MEMORY[0x1A8];
        MEMORY[0x1A0] = KeGetCurrentThread();
        MEMORY[0x1AC] = 69059;
        v13 = ndisMapOpenByName(a1, 0LL);
        v5 = v13;
        if ( v13 )
          break;
        MEMORY[0x1AC] = 0;
        if ( !--MEMORY[0x1A8] )
          MEMORY[0x1A0] = 0LL;
        KeReleaseMutex((PRKMUTEX)0x168, 0);
        ndisDereferenceProtocol(0LL, v14, 4u);
        if ( !v6 )
          v6 = 1;
        if ( (int)ndisReferenceProtocolByName(a2) < 0 )
        {
          v10 = -1073741772;
          goto LABEL_46;
        }
      }
      v19 = 1;
      v7 = 1;
      v22 = *(_QWORD *)(v13 + 16);
      if ( MEMORY[0x38] < 6u && !MEMORY[0x80] )
      {
        MEMORY[0x1AC] = 0;
        if ( !--MEMORY[0x1A8] )
          MEMORY[0x1A0] = 0LL;
        KeReleaseMutex((PRKMUTEX)0x168, 0);
        v10 = -1073741823;
LABEL_45:
        ndisMDereferenceOpenUnlocked(v5, 4);
LABEL_46:
        if ( v7 )
          ndisDereferenceMiniport(v22, 0x34u, v11, v12);
        goto LABEL_48;
      }
    }
    else
    {
      if ( MEMORY[0x38] < 6u && !MEMORY[0x80] )
      {
        v10 = -1073741823;
        goto LABEL_44;
      }
      KeWaitForSingleObject((PVOID)0x168, Executive, 0, 0, 0LL);
      ++MEMORY[0x1A8];
      MEMORY[0x1A0] = KeGetCurrentThread();
      MEMORY[0x1AC] = 69131;
    }
    ndisInitializeNetPnPEvent(&v27, &v25);
    if ( a5 == 3 )
    {
      v28 = 4;
    }
    else
    {
      if ( a5 != 9 )
      {
        v10 = -1073741808;
        MEMORY[0x1AC] = 0;
        if ( !--MEMORY[0x1A8] )
          MEMORY[0x1A0] = 0LL;
        KeReleaseMutex((PRKMUTEX)0x168, 0);
        goto LABEL_44;
      }
      v28 = 5;
    }
    v29 = a3;
    v30 = a4;
    v10 = ndisDeliverNetPnPEventSynchronously(0LL, v5, (__int64)&v27);
    MEMORY[0x1AC] = 0;
    if ( !--MEMORY[0x1A8] )
      MEMORY[0x1A0] = 0LL;
    KeReleaseMutex((PRKMUTEX)0x168, 0);
    v15 = v10 == 65539;
    if ( v5 )
    {
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 232));
      v20 = v16;
      if ( (*(_DWORD *)(v5 + 224) & 0x80000) == 0 )
      {
        *(_DWORD *)(v5 + 224) &= ~0x10u;
        v17 = *(struct _KEVENT **)(v5 + 1008);
        if ( v17 )
        {
          KeSetEvent(v17, 0, 0);
          *(_QWORD *)(v5 + 1008) = 0LL;
          v15 = 0;
          v16 = v20;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 232), v16);
      if ( v22 && v15 && MEMORY[0x38] <= 6u && (MEMORY[0x38] != 6 || MEMORY[0x39] < 0x28u) )
      {
        Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(v5 + 16) + 5136LL));
        if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v5 + 952), BindingDisabled, Reason_RebindNeeded)
          && (unsigned __int8)byte_1C0099623 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_PROTOCOL_LINK **)(v5 + 952),
            (struct NDIS_PNPTRACE_LOCALS *)v26);
          WPP_SF_Zq(0x1Du, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, (const wchar_t *)v26[1], v26[0]);
        }
        Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(v5 + 16) + 5136LL));
        Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(*(_QWORD *)(v5 + 16) + 5136LL), RunSynchronous, 0);
      }
    }
LABEL_44:
    v7 = v19;
    if ( !v19 )
      goto LABEL_46;
    goto LABEL_45;
  }
LABEL_48:
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x1Eu, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, 0LL);
  return (unsigned int)v10;
}
