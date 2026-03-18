/*
 * XREFs of EditionPostInputMessage @ 0x1C009D0B0
 * Callers:
 *     <none>
 * Callees:
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 */

__int64 __fastcall EditionPostInputMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        _DWORD *a12,
        __int64 a13)
{
  __int64 v13; // rcx
  __int64 v14; // rdx
  _DWORD *v16; // rax

  v13 = *(_QWORD *)(a1 + 80);
  v14 = 0LL;
  if ( *(char *)(v13 + 59) >= 0 )
  {
    if ( a4 - 512 > 0xE )
    {
      if ( a4 - 581 > 0x12 )
        return PostInputMessage(
                 *(_QWORD *)(*(_QWORD *)(v13 + 16) + 408LL),
                 a3,
                 a4,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 a11,
                 v14,
                 a13);
      v16 = a12;
      a3 = v13;
      if ( !a12 )
        return PostInputMessage(
                 *(_QWORD *)(*(_QWORD *)(v13 + 16) + 408LL),
                 a3,
                 a4,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 a11,
                 v14,
                 a13);
    }
    else
    {
      a5 = (unsigned int)a5 & 0xFFFF0000;
      v16 = a12;
      if ( !a12 || *a12 != 2 )
        return PostInputMessage(
                 *(_QWORD *)(*(_QWORD *)(v13 + 16) + 408LL),
                 a3,
                 a4,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 a11,
                 v14,
                 a13);
    }
    v14 = *((_QWORD *)v16 + 1);
    return PostInputMessage(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 408LL), a3, a4, a5, a6, a7, a8, a9, a10, a11, v14, a13);
  }
  return 0LL;
}
