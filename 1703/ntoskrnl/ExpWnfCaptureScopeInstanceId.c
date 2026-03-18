/*
 * XREFs of ExpWnfCaptureScopeInstanceId @ 0x1404EFED4
 * Callers:
 *     NtQueryWnfStateNameInformation @ 0x1404476C4 (NtQueryWnfStateNameInformation.c)
 *     NtUpdateWnfStateData @ 0x1404EE944 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x1404EF144 (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateData @ 0x1405D16C8 (NtDeleteWnfStateData.c)
 * Callees:
 *     MmGetSessionById @ 0x140094460 (MmGetSessionById.c)
 *     SeCaptureSid @ 0x1404F32A8 (SeCaptureSid.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall ExpWnfCaptureScopeInstanceId(int a1, _DWORD *a2, char a3, _QWORD *a4, __int64 *a5)
{
  __int64 v6; // r10
  int v8; // ecx
  int *v9; // rdi
  int v10; // eax
  __int64 SessionById; // rax
  int v12; // ecx
  int v13; // ecx
  int v14; // [rsp+20h] [rbp-28h]

  v6 = (__int64)a2;
  if ( !a2 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( !a1 )
    return (unsigned int)-1073741811;
  v8 = a1 - 1;
  if ( v8 )
  {
    v13 = v8 - 1;
    if ( !v13 )
    {
      v12 = SeCaptureSid(a2, v14, 0, (__int64)a5);
      if ( v12 >= 0 )
        *a4 = *a5;
      return (unsigned int)v12;
    }
    if ( v13 == 1 )
    {
      v12 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)a2, 543583831, (__int64)a5, 0LL, 0LL);
      if ( v12 >= 0 )
        *a4 = a5;
      return (unsigned int)v12;
    }
    return (unsigned int)-1073741811;
  }
  v9 = (int *)(a5 + 1);
  if ( a3 )
  {
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)v6;
  }
  else
  {
    v10 = *a2;
  }
  *v9 = v10;
  SessionById = MmGetSessionById(v10);
  *a5 = SessionById;
  if ( !SessionById )
    return (unsigned int)-1073741811;
  *a4 = v9;
  return 0;
}
