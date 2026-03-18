/*
 * XREFs of ACPIGetConvertToDeviceIDWide @ 0x1C00259C0
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C0001F70 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToDeviceID @ 0x1C0025960 (ACPIGetConvertToDeviceID.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0002234 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C00022AC (ACPIAnsiStringToWideHelper.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIAmliDoubleToNameWide @ 0x1C00096D4 (ACPIAmliDoubleToNameWide.c)
 *     ACPIGetProcessorIDWide @ 0x1C0026634 (ACPIGetProcessorIDWide.c)
 */

__int64 __fastcall ACPIGetConvertToDeviceIDWide(__int64 a1, int a2, __int64 a3, int a4, _QWORD *a5, int *a6)
{
  __int64 v8; // rax
  __int64 v10; // rdi
  unsigned int v11; // edi
  int v12; // ebp
  SIZE_T v13; // r14
  _WORD *v14; // rax
  _WORD *PoolWithTag; // rbx
  int v16; // eax
  _BYTE *v17; // rsi
  __int64 v18; // rdi
  unsigned int v19; // edi
  _WORD *v20; // rax

  if ( (a4 & 0x4000000) != 0 )
    goto LABEL_11;
  v8 = *(_QWORD *)(a1 + 8);
  if ( (v8 & 0x1000000000LL) != 0 )
    return ACPIGetProcessorIDWide(0, a2, a3, a4, (__int64)a5, (__int64)a6);
  if ( (v8 & 0x800000000000LL) == 0 )
  {
LABEL_11:
    if ( a2 < 0 )
      return (unsigned int)a2;
    if ( *(_WORD *)(a3 + 2) == 1 )
    {
      v12 = 26;
      PoolWithTag = ExAllocatePoolWithTag(
                      (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                      0x1AuLL,
                      0x53706341u);
      if ( !PoolWithTag )
        return 3221225626LL;
      *(_QWORD *)PoolWithTag = 0LL;
      *((_QWORD *)PoolWithTag + 1) = 0LL;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      PoolWithTag[12] = 0;
      RtlStringCchPrintfA((NTSTRSAFE_PSTR)PoolWithTag, 0xDuLL, "ACPI\\");
      ACPIAnsiStringToWideHelper(PoolWithTag, 0xAuLL);
      ACPIAmliDoubleToNameWide(PoolWithTag + 5, *(_DWORD *)(a3 + 16), 0);
      goto LABEL_27;
    }
    if ( *(_WORD *)(a3 + 2) != 2 )
      return 3222536207LL;
    v16 = *(_DWORD *)(a3 + 24);
    v17 = *(_BYTE **)(a3 + 32);
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
    v19 = v18 + 6;
    v12 = 2 * v19;
    v13 = 2 * v19;
    v20 = ExAllocatePoolWithTag((POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool), v13, 0x53706341u);
    PoolWithTag = v20;
    if ( !v20 )
      return 3221225626LL;
    memset(v20, 0, (unsigned int)v13);
    RtlStringCchPrintfA((NTSTRSAFE_PSTR)PoolWithTag, v19, "ACPI\\%s", v17);
  }
  else
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(*(_QWORD *)(a1 + 560) + v10) );
    v11 = v10 + 1;
    v12 = 2 * v11;
    v13 = 2 * v11;
    v14 = ExAllocatePoolWithTag((POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool), v13, 0x53706341u);
    PoolWithTag = v14;
    if ( !v14 )
      return 3221225626LL;
    memset(v14, 0, 2 * v11);
    RtlStringCchPrintfA((NTSTRSAFE_PSTR)PoolWithTag, v11, "%s", *(_QWORD *)(a1 + 560));
  }
  ACPIAnsiStringToWideHelper(PoolWithTag, v13);
LABEL_27:
  *a5 = PoolWithTag;
  if ( a6 )
    *a6 = v12;
  return 0LL;
}
