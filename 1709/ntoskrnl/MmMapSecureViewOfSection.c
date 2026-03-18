/*
 * XREFs of MmMapSecureViewOfSection @ 0x14046252C
 * Callers:
 *     MiMapCfgBitMapSection @ 0x14045DB10 (MiMapCfgBitMapSection.c)
 *     AlpcpCreateView @ 0x1404618E0 (AlpcpCreateView.c)
 * Callees:
 *     MiMapViewOfSection @ 0x1404CFC50 (MiMapViewOfSection.c)
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
      ++dword_140388C28;
    else
      ++dword_140388C24;
  }
  return result;
}
