/*
 * XREFs of ?UnsubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJXZ @ 0x1800C98F0
 * Callers:
 *     ??1?$unique_ptr@VCCortanaWNFService@Cortana@TwinUI@@U?$default_delete@VCCortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1800C8954 (--1-$unique_ptr@VCCortanaWNFService@Cortana@TwinUI@@U-$default_delete@VCCortanaWNFService@Cortan.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::UnsubscribeToWNF(TwinUI::Cortana::CCortanaWNFService *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    *((_QWORD *)this + 1) = 0LL;
    RtlUnsubscribeWnfNotificationWaitForCompletion(v3);
  }
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    *((_QWORD *)this + 2) = 0LL;
    RtlUnsubscribeWnfNotificationWaitForCompletion(v4);
  }
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    *((_QWORD *)this + 3) = 0LL;
    RtlUnsubscribeWnfNotificationWaitForCompletion(v5);
  }
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    *((_QWORD *)this + 4) = 0LL;
    RtlUnsubscribeWnfNotificationWaitForCompletion(v6);
  }
  v7 = *((_QWORD *)this + 5);
  if ( v7 )
  {
    *((_QWORD *)this + 5) = 0LL;
    RtlUnsubscribeWnfNotificationWaitForCompletion(v7);
  }
  v8 = *((_QWORD *)this + 6);
  if ( v8 )
  {
    *((_QWORD *)this + 6) = 0LL;
    RtlUnsubscribeWnfNotificationWaitForCompletion(v8);
  }
  return 0LL;
}
