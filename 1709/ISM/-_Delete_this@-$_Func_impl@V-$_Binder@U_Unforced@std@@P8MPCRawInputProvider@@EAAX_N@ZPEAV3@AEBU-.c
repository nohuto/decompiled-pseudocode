/*
 * XREFs of ?_Delete_this@?$_Func_impl@V?$_Binder@U_Unforced@std@@P8MPCRawInputProvider@@EAAX_N@ZPEAV3@AEBU?$_Ph@$00@2@@std@@V?$allocator@H@2@X_N@std@@EEAAX_N@Z @ 0x180005610
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::_Func_impl<std::_Binder<std::_Unforced,void (MPCRawInputProvider::*)(bool),MPCRawInputProvider *,std::_Ph<1> const &>,std::allocator<int>,void,bool>::_Delete_this(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Func_base<void,IMPCInputProviderBase *>::`vftable';
  if ( a2 )
    operator delete(a1);
}
