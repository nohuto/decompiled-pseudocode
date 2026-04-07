/*
 * XREFs of ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x18000EE90
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x18000D8A0 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 * Callees:
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x18000DF08 (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x18000E308 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 *     ?BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x18000F2AC (-BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ.c)
 *     ?PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x18000F314 (-PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::StartAnimations(CAnimationEngine *this)
{
  int v1; // ebx
  __int64 v2; // rbp
  __int64 v4; // rax
  __int64 v5; // rdi
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int i; // edi

  v1 = 0;
  v2 = 0LL;
  if ( !*((_DWORD *)this + 16) )
    return (unsigned int)v1;
  while ( 1 )
  {
    v4 = *((_QWORD *)this + 5);
    v5 = *(_QWORD *)(v4 + 8 * v2);
    if ( *(_BYTE *)(v5 + 32) || *(_BYTE *)(v5 + 33) )
      goto LABEL_3;
    v7 = CAnimationEngine::SetupStoryboard(this, *(struct CAnimationEngine::CTransitionVisualSet **)(v4 + 8 * v2));
    v1 = v7;
    if ( v7 < 0 )
      break;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v5 + 16) + 96LL))(
           *(_QWORD *)(v5 + 16),
           v8,
           0LL);
    v1 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xDAu);
      goto LABEL_4;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 1) + 72LL))(
            *((_QWORD *)this + 1),
            v10,
            0LL);
    v1 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xDDu);
      goto LABEL_4;
    }
    v12 = CAnimationEngine::CTransitionVisualSet::PopulateAnimationCurves((CAnimationEngine::CTransitionVisualSet *)v5);
    v1 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xDEu);
      goto LABEL_4;
    }
    v13 = CAnimationEngine::CTransitionVisualSet::BindAnimationCurves((CAnimationEngine::CTransitionVisualSet *)v5);
    v1 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xE1u);
      goto LABEL_4;
    }
LABEL_3:
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= *((_DWORD *)this + 16) )
      goto LABEL_4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xD7u);
LABEL_4:
  if ( v1 < 0 )
  {
    for ( i = *((_DWORD *)this + 16);
          (int)--i >= (int)v2;
          CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(this, i) )
    {
      ;
    }
  }
  return (unsigned int)v1;
}
