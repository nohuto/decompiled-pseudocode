/*
 * XREFs of ?NotifyMetaData@CHwDisplayRenderTarget@@UEAAJU_DWMCommonMetaData@@@Z @ 0x1801AE510
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801B2C8C (-NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::NotifyMetaData(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  signed int v8; // eax
  _OWORD v10[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+60h] [rbp-18h]

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 192) + 32LL))(a1 - 192)
    && (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 208LL)
     || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 72LL))(*(_QWORD *)(a1 + 40))) )
  {
    v5 = *(_QWORD *)(a1 + 40);
    v6 = *(_OWORD *)(a2 + 16);
    v10[0] = *(_OWORD *)a2;
    v7 = *(_OWORD *)(a2 + 32);
    v10[1] = v6;
    *(_QWORD *)&v6 = *(_QWORD *)(a2 + 48);
    v10[2] = v7;
    v11 = v6;
    v8 = CSwapChainBase::NotifyMetaData(v5, v10);
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x222u);
  }
  return v4;
}
