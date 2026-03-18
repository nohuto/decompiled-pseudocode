/*
 * XREFs of CalcWakeMask @ 0x1C00A7D90
 * Callers:
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00CF8DC (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     TransferWakeBit @ 0x1C00CF9D8 (TransferWakeBit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcWakeMask(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v6; // eax
  int v7; // r8d
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // r10d
  unsigned int v13; // edx
  int v14; // r10d
  unsigned int v15; // eax
  int v16; // r10d
  unsigned int v17; // edx
  int v18; // r10d
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // r10d
  unsigned int v23; // eax
  int v24; // r10d
  unsigned int v25; // r8d

  if ( a3 )
  {
    v25 = a3 | 0x3C07;
    if ( (a3 & 0x1C07) == 0 )
      v25 = a3;
    result = v25 | 0x98;
    if ( (v25 & 0x98) == 0 )
      result = v25;
  }
  else
  {
    result = 15871LL;
  }
  if ( a1 || a2 != -1 )
  {
    v6 = result & 0xFFFFFEFF;
    v7 = 0;
    if ( a1 )
    {
      if ( a1 > a2 )
      {
        if ( a2 <= 0xA0 && a1 >= 0xA0 )
          goto LABEL_8;
        v8 = 1;
        goto LABEL_9;
      }
      if ( a1 > 0xA0 )
      {
LABEL_8:
        v8 = 0;
        goto LABEL_9;
      }
    }
    else if ( a2 == -1 )
    {
      goto LABEL_99;
    }
    if ( a2 < 0xA0 )
      goto LABEL_8;
    v8 = 1;
LABEL_9:
    if ( v8 )
    {
LABEL_16:
      if ( a1 > a2 )
      {
        if ( a2 >= 0xA9 || a1 <= 0xA1 )
          goto LABEL_18;
        goto LABEL_100;
      }
      if ( a1 > 0xA9 )
      {
LABEL_18:
        v10 = 0;
        goto LABEL_19;
      }
LABEL_99:
      if ( a2 < 0xA1 )
        goto LABEL_18;
LABEL_100:
      v10 = 1;
LABEL_19:
      if ( v10 )
        goto LABEL_25;
      if ( a1 > a2 )
      {
        if ( a2 < 0x20E && a1 > 0x201 )
          goto LABEL_86;
      }
      else if ( a1 <= 0x20E && a2 >= 0x201 )
      {
LABEL_86:
        v11 = 1;
LABEL_23:
        if ( !v11 )
          v6 &= ~4u;
LABEL_25:
        if ( a1 > a2 )
        {
          if ( a2 < 0x109 && a1 > 0x100 )
            goto LABEL_96;
        }
        else if ( a1 <= 0x109 && a2 >= 0x100 )
        {
LABEL_96:
          v12 = 1;
LABEL_28:
          v13 = v6 & 0xFFFFFFFE;
          if ( v12 )
            v13 = v6;
          if ( a1 > a2 )
          {
            if ( a2 < 0xFF && a1 > 0xFF )
              goto LABEL_98;
          }
          else if ( a1 <= 0xFF && a2 >= 0xFF )
          {
LABEL_98:
            v14 = 1;
LABEL_33:
            v15 = v13 & 0xFFFFFBFF;
            if ( v14 )
              v15 = v13;
            if ( a1 > a2 )
            {
              if ( a2 < 0x240 && a1 > 0x240 )
                goto LABEL_134;
            }
            else if ( a1 <= 0x240 && a2 >= 0x240 )
            {
LABEL_134:
              v16 = 1;
LABEL_38:
              v17 = v15;
              if ( v16 )
              {
LABEL_45:
                if ( a1 > a2 )
                {
                  if ( a2 >= 0x257 || a1 <= 0x245 )
                    goto LABEL_47;
                  goto LABEL_78;
                }
                if ( a1 > 0x257 )
                {
LABEL_47:
                  v19 = 0;
                  goto LABEL_48;
                }
LABEL_77:
                if ( a2 < 0x245 )
                  goto LABEL_47;
LABEL_78:
                v19 = 1;
LABEL_48:
                if ( v19 )
                  goto LABEL_58;
                if ( a1 > a2 )
                {
                  if ( a2 < 0x244 && a1 > 0x241 )
                    goto LABEL_145;
                }
                else if ( a1 <= 0x244 && a2 >= 0x241 )
                {
LABEL_145:
                  v20 = 1;
LABEL_52:
                  if ( v20 )
                    goto LABEL_58;
                  if ( a1 > a2 )
                  {
                    if ( a2 < 0x238 && a1 > 0x238 )
                      goto LABEL_148;
                  }
                  else if ( a1 <= 0x238 && a2 >= 0x238 )
                  {
LABEL_148:
                    v21 = 1;
LABEL_56:
                    if ( !v21 )
                      v17 &= ~0x1000u;
LABEL_58:
                    if ( a1 )
                    {
                      if ( a1 > a2 )
                      {
                        if ( a2 <= 0xF && a1 >= 0xF )
                          goto LABEL_61;
                        v22 = 1;
                        goto LABEL_62;
                      }
                      if ( a1 > 0xF )
                      {
LABEL_61:
                        v22 = 0;
                        goto LABEL_62;
                      }
                    }
                    else if ( a2 == -1 )
                    {
                      goto LABEL_74;
                    }
                    if ( a2 < 0xF )
                      goto LABEL_61;
                    v22 = 1;
LABEL_62:
                    v23 = v17 & 0xFFFFFFDF;
                    if ( v22 )
                      v23 = v17;
                    v17 = v23;
                    if ( a1 )
                    {
                      if ( a1 > a2 )
                      {
                        if ( a2 <= 0x113 && a1 >= 0x113 )
                          goto LABEL_67;
                        v24 = 1;
                        goto LABEL_68;
                      }
                      if ( a1 > 0x113 )
                      {
LABEL_67:
                        v24 = 0;
                        goto LABEL_68;
                      }
                    }
                    else if ( a2 == -1 )
                    {
                      goto LABEL_74;
                    }
                    if ( a2 < 0x113 )
                      goto LABEL_67;
                    v24 = 1;
LABEL_68:
                    if ( !v24 )
                    {
                      if ( a1 )
                      {
                        if ( a1 > a2 )
                        {
                          if ( a2 <= 0x118 && a1 >= 0x118 )
                          {
LABEL_72:
                            v17 = v23;
                            if ( !v7 )
                              v17 = v23 & 0xFFFFFFEF;
                            goto LABEL_74;
                          }
LABEL_94:
                          v7 = 1;
                          goto LABEL_72;
                        }
                        if ( a1 > 0x118 )
                          goto LABEL_72;
LABEL_93:
                        if ( a2 < 0x118 )
                          goto LABEL_72;
                        goto LABEL_94;
                      }
                      if ( a2 != -1 )
                        goto LABEL_93;
                    }
LABEL_74:
                    result = v17 | 0x3C07;
                    if ( a1 != 35 )
                      return v17;
                    return result;
                  }
                  v21 = 0;
                  goto LABEL_56;
                }
                v20 = 0;
                goto LABEL_52;
              }
              if ( a1 )
              {
                if ( a1 > a2 )
                {
                  if ( a2 <= 0x11B && a1 >= 0x11B )
                    goto LABEL_42;
                  v18 = 1;
                  goto LABEL_43;
                }
                if ( a1 > 0x11B )
                {
LABEL_42:
                  v18 = 0;
                  goto LABEL_43;
                }
              }
              else if ( a2 == -1 )
              {
                goto LABEL_77;
              }
              if ( a2 < 0x11B )
                goto LABEL_42;
              v18 = 1;
LABEL_43:
              v17 = v15;
              if ( !v18 )
                v17 = v15 & 0xFFFFF7FF;
              goto LABEL_45;
            }
            v16 = 0;
            goto LABEL_38;
          }
          v14 = 0;
          goto LABEL_33;
        }
        v12 = 0;
        goto LABEL_28;
      }
      v11 = 0;
      goto LABEL_23;
    }
    if ( a1 )
    {
      if ( a1 > a2 )
      {
        if ( a2 <= 0x200 && a1 >= 0x200 )
          goto LABEL_13;
        v9 = 1;
        goto LABEL_14;
      }
      if ( a1 > 0x200 )
      {
LABEL_13:
        v9 = 0;
        goto LABEL_14;
      }
    }
    else if ( a2 == -1 )
    {
      goto LABEL_99;
    }
    if ( a2 < 0x200 )
      goto LABEL_13;
    v9 = 1;
LABEL_14:
    if ( !v9 )
      v6 &= ~2u;
    goto LABEL_16;
  }
  return result;
}
