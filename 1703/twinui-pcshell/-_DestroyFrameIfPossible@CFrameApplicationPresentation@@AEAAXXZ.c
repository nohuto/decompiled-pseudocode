/*
 * XREFs of ?_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ @ 0x18006944C
 * Callers:
 *     _lambda_1d725a211fae648eb22a29137fc16fd7_::operator() @ 0x180066A4C (_lambda_1d725a211fae648eb22a29137fc16fd7_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2647a080773a9fa4ef6a91f024d7dfff___::Run @ 0x18006B260 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2647a080773a9fa4ef6a91f024d7dfff___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CFrameApplicationPresentation::_DestroyFrameIfPossible(CFrameApplicationPresentation *this)
{
  char v2; // si
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rcx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = 1;
  if ( *((_DWORD *)this + 12) != 1 || **((_QWORD **)this + 12) )
    v2 = 0;
  v3 = *((_QWORD *)this + 14);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  if ( v2 )
  {
    v4 = *((_QWORD *)this + 14);
    if ( v3 != v4 )
    {
      if ( v4 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*((_QWORD *)this + 14));
      v5 = v3;
      v3 = v4;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v6 = *((_QWORD *)this + 14);
    if ( v6 )
    {
      *((_QWORD *)this + 14) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    *((_DWORD *)this + 12) = 2;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 248LL))(v3);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
