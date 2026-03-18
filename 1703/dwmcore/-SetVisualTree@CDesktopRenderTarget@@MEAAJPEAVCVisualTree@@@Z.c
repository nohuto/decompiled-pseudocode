/*
 * XREFs of ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180069FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800B4D20 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800C9130 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x1800C91BC (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ??$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z @ 0x1800CB658 (--$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::SetVisualTree(CDesktopRenderTarget *this, struct CVisualTree *a2)
{
  __int64 v2; // rax
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // rcx
  int v11; // eax
  int v13; // eax

  v2 = *((_QWORD *)this + 10);
  if ( v2
    && (*(_BYTE *)(v2 + 32) = 0,
        v13 = CMonitorTreeAssociation::RemoveTree(
                *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL),
                *((struct CVisualTree **)this + 10)),
        v6 = v13,
        v13 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x4A6u);
  }
  else
  {
    v5 = CRenderTarget::SetVisualTree(this, a2);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x4A9u);
    }
    else if ( a2 && (v7 = 0LL, *((_BYTE *)a2 + 32) = 1, *((_DWORD *)this + 36)) )
    {
      while ( 1 )
      {
        v8 = CMonitorTreeAssociation::AddMonitorTree(
               *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL),
               *(HMONITOR *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 15) + 8 * v7) + 112LL) + 128LL)
                           + 16LL),
               a2);
        v6 = v8;
        if ( v8 < 0 )
          break;
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= *((_DWORD *)this + 36) )
          goto LABEL_7;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x4B7u);
    }
    else
    {
LABEL_7:
      v9 = 0LL;
      if ( *((_DWORD *)this + 36) )
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v9);
          v11 = (*(__int64 (__fastcall **)(__int64, struct CVisualTree *))(*(_QWORD *)v10 + 224LL))(v10, a2);
          v6 = v11;
          if ( v11 < 0 )
            break;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= *((_DWORD *)this + 36) )
            goto LABEL_10;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x4C2u);
      }
      else
      {
LABEL_10:
        SAFE_DELETE<CComposeTop>((char *)this + 368);
      }
    }
  }
  return v6;
}
