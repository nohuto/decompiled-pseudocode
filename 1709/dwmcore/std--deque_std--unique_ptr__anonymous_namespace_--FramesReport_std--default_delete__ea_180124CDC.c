/*
 * XREFs of std::deque_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport_______::_Growmap @ 0x180124CDC
 * Callers:
 *     std::deque_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport_______::push_back @ 0x180007B28 (std--deque_std--unique_ptr__anonymous_namespace_--FramesReport_std--default_delete__anonymous_na.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     std::_Uninitialized_copy_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport________ptr64_____ptr64_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport________ptr64_____ptr64_std::_Wrap_alloc_std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport________ptr64_____ @ 0x180124758 (std--_Uninitialized_copy_std--unique_ptr__anonymous_namespace_--FramesReport_std--default_delete.c)
 */

void __fastcall std::deque_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport_______::_Growmap(
        _QWORD *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  char *v6; // r14
  void *v7; // rax
  void *v8; // rcx
  void *v9; // rax
  void *v10; // rcx
  size_t v11; // r8
  __int64 v12; // rax
  void *v13; // rcx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1[2];
  v3 = 1LL;
  if ( v1 )
    v3 = v1;
  while ( 1 )
  {
    v4 = v3 - v1;
    if ( v3 != v1 && v3 >= 8 )
      break;
    if ( 0xFFFFFFFFFFFFFFFLL - v3 < v3 )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v3 *= 2LL;
  }
  v5 = a1[3] >> 1;
  if ( v3 > 0x1FFFFFFFFFFFFFFFLL || (v6 = (char *)operator new(8 * v3)) == 0LL )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v7 = (void *)std::_Uninitialized_copy_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport________ptr64_____ptr64_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport________ptr64_____ptr64_std::_Wrap_alloc_std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport________ptr64_____(
                 (void *)(a1[1] + 8 * v5),
                 a1[1] + 8LL * a1[2],
                 &v6[8 * v5]);
  v8 = (void *)a1[1];
  if ( v5 > v4 )
  {
    std::_Uninitialized_copy_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport________ptr64_____ptr64_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport________ptr64_____ptr64_std::_Wrap_alloc_std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport________ptr64_____(
      v8,
      (__int64)v8 + 8 * v4,
      v7);
    v12 = std::_Uninitialized_copy_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport________ptr64_____ptr64_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport________ptr64_____ptr64_std::_Wrap_alloc_std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport________ptr64_____(
            (void *)(a1[1] + 8 * v4),
            a1[1] + 8 * v5,
            v6);
    if ( !v4 )
      goto LABEL_19;
    v10 = (void *)v12;
    v11 = 8 * v4;
    goto LABEL_18;
  }
  v9 = (void *)std::_Uninitialized_copy_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport________ptr64_____ptr64_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport________ptr64_____ptr64_std::_Wrap_alloc_std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport________ptr64_____(
                 v8,
                 (__int64)v8 + 8 * v5,
                 v7);
  if ( v4 != v5 )
    memset_0(v9, 0, 8 * (v4 - v5));
  if ( v5 )
  {
    v10 = v6;
    v11 = 8 * v5;
LABEL_18:
    memset_0(v10, 0, v11);
  }
LABEL_19:
  v13 = (void *)a1[1];
  if ( v13 )
    WPF::ProcessHeapImpl::Free(v13);
  a1[2] += v4;
  a1[1] = v6;
}
