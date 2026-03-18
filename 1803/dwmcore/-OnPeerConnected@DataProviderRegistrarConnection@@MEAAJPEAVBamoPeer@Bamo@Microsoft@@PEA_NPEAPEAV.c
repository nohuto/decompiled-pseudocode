/*
 * XREFs of ?OnPeerConnected@DataProviderRegistrarConnection@@MEAAJPEAVBamoPeer@Bamo@Microsoft@@PEA_NPEAPEAVBamoPrincipal@34@@Z @ 0x18016CD00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DataProviderRegistrarConnection::OnPeerConnected(
        DataProviderRegistrarConnection *this,
        struct Microsoft::Bamo::BamoPeer *a2,
        bool *a3,
        struct Microsoft::Bamo::BamoPrincipal **a4)
{
  __int64 v4; // rax
  struct Microsoft::Bamo::BamoPrincipal *v5; // rcx

  v4 = *((_QWORD *)this + 19);
  *a3 = 1;
  v5 = *(struct Microsoft::Bamo::BamoPrincipal **)(v4 + 40);
  *a4 = v5;
  (**(void (__fastcall ***)(struct Microsoft::Bamo::BamoPrincipal *, struct Microsoft::Bamo::BamoPeer *))v5)(v5, a2);
  return 0LL;
}
