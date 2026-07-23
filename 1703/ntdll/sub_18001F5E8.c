/*
 * XREFs of sub_18001F5E8 @ 0x18001F5E8
 * Callers:
 *     sub_1800206A8 @ 0x1800206A8 (sub_1800206A8.c)
 *     sub_1800211B0 @ 0x1800211B0 (sub_1800211B0.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 *     sub_1800771D8 @ 0x1800771D8 (sub_1800771D8.c)
 *     RtlSetUserValueHeap @ 0x180077230 (RtlSetUserValueHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF7D0 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     sub_180008F9C @ 0x180008F9C (sub_180008F9C.c)
 *     sub_180020EF0 @ 0x180020EF0 (sub_180020EF0.c)
 *     sub_180020FD8 @ 0x180020FD8 (sub_180020FD8.c)
 *     sub_1800588D4 @ 0x1800588D4 (sub_1800588D4.c)
 */

unsigned __int64 __fastcall sub_18001F5E8(_RTL_SRWLOCK *a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 v4; // rbx
  int v9; // eax
  __int64 v10; // rax
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  int v16; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( (_WORD)a2 )
    v9 = 0;
  else
    v9 = sub_1800588D4(&stru_180159600);
  if ( v9 )
  {
    v12 = sub_180008F9C(a1, a2, a3, (__int64)&v16);
  }
  else
  {
    v10 = sub_180020EF0(a1, a2);
    if ( !v10 )
      return v4;
    v12 = sub_180020FD8((_DWORD)a1, v10, a2, v11, (__int64)&v16);
  }
  if ( v12 != -1 )
  {
    if ( a4 )
      *a4 = v12;
    if ( v16 )
    {
      v13 = a2 + v12;
      v14 = v13 + 16;
      if ( (a3 & 0x10000000) == 0 )
        v14 = v13;
      return (v14 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    }
  }
  return v4;
}
