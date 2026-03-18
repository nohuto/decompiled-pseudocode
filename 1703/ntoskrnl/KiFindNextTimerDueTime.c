/*
 * XREFs of KiFindNextTimerDueTime @ 0x1400F70A0
 * Callers:
 *     PpmIdlePrepare @ 0x1400F60C0 (PpmIdlePrepare.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1400F96E0 (KiGetNextTimerExpirationDueTime.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiFindNextTimerDueTime(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r13
  unsigned int v4; // r15d
  __int64 v6; // rbp
  unsigned int v7; // ebx
  __int64 v8; // r12
  __int64 *v9; // r14
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdi
  __int64 v13; // rsi
  unsigned __int64 v14; // r10
  _QWORD *v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // rsi
  unsigned int v22; // edi
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r11
  _QWORD *v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  int v31; // r8d
  __int64 v32; // r10
  unsigned __int64 v33; // r8
  unsigned int v34; // r10d
  unsigned __int64 v35; // rbp
  unsigned __int16 v36; // di
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // r11
  __int64 v39; // r14
  unsigned __int64 v40; // r9
  _QWORD *v41; // rcx
  __int64 v42; // rax
  unsigned __int64 v43; // rcx
  __int64 v44; // r11
  __int64 v45; // r9

  v3 = -1LL;
  v4 = (unsigned __int8)(a2 >> 18);
  if ( !KiSerializeTimerExpiration )
  {
    if ( v4 != (unsigned __int8)*(_DWORD *)(a1 + 11888) )
      return 0LL;
    if ( !a3 )
    {
      v6 = *(_QWORD *)(a1 + 200);
      v7 = 0;
      v8 = KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(a1 + 208) + 1];
      v9 = &KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(a1 + 208)];
      while ( 1 )
      {
        v10 = *v9;
        v11 = (unsigned __int64)v4 << 9;
        if ( v11 >= *v9 )
          v12 = 0LL;
        else
          v12 = (unsigned __int64)v4 << 9;
        v13 = v9[1];
        v14 = v10 - 1;
        while ( 1 )
        {
          if ( v14 - v12 == -1LL )
          {
            LODWORD(v17) = -1;
            goto LABEL_44;
          }
          v15 = (_QWORD *)(v13 + 8 * (v12 >> 6));
          v16 = ((1LL << (v12 & 0x3F)) - 1) | ~*v15;
          if ( v16 == -1 )
          {
            while ( (unsigned __int64)++v15 <= v13 + 8 * (v14 >> 6) )
            {
              v16 = ~*v15;
              if ( *v15 )
                goto LABEL_12;
            }
LABEL_48:
            LODWORD(v17) = -1;
            goto LABEL_44;
          }
LABEL_12:
          _BitScanForward64((unsigned __int64 *)&v16, ~v16);
          v17 = v16 + (((__int64)v15 - v13) >> 3 << 6);
          if ( v17 > v14 )
            goto LABEL_48;
          if ( v17 != -1LL )
            break;
LABEL_44:
          if ( !v12 )
            break;
          v32 = v11 + 1;
          if ( v11 + 1 > v10 )
            v32 = *v9;
          v14 = v32 - 1;
          v12 = 0LL;
        }
        if ( (_DWORD)v17 == -1 )
          return v3;
        v18 = (unsigned int)v17 >> 9;
        v7 += (unsigned __int8)(v18 - v4) + 1;
        if ( v7 > 0x100 )
          return v3;
        if ( (*(_QWORD *)(((unsigned __int64)v18 << 6) + v8) & v6) != 0 )
          return a2 + (v7 << 18);
        v4 = (unsigned __int8)(v18 + 1);
      }
    }
    v34 = -1;
    v35 = v4 << 9;
    v36 = 0;
LABEL_53:
    v37 = KiPendingTimerBitmaps[2 * v36];
    if ( v35 >= v37 )
      v38 = 0LL;
    else
      v38 = v4 << 9;
    v39 = KiPendingTimerBitmaps[2 * v36 + 1];
    v40 = v37 - 1;
    while ( 1 )
    {
      if ( v40 - v38 == -1LL )
      {
        LODWORD(v43) = -1;
      }
      else
      {
        v41 = (_QWORD *)(v39 + 8 * (v38 >> 6));
        v42 = ((1LL << (v38 & 0x3F)) - 1) | ~*v41;
        if ( v42 == -1 )
        {
          while ( (unsigned __int64)++v41 <= v39 + 8 * (v40 >> 6) )
          {
            v42 = ~*v41;
            if ( *v41 )
              goto LABEL_58;
          }
LABEL_75:
          LODWORD(v43) = -1;
          goto LABEL_76;
        }
LABEL_58:
        _BitScanForward64((unsigned __int64 *)&v42, ~v42);
        v43 = v42 + (((__int64)v41 - v39) >> 3 << 6);
        if ( v43 > v40 )
          goto LABEL_75;
        if ( v43 != -1LL )
          goto LABEL_60;
      }
LABEL_76:
      if ( !v38 )
      {
LABEL_60:
        if ( (_DWORD)v43 != -1 && (unsigned __int8)(((unsigned int)v43 >> 9) - v4) < v34 )
          v34 = (unsigned __int8)(((unsigned int)v43 >> 9) - v4);
        if ( ++v36 >= (unsigned __int16)KiActiveGroups )
        {
          if ( v34 != -1 )
            return (unsigned int)KeTimeIncrement + (a2 & 0xFFFFFFFFFFFC0000uLL) + (v34 << 18);
          return v3;
        }
        goto LABEL_53;
      }
      v45 = v35 + 1;
      if ( v35 + 1 > v37 )
        v45 = KiPendingTimerBitmaps[2 * v36];
      v40 = v45 - 1;
      v38 = 0LL;
    }
  }
  if ( !a3 )
    return v3;
  v19 = *(_DWORD *)(a1 + 11888);
  v20 = (unsigned __int8)(v4 - v19);
  if ( v20 > 1 )
    return 0LL;
  v21 = (unsigned __int8)v19;
  v22 = 0;
  v23 = (a2 & 0xFFFFFFFFFFFC0000uLL) - (v20 << 18) + 0x4000000;
  while ( 2 )
  {
    if ( (unsigned __int64)(unsigned int)v21 >= KiPendingTimerBitmaps[0] )
      v24 = 0LL;
    else
      v24 = (unsigned int)v21;
    v25 = KiPendingTimerBitmaps[0] - 1;
    while ( 1 )
    {
      if ( v25 - v24 == -1LL )
      {
        LODWORD(v28) = -1;
      }
      else
      {
        v26 = (_QWORD *)(qword_1403E4FD8[0] + 8 * (v24 >> 6));
        v27 = ((1LL << (v24 & 0x3F)) - 1) | ~*v26;
        if ( v27 == -1 )
        {
          while ( (unsigned __int64)++v26 <= qword_1403E4FD8[0] + 8 * (v25 >> 6) )
          {
            v27 = ~*v26;
            if ( *v26 )
              goto LABEL_30;
          }
LABEL_66:
          LODWORD(v28) = -1;
          goto LABEL_67;
        }
LABEL_30:
        _BitScanForward64((unsigned __int64 *)&v27, ~v27);
        v28 = v27 + (((__int64)v26 - qword_1403E4FD8[0]) >> 3 << 6);
        if ( v28 > v25 )
          goto LABEL_66;
        if ( v28 != -1LL )
          break;
      }
LABEL_67:
      if ( !v24 )
        break;
      v44 = v21 + 1;
      if ( (unsigned __int64)(v21 + 1) > KiPendingTimerBitmaps[0] )
        v44 = KiPendingTimerBitmaps[0];
      v25 = v44 - 1;
      v24 = 0LL;
    }
    if ( (_DWORD)v28 != -1 )
    {
      v22 += (unsigned __int8)(v28 - v21 + 1);
      if ( v22 <= 0x100 )
      {
        v29 = 32LL * (unsigned int)v28;
        v30 = *(_QWORD *)(v29 + KiProcessorBlock[0] + 14488);
        if ( v30 >= v3 )
          goto LABEL_39;
        if ( v30 >= v23 )
        {
          v3 = *(_QWORD *)(v29 + KiProcessorBlock[0] + 14488);
        }
        else
        {
          v31 = (unsigned __int8)(v30 >> 18);
          if ( v31 == (_DWORD)v28 )
            return *(_QWORD *)(v29 + KiProcessorBlock[0] + 14488);
          v33 = (v30 & 0xFFFFFFFFFFFC0000uLL) + ((((_DWORD)v28 - v31) << 18) & 0x3FC0000);
          if ( v33 < v3 )
          {
            v3 = v33;
            v21 = (unsigned __int8)(v28 + 1);
            continue;
          }
        }
LABEL_39:
        v21 = (unsigned __int8)(v28 + 1);
        continue;
      }
    }
    return v3;
  }
}
