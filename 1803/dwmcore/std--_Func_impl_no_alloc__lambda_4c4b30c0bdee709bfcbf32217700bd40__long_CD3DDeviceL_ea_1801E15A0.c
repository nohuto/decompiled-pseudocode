/*
 * XREFs of std::_Func_impl_no_alloc__lambda_4c4b30c0bdee709bfcbf32217700bd40__long_CD3DDeviceLevel1::D3D12Resources_____ptr64_::_Delete_this @ 0x1801E15A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_4c4b30c0bdee709bfcbf32217700bd40__long_CD3DDeviceLevel1::D3D12Resources_____ptr64_::_Delete_this(
        __int64 *lpMem,
        char a2)
{
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(lpMem + 2);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(lpMem + 1);
  if ( a2 )
    std::_Deallocate((char *)lpMem, 1uLL, 0x18uLL);
}
