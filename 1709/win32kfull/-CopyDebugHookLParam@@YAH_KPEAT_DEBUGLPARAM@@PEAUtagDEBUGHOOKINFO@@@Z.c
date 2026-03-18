/*
 * XREFs of ?CopyDebugHookLParam@@YAH_KPEAT_DEBUGLPARAM@@PEAUtagDEBUGHOOKINFO@@@Z @ 0x1C01441BC
 * Callers:
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1C0200D30 (fnHkINLPDEBUGHOOKSTRUCT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CopyDebugHookLParam(unsigned __int64 a1, union _DEBUGLPARAM *a2, struct tagDEBUGHOOKINFO *a3)
{
  __int128 *v3; // r10
  unsigned int v4; // r9d
  unsigned int v5; // r11d
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rax
  __int128 v10; // xmm0
  _OWORD *v11; // rax
  int v12; // ecx
  _OWORD *v13; // rax
  int v14; // ecx
  __int64 v15; // rax
  int v16; // ecx
  int v17; // eax

  v3 = (__int128 *)*((_QWORD *)a3 + 1);
  v4 = 0;
  v5 = 1;
  if ( !v3 )
    return v4;
  if ( a1 > 6 )
  {
    switch ( a1 )
    {
      case 7uLL:
        goto LABEL_12;
      case 0xAuLL:
        v17 = *((_DWORD *)a3 + 6);
        if ( v17 == 5 )
          *(_OWORD *)a2 = *v3;
        LOBYTE(v4) = v17 == 5;
        return v4;
      case 0xCuLL:
        *((_DWORD *)v3 + 7) = 0;
        v15 = *((_QWORD *)a3 + 1);
        *(_OWORD *)a2 = *(_OWORD *)v15;
        *((_OWORD *)a2 + 1) = *(_OWORD *)(v15 + 16);
        *((_QWORD *)a2 + 4) = *(_QWORD *)(v15 + 32);
        v16 = *((_DWORD *)a2 + 6);
        if ( (unsigned __int16)v16 < 0x400u && (MessageTable[(unsigned __int16)v16] & 0x100) != 0 )
          *((_QWORD *)a2 + 1) = 0LL;
        return v5;
    }
    if ( a1 != -1LL )
      return v4;
LABEL_26:
    *((_DWORD *)v3 + 3) = 0;
    *(_DWORD *)(*((_QWORD *)a3 + 1) + 44LL) = 0;
    v13 = (_OWORD *)*((_QWORD *)a3 + 1);
    *(_OWORD *)a2 = *v13;
    *((_OWORD *)a2 + 1) = v13[1];
    *((_OWORD *)a2 + 2) = v13[2];
    v14 = *((_DWORD *)a2 + 2);
    if ( (unsigned __int16)v14 < 0x400u && (MessageTable[(unsigned __int16)v14] & 0x100) != 0 )
      *((_QWORD *)a2 + 3) = 0LL;
    return v5;
  }
  if ( a1 == 6 )
    goto LABEL_26;
  if ( a1 <= 1 )
  {
    *(_OWORD *)a2 = *v3;
    *((_QWORD *)a2 + 2) = *((_QWORD *)v3 + 2);
    if ( (unsigned __int16)*(_DWORD *)a2 < 0x400u && (MessageTable[(unsigned __int16)*(_DWORD *)a2] & 0x100) != 0 )
      *((_DWORD *)a2 + 1) = 0;
    return v5;
  }
  if ( a1 == 3 )
    goto LABEL_26;
  if ( a1 != 4 )
  {
    if ( a1 != 5 )
      return v4;
    v6 = *((_DWORD *)a3 + 6);
    if ( v6 && (v7 = v6 - 3) != 0 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        if ( v8 == 1 )
        {
LABEL_12:
          *((_DWORD *)v3 + 5) = 0;
          *(_DWORD *)(*((_QWORD *)a3 + 1) + 36LL) = 0;
          v9 = *((_QWORD *)a3 + 1);
          *(_OWORD *)a2 = *(_OWORD *)v9;
          *((_OWORD *)a2 + 1) = *(_OWORD *)(v9 + 16);
          *((_QWORD *)a2 + 4) = *(_QWORD *)(v9 + 32);
          return v5;
        }
        return v4;
      }
      *((_DWORD *)v3 + 1) = 0;
      v10 = *(_OWORD *)*((_QWORD *)a3 + 1);
    }
    else
    {
      v10 = *v3;
    }
    *(_OWORD *)a2 = v10;
    return v5;
  }
  *((_DWORD *)v3 + 5) = 0;
  v11 = (_OWORD *)*((_QWORD *)a3 + 1);
  *(_OWORD *)a2 = *v11;
  *((_OWORD *)a2 + 1) = v11[1];
  v12 = *((_DWORD *)a2 + 4);
  if ( (unsigned __int16)v12 < 0x400u && (MessageTable[(unsigned __int16)v12] & 0x100) != 0 )
    *(_QWORD *)a2 = 0LL;
  return v5;
}
