/*
 * XREFs of ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0005D98
 * Callers:
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0005F60 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C0005FA0 (-Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?Confirm@CFlipToken@@UEAAXXZ @ 0x1C0006020 (-Confirm@CFlipToken@@UEAAXXZ.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C0006050 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z.c)
 *     ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenBase@@@Z @ 0x1C00061A8 (-Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenB.c)
 *     ?CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C0152AF0 (-CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     Template_pqqxqttxx @ 0x1C00DC584 (Template_pqqxqttxx.c)
 */

void __fastcall CFlipToken::TraceStateChanged(CFlipToken *this)
{
  __int64 v1; // rbx
  char v2; // di
  __int64 v3; // rsi
  int v4; // ebp
  int v5; // r14d
  char v6; // r15
  __int64 v7; // r12
  char v8; // al
  int v9; // r8d
  __int64 v10; // [rsp+90h] [rbp+8h]

  v1 = *((_QWORD *)this + 4);
  v2 = *((_BYTE *)this + 223);
  v3 = *((_QWORD *)this + 5);
  v4 = *((_DWORD *)this + 6);
  v5 = *((_DWORD *)this + 23);
  v6 = *((_BYTE *)this + 220);
  v7 = *((_QWORD *)this + 13);
  v10 = *(_QWORD *)(v1 + 16);
  v8 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    Template_pqqxqttxx(v10, v2 == 0, v9, v1, v5, v8, v7, v4, v6, v2 == 0, v10, v3);
}
