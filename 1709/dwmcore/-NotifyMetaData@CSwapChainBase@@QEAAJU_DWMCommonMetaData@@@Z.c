/*
 * XREFs of ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801B2C8C
 * Callers:
 *     ?NotifyMetaData@CHwDisplayRenderTarget@@UEAAJU_DWMCommonMetaData@@@Z @ 0x1801AE510 (-NotifyMetaData@CHwDisplayRenderTarget@@UEAAJU_DWMCommonMetaData@@@Z.c)
 *     ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x1801B1910 (-PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180089E8C (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     McTemplateU0xnn @ 0x180179F3C (McTemplateU0xnn.c)
 *     McTemplateU0xxx @ 0x180179FA8 (McTemplateU0xxx.c)
 *     ?AddMultipleAndSet@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJPEFBU_DWMIndirectMetaData@@I@Z @ 0x1801B27B8 (-AddMultipleAndSet@-$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJPEFBU_DWMIndirectMetaData@@I@Z.c)
 *     ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801B2F94 (-NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     McTemplateU0xxqqxx @ 0x1801B3794 (McTemplateU0xxqqxx.c)
 */

__int64 __fastcall CSwapChainBase::NotifyMetaData(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v5; // esi
  unsigned int v6; // r8d
  signed int v7; // eax
  signed int v8; // eax
  signed int v9; // eax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  signed int v12; // eax
  int v13; // edx
  unsigned int *v14; // r8
  HRGN v15; // rcx
  __int64 v16; // r9
  _DWORD *v17; // r14
  char v18; // al
  __int64 v20; // [rsp+28h] [rbp-A0h]
  void *lpMem; // [rsp+40h] [rbp-88h] BYREF
  _OWORD v22[3]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v23; // [rsp+80h] [rbp-48h]
  __int64 v24; // [rsp+90h] [rbp-38h] BYREF
  int v25; // [rsp+98h] [rbp-30h]
  int v26; // [rsp+9Ch] [rbp-2Ch]

  v2 = 0;
  v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 72LL))(a1) )
  {
    if ( *(_DWORD *)a2 )
    {
      switch ( *(_DWORD *)a2 )
      {
        case 1:
          v10 = *(_OWORD *)(a2 + 16);
          v22[0] = *(_OWORD *)a2;
          v11 = *(_OWORD *)(a2 + 32);
          v22[1] = v10;
          *(_QWORD *)&v10 = *(_QWORD *)(a2 + 48);
          v22[2] = v11;
          v23 = v10;
          CSwapChainBase::NotifyMoveOptimization(a1, v22);
          break;
        case 2:
          v9 = DynArray<_DWMIndirectMetaData,0>::AddMultipleAndSet((__int64)(a1 + 86), (_OWORD *)a2, v6);
          v5 = v9;
          if ( v9 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x200u);
          break;
        case 3:
          v8 = DynArray<_DWMIndirectMetaData,0>::AddMultipleAndSet((__int64)(a1 + 86), (_OWORD *)a2, v6);
          v5 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x1F5u);
          }
          else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          {
            McTemplateU0xxx(
              Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_DETECT_DESKTOPSCREEN_WRITE,
              *(_QWORD *)(a2 + 8),
              a1 + 86,
              a1[92]);
          }
          break;
        case 4:
          v7 = DynArray<_DWMIndirectMetaData,0>::AddMultipleAndSet((__int64)(a1 + 86), (_OWORD *)a2, v6);
          v5 = v7;
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x1EEu);
          }
          else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          {
            McTemplateU0xxx(
              Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_DETECT_TOPLEVELWINDOW_DESTROY,
              *(_QWORD *)(a2 + 8),
              a1 + 86,
              a1[92]);
          }
          break;
      }
    }
    else
    {
      v12 = DynArray<_DWMIndirectMetaData,0>::AddMultipleAndSet((__int64)(a1 + 86), (_OWORD *)a2, v6);
      v5 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x1C2u);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0xxqqxx(
            (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
            v13,
            *(_QWORD *)(a2 + 8),
            *(_QWORD *)(a2 + 24),
            *(_DWORD *)(a2 + 16),
            *(_DWORD *)(a2 + 20),
            (_BYTE)a1 + 88,
            a1[92]);
        if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_REMOTEAPP_WINDOWCLIP) )
        {
          v15 = *(HRGN *)(a2 + 24);
          v25 = *(_DWORD *)(a2 + 16);
          v26 = *(_DWORD *)(a2 + 20);
          lpMem = 0LL;
          v24 = 0LL;
          HrgnToRgnData(v15, (struct _RGNDATA **)&lpMem, v14);
          v17 = lpMem;
          if ( lpMem )
          {
            if ( *((_DWORD *)lpMem + 2) )
            {
              v18 = Microsoft_Windows_Dwm_CoreEnableBits;
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
              {
                McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_REMOTEAPP_WINDOWCLIP_Start);
                v18 = Microsoft_Windows_Dwm_CoreEnableBits;
              }
              if ( v17[2] )
              {
                do
                {
                  if ( (v18 & 2) != 0 )
                  {
                    McTemplateU0xnn(
                      Microsoft_Windows_Dwm_Core_Provider_Context,
                      (EVENT_DESCRIPTOR *)&EVTDESC_REMOTEAPP_WINDOWCLIP,
                      *(_QWORD *)(a2 + 8),
                      v16,
                      (__int64)&v17[4 * v2 + 8],
                      v20,
                      (__int64)&v24);
                    v18 = Microsoft_Windows_Dwm_CoreEnableBits;
                  }
                  ++v2;
                }
                while ( v2 < v17[2] );
              }
              if ( (v18 & 2) != 0 )
                McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_REMOTEAPP_WINDOWCLIP_Stop);
            }
            WPF::ProcessHeapImpl::Free(v17);
          }
        }
      }
    }
  }
  return v5;
}
