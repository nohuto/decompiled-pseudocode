/*
 * XREFs of MiClaimPhysicalRun @ 0x1402168A0
 * Callers:
 *     MiScrubNode @ 0x140238CDC (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x1406ED4E8 (MmRelocatePfnList.c)
 * Callees:
 *     MiTradePage @ 0x140078860 (MiTradePage.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 */

__int64 __fastcall MiClaimPhysicalRun(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 *a10)
{
  unsigned __int64 v11; // rdi
  __int64 v14; // r13
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r9
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // rbx
  _QWORD v23[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v24; // [rsp+30h] [rbp-40h]
  int v25; // [rsp+38h] [rbp-38h]
  int v26; // [rsp+3Ch] [rbp-34h]
  int v27; // [rsp+40h] [rbp-30h]
  __int64 v28; // [rsp+48h] [rbp-28h]
  unsigned __int64 v29; // [rsp+50h] [rbp-20h]
  __int64 v30; // [rsp+58h] [rbp-18h]
  __int64 v31; // [rsp+60h] [rbp-10h]
  int v32; // [rsp+C8h] [rbp+58h]
  unsigned __int64 v33; // [rsp+D8h] [rbp+68h]
  __int64 v34; // [rsp+E8h] [rbp+78h]

  v11 = a2;
  if ( a10 )
    *a10 = -1LL;
  v14 = a3;
  v23[1] = a5;
  v26 = a7;
  v27 = a9;
  v32 = 0;
  v31 = a8;
  v23[0] = a1;
  v25 = a6;
  v24 = a3;
  v30 = a4;
  v28 = -1LL;
  v16 = 48 * a2 - 0x58000000000LL;
  v33 = v16 + 48 * a3;
  v34 = a2 + a3;
  while ( 1 )
  {
    v17 = MiTradePage((__int64)v23, v11);
    v18 = v17;
    if ( v17 )
    {
      v19 = v17;
    }
    else
    {
      v19 = 1LL;
      if ( v29 > 1 )
      {
        if ( v11 == (v11 & ~(v29 - 1)) )
          v19 = v29;
        else
          v19 = (~(v29 - 1) & (v11 + v29 - 1)) - v11;
      }
      if ( !v32 )
      {
        if ( v29 )
          v14 = v34 - (v11 & ~(v29 - 1));
        v32 = 1;
      }
      if ( (a6 & 0x2000) == 0 || v19 >= v34 - v11 )
      {
        v20 = v24;
LABEL_24:
        if ( (a6 & 0x2000) == 0 )
        {
          v22 = a3 - v20;
          if ( a8 )
            *(_DWORD *)(a8 + 40) += -4096 * v22;
          for ( ; v22; --v22 )
          {
            v16 -= 48LL;
            MiReleaseFreshPage(v16);
          }
        }
        return v14;
      }
    }
    v11 += v19;
    v16 += 48 * v19;
    v20 = v24 - v17;
    v24 -= v18;
    if ( !v24 )
      break;
    if ( v16 >= v33 )
      goto LABEL_24;
  }
  if ( (a6 & 0x400000) != 0 && a10 )
    *a10 = v28;
  return 0LL;
}
