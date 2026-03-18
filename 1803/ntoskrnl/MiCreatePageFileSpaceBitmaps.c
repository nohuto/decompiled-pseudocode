/*
 * XREFs of MiCreatePageFileSpaceBitmaps @ 0x14063CCAC
 * Callers:
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x14063C9BC (MiCreatePagefile.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiCreatePageFileSpaceBitmaps(unsigned int a1)
{
  unsigned int v2; // ebx
  _QWORD *result; // rax

  v2 = (a1 >> 6) + ((a1 & 0x3F) != 0);
  result = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * ((a1 >> 6) + ((a1 & 0x3F) != 0)) + 40, 0x62506D4Du);
  if ( result )
  {
    *(_DWORD *)result = 1;
    result[2] = result + 5;
    *((_DWORD *)result + 2) = a1;
    *((_DWORD *)result + 6) = a1;
    result[4] = &result[v2 + 5];
  }
  return result;
}
