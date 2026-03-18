/*
 * XREFs of EditionPostInputMessage @ 0x1C00F5680
 * Callers:
 *     <none>
 * Callees:
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 */

__int64 __fastcall EditionPostInputMessage(
        __int64 a1,
        __int64 a2,
        InputTransform *a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int a10,
        struct tagINPUT_MESSAGE_SOURCE *a11,
        _DWORD *a12,
        __int64 a13)
{
  __int64 v13; // rdx
  _DWORD *v15; // rax

  v13 = 0LL;
  if ( a4 - 512 <= 0xE )
  {
    a5 = (unsigned int)a5 & 0xFFFF0000;
    v15 = a12;
    if ( !a12 || *a12 != 2 )
      return PostInputMessage(
               *(struct tagMLIST **)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) + 384LL),
               a3,
               a4,
               a5,
               a6,
               a7,
               a8,
               a9,
               a10,
               a11,
               v13,
               a13);
LABEL_5:
    v13 = *((_QWORD *)v15 + 1);
    return PostInputMessage(
             *(struct tagMLIST **)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) + 384LL),
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             v13,
             a13);
  }
  if ( a4 - 581 <= 0x12 )
  {
    v15 = a12;
    a3 = *(InputTransform **)(a1 + 80);
    if ( a12 )
      goto LABEL_5;
  }
  return PostInputMessage(
           *(struct tagMLIST **)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) + 384LL),
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           v13,
           a13);
}
