/*
 * XREFs of ?PostRender@CRenderTargetManager@@QEAAJXZ @ 0x180131E6C
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180131750 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::PostRender(CRenderTargetManager *this)
{
  int v1; // ebx
  __int64 i; // rdi
  __int64 v4; // rcx
  int v5; // eax
  int v6; // esi

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * i);
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 160LL))(v4);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xD1u);
    if ( !v1 || v1 >= 0 && v6 < 0 )
      v1 = v6;
  }
  return (unsigned int)v1;
}
