/*
 * XREFs of InternalMapVirtualKeyEx @ 0x1C0028EF0
 * Callers:
 *     NtUserMapVirtualKeyEx @ 0x1C0029060 (NtUserMapVirtualKeyEx.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C012CF90 (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C012F878 (-SendKeyUpDown@@YAXEE@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C012FB70 (ProcessKeyboardInputWorker.c)
 *     _GetKeyNameText @ 0x1C0130250 (_GetKeyNameText.c)
 * Callees:
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 */

unsigned int __fastcall InternalMapVirtualKeyEx(unsigned int a1, int a2, __int64 a3)
{
  int v3; // r9d
  int v4; // r11d
  unsigned int v6; // r10d
  unsigned __int16 v7; // dx
  unsigned __int8 *v8; // rcx
  unsigned int result; // eax
  unsigned __int8 v10; // al
  __int64 *v11; // rcx
  unsigned __int8 **v12; // rdx
  unsigned __int8 *v13; // rcx
  _BYTE *v14; // rax
  unsigned __int8 *v15; // rcx

  v3 = 0;
  v4 = a1;
  v6 = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      if ( a2 == 2 )
      {
        if ( a1 - 65 <= 0x19 )
          return a1;
        v12 = *(unsigned __int8 ***)(a3 + 8);
        if ( v12 )
        {
LABEL_43:
          v13 = *v12;
          if ( *v12 )
          {
            while ( 1 )
            {
              if ( !*v13 )
              {
                v12 += 2;
                goto LABEL_43;
              }
              if ( *v13 == v4 )
                break;
              v13 += *((unsigned __int8 *)v12 + 9);
            }
            LOWORD(result) = *((_WORD *)v13 + 1);
            if ( (_WORD)result == 0xF001 )
              return *(unsigned __int16 *)&v13[*((unsigned __int8 *)v12 + 9) + 2] | 0x80000000;
            if ( (_WORD)result != 0xF000 )
              return (unsigned __int16)result;
            return 0;
          }
        }
LABEL_38:
        UserSetLastError(87LL);
        return 0;
      }
      if ( a2 != 3 )
      {
        if ( a2 == 4 )
          goto LABEL_2;
        goto LABEL_38;
      }
    }
    if ( a1 < *(unsigned __int8 *)(a3 + 56) )
    {
      v6 = *(unsigned __int8 *)(*(_QWORD *)(a3 + 48) + 2LL * a1);
      goto LABEL_29;
    }
    if ( (a1 & 0xFFFFFF00) == 0xE000 )
    {
      v14 = *(_BYTE **)(a3 + 64);
    }
    else
    {
      if ( (a1 & 0xFFFFFF00) != 0xE100 )
      {
LABEL_29:
        if ( a2 == 1 && v6 - 160 <= 5 )
          v6 = ((v6 - 160) >> 1) + 16;
        if ( v6 != 255 )
          return v6;
        return v3;
      }
      v14 = *(_BYTE **)(a3 + 72);
    }
    if ( v14 )
    {
      while ( *((_WORD *)v14 + 1) )
      {
        if ( *v14 == (_BYTE)a1 )
        {
          v6 = (unsigned __int8)v14[2];
          goto LABEL_29;
        }
        v14 += 4;
      }
    }
    goto LABEL_29;
  }
LABEL_2:
  if ( a1 - 16 <= 2 )
    v4 = 2 * a1 + 128;
  v7 = 0;
  if ( !*(_BYTE *)(a3 + 56) )
  {
LABEL_7:
    v8 = *(unsigned __int8 **)(a3 + 64);
    if ( v8 )
    {
      while ( *((_WORD *)v8 + 1) )
      {
        if ( v8[2] == v4 )
        {
          result = *v8;
          if ( a2 == 4 )
            result |= 0xE000u;
          return result;
        }
        v8 += 4;
      }
    }
    if ( a2 == 4 )
    {
      v15 = *(unsigned __int8 **)(a3 + 72);
      if ( v15 )
      {
        while ( *((_WORD *)v15 + 1) )
        {
          if ( v15[2] == v4 )
            return *v15 | 0xE100;
          v15 += 4;
          if ( !v15 )
            break;
        }
      }
    }
    v10 = aVkNumpad;
    v11 = &aVkNumpad;
    while ( v10 )
    {
      if ( v10 == v4 )
        return (_DWORD)v11 - (unsigned int)&aVkNumpad + 71;
      v11 = (__int64 *)((char *)v11 + 1);
      v10 = *(_BYTE *)v11;
    }
    return 0;
  }
  while ( *(unsigned __int8 *)(*(_QWORD *)(a3 + 48) + 2LL * v7) != v4 )
  {
    if ( ++v7 >= *(unsigned __int8 *)(a3 + 56) )
      goto LABEL_7;
  }
  return (unsigned __int8)v7;
}
