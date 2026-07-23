/*
 * XREFs of WdipSemFreePool @ 0x14073F430
 * Callers:
 *     WdipSemShutdown @ 0x14073ED7C (WdipSemShutdown.c)
 * Callees:
 *     InitializeSListHead @ 0x1400B46E0 (InitializeSListHead.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void WdipSemFreePool()
{
  PVOID *v0; // rax
  PVOID *v1; // rcx
  _SLIST_HEADER *v2; // rbx
  __int64 v3; // rdi

  v0 = (PVOID *)WdipSemPool;
  v1 = *(PVOID **)WdipSemPool;
  if ( *((PVOID **)WdipSemPool + 1) != &WdipSemPool || v1[1] != WdipSemPool )
    __fastfail(3u);
  while ( 1 )
  {
    WdipSemPool = v1;
    v1[1] = &WdipSemPool;
    if ( v0 == &WdipSemPool )
      break;
    ExFreePoolWithTag(v0, 0);
    v0 = (PVOID *)WdipSemPool;
    if ( *((PVOID **)WdipSemPool + 1) == &WdipSemPool )
    {
      v1 = *(PVOID **)WdipSemPool;
      if ( *(PVOID *)(*(_QWORD *)WdipSemPool + 8LL) == WdipSemPool )
        continue;
    }
    __fastfail(3u);
  }
  dword_14038CB90 = 0;
  v2 = &stru_14038CBB0;
  qword_14038CB98 = 0LL;
  v3 = 6LL;
  do
  {
    InitializeSListHead(v2++);
    --v3;
  }
  while ( v3 );
}
