/*
 * XREFs of ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@M@Z @ 0x18016C0B0
 * Callers:
 *     ?StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x180182214 (-StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x18016C20C (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 */

void __fastcall CInteractionTracker::AddOrUpdatePendingInertiaStateChange(__int64 a1, int a2, float a3)
{
  __int64 v5; // rdx
  __int64 v6; // [rsp+20h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-10h] BYREF
  int v8; // [rsp+38h] [rbp-8h]
  void *retaddr; // [rsp+48h] [rbp+8h]

  if ( *(_DWORD *)(a1 + 552)
    && *(_DWORD *)(*(_QWORD *)(a1 + 528) + 20LL * (unsigned int)(*(_DWORD *)(a1 + 552) - 1)) == 2 )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        if ( a2 != 2 )
        {
          ModuleFailFastForHRESULT(-2147024809, retaddr);
          __debugbreak();
        }
        *(float *)(*(_QWORD *)(a1 + 528) + 20LL * (unsigned int)(*(_DWORD *)(a1 + 552) - 1) + 16) = a3;
LABEL_20:
        v5 = 51LL;
        goto LABEL_10;
      }
      *(float *)(*(_QWORD *)(a1 + 528) + 20LL * (unsigned int)(*(_DWORD *)(a1 + 552) - 1) + 8) = a3;
    }
    else
    {
      *(float *)(*(_QWORD *)(a1 + 528) + 20LL * (unsigned int)(*(_DWORD *)(a1 + 552) - 1) + 4) = a3;
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
        __debugbreak();
      }
    }
    else
    {
      *(float *)&v6 = a3;
    }
    v7 = v6;
    v8 = 0;
    CInteractionTracker::AddPendingStateChange(a1, 2LL, &v7);
    if ( a2 > 1 )
      goto LABEL_20;
  }
  v5 = 50LL;
LABEL_10:
  CResource::InvalidateAnimationSources((CResource *)a1, v5);
}
