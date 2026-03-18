/*
 * XREFs of OutputAATo8BPP_K_XLATE @ 0x1C0240A40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall OutputAATo8BPP_K_XLATE(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        __int64 a9)
{
  unsigned __int8 *v9; // r10
  __int64 result; // rax
  unsigned int v14; // esi
  unsigned int v15; // r14d
  unsigned int v16; // r12d
  __int64 v17; // rcx
  unsigned int v18; // r13d
  __int64 v19; // rcx
  char v20; // dl
  unsigned int v21; // r15d
  unsigned int v22; // r8d
  unsigned int v23; // ecx
  __int128 v24; // [rsp+8h] [rbp-38h]
  _DWORD v25[4]; // [rsp+20h] [rbp-20h]

  v9 = (unsigned __int8 *)(a2 + 4);
  result = a9;
  v24 = *(_OWORD *)(a5 - 24);
  if ( a2 + 4 < a3 )
  {
    do
    {
      if ( v9[3] )
      {
        v14 = *a6;
        v15 = a6[1];
        v16 = *(_DWORD *)(a5 + 4LL * v9[2] + 2048);
        v17 = v9[1];
        v25[0] = v16;
        v18 = *(_DWORD *)(a5 + 4 * v17 + 1024);
        v19 = *v9;
        v25[1] = v18;
        v20 = BYTE14(v24);
        v21 = *(_DWORD *)(a5 + 4 * v19);
        v25[3] = v21;
        v25[2] = v21;
        v22 = a6[2];
        v23 = v25[(v25[v16 >= v18] >= v21 ? 2 : 0) | (unsigned __int64)(v16 >= v18)] >> 21;
        if ( v23 < v22 && v23 < v15 && v23 < v14 )
          v20 = *(_BYTE *)((((unsigned __int16)(v21 - v14) & (unsigned __int16)(v14 - v24) & 0x7000 | (v18 - v15) & (v15 - DWORD1(v24)) & 0x38000 | (unsigned __int64)((v16 - v22) & (v22 - DWORD2(v24)) & 0x1C0000)) >> 12)
                         + a9);
        *a4 = v20;
      }
      ++a4;
      a6 += 3;
      if ( (unsigned __int64)a6 >= a7 )
        a6 = (unsigned __int16 *)((char *)a6 + a8);
      v9 += 4;
    }
    while ( (unsigned __int64)v9 < a3 );
  }
  return result;
}
