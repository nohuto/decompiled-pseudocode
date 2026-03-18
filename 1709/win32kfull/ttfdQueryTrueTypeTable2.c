/*
 * XREFs of ttfdQueryTrueTypeTable2 @ 0x1C0230338
 * Callers:
 *     ttfdQueryTrueTypeTable @ 0x1C02302D0 (ttfdQueryTrueTypeTable.c)
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     pjTable @ 0x1C022B138 (pjTable.c)
 */

__int64 __fastcall ttfdQueryTrueTypeTable2(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        void *a6,
        __int64 *a7,
        int *a8)
{
  __int64 v8; // rdi
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // ebx
  const void *v13; // rdx
  int v14; // ebx
  int v15; // [rsp+48h] [rbp+20h] BYREF

  v8 = a4;
  if ( a4 < 0 || (*(_DWORD *)(a1 + 4) & 1) != 0 )
    return 0xFFFFFFFFLL;
  v10 = *(_QWORD *)(a1 + 16 * ((unsigned int)(a2 - 1) + 3LL));
  if ( a3 == 1717793908 )
  {
    if ( *(_DWORD *)(v10 + 272) )
    {
      v11 = *(_QWORD *)(v10 + 64);
      v12 = *(_DWORD *)(v10 + 72);
      goto LABEL_11;
    }
    return 0xFFFFFFFFLL;
  }
  if ( a3 )
  {
    v11 = pjTable(a3, v10, (unsigned __int32 *)&v15);
    if ( !v11 )
      return 0xFFFFFFFFLL;
    v12 = v15;
  }
  else
  {
    v11 = *(_QWORD *)(v10 + 64) + *(unsigned int *)(v10 + 272);
    v12 = *(_DWORD *)(v10 + 72) - *(_DWORD *)(v10 + 272);
  }
LABEL_11:
  if ( a7 )
    *a7 = v11;
  if ( a8 )
    *a8 = v12;
  v13 = (const void *)(v8 + v11);
  v14 = v12 - v8;
  if ( v14 <= 0 )
    return 0xFFFFFFFFLL;
  if ( a6 && a5 )
  {
    if ( v14 > a5 )
      v14 = a5;
    memmove(a6, v13, v14);
  }
  return (unsigned int)v14;
}
