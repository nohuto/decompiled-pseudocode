/*
 * XREFs of ndisSubmitIdleRequest @ 0x1C0070060
 * Callers:
 *     ndisSSIdleTimerWorkItem @ 0x1C006F3C0 (ndisSSIdleTimerWorkItem.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0071ED0 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     Template_q @ 0x1C00439B8 (Template_q.c)
 *     WPP_SF_dq @ 0x1C004D4F4 (WPP_SF_dq.c)
 *     Template_qq @ 0x1C004FC94 (Template_qq.c)
 *     ?ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006D2C0 (-ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisSubmitIdleRequest(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rdi
  char v3; // bp
  KIRQL v7; // r15
  int v8; // r12d
  __int64 v9; // rdx
  unsigned int v10; // r14d
  __int64 v11; // rcx
  KIRQL v12; // al
  KIRQL v13; // bl
  int v14; // edx
  KIRQL v15; // bl
  bool v16; // bl
  __int64 v17; // [rsp+20h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 4480);
  v3 = 0;
  if ( !a2 && (*(_BYTE *)(a1 + 1004) & 4) != 0 && !ndisShouldEngageNicAutoPowerSaver((struct _NDIS_MINIPORT_BLOCK *)a1) )
    return 3221291025LL;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
  if ( (*(_DWORD *)(v2 + 504) & 0x404) != 0 || !ndisReferenceMiniport(a1, 0x15u) )
  {
    v16 = (*(_DWORD *)(v2 + 504) & 4) != 0;
    KeReleaseSpinLock((PKSPIN_LOCK)v2, v7);
    return v16 ? 259 : -1073676271;
  }
  else
  {
    v8 = a2;
    *(_DWORD *)(v2 + 504) = *(_DWORD *)(v2 + 504) ^ (*(_DWORD *)(v2 + 504) ^ (a2 << 8)) & 0x100 | 4;
    KeClearEvent((PRKEVENT)(v2 + 200));
    KeClearEvent((PRKEVENT)(v2 + 224));
    KeReleaseSpinLock((PKSPIN_LOCK)v2, v7);
    LOBYTE(v9) = a2;
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 3784) + 840LL))(*(_QWORD *)(a1 + 24), v9);
    KeSetEvent((PRKEVENT)(v2 + 224), 0, 0);
    if ( v10 == 259 )
    {
      if ( (unsigned __int8)byte_1C0092616 >= 4u )
        WPP_SF_qD(0xEu, &WPP_3059abd58ba5345e836db04510415190_Traceguids, a1, v8);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        Template_q(v11, &SSIdleDetected, (const GUID *)(a1 + 4032), (*(_QWORD *)(a1 + 4048) >> 24) & 0xFFFFFF);
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
      if ( (*(_DWORD *)(v2 + 504) & 4) != 0 )
      {
        KeCancelTimer((PKTIMER)(v2 + 16));
        *(_DWORD *)(v2 + 504) &= ~1u;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v2, v15);
      return 259LL;
    }
    else
    {
      if ( (unsigned __int8)byte_1C0092616 >= 2u )
        WPP_SF_dq(0xDu, &WPP_3059abd58ba5345e836db04510415190_Traceguids, v10, a1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      {
        LODWORD(v17) = v10;
        Template_qq(v11, &SSIdleDeclined, (const GUID *)(a1 + 4032), (*(_QWORD *)(a1 + 4048) >> 24) & 0xFFFFFF, v17);
      }
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
      *(_DWORD *)(v2 + 504) &= ~0x100u;
      v13 = v12;
      v14 = *(_DWORD *)(v2 + 504);
      if ( (v14 & 4) != 0 )
      {
        *(_DWORD *)(v2 + 504) = v14 & 0xFFFFFFFB;
        KeSetEvent((PRKEVENT)(v2 + 200), 0, 0);
        v3 = 1;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v2, v13);
      if ( v3 )
        ndisDereferenceMiniport(a1, 0x15u);
      return v10;
    }
  }
}
