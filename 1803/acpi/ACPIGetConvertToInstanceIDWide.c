/*
 * XREFs of ACPIGetConvertToInstanceIDWide @ 0x1C0025E58
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C0001F70 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToInstanceID @ 0x1C0025DF8 (ACPIGetConvertToInstanceID.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0002234 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C00022AC (ACPIAnsiStringToWideHelper.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     RtlStringCchPrintfW @ 0x1C000997C (RtlStringCchPrintfW.c)
 */

__int64 __fastcall ACPIGetConvertToInstanceIDWide(__int64 a1, int a2, __int64 a3, int a4, _QWORD *a5, _DWORD *a6)
{
  __int64 v8; // rbx
  __int64 v9; // rbx
  _QWORD *v10; // rax
  _QWORD *PoolWithTag; // rdi
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
  _QWORD *v15; // rax

  if ( (a4 & 0x4000000) != 0 || (*(_QWORD *)(a1 + 8) & 0x1000000000000LL) == 0 )
  {
    if ( a2 < 0 )
      return (unsigned int)a2;
    if ( *(_WORD *)(a3 + 2) == 1 )
    {
      LODWORD(v9) = 9;
      PoolWithTag = ExAllocatePoolWithTag(
                      (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                      0x12uLL,
                      0x53706341u);
      if ( !PoolWithTag )
        return 3221225626LL;
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      *((_WORD *)PoolWithTag + 8) = 0;
      RtlStringCchPrintfW((NTSTRSAFE_PWSTR)PoolWithTag, 9uLL, L"%lx", *(unsigned int *)(a3 + 16));
      goto LABEL_20;
    }
    if ( *(_WORD *)(a3 + 2) != 2 )
      return 3222536207LL;
    v14 = -1LL;
    do
      ++v14;
    while ( *(_BYTE *)(*(_QWORD *)(a3 + 32) + v14) );
    v9 = (unsigned int)(v14 + 1);
    v15 = ExAllocatePoolWithTag((POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool), 2 * v9, 0x53706341u);
    PoolWithTag = v15;
    if ( !v15 )
      return 3221225626LL;
    memset(v15, 0, 2 * v9);
    RtlStringCchPrintfA((NTSTRSAFE_PSTR)PoolWithTag, (unsigned int)v9, "%s", *(const char **)(a3 + 32));
    v13 = 2 * v9;
  }
  else
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *(_BYTE *)(*(_QWORD *)(a1 + 568) + v8) );
    v9 = (unsigned int)(v8 + 1);
    v10 = ExAllocatePoolWithTag((POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool), 2 * v9, 0x53706341u);
    PoolWithTag = v10;
    if ( !v10 )
      return 3221225626LL;
    memset(v10, 0, 2 * v9);
    RtlStringCchPrintfA((NTSTRSAFE_PSTR)PoolWithTag, (unsigned int)v9, "%s", *(const char **)(a1 + 568));
    v13 = 2 * v9;
  }
  ACPIAnsiStringToWideHelper(PoolWithTag, v13);
LABEL_20:
  *a5 = PoolWithTag;
  if ( a6 )
    *a6 = 2 * v9;
  return 0LL;
}
