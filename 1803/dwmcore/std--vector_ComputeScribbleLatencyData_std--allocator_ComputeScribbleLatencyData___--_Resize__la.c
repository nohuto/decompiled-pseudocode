/*
 * XREFs of std::vector_ComputeScribbleLatencyData_std::allocator_ComputeScribbleLatencyData___::_Resize__lambda_49aad73161a680b61c856fa3713eefe3___ @ 0x18021BD1C
 * Callers:
 *     ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x18021C30C (-DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComp.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Change_array@?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@AEAAXQEAUComputeScribbleLatencyData@@_K1@Z @ 0x18021CBA4 (-_Change_array@-$vector@UComputeScribbleLatencyData@@V-$allocator@UComputeScribbleLatencyData@@@.c)
 */

unsigned __int64 __fastcall std::vector_ComputeScribbleLatencyData_std::allocator_ComputeScribbleLatencyData___::_Resize__lambda_49aad73161a680b61c856fa3713eefe3___(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  char *v9; // rbp
  unsigned __int64 v10; // r8
  char *v11; // rdi
  unsigned __int64 v12; // rbx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 8);
  v5 = (v2 - *(_QWORD *)a1) >> 5;
  result = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 5;
  if ( a2 <= result )
  {
    if ( a2 <= v5 )
    {
      if ( a2 != v5 )
        *(_QWORD *)(a1 + 8) = *(_QWORD *)a1 + 32 * a2;
    }
    else
    {
      v12 = a2 - v5;
      if ( a2 != v5 )
      {
        result = (unsigned __int64)memset_0(*(void **)(a1 + 8), 0, 32 * v12);
        v2 += 32 * v12;
      }
      *(_QWORD *)(a1 + 8) = v2;
    }
  }
  else
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v7 = result >> 1;
    if ( result <= 0x7FFFFFFFFFFFFFFLL - (result >> 1) )
    {
      v8 = v7 + result;
      if ( v7 + result < a2 )
        v8 = a2;
    }
    else
    {
      v8 = a2;
    }
    v9 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v8, 0x20uLL);
    v10 = a2 - v5;
    v11 = &v9[32 * v5];
    if ( v10 )
      memset_0(v11, 0, 32 * v10);
    memmove(v9, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    return std::vector<ComputeScribbleLatencyData>::_Change_array(a1, v9, a2, v8);
  }
  return result;
}
