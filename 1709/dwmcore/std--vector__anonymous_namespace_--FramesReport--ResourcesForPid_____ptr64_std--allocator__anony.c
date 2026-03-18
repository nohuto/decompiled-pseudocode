/*
 * XREFs of std::vector__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_std::allocator__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64___::_Insert_n @ 0x1800BB318
 * Callers:
 *     _anonymous_namespace_::FramesReport::UpdateResourceCountersForPid @ 0x180008310 (_anonymous_namespace_--FramesReport--UpdateResourceCountersForPid.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall std::vector__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_std::allocator__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64___::_Insert_n(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v10; // rbp
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  _QWORD *v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rdi
  _QWORD *result; // rax
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r14
  void *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = (__int64)(a3 - *(_QWORD *)a1) >> 3;
  if ( !((*(_QWORD *)(a1 + 16) - v5) >> 3) )
  {
    v10 = (v5 - *(_QWORD *)a1) >> 3;
    if ( 0x1FFFFFFFFFFFFFFFLL == v10 )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v11 = v10 + 1;
    v12 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
    v13 = 0LL;
    v14 = 0LL;
    if ( 0x1FFFFFFFFFFFFFFFLL - (v12 >> 1) >= v12 )
      v13 = v12 + (v12 >> 1);
    if ( v13 >= v11 )
      v11 = v13;
    if ( v11 )
    {
      if ( v11 > 0x1FFFFFFFFFFFFFFFLL || (v14 = operator new(8 * v11)) == 0LL )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    v15 = (__int64)(a3 - *(_QWORD *)a1) >> 3;
    v14[v15] = *a5;
    memmove(v14, *(const void **)a1, (a3 - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    memmove(&v14[v15 + 1], (const void *)a3, (*(_QWORD *)(a1 + 8) - a3) & 0xFFFFFFFFFFFFFFF8uLL);
    v16 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
    if ( *(_QWORD *)a1 )
      WPF::ProcessHeapImpl::Free(*(void **)a1);
    *(_QWORD *)a1 = v14;
    *(_QWORD *)(a1 + 16) = &v14[v11];
    *(_QWORD *)(a1 + 8) = &v14[v16 + 1];
    goto LABEL_13;
  }
  if ( (__int64)(v5 - a3) >> 3 )
  {
    v18 = *a5;
    *(_QWORD *)(a1 + 8) = (char *)memmove(*(void **)(a1 + 8), (const void *)(v5 - 8), 8uLL) + 8;
    memmove((void *)(v5 - 8 * ((__int64)(v5 - 8 - a3) >> 3)), (const void *)a3, 8 * ((__int64)(v5 - 8 - a3) >> 3));
    if ( a3 >= a3 + 8 )
      goto LABEL_13;
    v19 = v18;
    v20 = a3 < a3 + 8;
LABEL_17:
    memset64((void *)a3, v19, v20);
    goto LABEL_13;
  }
  v21 = *a5;
  memmove((void *)(a3 + 8), (const void *)a3, 0LL);
  v22 = 1 - ((__int64)(*(_QWORD *)(a1 + 8) - a3) >> 3);
  if ( v22 )
    memset64(*(void **)(a1 + 8), v21, v22);
  *(_QWORD *)(a1 + 8) += 8LL;
  v20 = (*(_QWORD *)(a1 + 8) - 8LL - a3 + 7) >> 3;
  if ( a3 > *(_QWORD *)(a1 + 8) - 8LL )
    v20 = 0LL;
  if ( v20 )
  {
    v19 = v21;
    goto LABEL_17;
  }
LABEL_13:
  result = a2;
  *a2 = *(_QWORD *)a1 + 8 * v6;
  return result;
}
