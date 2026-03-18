/*
 * XREFs of CalcWakeMask @ 0x1C00522A0
 * Callers:
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00CCF90 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     TransferWakeBit @ 0x1C00CD08C (TransferWakeBit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcWakeMask(unsigned int a1, unsigned int a2, int a3)
{
  unsigned int v5; // r10d
  __int64 result; // rax
  unsigned int v7; // r10d
  int v8; // eax
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // r8d
  unsigned int v14; // edx
  int v15; // r10d
  unsigned int v16; // r8d
  int v17; // r10d
  unsigned int v18; // edx
  int v19; // r10d
  int v20; // r8d
  int v21; // r8d
  int v22; // r8d
  int v23; // r8d
  int v24; // r8d
  int v25; // r8d

  if ( a3 )
  {
    v25 = a3 | 0x3C07;
    if ( (a3 & 0x1C07) == 0 )
      v25 = a3;
    v5 = v25 | 0x98;
    if ( (v25 & 0x98) == 0 )
      v5 = v25;
  }
  else
  {
    v5 = 15871;
  }
  if ( !a1 && a2 == -1 )
    return v5;
  v7 = v5 & 0xFFFFFEFF;
  v8 = 0;
  if ( a1 )
  {
    if ( a1 > a2 )
    {
      if ( a2 <= 0xA0 && a1 >= 0xA0 )
        goto LABEL_9;
      v9 = 1;
      goto LABEL_10;
    }
    if ( a1 > 0xA0 )
    {
LABEL_9:
      v9 = 0;
      goto LABEL_10;
    }
  }
  else if ( a2 == -1 )
  {
    goto LABEL_100;
  }
  if ( a2 < 0xA0 )
    goto LABEL_9;
  v9 = 1;
LABEL_10:
  if ( !v9 )
  {
    if ( a1 )
    {
      if ( a1 > a2 )
      {
        if ( a2 <= 0x200 && a1 >= 0x200 )
          goto LABEL_14;
        v10 = 1;
        goto LABEL_15;
      }
      if ( a1 > 0x200 )
      {
LABEL_14:
        v10 = 0;
        goto LABEL_15;
      }
    }
    else if ( a2 == -1 )
    {
      goto LABEL_100;
    }
    if ( a2 < 0x200 )
      goto LABEL_14;
    v10 = 1;
LABEL_15:
    if ( !v10 )
      v7 &= ~2u;
  }
  if ( a1 > a2 )
  {
    if ( a2 >= 0xA9 || a1 <= 0xA1 )
      goto LABEL_19;
    goto LABEL_101;
  }
  if ( a1 > 0xA9 )
  {
LABEL_19:
    v11 = 0;
    goto LABEL_20;
  }
LABEL_100:
  if ( a2 < 0xA1 )
    goto LABEL_19;
LABEL_101:
  v11 = 1;
LABEL_20:
  if ( v11 )
    goto LABEL_26;
  if ( a1 > a2 )
  {
    if ( a2 < 0x20E && a1 > 0x201 )
      goto LABEL_87;
LABEL_23:
    v12 = 0;
    goto LABEL_24;
  }
  if ( a1 > 0x20E || a2 < 0x201 )
    goto LABEL_23;
LABEL_87:
  v12 = 1;
LABEL_24:
  if ( !v12 )
    v7 &= ~4u;
LABEL_26:
  if ( a1 > a2 )
  {
    if ( a2 < 0x109 && a1 > 0x100 )
      goto LABEL_97;
LABEL_28:
    v13 = 0;
    goto LABEL_29;
  }
  if ( a1 > 0x109 || a2 < 0x100 )
    goto LABEL_28;
LABEL_97:
  v13 = 1;
LABEL_29:
  v14 = v7 & 0xFFFFFFFE;
  if ( v13 )
    v14 = v7;
  if ( a1 > a2 )
  {
    if ( a2 < 0xFF && a1 > 0xFF )
      goto LABEL_99;
LABEL_33:
    v15 = 0;
    goto LABEL_34;
  }
  if ( a1 > 0xFF || a2 < 0xFF )
    goto LABEL_33;
LABEL_99:
  v15 = 1;
LABEL_34:
  v16 = v14 & 0xFFFFFBFF;
  if ( v15 )
    v16 = v14;
  if ( a1 > a2 )
  {
    if ( a2 < 0x240 && a1 > 0x240 )
      goto LABEL_135;
LABEL_38:
    v17 = 0;
    goto LABEL_39;
  }
  if ( a1 > 0x240 || a2 < 0x240 )
    goto LABEL_38;
LABEL_135:
  v17 = 1;
LABEL_39:
  v18 = v16;
  if ( !v17 )
  {
    if ( a1 )
    {
      if ( a1 > a2 )
      {
        if ( a2 <= 0x11B && a1 >= 0x11B )
          goto LABEL_43;
        v19 = 1;
        goto LABEL_44;
      }
      if ( a1 > 0x11B )
      {
LABEL_43:
        v19 = 0;
        goto LABEL_44;
      }
    }
    else if ( a2 == -1 )
    {
      goto LABEL_78;
    }
    if ( a2 < 0x11B )
      goto LABEL_43;
    v19 = 1;
LABEL_44:
    v18 = v16;
    if ( !v19 )
      v18 = v16 & 0xFFFFF7FF;
  }
  if ( a1 > a2 )
  {
    if ( a2 >= 0x257 || a1 <= 0x245 )
      goto LABEL_48;
    goto LABEL_79;
  }
  if ( a1 > 0x257 )
  {
LABEL_48:
    v20 = 0;
    goto LABEL_49;
  }
LABEL_78:
  if ( a2 < 0x245 )
    goto LABEL_48;
LABEL_79:
  v20 = 1;
LABEL_49:
  if ( v20 )
    goto LABEL_59;
  if ( a1 > a2 )
  {
    if ( a2 < 0x244 && a1 > 0x241 )
      goto LABEL_146;
LABEL_52:
    v21 = 0;
    goto LABEL_53;
  }
  if ( a1 > 0x244 || a2 < 0x241 )
    goto LABEL_52;
LABEL_146:
  v21 = 1;
LABEL_53:
  if ( v21 )
    goto LABEL_59;
  if ( a1 > a2 )
  {
    if ( a2 < 0x238 && a1 > 0x238 )
      goto LABEL_149;
LABEL_56:
    v22 = 0;
    goto LABEL_57;
  }
  if ( a1 > 0x238 || a2 < 0x238 )
    goto LABEL_56;
LABEL_149:
  v22 = 1;
LABEL_57:
  if ( !v22 )
    v18 &= ~0x1000u;
LABEL_59:
  if ( a1 )
  {
    if ( a1 > a2 )
    {
      if ( a2 <= 0xF && a1 >= 0xF )
        goto LABEL_62;
      v23 = 1;
      goto LABEL_63;
    }
    if ( a1 > 0xF )
    {
LABEL_62:
      v23 = 0;
      goto LABEL_63;
    }
  }
  else if ( a2 == -1 )
  {
    goto LABEL_75;
  }
  if ( a2 < 0xF )
    goto LABEL_62;
  v23 = 1;
LABEL_63:
  if ( !v23 )
    v18 &= ~0x20u;
  if ( a1 )
  {
    if ( a1 > a2 )
    {
      if ( a2 <= 0x113 && a1 >= 0x113 )
        goto LABEL_68;
      v24 = 1;
      goto LABEL_69;
    }
    if ( a1 > 0x113 )
    {
LABEL_68:
      v24 = 0;
      goto LABEL_69;
    }
  }
  else if ( a2 == -1 )
  {
    goto LABEL_75;
  }
  if ( a2 < 0x113 )
    goto LABEL_68;
  v24 = 1;
LABEL_69:
  if ( !v24 )
  {
    if ( a1 )
    {
      if ( a1 > a2 )
      {
        if ( a2 <= 0x118 && a1 >= 0x118 )
        {
LABEL_73:
          if ( !v8 )
            v18 &= ~0x10u;
          goto LABEL_75;
        }
LABEL_95:
        v8 = 1;
        goto LABEL_73;
      }
      if ( a1 > 0x118 )
        goto LABEL_73;
LABEL_94:
      if ( a2 < 0x118 )
        goto LABEL_73;
      goto LABEL_95;
    }
    if ( a2 != -1 )
      goto LABEL_94;
  }
LABEL_75:
  result = v18 | 0x3C07;
  if ( a1 != 35 )
    return v18;
  return result;
}
