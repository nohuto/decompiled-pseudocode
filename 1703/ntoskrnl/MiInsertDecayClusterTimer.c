/*
 * XREFs of MiInsertDecayClusterTimer @ 0x14001C620
 * Callers:
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInsertDecayClusterTimer(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r11
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rdx

  v1 = (a1 + 0x58000000000LL) / 48 - qword_14036CBE0;
  v2 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  v3 = *(unsigned int *)(v2 + 4544);
  v4 = v3;
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0x3F | ((unsigned __int8)*(_DWORD *)(v2 + 4544) << 6);
  result = *(_QWORD *)(v2 + 8 * v3 + 4512);
  v6 = (unsigned int)result >> 1;
  *(_QWORD *)(a1 + 8) = 2 * (v6 | 0xFFFFFFFF00000000uLL);
  if ( v6 == 0x7FFFFFFF )
    result = (v1 << 33) | result & 0x1FFFFFFFFLL;
  else
    *(_QWORD *)(48 * (qword_14036CBE0 + v6) - 0x58000000000LL + 8) = *(_QWORD *)(48 * (qword_14036CBE0 + v6)
                                                                               - 0x58000000000LL
                                                                               + 8) & 0x1FFFFFFFFLL | (v1 << 33);
  *(_QWORD *)(v2 + 8 * v4 + 4512) = result ^ (result ^ (2 * v1)) & 0xFFFFFFFELL;
  return result;
}
