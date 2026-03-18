/*
 * XREFs of ?FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z @ 0x1C021FAF0
 * Callers:
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C021F7D8 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?OnTimerNotification@InteractiveControlDevice@@QEAAJXZ @ 0x1C02200B0 (-OnTimerNotification@InteractiveControlDevice@@QEAAJXZ.c)
 * Callees:
 *     ?DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z @ 0x1C021F920 (-DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z.c)
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C0220CF4 (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1C0220F30 (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 */

void __fastcall InteractiveControlDevice::FlushBufferedInput(InteractiveControlDevice *this, int a2)
{
  struct InteractiveControlInput **v2; // rdi
  struct InteractiveControlInput *v5; // rdx
  struct InteractiveControlInput **v6; // rbp
  int v7; // esi
  struct InteractiveControlInput *v8; // r14
  unsigned int v9; // r15d
  struct tagWND *updated; // rax

  v2 = (struct InteractiveControlInput **)*((_QWORD *)this + 45);
  if ( v2 && *((_DWORD *)this + 89) )
  {
    v5 = *v2;
    v6 = (struct InteractiveControlInput **)((char *)this + 16);
    if ( v2 != (struct InteractiveControlInput **)((char *)this + 16) )
    {
      v7 = ~a2;
      do
      {
        v8 = (struct InteractiveControlInput *)v2;
        v2 = (struct InteractiveControlInput **)v2[1];
        v9 = v7 & InteractiveControlDevice::DetermineMessageCreationFlags(this, v5, v8);
        if ( v9 )
        {
          updated = InteractiveControlDevice::UpdateInputTarget(this, v9);
          InteractiveControlInput::GenerateMessages(v8, updated, *((unsigned int *)this + 16), v9);
        }
        v5 = v8;
      }
      while ( v2 != v6 );
    }
    *((_DWORD *)this + 89) = 0;
    *((_QWORD *)this + 45) = 0LL;
  }
}
