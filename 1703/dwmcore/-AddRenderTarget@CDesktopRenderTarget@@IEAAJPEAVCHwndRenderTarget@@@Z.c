/*
 * XREFs of ?AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x18006A648
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x18006A0B0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x18006A7E4 (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180146D40 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z @ 0x180064C24 (-AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800B80F0 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x1800C91BC (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800C9698 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z @ 0x1800C96D4 (-InsertAt@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::AddRenderTarget(CDesktopRenderTarget *this, CDisplay **a2)
{
  CDisplay *v3; // r14
  int v4; // eax
  int v5; // ebx
  __int64 v7; // rcx
  unsigned int v8; // edx
  unsigned int v9; // eax
  int v10; // eax
  unsigned int v11; // [rsp+20h] [rbp-18h]
  struct CHwndRenderTarget *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = (struct CHwndRenderTarget *)a2;
  v3 = a2[14];
  (*((void (__fastcall **)(CDisplay **))*a2 + 1))(a2);
  if ( *((_QWORD *)this + 10) )
  {
    v4 = (*(__int64 (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v12 + 224LL))(v12);
    v5 = v4;
    if ( v4 < 0 )
    {
      v11 = 909;
LABEL_12:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v11);
      goto LABEL_9;
    }
  }
  if ( (unsigned int)DynArray<CHwndRenderTarget *,0>::Remove((char *)this + 120, &v12) )
    (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( CDisplay::IsPrimary(v3) )
  {
    v4 = DynArray<CHwndRenderTarget *,0>::InsertAt((char *)this + 120, &v12);
    v5 = v4;
    if ( v4 < 0 )
    {
      v11 = 921;
      goto LABEL_12;
    }
  }
  else
  {
    v7 = *((unsigned int *)this + 36);
    v8 = (unsigned int)v12;
    v9 = v7 + 1;
    if ( (int)v7 + 1 >= (unsigned int)v7 )
      v8 = v7 + 1;
    v5 = v9 < (unsigned int)v7 ? 0x80070216 : 0;
    if ( v9 < (unsigned int)v7 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB5u);
    }
    else if ( v8 > *((_DWORD *)this + 35) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 120, 8LL, 1LL, &v12);
      v5 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v7) = v12;
      *((_DWORD *)this + 36) = v8;
    }
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x39Du);
      goto LABEL_9;
    }
  }
  (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v12 + 8LL))(v12);
  v4 = CMonitorTreeAssociation::AddMonitorTree(
         *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL),
         *(HMONITOR *)(*((_QWORD *)v3 + 16) + 16LL),
         *((struct CVisualTree **)this + 10));
  v5 = v4;
  if ( v4 < 0 )
  {
    v11 = 930;
    goto LABEL_12;
  }
  v4 = CComposition::AddHwndRenderTarget(*((CRenderTargetManager ***)this + 2), v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v11 = 935;
    goto LABEL_12;
  }
LABEL_9:
  (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v5;
}
