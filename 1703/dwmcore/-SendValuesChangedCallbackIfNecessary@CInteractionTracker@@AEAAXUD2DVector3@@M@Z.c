/*
 * XREFs of ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAAXUD2DVector3@@M@Z @ 0x18016DAA4
 * Callers:
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x18016D67C (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x18016E874 (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 */

char __fastcall CInteractionTracker::SendValuesChangedCallbackIfNecessary(__int64 a1, __int64 a2, float a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ecx
  _QWORD v11[2]; // [rsp+60h] [rbp-28h] BYREF

  LOBYTE(v5) = CInteractionTracker::ShouldNotify((CInteractionTracker *)a1, 1u);
  if ( (_BYTE)v5 )
  {
    v7 = *(_QWORD *)(v6 + 560) - *(_QWORD *)a2;
    if ( !v7 )
    {
      v5 = *(unsigned int *)(a2 + 8);
      v7 = *(unsigned int *)(a1 + 568) - v5;
    }
    if ( v7 || *(float *)(a1 + 572) != a3 )
    {
      v8 = *(_QWORD *)(a1 + 48);
      if ( v8 )
        v9 = *(_DWORD *)(v8 + 60);
      else
        v9 = 0;
      v11[0] = v9;
      v11[1] = *(unsigned int *)(a1 + 56);
      CoreUICallSend(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1352LL) + 56LL), v11, 2LL, 4LL, 0, &unk_1801D53DF);
      *(_QWORD *)(a1 + 560) = *(_QWORD *)a2;
      LODWORD(v5) = *(_DWORD *)(a2 + 8);
      *(float *)(a1 + 572) = a3;
      *(_DWORD *)(a1 + 568) = v5;
    }
  }
  return v5;
}
