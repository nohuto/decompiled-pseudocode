/*
 * XREFs of ?ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z @ 0x18016C2F8
 * Callers:
 *     ?ProcessApplyPositionShift@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT@@PEBXI@Z @ 0x18012C4CC (-ProcessApplyPositionShift@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONT.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016C43C (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016DF54 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 */

void __fastcall CInteractionTracker::ApplyPositionShift(__int64 a1, int a2, float a3)
{
  int v3; // eax
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *(_DWORD *)(a1 + 140);
  if ( v3 )
  {
    if ( (unsigned int)(v3 - 1) <= 1 && CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
    {
      if ( v4 )
      {
        if ( v4 != 1 )
        {
          ModuleFailFastForHRESULT(-2147024809, retaddr);
          __debugbreak();
        }
        v6 = *(_QWORD *)(v5 + 384);
      }
      else
      {
        v6 = *(_QWORD *)(v5 + 376);
      }
      *(float *)(v6 + 568) = a3 + *(float *)(v6 + 568);
    }
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 72);
    v8 = *(_QWORD *)(a1 + 64);
    v9 = v7;
    if ( a2 )
      *((float *)&v8 + 1) = *((float *)&v8 + 1) + a3;
    else
      *(float *)&v8 = *(float *)&v8 + a3;
    CInteractionTracker::SetPosition((CInteractionTracker *)a1, (const struct D2DVector3 *)&v8);
  }
}
