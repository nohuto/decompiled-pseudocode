/*
 * XREFs of ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x140035C0C
 * Callers:
 *     ??1CAudioDGModule@@UEAA@XZ @ 0x14001C5C0 (--1CAudioDGModule@@UEAA@XZ.c)
 *     ??1CAtlComModule@ATL@@QEAA@XZ @ 0x14001C748 (--1CAtlComModule@ATL@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CAtlComModule::Term(ATL::CAtlComModule *this)
{
  __int64 *v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx

  if ( ATL::_AtlComModule )
  {
    v1 = (__int64 *)qword_14008A020;
    v2 = qword_14008A028;
    while ( (unsigned __int64)v1 < v2 )
    {
      v3 = *v1;
      if ( *v1 )
      {
        v4 = *(_QWORD *)(v3 + 32);
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        *(_QWORD *)(v3 + 32) = 0LL;
        v2 = qword_14008A028;
      }
      ++v1;
    }
    DeleteCriticalSection(&stru_14008A030);
    ATL::_AtlComModule = 0;
  }
}
