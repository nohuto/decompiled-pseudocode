/*
 * XREFs of ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAVInteractiveControlDevice@@PEAUtagWND@@@Z @ 0x1C022314C
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0222B94 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagI.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0112544 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z @ 0x1C0223460 (-SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z.c)
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
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // rax

  LODWORD(InteractiveControlDefaultScroller::s_ballistics) = *((_DWORD *)InteractiveControlManager::Instance() + 55);
  v5 = *((_DWORD *)InteractiveControlManager::Instance() + 57);
  dword_1C0334100 = 0;
  dword_1C0334108 = 0;
  dword_1C03340F8 = v5;
  dword_1C03340F4 = *((_DWORD *)InteractiveControlManager::Instance() + 59);
  dword_1C03340FC = *((_DWORD *)InteractiveControlManager::Instance() + 61);
  dword_1C0334104 = *((_DWORD *)InteractiveControlManager::Instance() + 63);
  dword_1C033410C = *((_DWORD *)InteractiveControlManager::Instance() + 65);
  v6 = *(_BYTE **)(*((_QWORD *)a3 + 2) + 400LL);
  v7 = v6[985];
  *((_BYTE *)this + 52) = v7;
  v8 = v6[984];
  *((_BYTE *)this + 53) = v8;
  if ( !__PAIR16__(v7, v8) )
    *((_WORD *)this + 26) = 258;
  if ( !*((_BYTE *)this + 52) )
    *((_BYTE *)this + 52) = 2;
  if ( *((_BYTE *)this + 52) == 2 )
    v9 = *((_DWORD *)InteractiveControlManager::Instance() + 51);
  else
    v9 = *((_DWORD *)InteractiveControlManager::Instance() + 53);
  if ( *((_DWORD *)this + 14) == 1 )
    v10 = *((_DWORD *)InteractiveControlManager::Instance() + 45);
  else
    v10 = v9;
  v11 = (unsigned __int8)v6[986];
  if ( v11 <= v10 )
  {
    if ( *((_DWORD *)this + 14) == 1 )
      v11 = *((_DWORD *)InteractiveControlManager::Instance() + 45);
    else
      v11 = v9;
  }
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 12) = v11;
  v12 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 5) = v12;
  *((_QWORD *)this + 2) = v12;
  InteractiveControlDefaultScroller::SetBallisticsLevel(this, 0, 1);
}
