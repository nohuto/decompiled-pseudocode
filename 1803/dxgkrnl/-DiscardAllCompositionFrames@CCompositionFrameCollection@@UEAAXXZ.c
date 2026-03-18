/*
 * XREFs of ?DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ @ 0x1C004AC30
 * Callers:
 *     ??_GCCompositionFrameCollection@@IEAAPEAXI@Z @ 0x1C004ABF0 (--_GCCompositionFrameCollection@@IEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x1C000B60C (-Release@CPushLockCriticalSection@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireExclusive@CPushLockCriticalSection@@QEAAXXZ @ 0x1C0025044 (-AcquireExclusive@CPushLockCriticalSection@@QEAAXXZ.c)
 */

void __fastcall CCompositionFrameCollection::DiscardAllCompositionFrames(CCompositionFrameCollection *this)
{
  CPushLockCriticalSection *v1; // rsi
  char *v2; // rdi
  char **v3; // rax
  char **v4; // rcx
  char **v5; // rbx

  v1 = (CCompositionFrameCollection *)((char *)this + 32);
  v2 = (char *)this + 16;
  CPushLockCriticalSection::AcquireExclusive((CCompositionFrameCollection *)((char *)this + 32));
  v3 = (char **)*((_QWORD *)v2 + 1);
  if ( *v3 != v2 || (v4 = (char **)v3[1], *v4 != (char *)v3) )
    __fastfail(3u);
  while ( 1 )
  {
    *((_QWORD *)v2 + 1) = v4;
    *v4 = v2;
    if ( v3 == (char **)v2 )
      break;
    v5 = v3 - 2;
    (*((void (__fastcall **)(char **))*(v3 - 2) + 4))(v3 - 2);
    (*((void (__fastcall **)(char **))*v5 + 1))(v5);
    v3 = (char **)*((_QWORD *)v2 + 1);
    if ( *v3 == v2 )
    {
      v4 = (char **)v3[1];
      if ( *v4 == (char *)v3 )
        continue;
    }
    __fastfail(3u);
  }
  CPushLockCriticalSection::Release(v1);
}
