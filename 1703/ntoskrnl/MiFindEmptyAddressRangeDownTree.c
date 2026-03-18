/*
 * XREFs of MiFindEmptyAddressRangeDownTree @ 0x140435EB0
 * Callers:
 *     MiFindEmptyAddressRangeDown @ 0x140435DF0 (MiFindEmptyAddressRangeDown.c)
 *     MiFinishCreateSection @ 0x14050CC90 (MiFinishCreateSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFindEmptyAddressRangeDownTree(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v6; // rbp
  __int64 v8; // r15
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 j; // rax
  _BYTE *v12; // r11
  unsigned __int64 v13; // rbx
  _BYTE *v14; // r10
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  _BYTE *v18; // r9
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 i; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rdx
  _BYTE v27[24]; // [rsp+0h] [rbp-58h] BYREF
  int v28; // [rsp+18h] [rbp-40h]
  int v29; // [rsp+1Ch] [rbp-3Ch]
  char v30; // [rsp+20h] [rbp-38h]
  char v31; // [rsp+21h] [rbp-37h]

  v6 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( a4 >= a5 || a5 - a4 + 1 < v6 )
    return 3221225495LL;
  v8 = ~(a3 - 1);
  v9 = v8 & (a5 - v6);
  if ( v9 < a4 )
    return 3221225495LL;
  v10 = *a1;
  if ( v10 )
  {
    j = 0LL;
    do
    {
      v12 = (_BYTE *)v10;
      v10 = *(_QWORD *)(v10 + 8);
    }
    while ( v10 );
    v13 = v9 >> 12;
    v14 = v12;
    v15 = a3 >> 12;
    while ( 1 )
    {
      if ( v12 )
      {
        j = (unsigned __int64)v12;
        v14 = v27;
        v12 = 0LL;
        v30 = (a5 + 1) >> 44;
        v28 = (a5 + 1) >> 12;
      }
      else
      {
        v16 = *(_QWORD *)j;
        v17 = j;
        if ( *(_QWORD *)j )
        {
          j = *(_QWORD *)j;
          for ( i = *(_QWORD *)(v16 + 8); i; i = *(_QWORD *)(i + 8) )
            j = i;
        }
        else
        {
          for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)(j + 8) == v17 )
              break;
            v17 = j;
          }
        }
      }
      if ( j )
      {
        v18 = (_BYTE *)j;
        v19 = a4 >> 12;
        if ( (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) + 1 >= a4 >> 12 )
          v19 = (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) + 1;
        else
          v18 = v27;
      }
      else
      {
        v29 = 0;
        v19 = a4 >> 12;
        v18 = v27;
        v31 = 0;
      }
      v20 = ~(v15 - 1) & (v19 + v15 - 1);
      if ( v20 <= v13 )
      {
        v22 = (unsigned __int8)v14[32];
        v23 = *((unsigned int *)v14 + 6);
        v24 = a5 >> 12;
        v25 = v23 | (v22 << 32);
        if ( v25 <= a5 >> 12 )
          v24 = v25;
        if ( v24 > v20 && v6 >> 12 <= v24 - v20 )
          break;
      }
      if ( v18 == v27 )
        return 3221225495LL;
      v14 = v18;
    }
    *a6 = v8 & ((v24 << 12) - v6);
    return 0LL;
  }
  else
  {
    *a6 = v9;
    return 0LL;
  }
}
