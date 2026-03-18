/*
 * XREFs of ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAVInteractiveControlDevice@@PEAUtagWND@@@Z @ 0x1C0221CB8
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0221680 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagI.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0108804 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

void __fastcall InteractiveControlDefaultScroller::Reset(
        InteractiveControlDefaultScroller *this,
        struct InteractiveControlDevice *a2,
        struct tagWND *a3)
{
  int v5; // edx
  _BYTE *v6; // rsi
  unsigned __int8 v7; // al
  unsigned __int8 v8; // cl
  char v9; // al
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // rax

  LODWORD(InteractiveControlDefaultScroller::s_ballistics) = *((_DWORD *)InteractiveControlManager::Instance() + 55);
  v5 = *((_DWORD *)InteractiveControlManager::Instance() + 57);
  dword_1C03389F0 = 0;
  dword_1C03389F8 = 0;
  dword_1C03389E8 = v5;
  dword_1C03389E4 = *((_DWORD *)InteractiveControlManager::Instance() + 59);
  dword_1C03389EC = *((_DWORD *)InteractiveControlManager::Instance() + 61);
  dword_1C03389F4 = *((_DWORD *)InteractiveControlManager::Instance() + 63);
  dword_1C03389FC = *((_DWORD *)InteractiveControlManager::Instance() + 65);
  v6 = *(_BYTE **)(*((_QWORD *)a3 + 2) + 376LL);
  v7 = v6[977];
  *((_BYTE *)this + 52) = v7;
  v8 = v6[976];
  *((_BYTE *)this + 53) = v8;
  if ( !__PAIR16__(v7, v8) )
    *((_WORD *)this + 26) = 258;
  v9 = *((_BYTE *)this + 52);
  if ( !v9 )
    v9 = 2;
  *((_BYTE *)this + 52) = v9;
  if ( v9 == 2 )
    v10 = *((_DWORD *)InteractiveControlManager::Instance() + 51);
  else
    v10 = *((_DWORD *)InteractiveControlManager::Instance() + 53);
  if ( *((_DWORD *)this + 14) == 1 )
    v11 = *((_DWORD *)InteractiveControlManager::Instance() + 45);
  else
    v11 = v10;
  v12 = (unsigned __int8)v6[978];
  if ( v12 <= v11 )
  {
    if ( *((_DWORD *)this + 14) == 1 )
      v12 = *((_DWORD *)InteractiveControlManager::Instance() + 45);
    else
      v12 = v10;
  }
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 12) = v12;
  v13 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 5) = v13;
  *((_QWORD *)this + 2) = v13;
  InteractiveControlDefaultScroller::SetBallisticsLevel(this, 0, 1);
}
