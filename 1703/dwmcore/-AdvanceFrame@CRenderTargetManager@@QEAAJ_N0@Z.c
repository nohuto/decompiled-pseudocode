/*
 * XREFs of ?AdvanceFrame@CRenderTargetManager@@QEAAJ_N0@Z @ 0x180131EEC
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180131750 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180042C90 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::AdvanceFrame(CRenderTargetManager *this, char a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx

  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 400LL);
  if ( (_BYTE)a3 && *((_DWORD *)this + 12) )
  {
    v6 = *((unsigned int *)this + 12);
    v7 = 0LL;
    do
    {
      LOBYTE(a3) = a2;
      v8 = *(_QWORD *)(v7 + *((_QWORD *)this + 3)) + 64LL;
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 72LL))(v8, v5, a3);
      v7 += 8LL;
      --v6;
    }
    while ( v6 );
  }
  v9 = CD3DDeviceManager::HandleAdvanceFrame(this, v5, a2);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x5A0u);
  return v10;
}
