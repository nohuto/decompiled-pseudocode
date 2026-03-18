/*
 * XREFs of MmMapSecureViewOfSection @ 0x1404D4AC0
 * Callers:
 *     AlpcpCreateView @ 0x1404D47E8 (AlpcpCreateView.c)
 * Callees:
 *     MiMapParametersInitialize @ 0x140593DD0 (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x140593F20 (MiMapViewOfSection.c)
 */

__int64 __fastcall MmMapSecureViewOfSection(
        int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 result; // rax
  _BYTE v15[24]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v16; // [rsp+58h] [rbp-60h]
  int v17; // [rsp+84h] [rbp-34h]
  __int64 v18; // [rsp+88h] [rbp-30h]

  result = MiMapParametersInitialize(v15, *a7, 0, 4, 0LL);
  if ( (int)result < 0
    || (v18 = a12, v17 = 2, result = MiMapViewOfSection(a1, (unsigned int)v15, (_DWORD)a3, 0, a6, 2, 1), (int)result < 0) )
  {
    if ( *a3 )
      ++dword_1403CBEC4;
    else
      ++dword_1403CBEC0;
  }
  else
  {
    *a7 = v16;
    return (unsigned int)result;
  }
  return result;
}
