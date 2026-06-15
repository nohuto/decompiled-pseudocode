/*
 * XREFs of ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x18009E75C
 * Callers:
 *     ??1CAtlComModule@ATL@@QEAA@XZ @ 0x18005FE94 (--1CAtlComModule@ATL@@QEAA@XZ.c)
 *     ??_GCAudioServiceModule@@UEAAPEAXI@Z @ 0x18009CB30 (--_GCAudioServiceModule@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CAtlComModule::Term(ATL::CAtlComModule *this)
{
  __int64 *v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx

  if ( ATL::_AtlComModule )
  {
    v1 = (__int64 *)qword_18018A9E0;
    v2 = qword_18018A9E8;
    while ( (unsigned __int64)v1 < v2 )
    {
      v3 = *v1;
      if ( *v1 )
      {
        v4 = *(_QWORD *)(v3 + 32);
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        *(_QWORD *)(v3 + 32) = 0LL;
        v2 = qword_18018A9E8;
      }
      ++v1;
    }
    DeleteCriticalSection(&stru_18018A9F0);
    ATL::_AtlComModule = 0;
  }
}
