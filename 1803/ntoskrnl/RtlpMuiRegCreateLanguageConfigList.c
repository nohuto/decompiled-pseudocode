/*
 * XREFs of RtlpMuiRegCreateLanguageConfigList @ 0x1406356F4
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x1406352C4 (RtlpLoadLanguageConfigList.c)
 *     RtlpPopulateLanguageConfigList @ 0x140635568 (RtlpPopulateLanguageConfigList.c)
 * Callees:
 *     _SafeAllocBlob @ 0x140179960 (_SafeAllocBlob.c)
 */

_QWORD *__fastcall RtlpMuiRegCreateLanguageConfigList(int a1)
{
  unsigned int v1; // ebx
  _QWORD *result; // rax
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = 4;
  if ( a1 >= 1 )
    v1 = a1;
  result = SafeAllocBlob(0x10u, v1, 0xCu, 0, 0, &v3);
  if ( result )
  {
    *(_DWORD *)result = v3;
    result[1] = result + 2;
    *((_WORD *)result + 2) = 0;
    *((_WORD *)result + 3) = v1;
  }
  return result;
}
