/*
 * XREFs of ?Uninitialize@CImmersiveApplicationTransitionHelper@@UEAAJXZ @ 0x18003AAF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::Uninitialize(CImmersiveApplicationTransitionHelper *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v4);
    *((_QWORD *)this + 7) = 0LL;
  }
  return 0LL;
}
