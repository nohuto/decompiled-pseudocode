/*
 * XREFs of RmpResourceLimitsAreLegal @ 0x18000E6F4
 * Callers:
 *     RmSetHostLimit @ 0x18000BC60 (RmSetHostLimit.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RmpResourceLimitsAreLegal(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  return *(_QWORD *)a1 < 0x400uLL
      && (!a2 || (*(_QWORD *)a1 & *a2) == *(_QWORD *)a1)
      && (!a3 || (*(_QWORD *)a1 & *a3) == *a3)
      && ((*(_BYTE *)a1 & 1) != 0 || *(_QWORD *)(a1 + 8) == -1LL)
      && ((*(_BYTE *)a1 & 2) != 0 || *(_QWORD *)(a1 + 16) == -1LL)
      && ((*(_BYTE *)a1 & 4) != 0 || *(_QWORD *)(a1 + 24) == -1LL)
      && ((*(_BYTE *)a1 & 8) != 0 || *(_QWORD *)(a1 + 32) == -1LL)
      && ((*(_BYTE *)a1 & 0x10) != 0 || *(_DWORD *)(a1 + 40) == 100)
      && ((*(_BYTE *)a1 & 0x20) != 0 || (*(_DWORD *)(a1 + 56) & 3) == 1)
      && ((*(_BYTE *)a1 & 0x40) != 0 || (*(_BYTE *)(a1 + 56) & 4) == 0)
      && (*(char *)a1 < 0 || (*(_BYTE *)(a1 + 56) & 8) == 0)
      && ((*(_QWORD *)a1 & 0x100LL) != 0 || (*(_BYTE *)(a1 + 56) & 0x10) == 0);
}
