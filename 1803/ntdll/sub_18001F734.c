/*
 * XREFs of sub_18001F734 @ 0x18001F734
 * Callers:
 *     sub_18002302C @ 0x18002302C (sub_18002302C.c)
 *     sub_180023AAC @ 0x180023AAC (sub_180023AAC.c)
 *     sub_18005DC24 @ 0x18005DC24 (sub_18005DC24.c)
 *     sub_180060414 @ 0x180060414 (sub_180060414.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180021C90 (RtlRbInsertNodeEx.c)
 *     sub_180102360 @ 0x180102360 (sub_180102360.c)
 */

__int64 __fastcall sub_18001F734(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned int v8; // r10d
  __int64 v9; // rdx
  int v10; // r9d
  __int64 v11; // rax

  v3 = 0LL;
  if ( !(_DWORD)a3
    && (*(_BYTE *)(a1 + 13) & 2) != 0
    && (a3 = 256 - (unsigned int)*(unsigned __int8 *)(a1 + 10), *(unsigned __int8 *)(a2 + 31) == (_DWORD)a3) )
  {
    v3 = a2 & *(_QWORD *)a1;
    *(_DWORD *)a2 = -857879297;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 64);
    v7 = a1 + 56;
    v8 = *(_DWORD *)(a2 + 28);
    v9 = *(_QWORD *)v7;
    if ( (v6 & 1) != 0 )
    {
      if ( v9 )
        v9 ^= v7;
      else
        v9 = 0LL;
    }
    LOBYTE(a3) = 0;
    v10 = v6 & 1;
    if ( v9 )
    {
      while ( 1 )
      {
        if ( v8 < *(_DWORD *)(v9 + 28) )
        {
          v11 = *(_QWORD *)v9;
          if ( v10 )
          {
            if ( !v11 )
              goto LABEL_21;
            v11 ^= v9;
          }
          if ( !v11 )
          {
LABEL_21:
            LOBYTE(a3) = 0;
            break;
          }
        }
        else
        {
          v11 = *(_QWORD *)(v9 + 8);
          if ( v10 )
          {
            if ( !v11 )
              goto LABEL_15;
            v11 ^= v9;
          }
          if ( !v11 )
          {
LABEL_15:
            LOBYTE(a3) = 1;
            break;
          }
        }
        v9 = v11;
      }
    }
    RtlRbInsertNodeEx(v7, v9, a3, a2);
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 16LL),
      (unsigned __int16)~(*(_DWORD *)(a2 + 28) >> 8));
    if ( (byte_18015D028 & 8) != 0 )
      sub_180102360(*(_QWORD *)(a1 + 112), *(_QWORD *)(a1 + 72));
  }
  return v3;
}
