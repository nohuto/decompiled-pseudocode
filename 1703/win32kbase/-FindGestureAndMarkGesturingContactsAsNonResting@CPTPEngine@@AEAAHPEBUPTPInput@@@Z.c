/*
 * XREFs of ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C01358D8
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z @ 0x1C0132D48 (-AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z.c)
 *     ?AreTheseTwoContactsAZoom@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z @ 0x1C0132F2C (-AreTheseTwoContactsAZoom@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C013804C (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 */

__int64 __fastcall CPTPEngine::FindGestureAndMarkGesturingContactsAsNonResting(
        CPTPEngine *this,
        const struct PTPInput *a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rdi
  __int64 v6; // r13
  int v7; // eax
  __int64 i; // rsi
  int v9; // eax
  struct CContactState *v10; // r12
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  struct CContactState *v13; // r15
  struct CContactState *v14; // rax
  bool v15; // zf
  unsigned __int64 v16; // rax
  CPTPEngine *v18; // rcx

  if ( (*((_DWORD *)this + 55) & 4) != 0 )
  {
    v4 = *((_DWORD *)a2 + 12);
    v5 = 0LL;
    if ( v4 )
    {
      while ( 1 )
      {
        v6 = 96 * v5;
        v7 = *((_DWORD *)a2 + 24 * v5 + 16);
        if ( v7 )
        {
          if ( (v7 & 0x40000) == 0 )
            break;
        }
LABEL_21:
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= v4 )
          return 0LL;
      }
      for ( i = (unsigned int)(v5 + 1); ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= v4 )
          goto LABEL_21;
        v9 = *((_DWORD *)a2 + 24 * i + 16);
        if ( v9 )
        {
          if ( (v9 & 0x40000) == 0 )
          {
            v10 = (CPTPEngine *)((char *)this
                               + 288 * (unsigned int)(*(_DWORD *)((char *)a2 + v6 + 56) % *((_DWORD *)this + 4))
                               + 1168);
            v11 = (unsigned int)(*((_DWORD *)a2 + 24 * i + 14) % *((_DWORD *)this + 4));
            v12 = v11;
            v13 = (CPTPEngine *)((char *)this + 288 * (unsigned int)v11 + 1168);
            if ( (*(_DWORD *)v10 & 0x80000) != 0 && (*(_DWORD *)v13 & 0x80000) != 0 )
            {
              if ( *((_DWORD *)this + 733) != 2 )
                goto LABEL_26;
              v14 = (CPTPEngine *)((char *)this + 288 * *((unsigned int *)this + 724) + 1168);
              v15 = v10 == v14;
              if ( v10 != v14 )
              {
                if ( v13 != v14 )
                  continue;
                v15 = v10 == v14;
              }
              v16 = *((_QWORD *)v14 + 13);
              if ( !v15 )
                v12 = (unsigned int)(*(_DWORD *)((char *)a2 + v6 + 56) % *((_DWORD *)this + 4));
              if ( *((_QWORD *)this + 36 * v12 + 155) >= v16 )
              {
LABEL_26:
                if ( (unsigned int)CPTPEngine::AreTheseTwoContactsAPan(
                                     this,
                                     (const struct PTPInput *)v11,
                                     (CPTPEngine *)((char *)this
                                                  + 288
                                                  * (unsigned int)(*(_DWORD *)((char *)a2 + v6 + 56)
                                                                 % *((_DWORD *)this + 4))
                                                  + 1168),
                                     (CPTPEngine *)((char *)this + 288 * (unsigned int)v11 + 1168))
                  || (unsigned int)CPTPEngine::AreTheseTwoContactsAZoom(this, a2, v10, v13) )
                {
                  CPTPEngine::SetContactRestingState(this, v10, 0);
                  CPTPEngine::SetContactRestingState(v18, v13, 0);
                  return 1LL;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}
