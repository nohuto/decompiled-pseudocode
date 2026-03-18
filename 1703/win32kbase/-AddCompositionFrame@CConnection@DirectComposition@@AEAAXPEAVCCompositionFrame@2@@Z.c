/*
 * XREFs of ?AddCompositionFrame@CConnection@DirectComposition@@AEAAXPEAVCCompositionFrame@2@@Z @ 0x1C00157C4
 * Callers:
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C0015964 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CConnection::AddCompositionFrame(
        DirectComposition::CConnection *this,
        struct DirectComposition::CCompositionFrame *a2)
{
  DirectComposition::CPushLockCriticalSection *v2; // rsi
  char *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rax

  v2 = (DirectComposition::CConnection *)((char *)this + 200);
  ExAcquirePushLockExclusiveEx((char *)this + 200, 0LL);
  *((_BYTE *)v2 + 8) = 1;
  _InterlockedIncrement((volatile signed __int32 *)a2);
  v5 = (char *)this + 184;
  v6 = (_QWORD *)((char *)a2 + 8);
  v7 = *(_QWORD *)v5;
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
    __fastfail(3u);
  *v6 = v7;
  v6[1] = v5;
  *(_QWORD *)(v7 + 8) = v6;
  *(_QWORD *)v5 = v6;
  DirectComposition::CPushLockCriticalSection::Release(v2);
}
