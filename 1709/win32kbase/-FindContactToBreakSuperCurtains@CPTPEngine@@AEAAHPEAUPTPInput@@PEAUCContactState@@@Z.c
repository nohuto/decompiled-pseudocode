/*
 * XREFs of ?FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z @ 0x1C013477C
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0135CC0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPTPEngine::FindContactToBreakSuperCurtains(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // r9d
  int v6; // r10d
  _DWORD *i; // r11
  struct CContactState *v8; // rsi
  __int64 v9; // r8

  v3 = *((_DWORD *)a2 + 12);
  v4 = 0;
  v6 = 0;
  if ( v3 )
  {
    for ( i = (_DWORD *)((char *)a2 + 56); ; i += 24 )
    {
      v8 = (CPTPEngine *)((char *)this + 296 * (unsigned int)(*i % *((_DWORD *)this + 4)) + 1192);
      if ( a3 != v8 && (*(_DWORD *)v8 & 1) != 0 )
      {
        v9 = *(_QWORD *)((char *)v8 + 12);
        if ( (int)((HIDWORD(v9) - HIDWORD(*(_QWORD *)((char *)a3 + 12)))
                 * (HIDWORD(v9) - HIDWORD(*(_QWORD *)((char *)a3 + 12)))
                 + (v9 - *(_QWORD *)((char *)a3 + 12)) * (v9 - *(_QWORD *)((char *)a3 + 12))) <= (unsigned __int64)*((unsigned int *)this + 73)
          && *(_QWORD *)a2 - *((_QWORD *)v8 + 9) < *((_QWORD *)this + 12)
                                                 * (unsigned __int64)*((unsigned int *)this + 45)
                                                 / 0x3E8 )
        {
          break;
        }
      }
      if ( ++v6 >= v3 )
        return v4;
    }
    return 1;
  }
  return v4;
}
