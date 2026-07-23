/*
 * XREFs of VfNotifyOfHibernate @ 0x14081982C
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140472BF4 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfIsVerifierExtensionEnabled @ 0x1402A9828 (VfIsVerifierExtensionEnabled.c)
 *     VfDisableHalVerifier @ 0x1402A9E48 (VfDisableHalVerifier.c)
 */

void __fastcall VfNotifyOfHibernate(char a1)
{
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v2; // rcx
  int IsVerifierExtensionEnabled; // eax
  __int64 v4; // rcx
  char v5; // r9
  int v6; // r11d

  if ( a1 )
  {
    if ( ViVerifyDma )
    {
      ViEnableAfterHibernate = 1;
      VfDisableHalVerifier();
    }
  }
  else
  {
    if ( !ViEnableAfterHibernate )
      return;
    Flink = ViAdapterList.Flink;
    ViVerifyDma = 1;
    ViEnableAfterHibernate = 0;
    while ( &ViAdapterList != Flink )
    {
      v2 = Flink[1].Flink;
      if ( v2 )
        v2->Blink = (struct _LIST_ENTRY *)&ViDmaOperations;
      Flink = Flink->Flink;
    }
  }
  IsVerifierExtensionEnabled = VfIsVerifierExtensionEnabled();
  if ( IsVerifierExtensionEnabled == v6 )
  {
    if ( ViFnExtensionHiberFunc )
    {
      LOBYTE(v4) = v5;
      ((void (__fastcall *)(__int64))ViFnExtensionHiberFunc)(v4);
    }
  }
}
