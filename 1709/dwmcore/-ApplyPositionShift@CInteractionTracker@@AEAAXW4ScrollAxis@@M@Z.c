/*
 * XREFs of ?ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z @ 0x18016AE7C
 * Callers:
 *     ?ProcessApplyPositionShift@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT@@PEBXI@Z @ 0x18016C5C8 (-ProcessApplyPositionShift@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONT.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016AFB8 (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016E19C (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
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
  const void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *(_DWORD *)(a1 + 152);
  if ( v3 )
  {
    if ( (unsigned int)(v3 - 1) <= 1 && CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
    {
      if ( v4 )
      {
        if ( v4 != 1 )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        v6 = *(_QWORD *)(v5 + 400);
      }
      else
      {
        v6 = *(_QWORD *)(v5 + 392);
      }
      *(float *)(v6 + 576) = a3 + *(float *)(v6 + 576);
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
