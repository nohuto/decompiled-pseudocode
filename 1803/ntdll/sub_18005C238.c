/*
 * XREFs of sub_18005C238 @ 0x18005C238
 * Callers:
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 *     sub_18005BDB4 @ 0x18005BDB4 (sub_18005BDB4.c)
 *     RtlZeroHeap @ 0x1800EEA80 (RtlZeroHeap.c)
 *     sub_1801019C4 @ 0x1801019C4 (sub_1801019C4.c)
 * Callees:
 *     sub_180013330 @ 0x180013330 (sub_180013330.c)
 */

__int64 *__fastcall sub_18005C238(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  int v6; // ecx
  __int64 *result; // rax

  v2 = *(_QWORD *)(a1 + 312);
  if ( a2 < *(unsigned int *)(v2 + 8) )
  {
LABEL_4:
    v6 = a2;
  }
  else
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)v2;
      if ( !*(_QWORD *)v2 )
        break;
      v2 = *(_QWORD *)v2;
      if ( a2 < *(unsigned int *)(v5 + 8) )
        goto LABEL_4;
    }
    v6 = *(_DWORD *)(v2 + 8) - 1;
  }
  while ( 1 )
  {
    result = sub_180013330(a1, v2, 1, v6, a2);
    if ( result )
      break;
    v2 = *(_QWORD *)v2;
    v6 = *(_DWORD *)(v2 + 24);
  }
  return result;
}
