/*
 * XREFs of ?MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z @ 0x1C0139090
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0139E9C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C013B6F0 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 */

void __fastcall CPTPEngine::MarkRecentlyTrackedContactsAsNonResting(
        CPTPEngine *this,
        struct PTPInput *a2,
        const struct CContactState *a3)
{
  CPTPEngine *v3; // r11
  unsigned __int64 v4; // rbx
  char *v5; // r10
  char *v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8

  v3 = this;
  if ( a3 )
    a2 = (const struct CContactState *)((char *)a3 + 72);
  v4 = *(_QWORD *)a2;
  v5 = (char *)this + 1192;
  v6 = (char *)this + 2968;
  while ( v5 != v6 )
  {
    if ( (*(_DWORD *)v5 & 1) != 0 && (*(_DWORD *)v5 & 0x80u) != 0 )
    {
      v7 = *((_QWORD *)v5 + 9);
      if ( v4 <= v7 )
        v8 = v7 - v4;
      else
        v8 = v4 - v7;
      if ( v8 < *((_QWORD *)v3 + 12) * (unsigned __int64)*((unsigned int *)v3 + 87) / 0x3E8 )
        CPTPEngine::SetContactRestingState(v3, (struct CContactState *)v5, 0);
    }
    v5 += 296;
  }
}
