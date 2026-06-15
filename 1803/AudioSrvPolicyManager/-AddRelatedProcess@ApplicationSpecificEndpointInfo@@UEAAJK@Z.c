/*
 * XREFs of ?AddRelatedProcess@ApplicationSpecificEndpointInfo@@UEAAJK@Z @ 0x1800302E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAXAEBK@Z @ 0x180031AA8 (--$emplace_back@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAXAEBK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationSpecificEndpointInfo::AddRelatedProcess(ApplicationSpecificEndpointInfo *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  try
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    if ( a2 )
      std::vector<unsigned long>::emplace_back<unsigned long const &>((char *)this + 56, &v8);
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x160,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspe"
                                    "cificendpointinfo.cpp",
                           v5);
  }
  return result;
}
