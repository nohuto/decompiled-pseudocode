/*
 * XREFs of sub_1800A3B8C @ 0x1800A3B8C
 * Callers:
 *     sub_1800A32A4 @ 0x1800A32A4 (sub_1800A32A4.c)
 *     sub_1800A3BE4 @ 0x1800A3BE4 (sub_1800A3BE4.c)
 *     sub_1800A3C30 @ 0x1800A3C30 (sub_1800A3C30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800A3B8C(__int16 a1, __int64 a2, _DWORD *a3)
{
  int v3; // r9d
  __int16 v4; // r10
  __int64 result; // rax

  v3 = *(_DWORD *)(a2 + 24);
  v4 = a1;
  if ( ((v3 & 0x40) == 0 || *(_QWORD *)(a2 + 16))
    && ((result = *(int *)(a2 + 8) - 2LL, *(_DWORD *)(a2 + 8) = result, (int)result < 0)
      ? (v4 = -1, *(_DWORD *)(a2 + 24) = v3 | 0x20)
      : (result = *(_QWORD *)a2, **(_WORD **)a2 = a1, *(_QWORD *)a2 += 2LL),
        v4 == -1 && (result = *(unsigned int *)(a2 + 24), (result & 0x20) != 0)) )
  {
    *a3 = -1;
  }
  else
  {
    ++*a3;
  }
  return result;
}
