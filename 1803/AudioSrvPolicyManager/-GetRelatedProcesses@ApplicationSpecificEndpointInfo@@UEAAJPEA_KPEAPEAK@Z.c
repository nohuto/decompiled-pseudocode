/*
 * XREFs of ?GetRelatedProcesses@ApplicationSpecificEndpointInfo@@UEAAJPEA_KPEAPEAK@Z @ 0x1800301F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xrange@?$vector@KV?$allocator@K@std@@@std@@CAXXZ @ 0x180031EDC (-_Xrange@-$vector@KV-$allocator@K@std@@@std@@CAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationSpecificEndpointInfo::GetRelatedProcesses(
        ApplicationSpecificEndpointInfo *this,
        unsigned __int64 *a2,
        unsigned int **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  const char *v7; // r9
  unsigned __int64 v8; // rdi
  unsigned int *v9; // rdx
  __int64 result; // rax
  unsigned __int64 i; // rcx
  __int64 v12; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    v8 = (__int64)(*((_QWORD *)this + 8) - *((_QWORD *)this + 7)) >> 2;
    v9 = 0LL;
    *a2 = v8;
    if ( v8 )
    {
      v9 = (unsigned int *)CoTaskMemAlloc(4 * v8);
      if ( !v9 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13E,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)0x8007000ELL);
        if ( v6 )
          LeaveCriticalSection(v6);
        return 2147942414LL;
      }
      for ( i = 0LL; i < v8; ++i )
      {
        v12 = *((_QWORD *)this + 7);
        if ( (*((_QWORD *)this + 8) - v12) >> 2 <= i )
          std::vector<unsigned long>::_Xrange(i, v9);
        v9[i] = *(_DWORD *)(v12 + 4 * i);
      }
    }
    *a3 = v9;
    if ( v6 )
      LeaveCriticalSection(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x14A,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspe"
                                    "cificendpointinfo.cpp",
                           v7);
  }
  return result;
}
