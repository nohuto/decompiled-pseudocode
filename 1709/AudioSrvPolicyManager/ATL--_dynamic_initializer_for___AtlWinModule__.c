/*
 * XREFs of ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001340
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180020700 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x1800275FE (memset.c)
 */

int ATL::_dynamic_initializer_for___AtlWinModule__()
{
  int v0; // eax
  int v1; // ecx

  memset(&stru_18003AEE8, 0, sizeof(stru_18003AEE8));
  ATL::_AtlWinModule = 72;
  qword_18003AF18 = 0LL;
  qword_18003AF20 = 0LL;
  qword_18003AF10 = 0LL;
  v0 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_18003AEE8);
  v1 = ATL::_AtlWinModule;
  if ( v0 < 0 )
    v1 = 0;
  ATL::_AtlWinModule = v1;
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlWinModule__);
}
