/*
 * XREFs of ?PostHitTestProcessing@MPCMouseProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180098FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800499D0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCMouseProcessor::PostHitTestProcessing(
        MPCMouseProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  __int64 v5; // rax
  _OWORD *v6; // rax
  __int64 v7; // rdx
  _OWORD *v8; // rcx
  __int128 v9; // xmm1

  if ( MPCInputProviderBase::IsPrimary((unsigned __int64)this) && *((_DWORD *)this + 849) )
  {
    MPCHolographicInputManager::GetInstance();
    v6 = (_OWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 2000) + 240LL))(*(_QWORD *)(v5 + 2000));
    v7 = 2LL;
    v8 = (_OWORD *)((char *)a3 + 600);
    do
    {
      *v8 = *v6;
      v8[1] = v6[1];
      v8[2] = v6[2];
      v8[3] = v6[3];
      v8[4] = v6[4];
      v8[5] = v6[5];
      v8[6] = v6[6];
      v8 += 8;
      v9 = v6[7];
      v6 += 8;
      *(v8 - 1) = v9;
      --v7;
    }
    while ( v7 );
    *v8 = *v6;
    v8[1] = v6[1];
    v8[2] = v6[2];
    v8[3] = v6[3];
    *((_DWORD *)this + 849) = 0;
  }
}
