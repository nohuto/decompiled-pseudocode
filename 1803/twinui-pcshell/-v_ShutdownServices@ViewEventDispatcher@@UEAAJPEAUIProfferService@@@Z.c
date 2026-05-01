/*
 * XREFs of ?v_ShutdownServices@ViewEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x1801D1190
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ @ 0x180031860 (-_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ.c)
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x180031E9C (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::v_ShutdownServices(ViewEventDispatcher *this, struct IProfferService *a2)
{
  RTL_SRWLOCK *v3; // rdi
  unsigned __int64 i; // rsi

  v3 = (RTL_SRWLOCK *)((char *)this + 176);
  AcquireSRWLockExclusive((PSRWLOCK)this + 22);
  for ( i = *((_QWORD *)this + 32); i; ViewEventDispatcher::_RemoveValidView(
                                         (ViewEventDispatcher *)((char *)this - 120),
                                         i) )
    --i;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  ViewEventDispatcher::_FlushRemovedPendingActivations((ViewEventDispatcher *)((char *)this - 120));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 47);
  return 0LL;
}
