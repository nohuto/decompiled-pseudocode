/*
 * XREFs of ndisOidPreRSSCaps @ 0x1C00C5950
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_qqDD @ 0x1C0039564 (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 */

unsigned __int8 __fastcall ndisOidPreRSSCaps(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  __int64 v5; // r15
  unsigned int v7; // eax
  unsigned __int16 v8; // r14
  unsigned __int64 v9; // rdx
  __int64 v10; // [rsp+20h] [rbp-28h]

  v1 = *a1;
  v3 = a1[4];
  v4 = 0;
  v5 = a1[3];
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqq(0xB1u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v5, v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_20;
  if ( !*a1 )
    goto LABEL_5;
  if ( !*(_WORD *)(v1 + 2702) )
  {
LABEL_20:
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v3 + 48) < 0x10u )
    {
      *(_DWORD *)(v3 + 56) = 16;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    if ( !*((_DWORD *)a1 + 10) )
    {
      if ( *(_BYTE *)(v1 + 1992) )
        *(_DWORD *)(v1 + 2704) |= 0x8000000u;
      v7 = *(_DWORD *)(v3 + 48);
      v8 = 20;
      v9 = v7;
      if ( v7 >= 0x14 )
        v9 = 20LL;
      if ( v9 < *(unsigned __int16 *)(v1 + 2702) )
      {
        if ( v7 < 0x14 )
          v8 = *(_WORD *)(v3 + 48);
      }
      else
      {
        v8 = *(_WORD *)(v1 + 2702);
      }
      memmove(*(void **)(v3 + 40), (const void *)(v1 + 2700), v8);
      *(_WORD *)(*(_QWORD *)(v3 + 40) + 2LL) = v8;
      *(_DWORD *)(v3 + 52) = v8;
      *((_DWORD *)a1 + 10) = 0;
    }
  }
  v4 = 1;
LABEL_5:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    LODWORD(v10) = v4;
    WPP_SF_qqDD(0xB2u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v5, v10, *((_DWORD *)a1 + 10));
  }
  return v4;
}
