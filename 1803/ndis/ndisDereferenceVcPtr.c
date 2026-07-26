/*
 * XREFs of ndisDereferenceVcPtr @ 0x1C0114684
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C000AE70 (ndisQuerySetMiniportEx.c)
 *     ndisWmiQueryAllData @ 0x1C00AC238 (ndisWmiQueryAllData.c)
 *     ndisWmiExecuteMethod @ 0x1C00AC874 (ndisWmiExecuteMethod.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00AD358 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EEE20 (ndisWmiChangeSingleInstance.c)
 *     NdisClMakeCall @ 0x1C01113C0 (NdisClMakeCall.c)
 *     NdisCmAddPartyComplete @ 0x1C01117A0 (NdisCmAddPartyComplete.c)
 *     NdisCmCloseCallComplete @ 0x1C0111940 (NdisCmCloseCallComplete.c)
 *     NdisCmDropPartyComplete @ 0x1C0111D10 (NdisCmDropPartyComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C0111D60 (NdisCmMakeCallComplete.c)
 *     NdisCoDeleteVc @ 0x1C0112C10 (NdisCoDeleteVc.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qDLLq @ 0x1C00529F8 (WPP_SF_qDLLq.c)
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
  KIRQL v9; // dl
  KSPIN_LOCK v10; // rcx

  v1 = (char *)P;
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_qDLLq(P, *(_QWORD *)(P + 8), P, *(_DWORD *)(P + 4));
  v2 = (KSPIN_LOCK *)(v1 + 16);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v1 + 2);
  v4 = (*(_DWORD *)v1)-- == 1;
  v5 = (KSPIN_LOCK *)*((_QWORD *)v1 + 9);
  v6 = v3;
  if ( !v4 )
  {
    v9 = v3;
    goto LABEL_25;
  }
  v7 = (_DWORD *)*((_QWORD *)v1 + 1);
  if ( (*v7 & 8) != 0 )
    *v7 &= ~8u;
  if ( v1[336] )
  {
    if ( (unsigned __int8)byte_1C009961B >= 4u )
      WPP_SF_(0x2Cu, &WPP_4751d4e37a7b3d0bd2bb7b74b42f4c5c_Traceguids);
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
    if ( (unsigned __int8)byte_1C009961B >= 4u )
      WPP_SF_(0x2Du, &WPP_4751d4e37a7b3d0bd2bb7b74b42f4c5c_Traceguids);
    v8 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v1 + 2, v6);
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_qq(0x2Eu, &WPP_4751d4e37a7b3d0bd2bb7b74b42f4c5c_Traceguids, v1, *((_QWORD *)v1 + 9));
  ExFreePoolWithTag(v1, 0);
  v2 = v5 + 1;
  v1 = 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc(v5 + 1);
  if ( v8 )
  {
    v5[4] = 0LL;
    v10 = v5[5];
  }
  else
  {
    v5[5] = 0LL;
    v10 = 0LL;
    if ( v5[4] )
    {
LABEL_25:
      KeReleaseSpinLock(v2, v9);
      goto LABEL_26;
    }
  }
  if ( v10 )
    goto LABEL_25;
  KeReleaseSpinLock(v5 + 1, v9);
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_q(0x2Fu, &WPP_4751d4e37a7b3d0bd2bb7b74b42f4c5c_Traceguids, (__int64)v5);
  ExFreePoolWithTag(v5, 0);
LABEL_26:
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_q(0x30u, &WPP_4751d4e37a7b3d0bd2bb7b74b42f4c5c_Traceguids, (__int64)v1);
}
