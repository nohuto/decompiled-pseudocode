/*
 * XREFs of ParkIcon @ 0x1C00E8BF0
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C01061E0 (NtUserGetWindowMinimizeRect.c)
 * Callees:
 *     IsTrayWindow @ 0x1C00613B0 (IsTrayWindow.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     GetRect @ 0x1C0062FEC (GetRect.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     InternalGetRealClientRect @ 0x1C00EF82C (InternalGetRealClientRect.c)
 */

char __fastcall ParkIcon(__int64 a1, int *a2)
{
  int v4; // r14d
  int v5; // r13d
  __int64 Prop; // rax
  int v7; // edx
  int v8; // esi
  int v9; // ebx
  int v10; // r15d
  int v11; // edi
  int v12; // eax
  int v13; // r13d
  __int64 v14; // r14
  int v15; // r12d
  int v16; // r15d
  int v17; // r13d
  int v18; // r10d
  int v19; // ecx
  int v20; // eax
  int v22; // [rsp+30h] [rbp-39h]
  int v23; // [rsp+34h] [rbp-35h]
  int v24; // [rsp+38h] [rbp-31h]
  int v25; // [rsp+40h] [rbp-29h] BYREF
  int v26; // [rsp+44h] [rbp-25h]
  int v27; // [rsp+48h] [rbp-21h]
  int v28; // [rsp+4Ch] [rbp-1Dh]
  int v29; // [rsp+50h] [rbp-19h] BYREF
  int v30; // [rsp+54h] [rbp-15h]
  int v31; // [rsp+58h] [rbp-11h]
  int v32; // [rsp+5Ch] [rbp-Dh]
  int v33; // [rsp+60h] [rbp-9h]
  int v34; // [rsp+64h] [rbp-5h]
  int v35; // [rsp+68h] [rbp-1h]
  int v36; // [rsp+6Ch] [rbp+3h]
  int v37; // [rsp+70h] [rbp+7h]
  int v38; // [rsp+74h] [rbp+Bh]
  __int64 v39; // [rsp+78h] [rbp+Fh]
  __int16 v42; // [rsp+E0h] [rbp+77h]
  int v43; // [rsp+E8h] [rbp+7Fh]

  v4 = *(_DWORD *)(gpsi + 2068LL);
  v5 = *(_DWORD *)(gpsi + 2072LL);
  v38 = v4;
  v33 = v5;
  if ( !(unsigned int)IsTrayWindow(a1) )
  {
    v39 = *(_QWORD *)(a1 + 104);
    InternalGetRealClientRect(v39, (unsigned int)&v25, 1, 0, 1);
    v7 = *(_DWORD *)(gpsi + 2104LL);
    if ( (v7 & 1) != 0 )
    {
      v8 = v27 - v4;
      v22 = -v4;
    }
    else
    {
      v8 = v25 + *(_DWORD *)(gpsi + 2068LL) - *(_DWORD *)(gpsi + 2108LL);
      v22 = v4;
    }
    v34 = v8;
    v9 = v8;
    v29 = v8;
    if ( (v7 & 2) != 0 )
    {
      v10 = v26 + *(_DWORD *)(gpsi + 2072LL) - *(_DWORD *)(gpsi + 2112LL);
      v23 = v5;
    }
    else
    {
      v10 = v28 - v5;
      v23 = -v5;
    }
    v30 = v10;
    v36 = v7 & 4;
    v11 = v10;
    v35 = v10;
    if ( (v7 & 4) != 0 )
      v12 = v28 / v5;
    else
      v12 = v27 / v4;
    v13 = v12;
    if ( v12 < 1 )
      v13 = 1;
    v24 = 0;
    v42 = atomCheckpointProp;
    v37 = v13;
    v43 = v13;
    while ( 1 )
    {
      v31 = v9 + v4;
      v32 = v11 + v33;
      LOBYTE(Prop) = v39;
      v14 = *(_QWORD *)(v39 + 112);
      if ( !v14 )
        goto LABEL_17;
      v15 = v38;
      v16 = v24;
      do
      {
        LOBYTE(Prop) = *(_BYTE *)(v14 + 71);
        if ( (Prop & 0x10) == 0 || v14 == a1 )
          goto LABEL_15;
        if ( (Prop & 0x20) != 0 )
        {
          GetRect(v14, &v25, 66);
        }
        else
        {
          Prop = GetProp(v14, v42, 1);
          if ( !Prop || (*(_BYTE *)(Prop + 32) & 9) != 9 )
            goto LABEL_15;
          v19 = *(_DWORD *)(Prop + 16);
          v20 = *(_DWORD *)(Prop + 20);
          v25 = v19;
          v26 = v20;
          v28 = v18 + v20;
          v27 = v15 + v19;
        }
        v24 = ++v16;
        LODWORD(Prop) = IntersectRect(&v25, &v25, &v29);
        if ( (_DWORD)Prop )
          break;
LABEL_15:
        v14 = *(_QWORD *)(v14 + 88);
      }
      while ( v14 );
      v17 = v43;
      if ( !v14 )
        goto LABEL_17;
      --v43;
      if ( v17 == 1 )
      {
        v43 = v37;
        if ( !v36 )
        {
          v9 = v34;
          v29 = v34;
          goto LABEL_30;
        }
        v9 += v22;
        v11 = v35;
        v29 = v9;
        v30 = v35;
      }
      else
      {
        if ( !v36 )
        {
          v9 += v22;
          v29 = v9;
          goto LABEL_28;
        }
LABEL_30:
        v11 += v23;
        v30 = v11;
      }
LABEL_28:
      v4 = v38;
      if ( v24 >= 5000 )
      {
LABEL_17:
        *a2 = v9;
        a2[1] = v11;
        return Prop;
      }
    }
  }
  LOBYTE(Prop) = 0;
  *a2 = -32000;
  a2[1] = -32000;
  return Prop;
}
