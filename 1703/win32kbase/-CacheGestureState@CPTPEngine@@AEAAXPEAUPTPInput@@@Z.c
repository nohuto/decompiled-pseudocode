/*
 * XREFs of ?CacheGestureState@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0133098
 * Callers:
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1C0134A2C (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?CleanupGestureState@CPTPEngine@@AEAAXXZ @ 0x1C0133368 (-CleanupGestureState@CPTPEngine@@AEAAXXZ.c)
 *     ?FindOrAssignPrimary@CPTPEngine@@AEAAPEAUPTPEnginePointerNode@@PEAUPTPInput@@@Z @ 0x1C0135A74 (-FindOrAssignPrimary@CPTPEngine@@AEAAPEAUPTPEnginePointerNode@@PEAUPTPInput@@@Z.c)
 *     ?FixupPrimaryGestureContact@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@IH@Z @ 0x1C0135B24 (-FixupPrimaryGestureContact@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@IH@Z.c)
 *     ?FixupSecondaryGestureContacts@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@IH@Z @ 0x1C0135C74 (-FixupSecondaryGestureContacts@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@IH@Z.c)
 *     ?SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEnginePointerNode@@@Z @ 0x1C0137CA4 (-SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEngin.c)
 */

void __fastcall CPTPEngine::CacheGestureState(CPTPEngine *this, struct PTPInput *a2)
{
  struct PTPInput *v2; // rsi
  __int64 v3; // rax
  char *v5; // r8
  __int128 v6; // xmm1
  struct PTPEnginePointerNode *v7; // rax
  struct PTPEnginePointerNode *v8; // r14
  unsigned int v9; // r9d
  unsigned int v10; // r15d
  char *i; // rdi
  __int64 v12; // rdx
  __int64 v13; // rbp

  v2 = (CPTPEngine *)((char *)this + 3224);
  v3 = 4LL;
  v5 = (char *)this + 3224;
  do
  {
    *(_OWORD *)v5 = *(_OWORD *)a2;
    *((_OWORD *)v5 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)v5 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v5 + 3) = *((_OWORD *)a2 + 3);
    *((_OWORD *)v5 + 4) = *((_OWORD *)a2 + 4);
    *((_OWORD *)v5 + 5) = *((_OWORD *)a2 + 5);
    *((_OWORD *)v5 + 6) = *((_OWORD *)a2 + 6);
    v5 += 128;
    v6 = *((_OWORD *)a2 + 7);
    a2 = (struct PTPInput *)((char *)a2 + 128);
    *((_OWORD *)v5 - 1) = v6;
    --v3;
  }
  while ( v3 );
  *(_OWORD *)v5 = *(_OWORD *)a2;
  *((_OWORD *)v5 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)v5 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)v5 + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)v5 + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)v5 + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)v5 + 6) = *((_OWORD *)a2 + 6);
  *((_DWORD *)v5 + 28) = *((_DWORD *)a2 + 28);
  v7 = CPTPEngine::FindOrAssignPrimary(this, v2);
  v8 = v7;
  if ( v7 )
  {
    if ( (*((_DWORD *)this + 805) & 0x2000) != 0 )
      *((_DWORD *)v7 + 3) |= 0x2000u;
    v9 = *((_DWORD *)v7 + 1) % *((_DWORD *)this + 4);
    *((_QWORD *)v7 + 5) = *(_QWORD *)((char *)this + 288 * v9 + 1212);
    CPTPEngine::FixupPrimaryGestureContact(this, v2, v7, v9, 1);
    v10 = 0;
    *((_QWORD *)this + 369) = *((_QWORD *)v8 + 10);
    for ( i = (char *)v2 + 52; v10 < *((_DWORD *)v2 + 12); ++v10 )
    {
      v12 = (unsigned int)(*((_DWORD *)i + 1) % *((_DWORD *)this + 4));
      v13 = 288 * v12;
      if ( (*((_DWORD *)this + 72 * (unsigned int)v12 + 292) & 1) != 0 )
      {
        if ( i != (char *)v8 )
        {
          *((_QWORD *)i + 5) = *(_QWORD *)((char *)this + v13 + 1212);
          CPTPEngine::FixupSecondaryGestureContacts(this, (struct PTPEnginePointerNode *)i, v12, 1);
          if ( (*(_DWORD *)((_BYTE *)this + v13 + 1168) & 0x800) != 0 || (*((_DWORD *)i + 3) & 0x40000) != 0 )
            *((_DWORD *)i + 3) = 0;
        }
        *(_DWORD *)((char *)this + v13 + 1168) |= 0x80u;
      }
      else
      {
        *((_QWORD *)i + 5) = 0LL;
      }
      i += 96;
    }
    CBasePTPEngine::SendGestureOutput(this, 0LL, 0LL, *((unsigned int *)v2 + 12), (char *)v2 + 52);
    *((_QWORD *)this + 399) = v2;
  }
  else
  {
    CPTPEngine::CleanupGestureState(this);
  }
}
