/*
 * XREFs of ParkIcon @ 0x1C004BCA4
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C010FE00 (NtUserGetWindowMinimizeRect.c)
 * Callees:
 *     InternalGetRealClientRect @ 0x1C005D230 (InternalGetRealClientRect.c)
 *     IsTrayWindow @ 0x1C006539C (IsTrayWindow.c)
 *     GetRect @ 0x1C0066ABC (GetRect.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 */

char __fastcall ParkIcon(__int64 a1, _DWORD *a2)
{
  int v4; // r14d
  int v5; // r13d
  __int64 Prop; // rax
  int v7; // edx
  int v8; // esi
  int v9; // ebx
  int v10; // r12d
  int v11; // edi
  int v12; // eax
  int v13; // r13d
  __int64 v14; // r14
  int v15; // r15d
  int v16; // r12d
  int v17; // r11d
  int v18; // ecx
  int v19; // eax
  int v21; // [rsp+30h] [rbp-39h]
  int v22; // [rsp+38h] [rbp-31h] BYREF
  int v23; // [rsp+3Ch] [rbp-2Dh]
  int v24; // [rsp+40h] [rbp-29h]
  int v25; // [rsp+44h] [rbp-25h]
  int v26; // [rsp+48h] [rbp-21h] BYREF
  int v27; // [rsp+4Ch] [rbp-1Dh]
  int v28; // [rsp+50h] [rbp-19h]
  int v29; // [rsp+54h] [rbp-15h]
  int v30; // [rsp+58h] [rbp-11h]
  int v31; // [rsp+5Ch] [rbp-Dh]
  int v32; // [rsp+60h] [rbp-9h]
  int v33; // [rsp+64h] [rbp-5h]
  int v34; // [rsp+68h] [rbp-1h]
  int v35; // [rsp+6Ch] [rbp+3h]
  __int64 v36; // [rsp+70h] [rbp+7h]
  int v39; // [rsp+E0h] [rbp+77h]
  int v40; // [rsp+E8h] [rbp+7Fh]

  v4 = *(_DWORD *)(gpsi + 2068LL);
  v5 = *(_DWORD *)(gpsi + 2072LL);
  v35 = v4;
  v30 = v5;
  if ( !(unsigned int)IsTrayWindow(a1) )
  {
    v36 = *(_QWORD *)(a1 + 104);
    InternalGetRealClientRect(v36, (unsigned int)&v22, 1, 0, 1);
    v7 = *(_DWORD *)(gpsi + 2104LL);
    if ( (v7 & 1) != 0 )
    {
      v8 = v24 - v4;
      v39 = -v4;
    }
    else
    {
      v8 = v22 + *(_DWORD *)(gpsi + 2068LL) - *(_DWORD *)(gpsi + 2108LL);
      v39 = v4;
    }
    v31 = v8;
    v9 = v8;
    v26 = v8;
    if ( (v7 & 2) != 0 )
    {
      v10 = v23 + *(_DWORD *)(gpsi + 2072LL) - *(_DWORD *)(gpsi + 2112LL);
      v40 = v5;
    }
    else
    {
      v10 = v25 - v5;
      v40 = -v5;
    }
    v27 = v10;
    v33 = v7 & 4;
    v11 = v10;
    v32 = v10;
    if ( (v7 & 4) != 0 )
      v12 = v25 / v5;
    else
      v12 = v24 / v4;
    v13 = v12;
    if ( v12 < 1 )
      v13 = 1;
    v21 = 0;
    v34 = v13;
    while ( 1 )
    {
      v28 = v9 + v4;
      v29 = v11 + v30;
      LOBYTE(Prop) = v36;
      v14 = *(_QWORD *)(v36 + 112);
      if ( !v14 )
        goto LABEL_17;
      v15 = v35;
      v16 = v21;
      do
      {
        LOBYTE(Prop) = *(_BYTE *)(v14 + 71);
        if ( (Prop & 0x10) == 0 || v14 == a1 )
          goto LABEL_15;
        if ( (Prop & 0x20) != 0 )
        {
          GetRect(v14, &v22, 66LL);
        }
        else
        {
          Prop = GetProp(v14, (unsigned __int16)atomCheckpointProp, 1LL);
          if ( !Prop || (*(_BYTE *)(Prop + 32) & 9) != 9 )
            goto LABEL_15;
          v18 = *(_DWORD *)(Prop + 16);
          v19 = *(_DWORD *)(Prop + 20);
          v22 = v18;
          v23 = v19;
          v25 = v17 + v19;
          v24 = v15 + v18;
        }
        v21 = ++v16;
        LODWORD(Prop) = IntersectRect(&v22, &v22, &v26);
        if ( (_DWORD)Prop )
          break;
LABEL_15:
        v14 = *(_QWORD *)(v14 + 88);
      }
      while ( v14 );
      if ( !v14 )
        goto LABEL_17;
      if ( --v13 )
      {
        if ( !v33 )
        {
          v9 += v39;
          v26 = v9;
          goto LABEL_28;
        }
LABEL_30:
        v11 += v40;
        v27 = v11;
      }
      else
      {
        v13 = v34;
        if ( !v33 )
        {
          v9 = v31;
          v26 = v31;
          goto LABEL_30;
        }
        v9 += v39;
        v11 = v32;
        v26 = v9;
        v27 = v32;
      }
LABEL_28:
      v4 = v35;
      if ( v21 >= 5000 )
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
