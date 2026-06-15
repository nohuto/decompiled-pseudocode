/*
 * XREFs of ??$emplace_back@AEBV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18005EC7C
 * Callers:
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x18005EBB0 (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180016CB0 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00AEAV?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180017AB0 (--$_Uninitialized_move_al_unchecked@PEAV-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy> const &>(
        __int64 a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 *v5; // rdi
  __int64 v6; // rdi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // rcx
  __int64 *v14; // rdi
  __int64 v15; // rcx
  __int64 *v16; // r15
  _QWORD *v17; // [rsp+80h] [rbp+18h]

  result = *(_QWORD *)(a1 + 16);
  v5 = *(__int64 **)(a1 + 8);
  if ( (__int64 *)result == v5 )
  {
    v6 = ((__int64)v5 - *(_QWORD *)a1) >> 3;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + 1;
    v8 = (result - *(_QWORD *)a1) >> 3;
    v9 = v8 >> 1;
    if ( v8 > 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v6 + 1;
    }
    else
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    v11 = std::_Allocate<std::_Default_allocate_traits<1>>(v10, 8uLL);
    v12 = (_QWORD *)v11;
    v17 = (_QWORD *)v11;
    try
    {
      v13 = *a2;
      *(_QWORD *)(v11 + 8 * v6) = *a2;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      std::_Uninitialized_move_al_unchecked<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy> *,wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>>(
        *(__int64 **)a1,
        *(__int64 **)(a1 + 8),
        v12);
    }
    catch ( ... )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17[v6]);
      std::_Deallocate(v17, v10, 8uLL);
      throw;
    }
    v14 = *(__int64 **)a1;
    if ( *(_QWORD *)a1 )
    {
      v16 = *(__int64 **)(a1 + 8);
      if ( v14 != v16 )
      {
        do
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v14++);
        while ( v14 != v16 );
        v14 = *(__int64 **)a1;
      }
      std::_Deallocate(v14, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v14) >> 3, 8uLL);
    }
    *(_QWORD *)a1 = v12;
    *(_QWORD *)(a1 + 8) = &v12[v7];
    result = (__int64)&v12[v10];
    *(_QWORD *)(a1 + 16) = result;
  }
  else
  {
    v15 = *a2;
    *v5 = *a2;
    if ( v15 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    *(_QWORD *)(a1 + 8) += 8LL;
  }
  return result;
}
