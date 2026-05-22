/*
 * XREFs of ?OnPeerConnected@MPCManagerClientConnection@@MEAAJPEAVBamoPeer@Bamo@Microsoft@@PEA_NPEAPEAVBamoPrincipal@34@@Z @ 0x18001EB20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManagerClientConnection::OnPeerConnected(
        MPCManagerClientConnection *this,
        struct Microsoft::Bamo::BamoPeer *a2,
        bool *a3,
        struct Microsoft::Bamo::BamoPrincipal **a4)
{
  struct Microsoft::Bamo::BamoPrincipal *v4; // rcx

  *a3 = 1;
  v4 = (struct Microsoft::Bamo::BamoPrincipal *)*((_QWORD *)this + 19);
  *a4 = v4;
  (**(void (__fastcall ***)(struct Microsoft::Bamo::BamoPrincipal *, struct Microsoft::Bamo::BamoPeer *))v4)(v4, a2);
  return 0LL;
}
