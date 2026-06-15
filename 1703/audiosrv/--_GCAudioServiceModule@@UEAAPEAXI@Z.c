/*
 * XREFs of ??_GCAudioServiceModule@@UEAAPEAXI@Z @ 0x180080490
 * Callers:
 *     <none>
 * Callees:
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x180036714 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x18008212C (-Term@CAtlComModule@ATL@@QEAAXXZ.c)
 *     ?Term@CAtlModule@ATL@@QEAAXXZ @ 0x1800821A4 (-Term@CAtlModule@ATL@@QEAAXXZ.c)
 */

CAudioServiceModule *__fastcall CAudioServiceModule::`scalar deleting destructor'(CAudioServiceModule *this, char a2)
{
  ATL::CAtlComModule *v4; // rcx

  *(_QWORD *)this = &CAudioServiceModule::`vftable';
  ATL::CAtlComModule::ExecuteObjectMain(this, 0);
  ATL::CAtlModule::Term(this);
  ATL::CAtlComModule::Term(v4);
  ATL::CAtlModule::Term(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
