/*
 * XREFs of CmpDoFindSubKeyByNumber @ 0x1404FEDD0
 * Callers:
 *     CmpFindSubKeyByNumber @ 0x14043B918 (CmpFindSubKeyByNumber.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404FDC10 (CmpFindSubKeyByNumberEx.c)
 *     CmpKeyEnumStackEntryAdvance @ 0x140670530 (CmpKeyEnumStackEntryAdvance.c)
 *     CmpKeyEnumStackEntryStart @ 0x140670684 (CmpKeyEnumStackEntryStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpDoFindSubKeyByNumber(__int64 a1, _WORD *a2, unsigned int a3)
{
  __int64 v7; // rdi
  _WORD *v8; // rax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  int v11; // [rsp+38h] [rbp+10h] BYREF
  int v12; // [rsp+3Ch] [rbp+14h]

  v11 = -1;
  v12 = 0;
  if ( *a2 == 26994 && (v7 = 0LL, a2[1]) )
  {
    while ( 1 )
    {
      v8 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(
                      a1,
                      *(unsigned int *)&a2[2 * v7 + 2],
                      &v11);
      if ( !v8 )
        return 0xFFFFFFFFLL;
      v9 = (unsigned __int16)v8[1];
      if ( a3 < v9 )
        break;
      a3 -= v9;
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v11);
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= (unsigned __int16)a2[1] )
        goto LABEL_2;
    }
    if ( ((*v8 - 26220) & 0xFDFF) != 0 )
      v10 = *(_DWORD *)&v8[2 * a3 + 2];
    else
      v10 = *(_DWORD *)&v8[4 * a3 + 2];
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v11);
    return v10;
  }
  else
  {
LABEL_2:
    if ( ((*a2 - 26220) & 0xFDFF) != 0 )
      return *(unsigned int *)&a2[2 * a3 + 2];
    else
      return *(unsigned int *)&a2[4 * a3 + 2];
  }
}
