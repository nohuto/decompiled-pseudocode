/*
 * XREFs of ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180131750
 * Callers:
 *     ?Compose@CComposition@@QEAAJPEA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180131B7C (-Compose@CComposition@@QEAAJPEA_NPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x18005C970 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Render@CComposition@@IEAAJPEA_N@Z @ 0x1801316B4 (-Render@CComposition@@IEAAJPEA_N@Z.c)
 *     ?PostRender@CRenderTargetManager@@QEAAJXZ @ 0x180131E6C (-PostRender@CRenderTargetManager@@QEAAJXZ.c)
 *     ?AdvanceFrame@CRenderTargetManager@@QEAAJ_N0@Z @ 0x180131EEC (-AdvanceFrame@CRenderTargetManager@@QEAAJ_N0@Z.c)
 */

__int64 __fastcall CComposition::ProcessComposition(CRenderTargetManager **this, bool *a2)
{
  int v4; // eax
  int v5; // ebx
  int v6; // r9d
  char v7; // al
  CRenderTargetManager *v8; // rdi
  __int64 i; // rbp
  __int64 v10; // rcx
  int v11; // eax
  int v12; // r14d
  __int64 j; // rbp
  __int64 v14; // rcx
  int v15; // eax
  int v16; // r14d
  int v17; // eax
  int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // edi
  unsigned int v23; // [rsp+20h] [rbp-38h]
  char v24; // [rsp+60h] [rbp+8h] BYREF
  char v25; // [rsp+68h] [rbp+10h] BYREF

  *a2 = 0;
  v25 = 0;
  v24 = 0;
  memset_0(CCounterManager::s_pGlobalPerFrameCounterManager, 0, 0x54uLL);
  v4 = (*((__int64 (__fastcall **)(CRenderTargetManager **, char *, char *))*this + 3))(this, &v25, &v24);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v4, 0x2DBu);
  if ( v5 != -2003304442 )
  {
    if ( v5 == -2003304307 )
    {
LABEL_9:
      v7 = v24;
      goto LABEL_11;
    }
    if ( v5 != -2003304291 )
    {
      if ( v5 < 0 )
      {
        v23 = 751;
LABEL_8:
        v6 = v5;
LABEL_37:
        MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v6, v23);
        goto LABEL_38;
      }
      goto LABEL_9;
    }
  }
  v7 = 1;
  v24 = 1;
LABEL_11:
  if ( !v7 )
  {
    if ( v25 )
    {
      v5 = 142213121;
      goto LABEL_38;
    }
    v17 = CComposition::Render((CComposition *)this, a2);
    v18 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v17, 0x30Du);
    v19 = CRenderTargetManager::PostRender(this[4]);
    v5 = v19;
    if ( v19 >= 0 )
    {
      (*((void (__fastcall **)(CRenderTargetManager **))*this + 4))(this);
      v5 = v18;
      goto LABEL_38;
    }
    v23 = 787;
    v6 = v19;
    goto LABEL_37;
  }
  v8 = this[4];
  v5 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v8 + 20); i = (unsigned int)(i + 1) )
  {
    v10 = *(_QWORD *)(*((_QWORD *)v8 + 7) + 8 * i);
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 136LL))(v10);
    v12 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x9Bu);
    if ( !v5 || v5 >= 0 && v12 < 0 )
      v5 = v12;
  }
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)v8 + 12); j = (unsigned int)(j + 1) )
  {
    v14 = *(_QWORD *)(*((_QWORD *)v8 + 3) + 8 * j) + 64LL;
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 136LL))(v14);
    v16 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xA0u);
    if ( !v5 || v5 >= 0 && v16 < 0 )
      v5 = v16;
  }
  if ( v5 < 0 )
  {
    v23 = 760;
    goto LABEL_8;
  }
LABEL_38:
  if ( !*a2 )
  {
    v20 = CComposition::ProcessPostPresent((CComposition *)this, 1u);
    v21 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v20, 0x32Au);
    if ( !v5 || v5 >= 0 && v21 < 0 )
      v5 = v21;
    CRenderTargetManager::AdvanceFrame(this[4], 0, *((_DWORD *)this + 306) == 3);
  }
  return (unsigned int)v5;
}
