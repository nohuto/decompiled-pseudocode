/*
 * XREFs of OutputAATo8BPP_K_B332 @ 0x1C0242120
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall OutputAATo8BPP_K_B332(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8)
{
  unsigned __int8 *v8; // rdx
  char v11; // r11
  unsigned int v12; // esi
  __int64 v13; // rax
  unsigned int v14; // r14d
  __int64 v15; // rax
  unsigned int v16; // ebx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // r12d
  unsigned int v20; // r15d
  __int128 i; // [rsp+0h] [rbp-30h]
  _DWORD v22[4]; // [rsp+18h] [rbp-18h]

  v8 = (unsigned __int8 *)(a2 + 4);
  for ( i = *(_OWORD *)(a5 - 24); (unsigned __int64)v8 < a3; v8 += 4 )
  {
    if ( v8[3] )
    {
      v11 = BYTE14(i);
      v12 = *(_DWORD *)(a5 + 4LL * ((unsigned int)v8[2] + 512));
      v13 = (unsigned int)v8[1] + 256;
      v22[0] = v12;
      v14 = *(_DWORD *)(a5 + 4 * v13);
      v15 = *v8;
      v22[1] = v14;
      v16 = *(_DWORD *)(a5 + 4 * v15);
      v22[3] = v16;
      v22[2] = v16;
      v17 = a6[2];
      v18 = v22[(v12 >= v14) | (unsigned __int64)(v22[v12 >= v14] >= v16 ? 2 : 0)] >> 21;
      if ( v18 < v17 )
      {
        v19 = a6[1];
        if ( v18 < v19 )
        {
          v20 = *a6;
          if ( v18 < v20 )
            v11 = ((v16 - v20) >> 12) & ((v20 - (unsigned int)i) >> 12) & 3 | ((v14 - v19) >> 12) & ((v19 - DWORD1(i)) >> 12) & 0x1C | ((v12 - v17) >> 12) & ((v17 - DWORD2(i)) >> 12) & 0xE0;
        }
      }
      *a4 = v11;
    }
    ++a4;
    a6 += 3;
    if ( (unsigned __int64)a6 >= a7 )
      a6 = (unsigned __int16 *)((char *)a6 + a8);
  }
}
