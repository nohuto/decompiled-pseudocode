/*
 * XREFs of ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C0015728
 * Callers:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C0014714 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0014F90 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C0013648 (-Release@CCompositionFrame@DirectComposition@@QEBAJXZ.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00136E4 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
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
  v4 = (char **)v3[1];
  if ( *v3 != v2 || *v4 != (char *)v3 )
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
    v4 = (char **)v3[1];
    if ( *v3 != v2 || *v4 != (char *)v3 )
      __fastfail(3u);
  }
  DirectComposition::CPushLockCriticalSection::Release(v1);
}
