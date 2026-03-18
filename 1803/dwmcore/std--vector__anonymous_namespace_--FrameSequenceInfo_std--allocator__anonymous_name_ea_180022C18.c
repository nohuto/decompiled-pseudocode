/*
 * XREFs of std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::emplace_back__anonymous_namespace_::FrameSequenceInfo_const_&___ptr64_ @ 0x180022C18
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequenceLocked @ 0x180022D44 (_anonymous_namespace_--SealCurrentFrameSequenceLocked.c)
 * Callees:
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array @ 0x180022B60 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_namespace_--Frame.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x1800234E0 (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

char *__fastcall std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::emplace_back__anonymous_namespace_::FrameSequenceInfo_const_____ptr64_(
        char **a1,
        __int64 a2)
{
  char *v2; // r8
  char *v4; // rcx
  char *result; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  char *v12; // r12
  char *v13; // r13
  char *v14; // r15
  char *i; // rbp
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = a1[2];
  v4 = a1[1];
  if ( v2 == v4 )
  {
    v7 = (v4 - *a1) / 480;
    if ( v7 == 0x88888888888888LL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v8 = v7 + 1;
    v9 = (v2 - *a1) / 480;
    v10 = v9 >> 1;
    if ( v9 > 0x88888888888888LL - (v9 >> 1) )
    {
      v11 = v7 + 1;
    }
    else
    {
      v11 = v10 + v9;
      if ( v10 + v9 < v8 )
        v11 = v7 + 1;
    }
    v12 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v11, 480LL);
    anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo(&v12[480 * v7], a2);
    v13 = a1[1];
    v14 = v12;
    for ( i = *a1; i != v13; i += 480 )
    {
      anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo(v14, i);
      v14 += 480;
    }
    return std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array(
             a1,
             v12,
             v8,
             v11);
  }
  else
  {
    result = (char *)anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo(v4, a2);
    a1[1] += 480;
  }
  return result;
}
