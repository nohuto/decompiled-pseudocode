/*
 * XREFs of ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x18016AD90
 * Callers:
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@M@Z @ 0x18016AC70 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@M@Z.c)
 *     ?ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_DWMRESTARTCOMPLETED@@@Z @ 0x18016C6F8 (-ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x18016E588 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?AddMultipleAndSet@?$DynArray@UInputBoundsPair@@$0A@@@QEAAJPEFBUInputBoundsPair@@I@Z @ 0x180176B80 (-AddMultipleAndSet@-$DynArray@UInputBoundsPair@@$0A@@@QEAAJPEFBUInputBoundsPair@@I@Z.c)
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

  if ( !*(_DWORD *)(a1 + 584)
    || (result = *(_QWORD *)(a1 + 560), *(_DWORD *)(result + 20LL * (unsigned int)(*(_DWORD *)(a1 + 584) - 1)) != a2) )
  {
    v5 = *a3;
    v6 = *((_DWORD *)a3 + 2);
    v7 = a2;
    v8 = v5;
    v10 = a4;
    v9 = v6;
    return DynArray<InputBoundsPair,0>::AddMultipleAndSet(a1 + 560, &v7);
  }
  return result;
}
