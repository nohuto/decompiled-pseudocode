/*
 * XREFs of ACPIGetConvertToPnpIDWide @ 0x1C00260AC
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C0001F70 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0025548 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToPnpID @ 0x1C002604C (ACPIGetConvertToPnpID.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0002234 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C00022AC (ACPIAnsiStringToWideHelper.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIAmliDoubleToNameWide @ 0x1C00096D4 (ACPIAmliDoubleToNameWide.c)
 */

__int64 __fastcall ACPIGetConvertToPnpIDWide(__int64 a1, int a2, __int64 a3, int a4, _QWORD *a5, int *a6)
{
  __int64 v8; // rbx
  unsigned int v9; // ebx
  int v10; // ebp
  SIZE_T v11; // r14
  _WORD *v12; // rax
  _WORD *PoolWithTag; // rdi
  const char *v15; // r9
  int v16; // eax
  const char *v17; // rsi
  __int64 v18; // rbx
  _WORD *v19; // rax

  if ( (a4 & 0x4000000) != 0 || (*(_QWORD *)(a1 + 8) & 0x800000000000LL) == 0 )
  {
    if ( a2 < 0 )
      return (unsigned int)a2;
    if ( *(_WORD *)(a3 + 2) == 1 )
    {
      v10 = 18;
      PoolWithTag = ExAllocatePoolWithTag(
                      (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                      0x12uLL,
                      0x53706341u);
      if ( !PoolWithTag )
        return 3221225626LL;
      *(_QWORD *)PoolWithTag = 0LL;
      *((_QWORD *)PoolWithTag + 1) = 0LL;
      PoolWithTag[8] = 0;
      ACPIAmliDoubleToNameWide(PoolWithTag, *(_DWORD *)(a3 + 16), 1);
      goto LABEL_25;
    }
    if ( *(_WORD *)(a3 + 2) != 2 )
      return 3222536207LL;
    v16 = *(_DWORD *)(a3 + 24);
    v17 = *(const char **)(a3 + 32);
    if ( !v16 )
      return 3221225485LL;
    if ( *v17 == 42 )
    {
      ++v17;
      --v16;
    }
    if ( !v16 )
      return 3221225485LL;
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v9 = v18 + 2;
    v10 = 2 * v9;
    v11 = 2 * v9;
    v19 = ExAllocatePoolWithTag((POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool), v11, 0x53706341u);
    PoolWithTag = v19;
    if ( !v19 )
      return 3221225626LL;
    memset(v19, 0, (unsigned int)v11);
    v15 = v17;
  }
  else
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *(_BYTE *)(*(_QWORD *)(a1 + 560) + v8) );
    v9 = v8 - 3;
    v10 = 2 * v9;
    v11 = 2 * v9;
    v12 = ExAllocatePoolWithTag((POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool), v11, 0x53706341u);
    PoolWithTag = v12;
    if ( !v12 )
      return 3221225626LL;
    memset(v12, 0, 2 * v9);
    v15 = (const char *)(*(_QWORD *)(a1 + 560) + 5LL);
  }
  RtlStringCchPrintfA((NTSTRSAFE_PSTR)PoolWithTag, v9, "*%s", v15);
  ACPIAnsiStringToWideHelper(PoolWithTag, v11);
LABEL_25:
  *a5 = PoolWithTag;
  if ( a6 )
    *a6 = v10;
  return 0LL;
}
