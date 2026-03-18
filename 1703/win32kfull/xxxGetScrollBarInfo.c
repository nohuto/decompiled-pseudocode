/*
 * XREFs of xxxGetScrollBarInfo @ 0x1C00D74A4
 * Callers:
 *     NtUserGetScrollBarInfo @ 0x1C00D7260 (NtUserGetScrollBarInfo.c)
 *     xxxSBWndProc @ 0x1C020F940 (xxxSBWndProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     GetRect @ 0x1C0062FEC (GetRect.c)
 *     CalcSBStuff @ 0x1C00D7700 (CalcSBStuff.c)
 *     CalcSBStuff2 @ 0x1C00D7834 (CalcSBStuff2.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall xxxGetScrollBarInfo(ULONG_PTR a1, int a2, __int64 a3)
{
  int v6; // r15d
  __int64 v7; // rsi
  int v8; // r13d
  bool v9; // zf
  int *v10; // rax
  int v11; // r8d
  int v12; // ecx
  int v13; // r9d
  int v14; // edx
  char v15; // al
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // r8d
  int v21; // ecx
  int v22[4]; // [rsp+58h] [rbp-19h] BYREF
  _DWORD v23[16]; // [rsp+68h] [rbp-9h] BYREF

  memset(v23, 0, sizeof(v23));
  if ( *(_DWORD *)a3 == 60 )
  {
    LOBYTE(v6) = 0;
    if ( a1
      && ((*(_WORD *)(a1 + 82) & 0x3FFF) == 0x29A || *(_WORD *)(*(_QWORD *)(a1 + 168) + 8LL) == *(_WORD *)(gpsi + 860LL)) )
    {
      if ( *(_DWORD *)(a1 + 252) )
        v7 = *(_QWORD *)(a1 + 392);
      else
        v7 = *(_QWORD *)(a1 + 384);
    }
    else
    {
      v7 = 0LL;
    }
    if ( a2 == -4 && !v7 )
    {
      _InterlockedAdd(&glSendMessage, 1u);
      return xxxSendTransformableMessageTimeout(a1, 0xEBu, 0LL, (struct _LARGE_STRING *)a3, 0, 0, 0LL, 1, 1);
    }
    *(_QWORD *)(a3 + 36) = 0LL;
    *(_QWORD *)(a3 + 44) = 0LL;
    *(_QWORD *)(a3 + 52) = 0LL;
    switch ( a2 )
    {
      case -4:
        v6 = *(_DWORD *)(v7 + 12);
        v8 = *(_DWORD *)(v7 + 8);
        GetRect(a1, v22, 17);
        CalcSBStuff2(v23, v22, v7 + 16, *(unsigned int *)(v7 + 8));
        goto LABEL_22;
      case -5:
        v8 = 1;
        if ( (*(_BYTE *)(a1 + 70) & 0x20) != 0 )
        {
          v9 = (*(_BYTE *)(a1 + 56) & 2) == 0;
          goto LABEL_11;
        }
        goto LABEL_15;
      case -6:
        v8 = 0;
        if ( (*(_BYTE *)(a1 + 70) & 0x10) != 0 )
        {
          v9 = (*(_BYTE *)(a1 + 56) & 4) == 0;
LABEL_11:
          if ( v9 )
            *(_DWORD *)(a3 + 36) |= 0x10000u;
LABEL_16:
          if ( (*(_DWORD *)(a3 + 36) & 0x8000) != 0 )
            return 1LL;
          v10 = *(int **)(a1 + 192);
          if ( v10 )
          {
            v6 = *v10;
            if ( v8 )
              v6 >>= 2;
            LOBYTE(v6) = v6 & 3;
          }
          else
          {
            UserSetLastError(1447LL);
          }
          if ( (*(_DWORD *)(a3 + 36) & 0x10000) == 0 )
          {
            CalcSBStuff(a1, v23);
            if ( (*(_BYTE *)(a1 + 66) & 0x40) != 0 )
            {
              v21 = *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128);
              if ( !v8 )
              {
                v11 = v23[6];
                v14 = v21 - v23[5];
                v13 = v21 - v23[4];
                v12 = v23[7];
                goto LABEL_24;
              }
              v11 = v21 - v23[7];
              v12 = v21 - v23[6];
LABEL_23:
              v13 = v23[5];
              v14 = v23[4];
LABEL_24:
              if ( (v6 & 1) != 0 )
              {
                *(_DWORD *)(a3 + 40) |= 1u;
                *(_DWORD *)(a3 + 44) |= 1u;
              }
              if ( (v6 & 2) != 0 )
              {
                *(_DWORD *)(a3 + 56) |= 1u;
                *(_DWORD *)(a3 + 52) |= 1u;
              }
              if ( (v6 & 3) == 3 )
                *(_DWORD *)(a3 + 36) |= 1u;
              v15 = *(_BYTE *)(a1 + 62);
              if ( (v15 & 0x10) != 0 && (a2 != -5 || (v15 & 0x20) != 0) )
              {
                if ( (v15 & 1) != 0 )
                  *(_DWORD *)(a3 + 40) |= 8u;
                if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
                  *(_DWORD *)(a3 + 44) |= 8u;
                if ( (*(_BYTE *)(a1 + 62) & 4) != 0 )
                  *(_DWORD *)(a3 + 52) |= 8u;
                if ( (*(_BYTE *)(a1 + 62) & 8) != 0 )
                  *(_DWORD *)(a3 + 56) |= 8u;
              }
              if ( (*(_DWORD *)(a3 + 36) & 0x10000) == 0 )
              {
                if ( v8 )
                {
                  *(_DWORD *)(a3 + 4) = v11;
                  *(_DWORD *)(a3 + 8) = v14;
                  *(_DWORD *)(a3 + 12) = v12;
                  *(_DWORD *)(a3 + 16) = v13;
                }
                else
                {
                  *(_DWORD *)(a3 + 4) = v14;
                  *(_DWORD *)(a3 + 8) = v11;
                  *(_DWORD *)(a3 + 12) = v13;
                  *(_DWORD *)(a3 + 16) = v12;
                }
                if ( a2 == -4 )
                {
                  v17 = *(_DWORD *)(a1 + 148);
                  v18 = *(_DWORD *)(a1 + 144);
                }
                else
                {
                  v17 = *(_DWORD *)(a1 + 132);
                  v18 = *(_DWORD *)(a1 + 128);
                }
                *(_DWORD *)(a3 + 4) += v18;
                *(_DWORD *)(a3 + 12) += v18;
                *(_DWORD *)(a3 + 16) += v17;
                *(_DWORD *)(a3 + 8) += v17;
                v19 = v23[9];
                v20 = v23[12];
                *(_DWORD *)(a3 + 20) = v23[9] - v14;
                *(_DWORD *)(a3 + 24) = v23[13] - v14;
                *(_DWORD *)(a3 + 28) = v20 - v14;
                if ( v23[13] == v19 )
                  *(_DWORD *)(a3 + 44) |= 0x8000u;
                if ( v20 == v23[10] )
                  *(_DWORD *)(a3 + 52) |= 0x8000u;
              }
              return 1LL;
            }
          }
LABEL_22:
          v11 = v23[6];
          v12 = v23[7];
          goto LABEL_23;
        }
LABEL_15:
        *(_DWORD *)(a3 + 36) |= 0x8000u;
        goto LABEL_16;
    }
  }
  UserSetLastError(87LL);
  return 0LL;
}
