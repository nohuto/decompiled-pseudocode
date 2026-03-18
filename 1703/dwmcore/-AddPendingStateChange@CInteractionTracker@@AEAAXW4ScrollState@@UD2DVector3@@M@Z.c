/*
 * XREFs of ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x18016C20C
 * Callers:
 *     ?ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_DWMRESTARTCOMPLETED@@@Z @ 0x18012CE14 (-ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@M@Z @ 0x18016C0B0 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@M@Z.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x18016E3E0 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?AddMultipleAndSet@?$DynArray@UPendingStateChangeInfo@CInteractionTracker@@$0A@@@QEAAJPEFBUPendingStateChangeInfo@CInteractionTracker@@I@Z @ 0x18016C018 (-AddMultipleAndSet@-$DynArray@UPendingStateChangeInfo@CInteractionTracker@@$0A@@@QEAAJPEFBUPendi.c)
 */

__int64 __fastcall CInteractionTracker::AddPendingStateChange(__int64 a1, int a2, __int64 *a3, float a4)
{
  __int64 result; // rax
  __int64 v5; // xmm0_8
  int v6; // eax
  int v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+24h] [rbp-24h]
  int v9; // [rsp+2Ch] [rbp-1Ch]
  float v10; // [rsp+30h] [rbp-18h]

  if ( !*(_DWORD *)(a1 + 552)
    || (result = *(_QWORD *)(a1 + 528), *(_DWORD *)(result + 20LL * (unsigned int)(*(_DWORD *)(a1 + 552) - 1)) != a2) )
  {
    v5 = *a3;
    v6 = *((_DWORD *)a3 + 2);
    v7 = a2;
    v8 = v5;
    v10 = a4;
    v9 = v6;
    return DynArray<CInteractionTracker::PendingStateChangeInfo,0>::AddMultipleAndSet(
             a1 + 528,
             (__int64)&v7,
             (unsigned int)a3);
  }
  return result;
}
