/*
 * XREFs of ?FillPointerInfo@LegacyInjectionRawInputProvider@@AEAAXPEAUtagPOINTER_INFO@@AEBUTouchContact@@HAEAUtagLegacyISMPOSTINPUTINFO@@@Z @ 0x18006BD38
 * Callers:
 *     ?PutTouchEvent@LegacyInjectionRawInputProvider@@UEAAJUTouchInfoInjection@@@Z @ 0x18006BB70 (-PutTouchEvent@LegacyInjectionRawInputProvider@@UEAAJUTouchInfoInjection@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall LegacyInjectionRawInputProvider::FillPointerInfo(
        LegacyInjectionRawInputProvider *this,
        struct tagPOINTER_INFO *a2,
        const struct TouchContact *a3,
        int a4)
{
  int ScreenY; // eax
  int v5; // eax
  UINT16 Flags; // cx
  int v7; // eax

  *(_DWORD *)a2 = 2;
  *((_DWORD *)a2 + 1) = a3->ContactID;
  *((_DWORD *)a2 + 12) = a3->ScreenX;
  ScreenY = a3->ScreenY;
  *((_DWORD *)a2 + 3) = 0;
  *((_DWORD *)a2 + 13) = ScreenY;
  v5 = 0;
  Flags = a3->Flags;
  if ( (Flags & 8) != 0 )
  {
    *((_DWORD *)a2 + 3) = 2;
    v5 = 2;
    if ( (a3->Flags & 3) != 0 )
      goto LABEL_7;
    v5 = 131074;
    *((_DWORD *)a2 + 3) = 131074;
    Flags = a3->Flags;
  }
  if ( (Flags & 3) != 0 )
  {
LABEL_7:
    v7 = v5 | 0x14;
    *((_DWORD *)a2 + 3) = v7;
    if ( (a3->Flags & 1) != 0 )
      v5 = v7 | 0x10000;
    else
      v5 = v7 | 0x20000;
    goto LABEL_10;
  }
  if ( (Flags & 4) == 0 )
    goto LABEL_11;
  v5 |= 0x40000u;
LABEL_10:
  *((_DWORD *)a2 + 3) = v5;
LABEL_11:
  if ( a4 )
  {
    v5 |= 0x2000u;
    *((_DWORD *)a2 + 3) = v5;
  }
  if ( (a3->Flags & 0x2000) != 0 )
    *((_DWORD *)a2 + 3) = v5 | 0x8000;
}
