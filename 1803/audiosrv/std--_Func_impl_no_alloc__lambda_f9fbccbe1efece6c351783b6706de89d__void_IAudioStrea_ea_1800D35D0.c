/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f9fbccbe1efece6c351783b6706de89d__void_IAudioStreamInfo_____ptr64_::_Delete_this @ 0x1800D35D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_f9fbccbe1efece6c351783b6706de89d__void_IAudioStreamInfo_____ptr64_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x10uLL);
}
