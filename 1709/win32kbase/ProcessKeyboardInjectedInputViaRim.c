/*
 * XREFs of ProcessKeyboardInjectedInputViaRim @ 0x1C012F000
 * Callers:
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C0130668 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 * Callees:
 *     VKFromVSC @ 0x1C000FE60 (VKFromVSC.c)
 *     xxxProcessKeyEvent @ 0x1C00103E0 (xxxProcessKeyEvent.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0073EF4 (CheckAccessForIntegrityLevelEx.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall ProcessKeyboardInjectedInputViaRim(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v5; // cx
  unsigned __int8 v6; // cl
  __int16 v7; // dx
  __int16 v8; // ax
  __int16 v9; // dx
  __int16 v10; // ax
  __int16 v11; // dx
  __int16 v12; // ax
  __int64 v13; // r8
  __int16 *v14; // rax
  unsigned __int8 v15; // [rsp+30h] [rbp-30h]
  _QWORD v16[4]; // [rsp+38h] [rbp-28h] BYREF

  if ( !gpqForeground
    || *(_DWORD *)(a2 + 392)
    || (result = CheckAccessForIntegrityLevelEx(*(_QWORD *)(a2 + 384), *(_QWORD *)(gpqForeground + 420), 0),
        (_DWORD)result) )
  {
    memset(v16, 0, sizeof(v16));
    if ( a2 )
      v16[1] = *(_QWORD *)a2;
    else
      v16[1] = 0LL;
    v5 = *(_WORD *)(a1 + 4);
    if ( (v5 & 0x20) != 0 || (v5 & 0x40) != 0 )
    {
      v7 = WORD1(v16[0]);
      v6 = v15;
    }
    else
    {
      LOBYTE(v16[0]) = *(_BYTE *)(a1 + 2);
      v6 = VKFromVSC((unsigned __int8 *)v16, (v5 & 2) != 0 ? 0xE0 : 0);
      v7 = v6;
      WORD1(v16[0]) = v6;
    }
    v8 = *(_WORD *)(a1 + 4);
    if ( (v8 & 0x40) != 0 )
    {
      v9 = *(_WORD *)(a1 + 2);
      v6 = *(_BYTE *)(a1 + 2);
      switch ( v9 )
      {
        case 16:
          v6 = -95;
          break;
        case 17:
          v6 = ((v8 & 2) != 0) | 0xA2;
          break;
        case 18:
          v6 = ((v8 & 2) != 0) | 0xA4;
          break;
      }
      v7 = v6 | 0x2000;
      *(_WORD *)(a1 + 2) = 0;
      WORD1(v16[0]) = v7;
      *(_WORD *)(a1 + 4) = v8 ^ 0x40;
    }
    v10 = *(_WORD *)(a1 + 4);
    if ( (v10 & 1) != 0 )
    {
      v7 |= 0x8000u;
      WORD1(v16[0]) = v7;
    }
    if ( (v10 & 0x20) != 0 )
    {
      LOWORD(v16[0]) = *(_WORD *)(a1 + 2);
      v11 = ((v10 & 1) << 15) | 0x10E7 | v7;
    }
    else
    {
      if ( (v10 & 2) != 0 )
      {
        v12 = 256;
      }
      else
      {
        if ( (unsigned __int8)(v6 - 96) > 9u && v6 != 110 )
        {
          LODWORD(v13) = 0;
          if ( !ausNumPadCvt[0] )
          {
LABEL_35:
            HIDWORD(v16[0]) = *(_DWORD *)(a1 + 8);
            *(_DWORD *)(a1 + 8) = 0;
            v16[2] = *(_QWORD *)a1;
            LODWORD(v16[3]) = 0;
            return xxxProcessKeyEvent((unsigned __int16 *)v16, 0LL, 1u, 0, a2 + 384);
          }
          v14 = ausNumPadCvt;
          while ( v6 != *(_BYTE *)v14 )
          {
            v13 = (unsigned int)(v13 + 1);
            v14 = &ausNumPadCvt[v13];
            if ( !*v14 )
              goto LABEL_35;
          }
        }
        v12 = 2048;
      }
      v11 = v12 | v7;
    }
    WORD1(v16[0]) = v11;
    goto LABEL_35;
  }
  return result;
}
