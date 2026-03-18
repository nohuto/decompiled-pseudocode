/*
 * XREFs of ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x18005BBA4
 * Callers:
 *     ?HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z @ 0x18006B420 (-HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z.c)
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18006B810 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18006BA60 (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180144EF0 (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 * Callees:
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18005BB24 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x18005CCA8 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800B6528 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800B6880 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CComposition::ProcessRenderingStatus(__int64 a1, int a2)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  __int64 result; // rax
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax
  _DWORD v9[3]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+3Ch] [rbp-1Ch]
  __int64 v11; // [rsp+44h] [rbp-14h]

  v2 = *(_DWORD *)(a1 + 384);
  v3 = v2;
  if ( a2 >= 0 )
  {
    if ( a2 <= 1 )
    {
      v2 = 1;
      if ( v3 != 2 )
        goto LABEL_6;
      v8 = CMmcssTask::Apply((CMmcssTask *)(a1 + 160), 0);
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xCB6u);
    }
    else if ( a2 == 2 )
    {
      v2 = 2;
      if ( v3 == 2 )
        goto LABEL_6;
      CMmcssTask::Revert((CMmcssTask *)(a1 + 160));
    }
    else
    {
      if ( a2 != 3 )
        goto LABEL_6;
      v2 = 0;
      if ( v3 != 2 )
        goto LABEL_6;
      v7 = CMmcssTask::Apply((CMmcssTask *)(a1 + 160), 0);
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xCA6u);
    }
    CComposition::UpdateMmcssPartners((CComposition *)a1);
  }
LABEL_6:
  *(_DWORD *)(a1 + 384) = v2;
  if ( v2 != v3 )
  {
    v6 = *(_QWORD *)(a1 + 392);
    if ( v6 && v2 == 1 )
      *(_BYTE *)(v6 + 28) = 1;
    v9[0] = 5;
    v9[1] = 0;
    v9[2] = v3;
    v10 = v2;
    v11 = 0LL;
    CComposition::NotifyHelper((CComposition *)a1, (struct MIL_MESSAGE *)v9);
  }
  result = *(_QWORD *)(a1 + 392);
  if ( result && v2 == 2 )
  {
    if ( *(_DWORD *)(a1 + 512) )
      *(_BYTE *)(result + 28) = 1;
  }
  return result;
}
