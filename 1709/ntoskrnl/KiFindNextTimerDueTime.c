/*
 * XREFs of KiFindNextTimerDueTime @ 0x14009A4F0
 * Callers:
 *     PpmIdlePrepare @ 0x140099130 (PpmIdlePrepare.c)
 *     KiGetNextTimerExpirationDueTime @ 0x14010F698 (KiGetNextTimerExpirationDueTime.c)
 *     PpmIdleSelectStates @ 0x14013A6A0 (PpmIdleSelectStates.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiFindNextTimerDueTime(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r13
  unsigned int v5; // ebp
  __int64 v6; // r14
  unsigned int v7; // edi
  __int64 v8; // r15
  __int64 *v9; // rsi
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rbx
  __int64 v13; // r10
  unsigned __int64 v14; // r9
  _QWORD *v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  int v20; // ecx
  unsigned int v21; // eax
  __int64 v22; // rsi
  unsigned int v23; // edi
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // r9
  _QWORD *v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  int v33; // r8d
  __int64 v34; // r9
  unsigned int v35; // r9d
  unsigned __int64 v36; // rsi
  unsigned __int16 v37; // bx
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // r10
  __int64 v40; // r14
  unsigned __int64 v41; // r8
  _QWORD *v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // r9
  __int64 v46; // r8
  unsigned __int64 v47; // [rsp+38h] [rbp+10h]

  v3 = -1LL;
  v5 = (unsigned __int8)(a2 >> 18);
  if ( KiSerializeTimerExpiration )
  {
    if ( !a3 )
      return v3;
    v20 = *(_DWORD *)(a1 + 11888);
    v21 = (unsigned __int8)(v5 - v20);
    if ( v21 > 1 )
      return 0LL;
    v22 = (unsigned __int8)v20;
    v23 = 0;
    v47 = (a2 & 0xFFFFFFFFFFFC0000uLL) - (v21 << 18) + 0x4000000;
LABEL_24:
    v24 = v3;
    v25 = v3;
    if ( (unsigned __int64)(unsigned int)v22 >= KiPendingTimerBitmaps[0] )
      v26 = 0LL;
    else
      v26 = (unsigned int)v22;
    v27 = KiPendingTimerBitmaps[0] - 1;
    while ( 1 )
    {
      if ( v27 - v26 == -1LL )
      {
        LODWORD(v30) = -1;
      }
      else
      {
        v28 = (_QWORD *)(qword_140402288[0] + 8 * (v26 >> 6));
        v29 = ((1LL << (v26 & 0x3F)) - 1) | ~*v28;
        if ( v29 == -1 )
        {
          while ( (unsigned __int64)++v28 <= qword_140402288[0] + 8 * (v27 >> 6) )
          {
            v29 = ~*v28;
            if ( *v28 )
              goto LABEL_29;
          }
LABEL_70:
          LODWORD(v30) = -1;
          goto LABEL_71;
        }
LABEL_29:
        _BitScanForward64((unsigned __int64 *)&v29, ~v29);
        v30 = v29 + (((__int64)v28 - qword_140402288[0]) >> 3 << 6);
        if ( v30 > v27 )
          goto LABEL_70;
        if ( v30 != -1LL )
          goto LABEL_31;
      }
LABEL_71:
      if ( !v26 )
      {
LABEL_31:
        if ( (_DWORD)v30 == -1 )
          return v3;
        v23 += (unsigned __int8)(v30 - v22 + 1);
        if ( v23 > 0x100 )
          return v3;
        v31 = 32LL * (unsigned int)v30;
        v32 = *(_QWORD *)(v31 + KiProcessorBlock[0] + 14488);
        if ( v32 < v3 )
        {
          if ( v32 < v47 )
          {
            v33 = (unsigned __int8)(v32 >> 18);
            if ( v33 == (_DWORD)v30 )
              return *(_QWORD *)(v31 + KiProcessorBlock[0] + 14488);
            v22 = (unsigned __int8)(v30 + 1);
            v3 = (v32 & 0xFFFFFFFFFFFC0000uLL) + ((((_DWORD)v30 - v33) << 18) & 0x3FC0000);
            if ( v3 >= v25 )
              v3 = v24;
            goto LABEL_24;
          }
          v3 = *(_QWORD *)(v31 + KiProcessorBlock[0] + 14488);
        }
        v22 = (unsigned __int8)(v30 + 1);
        goto LABEL_24;
      }
      v45 = v22 + 1;
      if ( (unsigned __int64)(v22 + 1) > KiPendingTimerBitmaps[0] )
        v45 = KiPendingTimerBitmaps[0];
      v27 = v45 - 1;
      v26 = 0LL;
    }
  }
  if ( v5 != (unsigned __int8)*(_DWORD *)(a1 + 11888) )
    return 0LL;
  if ( a3 )
  {
    v35 = -1;
    v36 = v5 << 9;
    v37 = 0;
    while ( 1 )
    {
      v38 = KiPendingTimerBitmaps[2 * v37];
      if ( v36 >= v38 )
        v39 = 0LL;
      else
        v39 = v5 << 9;
      v40 = KiPendingTimerBitmaps[2 * v37 + 1];
      v41 = v38 - 1;
      while ( 1 )
      {
        if ( v41 - v39 == -1LL )
          goto LABEL_76;
        v42 = (_QWORD *)(v40 + 8 * (v39 >> 6));
        v43 = ~*v42;
        if ( !*v42 )
        {
          while ( (unsigned __int64)++v42 <= v40 + 8 * (v41 >> 6) )
          {
            v43 = ~*v42;
            if ( *v42 )
              goto LABEL_56;
          }
LABEL_76:
          LODWORD(v44) = -1;
          goto LABEL_77;
        }
LABEL_56:
        _BitScanForward64((unsigned __int64 *)&v43, ~v43);
        v44 = v43 + (((__int64)v42 - v40) >> 3 << 6);
        if ( v44 > v41 )
        {
          LODWORD(v44) = -1;
        }
        else if ( v44 != -1LL )
        {
          break;
        }
LABEL_77:
        if ( !v39 )
          break;
        v46 = v36 + 1;
        if ( v36 + 1 > v38 )
          v46 = KiPendingTimerBitmaps[2 * v37];
        v41 = v46 - 1;
        v39 = 0LL;
      }
      if ( (_DWORD)v44 != -1 && (unsigned __int8)(((unsigned int)v44 >> 9) - v5) < v35 )
        v35 = (unsigned __int8)(((unsigned int)v44 >> 9) - v5);
      if ( ++v37 >= (unsigned __int16)KiActiveGroups )
      {
        if ( v35 != -1 )
          return (unsigned int)KeTimeIncrement + (a2 & 0xFFFFFFFFFFFC0000uLL) + (v35 << 18);
        return v3;
      }
    }
  }
  v6 = *(_QWORD *)(a1 + 200);
  v7 = 0;
  v8 = KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(a1 + 208) + 1];
  v9 = &KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(a1 + 208)];
  while ( 2 )
  {
    v10 = *v9;
    v11 = (unsigned __int64)v5 << 9;
    if ( v11 >= *v9 )
      v12 = 0LL;
    else
      v12 = (unsigned __int64)v5 << 9;
    v13 = v9[1];
    v14 = v10 - 1;
    while ( 1 )
    {
      if ( v14 - v12 == -1LL )
      {
        LODWORD(v17) = -1;
        goto LABEL_39;
      }
      v15 = (_QWORD *)(v13 + 8 * (v12 >> 6));
      v16 = ~*v15;
      if ( !*v15 )
      {
        while ( (unsigned __int64)++v15 <= v13 + 8 * (v14 >> 6) )
        {
          v16 = ~*v15;
          if ( *v15 )
            goto LABEL_10;
        }
LABEL_43:
        LODWORD(v17) = -1;
        goto LABEL_39;
      }
LABEL_10:
      _BitScanForward64((unsigned __int64 *)&v16, ~v16);
      v17 = v16 + (((__int64)v15 - v13) >> 3 << 6);
      if ( v17 > v14 )
        goto LABEL_43;
      if ( v17 != -1LL )
        break;
LABEL_39:
      if ( !v12 )
        break;
      v34 = v11 + 1;
      if ( v11 + 1 > v10 )
        v34 = *v9;
      v14 = v34 - 1;
      v12 = 0LL;
    }
    if ( (_DWORD)v17 != -1 )
    {
      v18 = (unsigned int)v17 >> 9;
      v7 += (unsigned __int8)(v18 - v5) + 1;
      if ( v7 <= 0x100 )
      {
        if ( (*(_QWORD *)(((unsigned __int64)v18 << 6) + v8) & v6) == 0 )
        {
          v5 = (unsigned __int8)(v18 + 1);
          continue;
        }
        return a2 + (v7 << 18);
      }
    }
    return v3;
  }
}
