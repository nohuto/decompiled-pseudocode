/*
 * XREFs of EtwpCreateNtFileName @ 0x14057859C
 * Callers:
 *     EtwpDelayCreate @ 0x14057836C (EtwpDelayCreate.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140019294 (RtlStringCbPrintfW.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall EtwpCreateNtFileName(_WORD *a1, wchar_t **a2, _DWORD *a3)
{
  __int64 v5; // rcx
  int v6; // ecx
  unsigned int v7; // ecx
  SIZE_T v8; // rbp
  wchar_t *PoolWithTag; // rdi
  NTSTATUS result; // eax

  v5 = -1LL;
  do
    ++v5;
  while ( a1[v5] );
  v6 = 2 * v5;
  if ( !v6 )
    return -1073741773;
  v7 = v6 + 2;
  if ( v7 > 0xA )
  {
    if ( *a1 != 92 )
      goto LABEL_6;
    if ( a1[1] == 92 && a1[2] == 63 && a1[3] == 92 )
    {
      v7 -= 8;
      a1 += 4;
    }
  }
  if ( *a1 == 92 && a1[1] == 92 )
  {
    *a3 = 14;
    goto LABEL_7;
  }
LABEL_6:
  *a3 = 24;
LABEL_7:
  v8 = v7 + *a3;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v8, 0x50777445u);
  if ( PoolWithTag )
  {
    if ( *a1 == 92 && a1[1] == 92 )
      result = RtlStringCbPrintfW(PoolWithTag, v8, L"%ws%ws", L"\\??\\UNC", a1 + 1);
    else
      result = RtlStringCbPrintfW(PoolWithTag, v8, L"%ws%ws", L"\\DosDevices\\", a1);
    if ( !result )
    {
      *a2 = PoolWithTag;
      return result;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    result = -1073741811;
  }
  else
  {
    result = -1073741801;
  }
  *a2 = 0LL;
  return result;
}
