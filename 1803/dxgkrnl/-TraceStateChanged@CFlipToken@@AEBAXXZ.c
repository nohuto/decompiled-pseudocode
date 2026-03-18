/*
 * XREFs of ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0019EA0
 * Callers:
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenBase@@@Z @ 0x1C000F468 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenStat.c)
 *     ?CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C004B700 (-CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipToken::TraceStateChanged(CFlipToken *this)
{
  __int64 v1; // r13
  char v3; // bl
  __int64 v4; // r15
  int v5; // ebp
  unsigned int v6; // r14d
  struct DXGGLOBAL *Global; // rax
  bool v8; // zf
  int v9; // ebx
  BOOL v10; // edi
  void (__fastcall *v11)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64); // rsi
  unsigned int v12; // eax
  __int64 v13; // [rsp+80h] [rbp+8h]

  v1 = *((_QWORD *)this + 4);
  v3 = *((_BYTE *)this + 559);
  v4 = *((_QWORD *)this + 5);
  v5 = *((_DWORD *)this + 6);
  v6 = *((_DWORD *)this + 26);
  v13 = *(_QWORD *)(v1 + 16);
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v8 = v3 == 0;
  v9 = *((unsigned __int8 *)this + 556);
  v10 = v8;
  v11 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64))(*((_QWORD *)Global + 219)
                                                                                                 + 80LL);
  v12 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  v11(v1, v6, v12, *((_QWORD *)this + 12), v5, v9, v10, v13, v4);
}
