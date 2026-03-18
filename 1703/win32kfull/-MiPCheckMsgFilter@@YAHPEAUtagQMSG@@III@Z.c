/*
 * XREFs of ?MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z @ 0x1C00CCEC8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     IsMouseInPointerActive @ 0x1C00CCE6C (IsMouseInPointerActive.c)
 */

__int64 __fastcall MiPCheckMsgFilter(struct tagQMSG *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebp
  unsigned int v15; // ebp
  unsigned int v16; // ebp
  unsigned int v17; // ebp
  int v18; // eax
  int v19; // eax
  bool v20; // cf
  int v21; // eax
  bool v22; // cf
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v25; // eax

  v4 = 0;
  if ( !a3 && a4 == -1 )
    return 1LL;
  if ( a3 > a4 )
  {
    if ( a2 < a4 || a2 > a3 )
    {
      v10 = 1;
      goto LABEL_7;
    }
LABEL_10:
    v10 = 0;
    goto LABEL_7;
  }
  if ( a2 < a3 )
    goto LABEL_10;
  v10 = 1;
  if ( a2 > a4 )
    goto LABEL_10;
LABEL_7:
  if ( v10 )
    return 1LL;
  if ( !IsMouseInPointerActive(gptiCurrent, (__int64)a1) || (*((_DWORD *)a1 + 25) & 0x800) == 0 )
    return 0LL;
  if ( a3 <= a4 )
  {
    if ( a3 > 0x257 || a4 < 0x245 )
      goto LABEL_18;
  }
  else if ( a4 >= 0x257 || a3 <= 0x245 )
  {
LABEL_18:
    v11 = 0;
    goto LABEL_19;
  }
  v11 = 1;
LABEL_19:
  if ( v11 )
    goto LABEL_25;
  if ( a3 <= a4 )
  {
    if ( a3 > 0x244 || a4 < 0x241 )
      goto LABEL_23;
  }
  else if ( a4 >= 0x244 || a3 <= 0x241 )
  {
LABEL_23:
    v12 = 0;
    goto LABEL_24;
  }
  v12 = 1;
LABEL_24:
  if ( !v12 )
    return 0LL;
LABEL_25:
  if ( a2 <= 0x200 )
  {
    if ( a2 == 512 )
      goto LABEL_57;
    if ( a2 > 0xA7 )
    {
      v14 = a2 - 168;
      if ( !v14 )
        goto LABEL_34;
      v15 = v14 - 1;
      if ( !v15 )
        goto LABEL_51;
      v16 = v15 - 2;
      if ( !v16 )
        goto LABEL_51;
      v17 = v16 - 1;
      if ( !v17 )
        goto LABEL_34;
      if ( v17 == 1 )
        goto LABEL_51;
    }
    else
    {
      if ( a2 >= 0xA6 )
        goto LABEL_51;
      switch ( a2 )
      {
        case 0xA0u:
          goto LABEL_57;
        case 0xA1u:
          goto LABEL_51;
        case 0xA2u:
LABEL_34:
          if ( !a3 && a4 == -1 )
            return 1;
          if ( a3 <= a4 )
          {
            if ( a3 <= 0x247 )
            {
              v13 = 1;
              if ( a4 >= 0x247 )
                goto LABEL_95;
            }
          }
          else if ( a4 > 0x247 || a3 < 0x247 )
          {
            v13 = 1;
            goto LABEL_95;
          }
          v13 = 0;
LABEL_95:
          if ( v13 || !a3 && a4 == -1 )
            return 1;
          v24 = 579;
LABEL_99:
          if ( a3 <= a4 )
          {
            if ( a3 <= v24 )
            {
              v20 = a4 < v24;
              v25 = 1;
              if ( !v20 )
              {
LABEL_106:
                if ( v25 )
                  return 1;
LABEL_57:
                if ( !a3 && a4 == -1 )
                  return 1;
                if ( a3 <= a4 )
                {
                  if ( a3 <= 0x245 )
                  {
                    v19 = 1;
                    if ( a4 >= 0x245 )
                    {
LABEL_66:
                      if ( v19 || !a3 && a4 == -1 )
                        return 1;
                      if ( a3 > a4 )
                      {
                        if ( a4 > 0x241 )
                        {
LABEL_73:
                          v21 = 1;
                          goto LABEL_78;
                        }
                        v20 = a3 < 0x241;
                        goto LABEL_72;
                      }
                      if ( a3 <= 0x241 )
                      {
                        v22 = a4 < 0x241;
                        goto LABEL_76;
                      }
                      goto LABEL_77;
                    }
                  }
                }
                else if ( a4 > 0x245 || a3 < 0x245 )
                {
                  v19 = 1;
                  goto LABEL_66;
                }
                v19 = 0;
                goto LABEL_66;
              }
            }
          }
          else if ( a4 > v24 || a3 < v24 )
          {
            v25 = 1;
            goto LABEL_106;
          }
          v25 = 0;
          goto LABEL_106;
      }
      if ( a2 > 0xA2 )
      {
        if ( a2 > 0xA4 )
          goto LABEL_34;
LABEL_51:
        if ( !a3 && a4 == -1 )
          return 1;
        if ( a3 <= a4 )
        {
          if ( a3 <= 0x246 )
          {
            v18 = 1;
            if ( a4 >= 0x246 )
              goto LABEL_88;
          }
        }
        else if ( a4 > 0x246 || a3 < 0x246 )
        {
          v18 = 1;
          goto LABEL_88;
        }
        v18 = 0;
LABEL_88:
        if ( v18 || !a3 && a4 == -1 )
          return 1;
        v24 = 578;
        goto LABEL_99;
      }
    }
    return 0LL;
  }
  switch ( a2 )
  {
    case 0x201u:
    case 0x203u:
    case 0x204u:
    case 0x206u:
    case 0x207u:
    case 0x209u:
    case 0x20Bu:
    case 0x20Du:
      goto LABEL_51;
    case 0x202u:
    case 0x205u:
    case 0x208u:
    case 0x20Cu:
      goto LABEL_34;
    case 0x20Au:
      if ( !a3 && a4 == -1 )
        return 1;
      v23 = 590;
      break;
    case 0x20Eu:
      if ( !a3 && a4 == -1 )
        return 1;
      v23 = 591;
      break;
    default:
      return 0LL;
  }
  if ( a3 > a4 )
  {
    if ( a4 > v23 )
      goto LABEL_73;
    v20 = a3 < v23;
LABEL_72:
    if ( v20 )
      goto LABEL_73;
    goto LABEL_77;
  }
  if ( a3 <= v23 )
  {
    v22 = a4 < v23;
LABEL_76:
    v21 = 1;
    if ( !v22 )
      goto LABEL_78;
  }
LABEL_77:
  v21 = 0;
LABEL_78:
  if ( v21 )
    return 1;
  return v4;
}
