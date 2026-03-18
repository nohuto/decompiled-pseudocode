/*
 * XREFs of ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C0033F80
 * Callers:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C003393C (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C00349C0 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C0035144 (-Release@CCompositionFrame@DirectComposition@@QEBAJXZ.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C0035174 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C00374D0 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CConnection::DiscardAllCompositionFrames(DirectComposition::CConnection *this)
{
  DirectComposition::CPushLockCriticalSection *v1; // rsi
  char *v2; // rdi
  char **v3; // rax
  char **v4; // rcx
  DirectComposition::CCompositionFrame *v5; // rbx

  v1 = (DirectComposition::CConnection *)((char *)this + 200);
  v2 = (char *)this + 184;
  ExAcquirePushLockExclusiveEx((char *)this + 200, 0LL);
  *((_BYTE *)v1 + 8) = 1;
  v3 = (char **)*((_QWORD *)v2 + 1);
  if ( *v3 != v2 || (v4 = (char **)v3[1], *v4 != (char *)v3) )
    __fastfail(3u);
  while ( 1 )
  {
    *((_QWORD *)v2 + 1) = v4;
    *v4 = v2;
    if ( v3 == (char **)v2 )
      break;
    v5 = (DirectComposition::CCompositionFrame *)(v3 - 1);
    DirectComposition::CCompositionFrame::Discard((DirectComposition::CCompositionFrame *)(v3 - 1));
    DirectComposition::CCompositionFrame::Release(v5);
    v3 = (char **)*((_QWORD *)v2 + 1);
    if ( *v3 == v2 )
    {
      v4 = (char **)v3[1];
      if ( *v4 == (char *)v3 )
        continue;
    }
    __fastfail(3u);
  }
  DirectComposition::CPushLockCriticalSection::Release(v1);
}
