/*
 * XREFs of ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180134910
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180079390 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x1800BAFB8 (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800BB064 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ??$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z @ 0x1800C0DC8 (--$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::SetVisualTree(CDesktopRenderTarget *this, struct CVisualTree *a2)
{
  __int64 v2; // rax
  signed int v5; // eax
  unsigned int v6; // edi
  signed int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rbp
  signed int v10; // eax
  __int64 v11; // rbp
  __int64 v12; // rcx
  signed int v13; // eax

  v2 = *((_QWORD *)this + 10);
  if ( v2
    && (*(_BYTE *)(v2 + 32) = 0,
        v5 = CMonitorTreeAssociation::RemoveTree(
               *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL),
               *((struct CVisualTree **)this + 10)),
        v6 = v5,
        v5 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x51Cu);
  }
  else
  {
    v7 = CRenderTarget::SetVisualTree(this, a2);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x51Fu);
    }
    else if ( a2 && (v9 = 0LL, *((_BYTE *)a2 + 32) = 1, *((_DWORD *)this + 36)) )
    {
      while ( 1 )
      {
        v10 = CMonitorTreeAssociation::AddMonitorTree(
                *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL),
                *(HMONITOR *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 15) + 8 * v9) + 112LL) + 128LL)
                            + 16LL),
                a2);
        v6 = v10;
        if ( v10 < 0 )
          break;
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= *((_DWORD *)this + 36) )
          goto LABEL_9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x52Du);
    }
    else
    {
LABEL_9:
      v11 = 0LL;
      if ( *((_DWORD *)this + 36) )
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v11);
          v13 = (*(__int64 (__fastcall **)(__int64, struct CVisualTree *))(*(_QWORD *)v12 + 240LL))(v12, a2);
          v6 = v13;
          if ( v13 < 0 )
            break;
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= *((_DWORD *)this + 36) )
            goto LABEL_12;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x538u);
      }
      else
      {
LABEL_12:
        SAFE_DELETE<CComposeTop>((CComposeTop **)this + 46, v8);
      }
    }
  }
  return v6;
}
