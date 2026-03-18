/*
 * XREFs of ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x1801BEF28
 * Callers:
 *     ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x1801BEE88 (-SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AddTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z @ 0x180031AAC (-AddTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x1800BAFB8 (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetPrimaryHMonitor@CHolographicInteropTexture@@AEAAJAEAPEAUHMONITOR__@@@Z @ 0x1801BE8AC (-GetPrimaryHMonitor@CHolographicInteropTexture@@AEAAJAEAPEAUHMONITOR__@@@Z.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x1801BEDF4 (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicInteropTexture::SetVisualTree(CHolographicInteropTexture **this, struct CVisualTree *a2)
{
  unsigned int v2; // ebx
  signed int v5; // eax
  __int64 v6; // rbp
  CHolographicInteropTexture *v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rcx
  signed int PrimaryHMonitor; // eax
  signed int v11; // eax
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
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0xD5u);
      }
      else
      {
        *((_BYTE *)this + 123) = 1;
        this[10] = a2;
        _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
        *((_BYTE *)a2 + 32) = 1;
        v6 = 0LL;
        v7 = this[2];
        v8 = *((_QWORD *)v7 + 9);
        if ( !*(_DWORD *)(v8 + 80) )
          goto LABEL_9;
        while ( 1 )
        {
          v9 = *(_QWORD *)(*(_QWORD *)(v8 + 56) + 8 * v6);
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 272LL))(v9) )
            break;
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= *(_DWORD *)(v8 + 80) )
            goto LABEL_9;
        }
        if ( !*(_QWORD *)(*(_QWORD *)(v8 + 56) + 8 * v6) )
        {
LABEL_9:
          v13 = 0LL;
          PrimaryHMonitor = CHolographicInteropTexture::GetPrimaryHMonitor(v7, &v13);
          v2 = PrimaryHMonitor;
          if ( PrimaryHMonitor < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, PrimaryHMonitor, 0xE0u);
          }
          else
          {
            v11 = CMonitorTreeAssociation::AddMonitorTree(*((CMonitorTreeAssociation **)this[2] + 3), v13, a2);
            v2 = v11;
            if ( v11 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0xE1u);
          }
        }
      }
    }
  }
  return v2;
}
