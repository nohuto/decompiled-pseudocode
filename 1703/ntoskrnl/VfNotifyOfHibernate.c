/*
 * XREFs of VfNotifyOfHibernate @ 0x14076A9EC
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140405BB8 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfIsVerifierExtensionEnabled @ 0x14024FF04 (VfIsVerifierExtensionEnabled.c)
 *     VfDisableHalVerifier @ 0x1402504C8 (VfDisableHalVerifier.c)
 */

void __fastcall VfNotifyOfHibernate(char a1)
{
  ULONG_PTR *v1; // rax
  ULONG_PTR v2; // rcx
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
    v1 = (ULONG_PTR *)ViAdapterList;
    ViVerifyDma = 1;
    ViEnableAfterHibernate = 0;
    while ( &ViAdapterList != v1 )
    {
      v2 = v1[2];
      if ( v2 )
        *(_QWORD *)(v2 + 8) = &ViDmaOperations;
      v1 = (ULONG_PTR *)*v1;
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
