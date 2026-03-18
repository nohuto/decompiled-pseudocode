/*
 * XREFs of std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Reserve @ 0x1800089A8
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequenceLocked @ 0x180008454 (_anonymous_namespace_--SealCurrentFrameSequenceLocked.c)
 * Callees:
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Reallocate @ 0x180008874 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_namespace_--Frame.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

char *__fastcall std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Reserve(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  char *result; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  result = (char *)((unsigned __int64)((unsigned __int128)((v2 - v3) * (__int128)0x23EE08FB823EE09LL) >> 64) >> 63);
  if ( !((v2 - v3) / 456) )
  {
    v5 = (v3 - *(_QWORD *)a1) / 456;
    if ( v5 == 0x8FB823EE08FB82LL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v6 = v5 + 1;
    v7 = (unsigned __int128)((v2 - *(_QWORD *)a1) * (__int128)0x23EE08FB823EE09LL) >> 64;
    v8 = 0LL;
    v9 = ((unsigned __int64)v7 >> 63) + (v7 >> 2);
    if ( 0x8FB823EE08FB82LL - (v9 >> 1) >= v9 )
      v8 = v9 + (v9 >> 1);
    if ( v8 >= v6 )
      v6 = v8;
    return std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Reallocate(
             (char **)a1,
             v6);
  }
  return result;
}
