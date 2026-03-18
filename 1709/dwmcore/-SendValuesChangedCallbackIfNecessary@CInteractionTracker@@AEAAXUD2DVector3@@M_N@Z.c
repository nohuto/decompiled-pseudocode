/*
 * XREFs of ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAAXUD2DVector3@@M_N@Z @ 0x18016DC38
 * Callers:
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x18016D804 (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x18016EA64 (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 */

char __fastcall CInteractionTracker::SendValuesChangedCallbackIfNecessary(__int64 a1, __int64 a2, float a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  char v7; // r10
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ecx
  _QWORD v12[2]; // [rsp+60h] [rbp-28h] BYREF

  LOBYTE(v5) = CInteractionTracker::ShouldNotify((CInteractionTracker *)a1, 1u);
  if ( (_BYTE)v5 )
  {
    if ( v7 )
      goto LABEL_7;
    v8 = *(_QWORD *)(v6 + 592) - *(_QWORD *)a2;
    if ( !v8 )
    {
      v5 = *(unsigned int *)(a2 + 8);
      v8 = *(unsigned int *)(a1 + 600) - v5;
    }
    if ( v8 || *(float *)(a1 + 604) != a3 )
    {
LABEL_7:
      v9 = *(_QWORD *)(a1 + 48);
      if ( v9 )
        v10 = *(_DWORD *)(v9 + 68);
      else
        v10 = 0;
      v12[0] = v10;
      v12[1] = *(unsigned int *)(a1 + 56);
      CoreUICallSend(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1288LL) + 56LL), v12, 2LL, 4LL, 0, &unk_1801F051F);
      *(_QWORD *)(a1 + 592) = *(_QWORD *)a2;
      LODWORD(v5) = *(_DWORD *)(a2 + 8);
      *(float *)(a1 + 604) = a3;
      *(_DWORD *)(a1 + 600) = v5;
    }
  }
  return v5;
}
