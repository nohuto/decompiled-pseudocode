/*
 * XREFs of ??$emplace_back@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@QEAAXAEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@Z @ 0x1801554E4
 * Callers:
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@AEAAJXZ @ 0x180155B14 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?_Change_array@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@AEAAXQEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@_K1@Z @ 0x180156A90 (-_Change_array@-$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V-$allocator@U.c)
 */

__int64 __fastcall std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::emplace_back<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair const &>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v2; // rax
  __int64 *v4; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 v13; // rbx
  unsigned __int64 v14; // r15
  __int64 v15; // rcx
  _QWORD *v16; // r8
  _QWORD *v17; // rdx
  _QWORD *i; // rcx
  __int64 v19; // rax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (__int64 *)a1[2];
  v4 = (__int64 *)a1[1];
  if ( v2 == v4 )
  {
    v8 = ((__int64)v4 - *a1) >> 4;
    if ( v8 == 0xFFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v9 = v8 + 1;
    v10 = ((__int64)v2 - *a1) >> 4;
    v11 = v10 >> 1;
    if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
    {
      v12 = v11 + v10;
      if ( v11 + v10 < v9 )
        v12 = v8 + 1;
    }
    else
    {
      v12 = v8 + 1;
    }
    v13 = 2 * v8;
    v14 = std::_Allocate<std::_Default_allocate_traits<1>>(v12, 0x10uLL);
    *(_QWORD *)(v14 + 8 * v13) = *a2;
    v15 = a2[1];
    *(_QWORD *)(v14 + 8 * v13 + 8) = v15;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v16 = (_QWORD *)a1[1];
    v17 = (_QWORD *)v14;
    for ( i = (_QWORD *)*a1; i != v16; i += 2 )
    {
      *v17 = *i;
      v17 += 2;
      v19 = i[1];
      i[1] = 0LL;
      *(v17 - 1) = v19;
    }
    return std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Change_array(a1, v14, v9, v12);
  }
  else
  {
    result = *a2;
    *v4 = *a2;
    v7 = a2[1];
    v4[1] = v7;
    if ( v7 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    a1[1] += 16LL;
  }
  return result;
}
