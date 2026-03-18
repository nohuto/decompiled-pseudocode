/*
 * XREFs of xxxGetScrollBarInfo @ 0x1C0076FC0
 * Callers:
 *     NtUserGetScrollBarInfo @ 0x1C0076D50 (NtUserGetScrollBarInfo.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     GetRect @ 0x1C0066ABC (GetRect.c)
 *     CalcSBStuff @ 0x1C0077264 (CalcSBStuff.c)
 *     CalcSBStuff2 @ 0x1C007736C (CalcSBStuff2.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall xxxGetScrollBarInfo(ULONG_PTR BugCheckParameter2, int a2, __int64 a3)
{
  __int64 v6; // rdx
  int v7; // r15d
  __int64 v8; // rsi
  unsigned int v9; // r13d
  bool v10; // zf
  int *v11; // rax
  int v12; // r8d
  int v13; // ecx
  int v14; // r9d
  int v15; // edx
  char v16; // al
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // r8d
  int v22; // ecx
  int v23[4]; // [rsp+58h] [rbp-19h] BYREF
  _DWORD v24[16]; // [rsp+68h] [rbp-9h] BYREF

  memset(v24, 0, sizeof(v24));
  if ( *(_DWORD *)a3 == 60 )
  {
    LOBYTE(v7) = 0;
    if ( BugCheckParameter2
      && ((*(_WORD *)(BugCheckParameter2 + 82) & 0x3FFF) == 0x29A
       || *(_WORD *)(*(_QWORD *)(BugCheckParameter2 + 168) + 8LL) == *(_WORD *)(gpsi + 860LL)) )
    {
      if ( *(_DWORD *)(BugCheckParameter2 + 252) )
        v8 = *(_QWORD *)(BugCheckParameter2 + 392);
      else
        v8 = *(_QWORD *)(BugCheckParameter2 + 384);
    }
    else
    {
      v8 = 0LL;
    }
    if ( a2 == -4 && !v8 )
    {
      _InterlockedAdd(&glSendMessage, 1u);
      return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0, 0, 0LL, 1, 1);
    }
    v6 = 0x8000LL;
    *(_QWORD *)(a3 + 36) = 0LL;
    *(_QWORD *)(a3 + 44) = 0LL;
    *(_QWORD *)(a3 + 52) = 0LL;
    switch ( a2 )
    {
      case -4:
        v7 = *(_DWORD *)(v8 + 12);
        v9 = *(_DWORD *)(v8 + 8);
        GetRect(BugCheckParameter2, v23, 17);
        CalcSBStuff2(v24, v23, v8 + 16, *(unsigned int *)(v8 + 8));
        goto LABEL_22;
      case -5:
        v9 = 1;
        if ( (*(_BYTE *)(BugCheckParameter2 + 70) & 0x20) != 0 )
        {
          v10 = (*(_BYTE *)(BugCheckParameter2 + 56) & 2) == 0;
          goto LABEL_11;
        }
        goto LABEL_15;
      case -6:
        v9 = 0;
        if ( (*(_BYTE *)(BugCheckParameter2 + 70) & 0x10) != 0 )
        {
          v10 = (*(_BYTE *)(BugCheckParameter2 + 56) & 4) == 0;
LABEL_11:
          if ( v10 )
            *(_DWORD *)(a3 + 36) |= 0x10000u;
LABEL_16:
          if ( (*(_DWORD *)(a3 + 36) & 0x8000) != 0 )
            return 1LL;
          v11 = *(int **)(BugCheckParameter2 + 192);
          if ( v11 )
          {
            v7 = *v11;
            if ( v9 )
              v7 >>= 2;
            LOBYTE(v7) = v7 & 3;
          }
          else
          {
            UserSetLastError(1447LL, 0x8000LL);
          }
          if ( (*(_DWORD *)(a3 + 36) & 0x10000) == 0 )
          {
            CalcSBStuff(BugCheckParameter2, v24, v9);
            if ( (*(_BYTE *)(BugCheckParameter2 + 66) & 0x40) != 0 )
            {
              v22 = *(_DWORD *)(BugCheckParameter2 + 136) - *(_DWORD *)(BugCheckParameter2 + 128);
              if ( !v9 )
              {
                v12 = v24[6];
                v15 = v22 - v24[5];
                v14 = v22 - v24[4];
                v13 = v24[7];
                goto LABEL_24;
              }
              v12 = v22 - v24[7];
              v13 = v22 - v24[6];
LABEL_23:
              v14 = v24[5];
              v15 = v24[4];
LABEL_24:
              if ( (v7 & 1) != 0 )
              {
                *(_DWORD *)(a3 + 40) |= 1u;
                *(_DWORD *)(a3 + 44) |= 1u;
              }
              if ( (v7 & 2) != 0 )
              {
                *(_DWORD *)(a3 + 56) |= 1u;
                *(_DWORD *)(a3 + 52) |= 1u;
              }
              if ( (v7 & 3) == 3 )
                *(_DWORD *)(a3 + 36) |= 1u;
              v16 = *(_BYTE *)(BugCheckParameter2 + 62);
              if ( (v16 & 0x10) != 0 && (a2 != -5 || (v16 & 0x20) != 0) )
              {
                if ( (v16 & 1) != 0 )
                  *(_DWORD *)(a3 + 40) |= 8u;
                if ( (*(_BYTE *)(BugCheckParameter2 + 62) & 2) != 0 )
                  *(_DWORD *)(a3 + 44) |= 8u;
                if ( (*(_BYTE *)(BugCheckParameter2 + 62) & 4) != 0 )
                  *(_DWORD *)(a3 + 52) |= 8u;
                if ( (*(_BYTE *)(BugCheckParameter2 + 62) & 8) != 0 )
                  *(_DWORD *)(a3 + 56) |= 8u;
              }
              if ( (*(_DWORD *)(a3 + 36) & 0x10000) == 0 )
              {
                if ( v9 )
                {
                  *(_DWORD *)(a3 + 4) = v12;
                  *(_DWORD *)(a3 + 8) = v15;
                  *(_DWORD *)(a3 + 12) = v13;
                  *(_DWORD *)(a3 + 16) = v14;
                }
                else
                {
                  *(_DWORD *)(a3 + 4) = v15;
                  *(_DWORD *)(a3 + 8) = v12;
                  *(_DWORD *)(a3 + 12) = v14;
                  *(_DWORD *)(a3 + 16) = v13;
                }
                if ( a2 == -4 )
                {
                  v18 = *(_DWORD *)(BugCheckParameter2 + 148);
                  v19 = *(_DWORD *)(BugCheckParameter2 + 144);
                }
                else
                {
                  v18 = *(_DWORD *)(BugCheckParameter2 + 132);
                  v19 = *(_DWORD *)(BugCheckParameter2 + 128);
                }
                *(_DWORD *)(a3 + 4) += v19;
                *(_DWORD *)(a3 + 12) += v19;
                *(_DWORD *)(a3 + 16) += v18;
                *(_DWORD *)(a3 + 8) += v18;
                v20 = v24[9];
                v21 = v24[12];
                *(_DWORD *)(a3 + 20) = v24[9] - v15;
                *(_DWORD *)(a3 + 24) = v24[13] - v15;
                *(_DWORD *)(a3 + 28) = v21 - v15;
                if ( v24[13] == v20 )
                  *(_DWORD *)(a3 + 44) |= 0x8000u;
                if ( v21 == v24[10] )
                  *(_DWORD *)(a3 + 52) |= 0x8000u;
              }
              return 1LL;
            }
          }
LABEL_22:
          v12 = v24[6];
          v13 = v24[7];
          goto LABEL_23;
        }
LABEL_15:
        *(_DWORD *)(a3 + 36) |= 0x8000u;
        goto LABEL_16;
    }
  }
  UserSetLastError(87LL, v6);
  return 0LL;
}
