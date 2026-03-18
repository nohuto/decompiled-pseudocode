/*
 * XREFs of _anonymous_namespace_::FramesReport::UpdateResourceCountersForPid @ 0x180022A20
 * Callers:
 *     _lambda_bc2aba7ba829d575f491599aa9d39211_::_lambda_invoker_cdecl_ @ 0x180022760 (_lambda_bc2aba7ba829d575f491599aa9d39211_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _anonymous_namespace_::FramesReport::ResourcesForPid::IsLessThan @ 0x180022B58 (_anonymous_namespace_--FramesReport--ResourcesForPid--IsLessThan.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     std::vector__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_std::allocator__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64___::emplace__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_const_&___ptr64_ @ 0x1800C3458 (std--vector__anonymous_namespace_--FramesReport--ResourcesForPid_____ptr64_std--all_ea_1800C3458.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall anonymous_namespace_::FramesReport::UpdateResourceCountersForPid(
        __int64 a1,
        unsigned int a2,
        __int128 *a3)
{
  _QWORD *v3; // r15
  __int64 v4; // r12
  _QWORD *v5; // rbx
  __int64 v7; // rsi
  __int64 v9; // rbp
  char IsLessThan; // dl
  _QWORD *v11; // rax
  _DWORD *v12; // rcx
  __int64 result; // rax
  char *v14; // rax
  char *v15; // rsi
  __int128 v16; // xmm0
  char *v17; // [rsp+50h] [rbp+8h] BYREF
  char v18; // [rsp+68h] [rbp+20h] BYREF

  v3 = *(_QWORD **)(a1 + 104);
  v4 = a1 + 96;
  v5 = *(_QWORD **)(a1 + 96);
  v7 = v3 - v5;
  while ( v7 > 0 )
  {
    v9 = v7 >> 1;
    IsLessThan = anonymous_namespace_::FramesReport::ResourcesForPid::IsLessThan(v5[v7 >> 1], a2);
    if ( IsLessThan )
      v7 += -1 - v9;
    else
      v7 >>= 1;
    v11 = &v5[v9 + 1];
    if ( !IsLessThan )
      v11 = v5;
    v5 = v11;
  }
  if ( v5 == v3 || (v12 = (_DWORD *)*v5, *(_DWORD *)*v5 != a2) )
  {
    v14 = (char *)operator new(0x58uLL);
    v15 = v14;
    if ( v14 )
      memset_0(v14, 0, 0x58uLL);
    else
      v15 = 0LL;
    *(_DWORD *)v15 = a2;
    v16 = *a3;
    v17 = v15;
    *(_OWORD *)(v15 + 4) = v16;
    *(_OWORD *)(v15 + 20) = a3[1];
    *(_OWORD *)(v15 + 36) = a3[2];
    *(_OWORD *)(v15 + 52) = a3[3];
    *(_OWORD *)(v15 + 68) = a3[4];
    *((_DWORD *)v15 + 21) = *((_DWORD *)a3 + 20);
    return std::vector__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_std::allocator__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64___::emplace__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_const_____ptr64_(
             v4,
             &v18,
             v5,
             &v17);
  }
  else
  {
    *(_OWORD *)(v12 + 1) = *a3;
    *(_OWORD *)(v12 + 5) = a3[1];
    *(_OWORD *)(v12 + 9) = a3[2];
    *(_OWORD *)(v12 + 13) = a3[3];
    *(_OWORD *)(v12 + 17) = a3[4];
    result = *((unsigned int *)a3 + 20);
    v12[21] = result;
  }
  return result;
}
