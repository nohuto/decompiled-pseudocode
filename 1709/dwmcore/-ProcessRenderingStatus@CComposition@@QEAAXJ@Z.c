/*
 * XREFs of ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x1800AABCC
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180029EC0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x1800B0560 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z @ 0x180128D9C (-PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180130EF8 (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 * Callees:
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x180075A10 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x180075D18 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800AAB4C (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x1800ABA7C (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 */

void __fastcall CComposition::ProcessRenderingStatus(CComposition *this, int a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v4; // esi
  unsigned int v6; // eax
  __int64 v7; // rax
  signed int v8; // eax
  signed int v9; // eax
  __int64 v10; // rax
  _DWORD v11[3]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+3Ch] [rbp-1Ch]
  __int64 v13; // [rsp+44h] [rbp-14h]

  v3 = *((_DWORD *)this + 86);
  v4 = v3;
  if ( a2 < 0 )
    v6 = 1;
  else
    v6 = (a2 != 142213121) + 2;
  if ( v6 <= 1 )
  {
    v3 = 1;
    if ( v4 != 2 )
      goto LABEL_7;
    v9 = CMmcssTask::Apply((struct _RTL_CRITICAL_SECTION *)((char *)this + 136), 0);
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xB5Fu);
    goto LABEL_19;
  }
  if ( v6 == 2 )
  {
    v3 = 2;
    if ( v4 == 2 )
      goto LABEL_7;
    CMmcssTask::Revert((struct _RTL_CRITICAL_SECTION *)((char *)this + 136));
    goto LABEL_19;
  }
  if ( v6 == 3 )
  {
    v3 = 0;
    if ( v4 == 2 )
    {
      v8 = CMmcssTask::Apply((struct _RTL_CRITICAL_SECTION *)((char *)this + 136), 0);
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xB4Fu);
LABEL_19:
      CComposition::UpdateMmcssPartners(this);
    }
  }
LABEL_7:
  *((_DWORD *)this + 86) = v3;
  if ( v3 != v4 )
  {
    v10 = *((_QWORD *)this + 44);
    if ( v10 && v3 == 1 )
      *(_BYTE *)(v10 + 28) = 1;
    v11[0] = 5;
    v11[1] = 0;
    v11[2] = v4;
    v12 = v3;
    v13 = 0LL;
    CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)v11, a3);
  }
  v7 = *((_QWORD *)this + 44);
  if ( v7 && v3 == 2 )
  {
    if ( *((_DWORD *)this + 116) )
      *(_BYTE *)(v7 + 28) = 1;
  }
}
