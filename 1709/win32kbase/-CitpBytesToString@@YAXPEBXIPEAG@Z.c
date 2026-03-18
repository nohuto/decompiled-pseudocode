/*
 * XREFs of ?CitpBytesToString@@YAXPEBXIPEAG@Z @ 0x1C0082B24
 * Callers:
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0082944 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpBytesToString(unsigned __int8 *a1, __int64 a2, unsigned __int16 *a3)
{
  __int64 v4; // rdx
  __int64 v5; // r10
  unsigned __int8 v6; // al
  unsigned __int16 v7; // cx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int8 v10; // al
  unsigned __int16 v11; // cx

  LODWORD(v4) = 0;
  v5 = 4LL;
  do
  {
    v6 = *a1 & 0xF;
    if ( v6 >= 0xAu )
      v7 = v6 + 55;
    else
      v7 = v6 + 48;
    v8 = (unsigned int)v4;
    v9 = (unsigned int)(v4 + 1);
    a3[v8] = v7;
    v10 = *a1 >> 4;
    if ( v10 >= 0xAu )
      v11 = v10 + 55;
    else
      v11 = v10 + 48;
    ++a1;
    a3[v9] = v11;
    v4 = (unsigned int)(v9 + 1);
    --v5;
  }
  while ( v5 );
  a3[v4] = 0;
}
