/*
 * XREFs of ??_E?$_Func_base@_NPEAX_KPEAX_KIU_Nil@wistd@@U12@@wistd@@UEAAPEAXI@Z @ 0x1801412C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall wistd::_Func_base<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::_Func_base<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
