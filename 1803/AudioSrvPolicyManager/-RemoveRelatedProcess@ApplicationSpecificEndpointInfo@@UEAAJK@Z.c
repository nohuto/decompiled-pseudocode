/*
 * XREFs of ?RemoveRelatedProcess@ApplicationSpecificEndpointInfo@@UEAAJK@Z @ 0x180030350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::RemoveRelatedProcess(ApplicationSpecificEndpointInfo *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  unsigned __int64 v4; // rcx
  _DWORD *v5; // rbx
  _DWORD *v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  _DWORD *v9; // rdx
  const char *v10; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    v5 = (_DWORD *)*((_QWORD *)this + 7);
    v4 = *((_QWORD *)this + 8);
    while ( v5 != (_DWORD *)v4 && a2 != *v5 )
      ++v5;
    if ( v5 != (_DWORD *)v4 )
    {
      v6 = v5 + 1;
      v7 = 0LL;
      v8 = (v4 - (unsigned __int64)(v5 + 1) + 3) >> 2;
      if ( (unsigned __int64)(v5 + 1) > v4 )
        v8 = 0LL;
      if ( v8 )
      {
        do
        {
          if ( a2 != *v6 )
            *v5++ = *v6;
          ++v6;
          ++v7;
        }
        while ( v7 != v8 );
      }
    }
    v9 = (_DWORD *)*((_QWORD *)this + 8);
    if ( v5 != v9 )
    {
      memmove(v5, v9, 0LL);
      *((_QWORD *)this + 8) = v5;
    }
    if ( v3 )
      LeaveCriticalSection(v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x178,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspe"
                                    "cificendpointinfo.cpp",
                           v10);
  }
  return result;
}
