/*
 * XREFs of ??1?$function@$$A6AX_N@Z@std@@QEAA@XZ @ 0x1800FAEC0
 * Callers:
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$115 @ 0x1800B3099 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$115.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$117 @ 0x1800B30A5 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$117.c)
 *     _WindowReadyState::SetCallback_::_1_::dtor$0 @ 0x1800B4B70 (_WindowReadyState--SetCallback_--_1_--dtor$0.c)
 *     _std::function_void___cdecl(bool)_::operator__::_1_::dtor$1 @ 0x1800B6223 (_std--function_void___cdecl(bool)_--operator__--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::function<void (bool)>::~function<void (bool)>(_QWORD *a1, __int64 a2)
{
  std::_Func_class<void,bool>::_Tidy(a1, a2);
}
