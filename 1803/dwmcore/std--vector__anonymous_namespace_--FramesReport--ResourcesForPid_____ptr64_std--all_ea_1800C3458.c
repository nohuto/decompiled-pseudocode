/*
 * XREFs of std::vector__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_std::allocator__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64___::emplace__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_const_&___ptr64_ @ 0x1800C3458
 * Callers:
 *     _anonymous_namespace_::FramesReport::UpdateResourceCountersForPid @ 0x180022A20 (_anonymous_namespace_--FramesReport--UpdateResourceCountersForPid.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     std::vector__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_std::allocator__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64___::_Change_array @ 0x1800C33F0 (std--vector__anonymous_namespace_--FramesReport--ResourcesForPid_____ptr64_std--allocator__anony.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall std::vector__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_std::allocator__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64___::emplace__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_const_____ptr64_(
        const void **a1,
        _QWORD *a2,
        char *a3,
        _QWORD *a4)
{
  char *v4; // rsi
  __int64 v5; // r14
  char *v7; // rcx
  __int64 v9; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbp
  char *v16; // r12
  char *v17; // rcx
  _BYTE *v18; // rdx
  size_t v19; // r8
  _QWORD *result; // rax
  __int64 v21; // rbp
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (char *)a1[1];
  v5 = a3 - (_BYTE *)*a1;
  v7 = (char *)a1[2];
  v9 = v5 >> 3;
  if ( v7 == v4 )
  {
    v11 = (v4 - (_BYTE *)*a1) >> 3;
    if ( v11 == 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v12 = v11 + 1;
    v13 = (v7 - (_BYTE *)*a1) >> 3;
    v14 = v13 >> 1;
    if ( v13 > 0x1FFFFFFFFFFFFFFFLL - (v13 >> 1) )
    {
      v15 = v12;
    }
    else
    {
      v15 = v14 + v13;
      if ( v14 + v13 < v12 )
        v15 = v12;
    }
    v16 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v15, 8uLL);
    *(_QWORD *)&v16[8 * v9] = *a4;
    v17 = v16;
    v18 = *a1;
    if ( a3 == v4 )
    {
      v19 = (_BYTE *)a1[1] - v18;
    }
    else
    {
      memmove(v16, v18, a3 - (_BYTE *)*a1);
      v19 = (_BYTE *)a1[1] - a3;
      v17 = &v16[8 * v9 + 8];
      v18 = a3;
    }
    memmove(v17, v18, v19);
    std::vector__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_std::allocator__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64___::_Change_array(
      (__int64)a1,
      (__int64)v16,
      v12,
      v15);
  }
  else
  {
    v21 = *a4;
    if ( a3 == v4 )
    {
      *(_QWORD *)v4 = v21;
      a1[1] = (char *)a1[1] + 8;
    }
    else
    {
      *(_QWORD *)v4 = *((_QWORD *)v4 - 1);
      a1[1] = (char *)a1[1] + 8;
      memmove(a3 + 8, a3, v4 - a3 - 8);
      *(_QWORD *)a3 = v21;
    }
  }
  result = a2;
  *a2 = (char *)*a1 + 8 * v9;
  return result;
}
