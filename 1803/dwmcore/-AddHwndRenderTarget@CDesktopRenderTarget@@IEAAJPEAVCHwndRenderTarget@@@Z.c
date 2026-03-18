/*
 * XREFs of ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x180044C0C
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800445F0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x180044DAC (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180157474 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z @ 0x180033E00 (-AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x180034CC8 (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800B7590 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800C7F24 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z @ 0x1800C7F68 (-InsertAt@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::AddHwndRenderTarget(CDesktopRenderTarget *this, CDisplay **a2)
{
  CDisplay *v3; // r14
  int v4; // eax
  int v5; // ebx
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]
  struct CRenderTarget *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = (struct CRenderTarget *)a2;
  v3 = a2[21];
  (*((void (__fastcall **)(CDisplay **))*a2 + 1))(a2);
  if ( *((_QWORD *)this + 15) )
  {
    v4 = (*(__int64 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v11 + 192LL))(v11);
    v5 = v4;
    if ( v4 < 0 )
    {
      v10 = 811;
LABEL_12:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v10);
      goto LABEL_9;
    }
  }
  if ( (unsigned int)DynArray<CHwndRenderTarget *,0>::Remove((char *)this + 176, &v11) )
    (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( CDisplay::IsPrimary(v3) )
  {
    v4 = DynArray<CHwndRenderTarget *,0>::InsertAt((char *)this + 176, &v11);
    v5 = v4;
    if ( v4 < 0 )
    {
      v10 = 823;
      goto LABEL_12;
    }
  }
  else
  {
    v7 = *((_DWORD *)this + 50);
    v8 = v7 + 1;
    v5 = v7 + 1 < v7 ? 0x80070216 : 0;
    if ( v7 + 1 < v7 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
    }
    else if ( v8 > *((_DWORD *)this + 49) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 176, 8LL, 1LL, &v11);
      v5 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 22) + 8LL * v7) = v11;
      *((_DWORD *)this + 50) = v8;
    }
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x33Bu);
      goto LABEL_9;
    }
  }
  (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v11 + 8LL))(v11);
  v4 = CMonitorTreeAssociation::AddMonitorTree(
         *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL),
         *(HMONITOR *)(*((_QWORD *)v3 + 19) + 16LL),
         *((struct CVisualTree **)this + 15));
  v5 = v4;
  if ( v4 < 0 )
  {
    v10 = 832;
    goto LABEL_12;
  }
  v4 = CComposition::AddRenderTarget(*((CRenderTargetManager ***)this + 2), v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    v10 = 837;
    goto LABEL_12;
  }
LABEL_9:
  (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v5;
}
