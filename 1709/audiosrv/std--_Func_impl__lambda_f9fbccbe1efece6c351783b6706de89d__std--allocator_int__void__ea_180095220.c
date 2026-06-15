/*
 * XREFs of std::_Func_impl__lambda_f9fbccbe1efece6c351783b6706de89d__std::allocator_int__void_IAudioStreamInfo_____ptr64_::_Delete_this @ 0x180095220
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Func_impl__lambda_f9fbccbe1efece6c351783b6706de89d__std::allocator_int__void_IAudioStreamInfo_____ptr64_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Func_base<bool,ISaDeviceProxy *>::`vftable';
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x10uLL);
}
