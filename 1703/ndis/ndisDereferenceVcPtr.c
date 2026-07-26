/*
 * XREFs of ndisDereferenceVcPtr @ 0x1C0109638
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C0009F70 (ndisQuerySetMiniportEx.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00A69C8 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00A6DE0 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00A72F4 (ndisWmiQueryAllData.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00E2244 (ndisWmiChangeSingleInstance.c)
 *     NdisClMakeCall @ 0x1C01063C0 (NdisClMakeCall.c)
 *     NdisCmAddPartyComplete @ 0x1C0106790 (NdisCmAddPartyComplete.c)
 *     NdisCmCloseCallComplete @ 0x1C0106920 (NdisCmCloseCallComplete.c)
 *     NdisCmDropPartyComplete @ 0x1C0106CF0 (NdisCmDropPartyComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C0106D40 (NdisCmMakeCallComplete.c)
 *     NdisCoDeleteVc @ 0x1C0107BF0 (NdisCoDeleteVc.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qDLLq @ 0x1C005324C (WPP_SF_qDLLq.c)
 */

void __fastcall ndisDereferenceVcPtr(__int64 P)
{
  char *v1; // rbx
  KSPIN_LOCK *v2; // rsi
  KIRQL v3; // al
  bool v4; // zf
  KSPIN_LOCK *v5; // rdi
  KIRQL v6; // r14
  _DWORD *v7; // rdx
  char v8; // bp
  KIRQL v9; // al
  KIRQL v10; // dl

  v1 = (char *)P;
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_qDLLq(P, *(_QWORD *)(P + 8), P, *(_DWORD *)(P + 4));
  v2 = (KSPIN_LOCK *)(v1 + 16);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v1 + 2);
  v4 = (*(_DWORD *)v1)-- == 1;
  v5 = (KSPIN_LOCK *)*((_QWORD *)v1 + 9);
  v6 = v3;
  if ( !v4 )
  {
    v10 = v3;
    goto LABEL_27;
  }
  v7 = (_DWORD *)*((_QWORD *)v1 + 1);
  if ( (*v7 & 8) != 0 )
    *v7 &= ~8u;
  if ( v1[336] )
  {
    if ( (unsigned __int8)byte_1C009261B >= 4u )
      WPP_SF_(0x2Cu, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids);
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v1 + 2);
    (*((void (__fastcall **)(_QWORD))v1 + 27))(*((_QWORD *)v1 + 25));
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v1 + 2);
  }
  if ( v1 == (char *)v5[5] )
  {
    v8 = 0;
  }
  else
  {
    if ( (unsigned __int8)byte_1C009261B >= 4u )
      WPP_SF_(0x2Du, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids);
    v8 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v1 + 2, v6);
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_qq(0x2Eu, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids, v1, *((_QWORD *)v1 + 9));
  ExFreePoolWithTag(v1, 0);
  v2 = v5 + 1;
  v1 = 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc(v5 + 1);
  if ( v8 )
    v5[4] = 0LL;
  else
    v5[5] = 0LL;
  if ( v5[4] || v5[5] )
  {
    v10 = v9;
LABEL_27:
    KeReleaseSpinLock(v2, v10);
    goto LABEL_28;
  }
  KeReleaseSpinLock(v5 + 1, v9);
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_q(0x2Fu, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids, (__int64)v5);
  ExFreePoolWithTag(v5, 0);
LABEL_28:
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_q(0x30u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids, (__int64)v1);
}
