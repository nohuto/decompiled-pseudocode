/*
 * XREFs of RtlUpcaseUnicodeToCustomCPN @ 0x1800E4220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUpcaseUnicodeToCustomCPN(
        __int64 a1,
        _BYTE *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int16 *a5,
        unsigned int a6)
{
  unsigned int v6; // r11d
  unsigned int v7; // ebx
  _BYTE *v8; // r10
  unsigned int v9; // eax
  __int64 v10; // rsi
  unsigned __int16 *v11; // r9
  __int64 v12; // r14
  __int64 v13; // rbp
  unsigned __int16 v14; // r8
  __int64 v15; // r12
  int v16; // esi
  __int64 v17; // r14
  __int64 v18; // r13
  unsigned __int16 *v19; // rbp
  __int64 v20; // rax
  __int16 v21; // dx
  unsigned __int16 v22; // r8
  __int16 v23; // dx
  unsigned int v24; // eax
  int v26; // [rsp+30h] [rbp+8h]

  v6 = a6 >> 1;
  v7 = a3;
  v8 = a2;
  if ( *(_WORD *)(a1 + 12) )
  {
    v15 = *(_QWORD *)(a1 + 56);
    v16 = (int)a2;
    v17 = *(_QWORD *)(a1 + 40);
    v26 = (int)a2;
    if ( v6 )
    {
      v18 = Nls844UnicodeUpcaseTable;
      v19 = a5;
      do
      {
        if ( !v7 )
          break;
        v20 = *v19++;
        v21 = *(_WORD *)(v17 + 2 * v20);
        if ( *(_WORD *)(v15 + 2LL * HIBYTE(v21)) )
          v22 = *(_WORD *)(v15
                         + 2LL * ((unsigned __int8)v21 + (unsigned int)*(unsigned __int16 *)(v15 + 2LL * HIBYTE(v21))));
        else
          v22 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * (unsigned __int8)v21);
        if ( v22 >= 0x61u )
        {
          if ( v22 > 0x7Au )
            v22 += *(_WORD *)(v18
                            + 2LL
                            * ((v22 & 0xF)
                             + (unsigned int)*(unsigned __int16 *)(v18
                                                                 + 2LL
                                                                 * (((v22 >> 4) & 0xF)
                                                                  + (unsigned int)*(unsigned __int16 *)(v18 + 2 * ((unsigned __int64)v22 >> 8))))));
          else
            v22 -= 32;
        }
        v23 = *(_WORD *)(v17 + 2LL * v22);
        if ( HIBYTE(v23) )
        {
          v24 = v7--;
          if ( v24 < 2 )
            break;
          *v8++ = HIBYTE(v23);
        }
        *v8 = v23;
        --v7;
        ++v8;
        --v6;
      }
      while ( v6 );
      v16 = v26;
    }
    if ( a4 )
      *a4 = (_DWORD)v8 - v16;
  }
  else
  {
    v9 = a3;
    if ( v6 < a3 )
      v9 = a6 >> 1;
    if ( a4 )
      *a4 = v9;
    v10 = *(_QWORD *)(a1 + 40);
    if ( v9 )
    {
      v11 = a5;
      v12 = Nls844UnicodeUpcaseTable;
      v13 = v9;
      do
      {
        v14 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * *(unsigned __int8 *)(*v11 + v10));
        if ( v14 >= 0x61u )
        {
          if ( v14 > 0x7Au )
            v14 += *(_WORD *)(v12
                            + 2LL
                            * ((v14 & 0xF)
                             + (unsigned int)*(unsigned __int16 *)(v12
                                                                 + 2LL
                                                                 * (((v14 >> 4) & 0xF)
                                                                  + (unsigned int)*(unsigned __int16 *)(v12 + 2 * ((unsigned __int64)v14 >> 8))))));
          else
            v14 -= 32;
        }
        ++v11;
        *v8++ = *(_BYTE *)(v14 + v10);
        --v13;
      }
      while ( v13 );
    }
  }
  return v7 < v6 ? 0x80000005 : 0;
}
