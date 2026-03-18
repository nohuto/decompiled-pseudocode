/*
 * XREFs of ClearSendMessages @ 0x1C005D298
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 * Callees:
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxInterSendMsgEx @ 0x1C0058A60 (xxxInterSendMsgEx.c)
 */

_QWORD *__fastcall ClearSendMessages(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rdx
  __int64 v15; // [rsp+28h] [rbp-80h]
  __int64 v16; // [rsp+40h] [rbp-68h]
  __int64 v17; // [rsp+48h] [rbp-60h]
  __int64 v18; // [rsp+50h] [rbp-58h] BYREF
  __int64 v19; // [rsp+58h] [rbp-50h]
  int v20; // [rsp+68h] [rbp-40h] BYREF
  __int64 v21; // [rsp+70h] [rbp-38h]
  __int64 v22; // [rsp+78h] [rbp-30h]
  __int64 v23; // [rsp+80h] [rbp-28h]

  result = (_QWORD *)gsmsList;
  v3 = (_QWORD *)gsmsList;
  while ( v3 != result )
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
    v5 = v4[14];
    if ( v5 == a1 )
    {
      v6 = *((_DWORD *)v4 + 21);
      if ( (v6 & 4) != 0 )
      {
        v7 = v6 | 9;
LABEL_16:
        *((_DWORD *)v4 + 21) = v7;
        goto LABEL_22;
      }
      if ( (v6 & 1) != 0 )
        goto LABEL_22;
      if ( (v6 & 0x100) != 0 )
      {
        v8 = v6 | 1;
        v9 = 33;
        *((_DWORD *)v4 + 21) = v8;
        if ( (v8 & 0x400) != 0 )
          v9 = 289;
        v23 = 0LL;
        v20 = v9;
        v21 = v4[6];
        v22 = v4[7];
        v18 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v18;
        v19 = v5;
        if ( v5 )
          ++*(_DWORD *)(v5 + 8);
        LODWORD(v17) = *((_DWORD *)v4 + 21) & 0x10000;
        LODWORD(v16) = 1;
        LODWORD(v15) = W32GetCurrentThreadDpiAwarenessContext();
        xxxInterSendMsgEx(v4[14], *((unsigned int *)v4 + 26), 0LL, 0LL, 0LL, v15, v4[8], &v20, v16, v17, v18, v19);
        ThreadUnlock1(v11, v10);
      }
      else
      {
        if ( (v6 & 0x4000) != 0 )
          goto LABEL_22;
        if ( !v4[4] )
        {
          v7 = v6 | 1;
          goto LABEL_16;
        }
        v12 = v4 + 2;
        if ( v4[2] )
        {
          --*(_DWORD *)(v4[5] + 488LL);
          v13 = *v12;
          v14 = (_QWORD *)v4[3];
          if ( *(_QWORD **)(*v12 + 8LL) != v12 || (_QWORD *)*v14 != v12 )
            __fastfail(3u);
          *v14 = v13;
          *(_QWORD *)(v13 + 8) = v14;
          *v12 = 0LL;
        }
        *((_DWORD *)v4 + 21) |= 0x8001u;
        v4[9] = 0LL;
        SetWakeBit(v4[4], 0x200u);
      }
LABEL_22:
      HMAssignmentUnlock(v4 + 14);
      result = (_QWORD *)gsmsList;
    }
  }
  return result;
}
