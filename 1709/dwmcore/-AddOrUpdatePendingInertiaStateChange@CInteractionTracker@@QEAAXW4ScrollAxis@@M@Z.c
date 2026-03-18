/*
 * XREFs of ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@M@Z @ 0x18016AC70
 * Callers:
 *     ?StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x18018929C (-StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x18016AD90 (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 */

void __fastcall CInteractionTracker::AddOrUpdatePendingInertiaStateChange(__int64 a1, int a2, float a3)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // [rsp+20h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-10h] BYREF
  int v8; // [rsp+38h] [rbp-8h]
  const void *retaddr; // [rsp+48h] [rbp+8h]

  if ( *(_DWORD *)(a1 + 584)
    && (v4 = *(_QWORD *)(a1 + 560), v5 = (unsigned int)(*(_DWORD *)(a1 + 584) - 1), *(_DWORD *)(v4 + 20 * v5) == 2) )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        *(float *)(v4 + 20 * v5 + 8) = a3;
      }
      else
      {
        if ( a2 != 2 )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        *(float *)(v4 + 20 * v5 + 16) = a3;
      }
    }
    else
    {
      *(float *)(v4 + 20 * v5 + 4) = a3;
    }
  }
  else
  {
    v6 = 0LL;
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        *((float *)&v6 + 1) = a3;
      }
      else if ( a2 != 2 )
      {
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      }
    }
    else
    {
      *(float *)&v6 = a3;
    }
    v7 = v6;
    v8 = 0;
    CInteractionTracker::AddPendingStateChange(a1, 2LL, &v7);
  }
  CResource::InvalidateAnimationSources((CResource *)a1);
}
