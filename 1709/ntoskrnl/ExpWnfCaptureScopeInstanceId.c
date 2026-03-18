/*
 * XREFs of ExpWnfCaptureScopeInstanceId @ 0x140502F44
 * Callers:
 *     NtUpdateWnfStateData @ 0x1404FEFC8 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x1404FFEEC (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x140582464 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x1405EBE04 (NtDeleteWnfStateData.c)
 * Callees:
 *     MmGetSessionById @ 0x140089C70 (MmGetSessionById.c)
 *     SeCaptureSid @ 0x140487010 (SeCaptureSid.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall ExpWnfCaptureScopeInstanceId(int a1, char *a2, __int64 a3, __int64 a4, PSID *a5)
{
  _QWORD *v5; // rdi
  int v7; // ecx
  int *v8; // rbx
  int v9; // eax
  __int64 SessionById; // rax
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rax
  int v14; // [rsp+20h] [rbp-28h]

  v5 = (_QWORD *)a4;
  LOBYTE(a4) = a3;
  if ( !a2 )
  {
    *v5 = 0LL;
    return 0LL;
  }
  if ( !a1 )
    return (unsigned int)-1073741811;
  v7 = a1 - 1;
  if ( v7 )
  {
    v12 = v7 - 1;
    if ( !v12 )
    {
      v11 = SeCaptureSid(a2, a3, a3, a4, v14, 0, a5);
      if ( v11 >= 0 )
        *v5 = *a5;
      return (unsigned int)v11;
    }
    if ( v12 == 1 )
    {
      v11 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)a2, 0, (__int64)PsProcessType, a3, 543583831, a5, 0LL, 0LL);
      if ( v11 >= 0 )
        *v5 = a5;
      return (unsigned int)v11;
    }
    return (unsigned int)-1073741811;
  }
  v8 = (int *)(a5 + 1);
  if ( (_BYTE)a3 )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v13 = (__int64)a2;
    v9 = *(_DWORD *)v13;
  }
  else
  {
    v9 = *(_DWORD *)a2;
  }
  *v8 = v9;
  SessionById = MmGetSessionById(v9);
  *a5 = (PSID)SessionById;
  if ( !SessionById )
    return (unsigned int)-1073741811;
  *v5 = v8;
  return 0;
}
