/*
 * XREFs of _anonymous_namespace_::FramesReport::UpdateResourceCountersForPid @ 0x180008310
 * Callers:
 *     _lambda_bc2aba7ba829d575f491599aa9d39211_::_lambda_invoker_cdecl_ @ 0x180008240 (_lambda_bc2aba7ba829d575f491599aa9d39211_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _anonymous_namespace_::FramesReport::ResourcesForPid::IsLessThan @ 0x18000844C (_anonymous_namespace_--FramesReport--ResourcesForPid--IsLessThan.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     std::vector__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_std::allocator__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64___::_Insert_n @ 0x1800BB318 (std--vector__anonymous_namespace_--FramesReport--ResourcesForPid_____ptr64_std--allocator__anony.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall anonymous_namespace_::FramesReport::UpdateResourceCountersForPid(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r13
  _QWORD *v5; // rsi
  __int64 v7; // rbx
  _QWORD *v9; // r12
  _DWORD *v10; // rcx
  __int64 result; // rax
  char *v12; // rax
  char *v13; // rbx
  char v14; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD **)(a1 + 104);
  v4 = a1 + 96;
  v5 = *(_QWORD **)(a1 + 96);
  v7 = v3 - v5;
  while ( v7 > 0 )
  {
    v9 = &v5[v7 / 2];
    if ( (unsigned __int8)anonymous_namespace_::FramesReport::ResourcesForPid::IsLessThan(*v9, a2) )
    {
      v5 = v9 + 1;
      v7 += -1 - v7 / 2;
    }
    else
    {
      v7 /= 2LL;
    }
  }
  if ( v5 == v3 || (v10 = (_DWORD *)*v5, *(_DWORD *)*v5 != a2) )
  {
    v12 = (char *)operator new(0x58uLL);
    v13 = v12;
    if ( v12 )
      memset_0(v12, 0, 0x58uLL);
    else
      v13 = 0LL;
    *(_DWORD *)v13 = a2;
    *(_OWORD *)(v13 + 4) = *(_OWORD *)a3;
    *(_OWORD *)(v13 + 20) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v13 + 36) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v13 + 52) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(v13 + 68) = *(_OWORD *)(a3 + 64);
    *((_DWORD *)v13 + 21) = *(_DWORD *)(a3 + 80);
    return std::vector__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_std::allocator__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64___::_Insert_n(
             v4,
             &v14,
             v5);
  }
  else
  {
    *(_OWORD *)(v10 + 1) = *(_OWORD *)a3;
    *(_OWORD *)(v10 + 5) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v10 + 9) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v10 + 13) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(v10 + 17) = *(_OWORD *)(a3 + 64);
    result = *(unsigned int *)(a3 + 80);
    v10[21] = result;
  }
  return result;
}
