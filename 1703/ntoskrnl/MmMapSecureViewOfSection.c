/*
 * XREFs of MmMapSecureViewOfSection @ 0x14047BC78
 * Callers:
 *     MiMapCfgBitMapSection @ 0x14044C9B0 (MiMapCfgBitMapSection.c)
 *     AlpcpCreateView @ 0x14047BD30 (AlpcpCreateView.c)
 * Callees:
 *     MiMapViewOfSection @ 0x1405198A0 (MiMapViewOfSection.c)
 */

__int64 __fastcall MmMapSecureViewOfSection(
        int a1,
        int a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12)
{
  __int64 result; // rax

  result = MiMapViewOfSection(a1, a2, (_DWORD)a3, a4, 0LL, a6, a7, a8, a9, a10, a11, a12);
  if ( (int)result < 0 )
  {
    if ( *a3 )
      ++dword_14036CA30;
    else
      ++dword_14036CA2C;
  }
  return result;
}
