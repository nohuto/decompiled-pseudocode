/*
 * XREFs of std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Do_call @ 0x18001F070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  CAudioStream *v2; // rcx
  __int64 (*v3)(void); // rax

  v2 = (CAudioStream *)((*a2 - 8LL) & -(__int64)(*a2 != 0LL));
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 152LL);
  if ( (char *)v3 == (char *)CAudioStream::OnStreamConnectedToSaDevice )
    return CAudioStream::OnStreamConnectedToSaDevice(v2);
  else
    return v3();
}
