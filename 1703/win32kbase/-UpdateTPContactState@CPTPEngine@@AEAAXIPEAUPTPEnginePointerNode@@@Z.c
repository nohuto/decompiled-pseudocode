/*
 * XREFs of ?UpdateTPContactState@CPTPEngine@@AEAAXIPEAUPTPEnginePointerNode@@@Z @ 0x1C0138AF4
 * Callers:
 *     ?FixupPrimaryGestureContact@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@IH@Z @ 0x1C0135B24 (-FixupPrimaryGestureContact@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@IH@Z.c)
 *     ?FixupSecondaryGestureContacts@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@IH@Z @ 0x1C0135C74 (-FixupSecondaryGestureContacts@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@IH@Z.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C013804C (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 */

void __fastcall CPTPEngine::UpdateTPContactState(CPTPEngine *this, unsigned int a2, struct PTPEnginePointerNode *a3)
{
  int v3; // eax
  unsigned int v5; // r11d
  char *v6; // rdx
  int v7; // r8d
  unsigned int v8; // r8d
  _DWORD *v9; // rdx
  int v10; // eax
  int v11; // eax

  v3 = *((_DWORD *)a3 + 3);
  v5 = a2;
  v6 = (char *)this + 288 * a2 + 1168;
  if ( v3 )
  {
    if ( (v3 & 0x40000) != 0 )
    {
      if ( *((_DWORD *)this + 733) == 2 && v5 == *((_DWORD *)this + 724) )
        *((_DWORD *)this + 805) &= ~0x2000000u;
      v7 = *(_DWORD *)v6;
      if ( (*(_DWORD *)v6 & 0x20000) != 0 )
      {
        *(_DWORD *)v6 = v7 & 0xFFFDFFFF;
      }
      else
      {
        v8 = v7 & 0xFFFFFFFE;
        *(_DWORD *)v6 = v8;
        if ( (*((_DWORD *)a3 + 3) & 0x2000000) != 0 )
          ++*((_DWORD *)this + 731);
        else
          *(_DWORD *)v6 = v8 & 0xEFFFFFFF;
        *(_DWORD *)v6 &= ~0x40u;
        CPTPEngine::SetContactRestingState(this, (struct CContactState *)v6, 0);
        *v9 &= 0xFFFFF5FF;
        v9[36] = 0;
      }
      v10 = *((_DWORD *)this + 733);
      if ( (v10 == 3 || v10 == 6) && v5 == *((_DWORD *)this + 725) )
        *((_DWORD *)this + 805) &= ~0x2000u;
    }
    else
    {
      *(_QWORD *)(v6 + 28) = *((_QWORD *)a3 + 4);
      *((_QWORD *)v6 + 11) = *((_QWORD *)a3 + 10);
      v11 = *((_DWORD *)this + 733);
      if ( v11 != 3 && v11 != 6 )
        *(_QWORD *)(v6 + 20) = *((_QWORD *)a3 + 5);
    }
  }
}
