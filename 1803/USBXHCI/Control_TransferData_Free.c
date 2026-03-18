/*
 * XREFs of Control_TransferData_Free @ 0x1C00228C8
 * Callers:
 *     Control_Transfer_Complete @ 0x1C0022B94 (Control_Transfer_Complete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     TR_ReleaseDoubleBuffer @ 0x1C002109C (TR_ReleaseDoubleBuffer.c)
 *     TR_SendCompleteStageRequest @ 0x1C00211E4 (TR_SendCompleteStageRequest.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C003DE40 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 */

void __fastcall Control_TransferData_Free(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r14
  int v7; // edx
  __int64 v8; // rbx
  KIRQL v9; // di
  __int64 v10; // r8
  struct _MDL *v11; // rcx

  v3 = *(_QWORD *)(a2 + 48);
  if ( *(_DWORD *)(a2 + 64) == 2 )
  {
    TR_ReleaseDoubleBuffer(a1, *(_QWORD **)(a2 + 88));
    *(_QWORD *)(a2 + 88) = 0LL;
  }
  else if ( *(_DWORD *)(a2 + 64) == 3 )
  {
    if ( *(_BYTE *)(a1 + 280) )
    {
      v7 = *(_DWORD *)(a2 + 200);
      if ( v7 )
      {
        if ( a3 )
        {
          KeLowerIrql(0);
          v7 = *(_DWORD *)(a2 + 200);
        }
        TR_SendCompleteStageRequest(a1, v7);
        SecureDmaEnabler_ReleaseResourcesAfterDma(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL), a2 + 168);
        if ( a3 )
          KfRaiseIrql(2u);
      }
    }
    else if ( *(_QWORD *)(a2 + 96) )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
      v9 = KfRaiseIrql(2u);
      LOBYTE(v10) = (*(_BYTE *)(v3 + 32) & 1) == 0;
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v8 + 8) + 96LL))(v8, *(_QWORD *)(a2 + 96), v10);
      KeLowerIrql(v9);
      *(_QWORD *)(a2 + 96) = 0LL;
    }
    v11 = *(struct _MDL **)(a2 + 72);
    if ( v11 && v11 != *(struct _MDL **)(v3 + 48) && v11 != *(struct _MDL **)(a1 + 120) )
    {
      IoFreeMdl(v11);
      *(_QWORD *)(a2 + 72) = 0LL;
    }
  }
  *(_BYTE *)(a2 + 16) = 0;
}
