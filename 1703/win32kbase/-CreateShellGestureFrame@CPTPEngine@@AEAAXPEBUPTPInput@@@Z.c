/*
 * XREFs of ?CreateShellGestureFrame@CPTPEngine@@AEAAXPEBUPTPInput@@@Z @ 0x1C01333CC
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?CleanupGestureState@CPTPEngine@@AEAAXXZ @ 0x1C0133368 (-CleanupGestureState@CPTPEngine@@AEAAXXZ.c)
 *     ?FindOrAssignPrimary@CPTPEngine@@AEAAPEAUPTPEnginePointerNode@@PEAUPTPInput@@@Z @ 0x1C0135A74 (-FindOrAssignPrimary@CPTPEngine@@AEAAPEAUPTPEnginePointerNode@@PEAUPTPInput@@@Z.c)
 *     ?FixupPrimaryGestureContact@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@IH@Z @ 0x1C0135B24 (-FixupPrimaryGestureContact@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@IH@Z.c)
 *     ?FixupSecondaryGestureContacts@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@IH@Z @ 0x1C0135C74 (-FixupSecondaryGestureContacts@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@IH@Z.c)
 *     ?SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEnginePointerNode@@@Z @ 0x1C0137CA4 (-SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEngin.c)
 */

void __fastcall CPTPEngine::CreateShellGestureFrame(CPTPEngine *this, const struct PTPInput *a2)
{
  unsigned int v2; // esi
  __int64 v5; // rdx
  char *v6; // rcx
  const struct PTPInput *v7; // rax
  __int128 v8; // xmm1
  unsigned int *v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // r8d
  char *v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  struct PTPEnginePointerNode *v16; // rbp
  unsigned int v17; // r14d
  struct PTPEnginePointerNode *i; // rsi
  unsigned int v19; // edx
  int v20; // eax

  v2 = 0;
  if ( *((_QWORD *)this + 399) )
    CPTPEngine::CleanupGestureState(this);
  v5 = 4LL;
  v6 = (char *)this + 3224;
  v7 = a2;
  do
  {
    *(_OWORD *)v6 = *(_OWORD *)v7;
    *((_OWORD *)v6 + 1) = *((_OWORD *)v7 + 1);
    *((_OWORD *)v6 + 2) = *((_OWORD *)v7 + 2);
    *((_OWORD *)v6 + 3) = *((_OWORD *)v7 + 3);
    *((_OWORD *)v6 + 4) = *((_OWORD *)v7 + 4);
    *((_OWORD *)v6 + 5) = *((_OWORD *)v7 + 5);
    *((_OWORD *)v6 + 6) = *((_OWORD *)v7 + 6);
    v6 += 128;
    v8 = *((_OWORD *)v7 + 7);
    v7 = (const struct PTPInput *)((char *)v7 + 128);
    *((_OWORD *)v6 - 1) = v8;
    --v5;
  }
  while ( v5 );
  *(_OWORD *)v6 = *(_OWORD *)v7;
  *((_OWORD *)v6 + 1) = *((_OWORD *)v7 + 1);
  *((_OWORD *)v6 + 2) = *((_OWORD *)v7 + 2);
  *((_OWORD *)v6 + 3) = *((_OWORD *)v7 + 3);
  *((_OWORD *)v6 + 4) = *((_OWORD *)v7 + 4);
  *((_OWORD *)v6 + 5) = *((_OWORD *)v7 + 5);
  *((_OWORD *)v6 + 6) = *((_OWORD *)v7 + 6);
  *((_DWORD *)v6 + 28) = *((_DWORD *)v7 + 28);
  if ( this == (CPTPEngine *)-3224LL )
    goto LABEL_37;
  v9 = (unsigned int *)((char *)this + 1316);
  v10 = 6LL;
  do
  {
    v11 = *(v9 - 37);
    if ( (v11 & 1) != 0 && (v11 & 0x100) == 0 )
    {
      if ( v2 )
      {
        if ( v2 >= *v9 )
          v2 = *v9;
      }
      else
      {
        v2 = *v9;
      }
    }
    v9 += 72;
    --v10;
  }
  while ( v10 );
  if ( v2 == *((_DWORD *)a2 + 11) )
    goto LABEL_37;
  v12 = 0;
  if ( *((_DWORD *)this + 818) )
  {
    v13 = (char *)this + 3316;
    do
    {
      v14 = 288LL * (unsigned int)(*((_DWORD *)v13 - 9) % *((_DWORD *)this + 4));
      v15 = *(_DWORD *)((char *)this + v14 + 1168);
      if ( (v15 & 1) == 0 || (v15 & 0x100) != 0 )
      {
        *((_DWORD *)v13 - 7) = 0;
      }
      else
      {
        *(_QWORD *)v13 = *(_QWORD *)((char *)this + v14 + 1172);
        *((_DWORD *)v13 + 6) = *(_DWORD *)((char *)this + v14 + 1304);
        *((_QWORD *)v13 + 5) = *(_QWORD *)((char *)this + v14 + 1240);
        *((_DWORD *)v13 - 7) = *((_DWORD *)v13 - 7) & 0xFFFBFFFD | 2;
        *(_DWORD *)((char *)this + v14 + 1168) = *(_DWORD *)((_BYTE *)this + v14 + 1168) & 0xFFFFF77F | 0x80;
      }
      v13 += 96;
      ++v12;
    }
    while ( v12 < *((_DWORD *)this + 818) );
  }
  *((_DWORD *)this + 817) = v2;
  v16 = CPTPEngine::FindOrAssignPrimary(this, (CPTPEngine *)((char *)this + 3224));
  if ( !v16 )
  {
LABEL_37:
    if ( *((_QWORD *)this + 399) )
      CPTPEngine::CleanupGestureState(this);
  }
  else
  {
    if ( (*((_DWORD *)this + 805) & 0x2000) != 0 )
      *((_DWORD *)v16 + 3) |= 0x2000u;
    CPTPEngine::FixupPrimaryGestureContact(
      this,
      (CPTPEngine *)((char *)this + 3224),
      v16,
      *((_DWORD *)v16 + 1) % *((_DWORD *)this + 4),
      1);
    v17 = 0;
    for ( i = (CPTPEngine *)((char *)this + 3276); v17 < *((_DWORD *)this + 818); ++v17 )
    {
      v19 = *((_DWORD *)i + 1) % *((_DWORD *)this + 4);
      v20 = *((_DWORD *)this + 72 * v19 + 292);
      if ( (v20 & 1) == 0 || (v20 & 0x100) != 0 )
      {
        *((_QWORD *)i + 5) = 0LL;
      }
      else if ( i != v16 )
      {
        CPTPEngine::FixupSecondaryGestureContacts(this, i, v19, 1);
      }
      i = (struct PTPEnginePointerNode *)((char *)i + 96);
    }
    CBasePTPEngine::SendGestureOutput(this, 0LL, 1LL, *((unsigned int *)this + 818), (char *)this + 3276);
    *((_QWORD *)this + 399) = (char *)this + 3224;
  }
}
