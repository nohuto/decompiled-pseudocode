/*
 * XREFs of ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x1801FBC58
 * Callers:
 *     ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x1801FBBB8 (-SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x180034CC8 (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ?AddTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z @ 0x180042184 (-AddTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z.c)
 *     ?SetVisualDesktopId@CVisual@@QEAAXI@Z @ 0x18004CAB0 (-SetVisualDesktopId@CVisual@@QEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetPrimaryHMonitor@CHolographicInteropTexture@@AEAAJAEAPEAUHMONITOR__@@@Z @ 0x1801FB3FC (-GetPrimaryHMonitor@CHolographicInteropTexture@@AEAAJAEAPEAUHMONITOR__@@@Z.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x1801FBAF8 (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicInteropTexture::SetVisualTree(CHolographicInteropTexture **this, struct CVisualTree *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  CHolographicInteropTexture *v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rcx
  int PrimaryHMonitor; // eax
  int v11; // eax
  HMONITOR v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( a2 != this[10] )
  {
    CHolographicInteropTexture::ReleaseVisualTree((CHolographicInteropTexture *)this);
    if ( a2 )
    {
      v5 = CVisualTree::AddTreeClient(a2, (struct IVisualTreeClient *)(this + 7));
      v2 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xFCu);
      }
      else
      {
        *((_BYTE *)this + 135) = 1;
        this[10] = a2;
        _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
        *((_BYTE *)a2 + 32) = 1;
        CVisual::SetVisualDesktopId(*((CVisual **)a2 + 3), 0);
        v6 = this[2];
        v7 = 0LL;
        v8 = *((_QWORD *)v6 + 9);
        if ( !*(_DWORD *)(v8 + 80) )
          goto LABEL_9;
        while ( 1 )
        {
          v9 = *(_QWORD *)(*(_QWORD *)(v8 + 56) + 8 * v7);
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 264LL))(v9) )
            break;
          v7 = (unsigned int)(v7 + 1);
          if ( (unsigned int)v7 >= *(_DWORD *)(v8 + 80) )
            goto LABEL_9;
        }
        if ( !*(_QWORD *)(*(_QWORD *)(v8 + 56) + 8 * v7) )
        {
LABEL_9:
          v13 = 0LL;
          PrimaryHMonitor = CHolographicInteropTexture::GetPrimaryHMonitor(v6, &v13);
          v2 = PrimaryHMonitor;
          if ( PrimaryHMonitor < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, PrimaryHMonitor, 0x107u);
          }
          else
          {
            v11 = CMonitorTreeAssociation::AddMonitorTree(*((CMonitorTreeAssociation **)this[2] + 3), v13, a2);
            v2 = v11;
            if ( v11 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x108u);
          }
        }
      }
    }
  }
  return v2;
}
