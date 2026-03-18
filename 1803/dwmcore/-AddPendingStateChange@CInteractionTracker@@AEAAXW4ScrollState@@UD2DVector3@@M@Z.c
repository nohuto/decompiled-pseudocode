/*
 * XREFs of ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x180193680
 * Callers:
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@M@Z @ 0x180193560 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@M@Z.c)
 *     ?ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_DWMRESTARTCOMPLETED@@@Z @ 0x180194D0C (-ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x1801967C4 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

void __fastcall CInteractionTracker::AddPendingStateChange(__int64 a1, int a2, __int64 *a3, float a4)
{
  __int64 v5; // xmm0_8
  __int64 v6; // rax
  unsigned int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  float v12; // [rsp+40h] [rbp-18h]

  if ( !*(_DWORD *)(a1 + 640)
    || *(_DWORD *)(*(_QWORD *)(a1 + 616) + 20LL * (unsigned int)(*(_DWORD *)(a1 + 640) - 1)) != a2 )
  {
    v5 = *a3;
    HIDWORD(v11) = *((_DWORD *)a3 + 2);
    v6 = *(unsigned int *)(a1 + 640);
    v12 = a4;
    LODWORD(v11) = a2;
    *(_QWORD *)((char *)&v11 + 4) = v5;
    v7 = v6 + 1;
    if ( (int)v6 + 1 < (unsigned int)v6 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)v6 + 1 < (unsigned int)v6 ? 0x80070216 : 0, 0xB5u);
    }
    else if ( v7 > *(_DWORD *)(a1 + 636) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 616, 0x14u, 1, &v11);
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 616);
      v9 = 5 * v6;
      *(_OWORD *)(v8 + 4 * v9) = v11;
      *(float *)(v8 + 4 * v9 + 16) = v12;
      *(_DWORD *)(a1 + 640) = v7;
    }
  }
}
