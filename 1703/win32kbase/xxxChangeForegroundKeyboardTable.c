/*
 * XREFs of xxxChangeForegroundKeyboardTable @ 0x1C0078DC0
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x1C007A180 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C007A3A8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C0049070 (HMAssignmentLock.c)
 *     SetGlobalKeyboardTableInfo @ 0x1C007A120 (SetGlobalKeyboardTableInfo.c)
 *     ApiSetEditionResetIMEConversionStatus @ 0x1C007A648 (ApiSetEditionResetIMEConversionStatus.c)
 *     UpdateKeyLights @ 0x1C008EA30 (UpdateKeyLights.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C012D260 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 */

void __fastcall xxxChangeForegroundKeyboardTable(struct tagKL *a1, struct tagKL *a2)
{
  bool v4; // zf
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 == (struct tagKL *)qword_1C018C060 )
    return;
  v8[1] = a2;
  v8[0] = &gspklGlobalActive;
  HMAssignmentLock((__int64)v8);
  ApiSetEditionResetIMEConversionStatus(a1, a2);
  v4 = qword_1C018C060 == 0;
  qword_1C018C060 = (__int64)a2;
  if ( v4 )
  {
LABEL_4:
    SetGlobalKeyboardTableInfo(a2);
    return;
  }
  if ( a1 != a2 && (!a1 || *((_QWORD *)a1 + 6) != *((_QWORD *)a2 + 6)) || !gpKL )
  {
    xxxManageKeyboardModifiers(a1, a2);
    if ( (*((_WORD *)a2 + 20) & 0x3FF) == 0x11 )
    {
      if ( !a1 )
      {
        if ( (BYTE5(gafAsyncKeyState) & 8) != 0 )
        {
          gfKanaToggle = 1;
LABEL_16:
          byte_1C018A9C5 |= 8u;
          BYTE5(gafAsyncKeyState) |= 8u;
          if ( gptiForeground )
          {
            v5 = *((_QWORD *)gptiForeground + 48);
            if ( v5 )
              *(_BYTE *)(v5 + 197) |= 8u;
          }
LABEL_25:
          UpdateKeyLights(1LL);
          goto LABEL_26;
        }
        gfKanaToggle = 0;
LABEL_22:
        byte_1C018A9C5 &= ~8u;
        BYTE5(gafAsyncKeyState) &= ~8u;
        if ( gptiForeground )
        {
          v6 = *((_QWORD *)gptiForeground + 48);
          if ( v6 )
            *(_BYTE *)(v6 + 197) &= ~8u;
        }
        goto LABEL_25;
      }
      if ( (*((_WORD *)a1 + 20) & 0x3FF) != 0x11 )
      {
        if ( gfKanaToggle )
          goto LABEL_16;
        goto LABEL_22;
      }
    }
    else
    {
      if ( !a1 )
        goto LABEL_4;
      if ( (*((_WORD *)a1 + 20) & 0x3FF) == 0x11 )
      {
        gfKanaToggle = (BYTE5(gafAsyncKeyState) & 8) != 0;
        goto LABEL_22;
      }
    }
LABEL_26:
    if ( a1 )
    {
      if ( (*((_WORD *)a1 + 20) & 0x3FF) == 0x12 && (*((_WORD *)a2 + 20) & 0x3FF) != 0x12 )
      {
        byte_1C018A9C5 &= ~4u;
        BYTE5(gafAsyncKeyState) &= ~4u;
        if ( gptiForeground )
        {
          v7 = *((_QWORD *)gptiForeground + 48);
          if ( v7 )
            *(_BYTE *)(v7 + 197) &= ~4u;
        }
      }
    }
    goto LABEL_4;
  }
}
