/*
 * XREFs of std::_Func_impl__lambda_bb99315a2e04bb315428571541c06609__std::allocator_int__void_::_Delete_this @ 0x180012340
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::_Func_impl__lambda_bb99315a2e04bb315428571541c06609__std::allocator_int__void_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Func_base<void,IMPCInputProviderBase *>::`vftable';
  if ( a2 )
    operator delete(a1);
}
