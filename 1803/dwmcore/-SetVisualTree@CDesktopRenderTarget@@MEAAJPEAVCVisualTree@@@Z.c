/*
 * XREFs of ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180044550
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x180034C3C (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x180034CC8 (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800423A0 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?SetVisualDesktopId@CVisual@@QEAAXI@Z @ 0x18004CAB0 (-SetVisualDesktopId@CVisual@@QEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z @ 0x1800C9930 (--$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::SetVisualTree(CDesktopRenderTarget *this, CVisual **a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // edx
  CVisual *v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rbp
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax

  v4 = *((_QWORD *)this + 15);
  if ( v4
    && (*(_BYTE *)(v4 + 32) = 0,
        CVisual::SetVisualDesktopId(*(CVisual **)(v4 + 24), 0),
        v12 = CMonitorTreeAssociation::RemoveTree(
                *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL),
                *((struct CVisualTree **)this + 15)),
        v6 = v12,
        v12 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x4BEu);
  }
  else
  {
    v5 = CRenderTarget::SetVisualTree(this, (struct CVisualTree *)a2);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x4C1u);
    }
    else if ( a2
           && (v7 = *((_DWORD *)this + 88),
               v8 = a2[3],
               *((_BYTE *)a2 + 32) = 1,
               CVisual::SetVisualDesktopId(v8, v7),
               v9 = 0LL,
               *((_DWORD *)this + 50)) )
    {
      while ( 1 )
      {
        v13 = CMonitorTreeAssociation::AddMonitorTree(
                *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL),
                *(HMONITOR *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 22) + 8 * v9) + 168LL) + 152LL)
                            + 16LL),
                (struct CVisualTree *)a2);
        v6 = v13;
        if ( v13 < 0 )
          break;
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= *((_DWORD *)this + 50) )
          goto LABEL_5;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x4CFu);
    }
    else
    {
LABEL_5:
      v10 = 0LL;
      if ( *((_DWORD *)this + 50) )
      {
        while ( 1 )
        {
          v14 = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v10);
          v15 = (*(__int64 (__fastcall **)(__int64, CVisual **))(*(_QWORD *)v14 + 192LL))(v14, a2);
          v6 = v15;
          if ( v15 < 0 )
            break;
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= *((_DWORD *)this + 50) )
            goto LABEL_6;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x4DAu);
      }
      else
      {
LABEL_6:
        SAFE_DELETE<CComposeTop>((char *)this + 320);
      }
    }
  }
  return v6;
}
