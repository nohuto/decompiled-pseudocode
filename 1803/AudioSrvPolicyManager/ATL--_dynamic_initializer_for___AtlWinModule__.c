/*
 * XREFs of ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x1800014E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002A1F4 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int ATL::_dynamic_initializer_for___AtlWinModule__()
{
  int v0; // eax
  int v1; // ecx

  memset(&stru_18004F188, 0, sizeof(stru_18004F188));
  ATL::_AtlWinModule = 72;
  qword_18004F1B8 = 0LL;
  qword_18004F1C0 = 0LL;
  qword_18004F1B0 = 0LL;
  v0 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_18004F188);
  v1 = ATL::_AtlWinModule;
  if ( v0 < 0 )
    v1 = 0;
  ATL::_AtlWinModule = v1;
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlWinModule__);
}
