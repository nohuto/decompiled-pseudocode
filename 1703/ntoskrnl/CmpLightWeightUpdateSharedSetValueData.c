/*
 * XREFs of CmpLightWeightUpdateSharedSetValueData @ 0x140675918
 * Callers:
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140674D18 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14067546C (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     CmListGetNextElement @ 0x1404D4148 (CmListGetNextElement.c)
 */

char *__fastcall CmpLightWeightUpdateSharedSetValueData(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r11
  char *result; // rax
  _DWORD *v4; // r10
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = (_QWORD *)(a2 + 200);
  while ( 1 )
  {
    result = CmListGetNextElement(v2, &v5, 32);
    if ( !result )
      break;
    if ( (unsigned int)(*((_DWORD *)result + 17) - 4) <= 2 )
    {
      *((_QWORD *)result + 13) = v4;
      ++*v4;
    }
  }
  return result;
}
