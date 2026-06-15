/*
 * XREFs of ??1?$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEAA@XZ @ 0x18007D23C
 * Callers:
 *     _std::function_bool___cdecl(WAVEFORMATEXTENSIBLE_const_____ptr64)_::function_bool___cdecl(WAVEFORMATEXTENSIBLE_const_____ptr64)__::_1_::dtor$0 @ 0x1800593D8 (_std--function_bool___cdecl(WAVEFORMATEXTENSIBLE_const_____ptr64)_--function_bool___cdecl(WAVEFO.c)
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$7 @ 0x180059454 (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$7.c)
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$15 @ 0x180059460 (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$15.c)
 * Callees:
 *     std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this @ 0x1800405E0 (std--_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std--allocator_int__bool__ea_1800405E0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::~_Func_class<bool,WAVEFORMATEXTENSIBLE const *>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v3; // rcx
  void (__fastcall *v4)(_QWORD *, char); // rax

  v3 = (_QWORD *)a1[7];
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    v4 = *(void (__fastcall **)(_QWORD *, char))(*v3 + 32LL);
    if ( v4 == std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this )
      std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this(
        v3,
        a2);
    else
      v4(v3, a2);
    a1[7] = 0LL;
  }
}
