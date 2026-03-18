/*
 * XREFs of ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18019E030
 * Callers:
 *     ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x1800CE700 (-PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@.c)
 *     ?NotifyMetaData@CHwDisplayRenderTarget@@UEAAJU_DWMCommonMetaData@@@Z @ 0x18019C5E0 (-NotifyMetaData@CHwDisplayRenderTarget@@UEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180073A20 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_xxx @ 0x1801459E8 (Template_xxx.c)
 *     Template_xnn @ 0x180163080 (Template_xnn.c)
 *     ?AddMultipleAndSet@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJPEFBU_DWMIndirectMetaData@@I@Z @ 0x18019DF90 (-AddMultipleAndSet@-$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJPEFBU_DWMIndirectMetaData@@I@Z.c)
 *     ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18019E310 (-NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     Template_xxqqxx @ 0x18019E7B0 (Template_xxqqxx.c)
 */

__int64 __fastcall CSwapChainBase::NotifyMetaData(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v5; // esi
  unsigned int v6; // r8d
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  unsigned int *v16; // r8
  HRGN v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r9
  _DWORD *v20; // r14
  char v21; // al
  __int64 v23; // [rsp+28h] [rbp-A0h]
  void *lpMem; // [rsp+40h] [rbp-88h] BYREF
  _OWORD v25[3]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v26; // [rsp+80h] [rbp-48h]
  __int64 v27; // [rsp+90h] [rbp-38h] BYREF
  int v28; // [rsp+98h] [rbp-30h]
  int v29; // [rsp+9Ch] [rbp-2Ch]

  v2 = 0;
  v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 72LL))(a1) )
  {
    if ( *(_DWORD *)a2 )
    {
      switch ( *(_DWORD *)a2 )
      {
        case 1:
          v11 = *(_OWORD *)(a2 + 16);
          v25[0] = *(_OWORD *)a2;
          v12 = *(_OWORD *)(a2 + 32);
          v25[1] = v11;
          *(_QWORD *)&v11 = *(_QWORD *)(a2 + 48);
          v25[2] = v12;
          v26 = v11;
          CSwapChainBase::NotifyMoveOptimization(a1, v25);
          break;
        case 2:
          v10 = DynArray<_DWMIndirectMetaData,0>::AddMultipleAndSet((__int64)(a1 + 58), (_OWORD *)a2, v6);
          v5 = v10;
          if ( v10 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2D4u);
          break;
        case 3:
          v8 = DynArray<_DWMIndirectMetaData,0>::AddMultipleAndSet((__int64)(a1 + 58), (_OWORD *)a2, v6);
          v5 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2CBu);
          }
          else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          {
            Template_xxx(v9, &EVTDESC_DETECT_DESKTOPSCREEN_WRITE, *(_QWORD *)(a2 + 8), a1 + 58, a1[64]);
          }
          break;
        case 4:
          v7 = DynArray<_DWMIndirectMetaData,0>::AddMultipleAndSet((__int64)(a1 + 58), (_OWORD *)a2, v6);
          v5 = v7;
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x2C5u);
          }
          else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          {
            Template_xxx(a1[64], &EVTDESC_DETECT_TOPLEVELWINDOW_DESTROY, *(_QWORD *)(a2 + 8), a1 + 58, a1[64]);
          }
          break;
      }
    }
    else
    {
      v13 = DynArray<_DWMIndirectMetaData,0>::AddMultipleAndSet((__int64)(a1 + 58), (_OWORD *)a2, v6);
      v5 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x299u);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_xxqqxx(
            v15,
            v14,
            *(_QWORD *)(a2 + 8),
            *(_QWORD *)(a2 + 24),
            *(_DWORD *)(a2 + 16),
            *(_DWORD *)(a2 + 20),
            (_BYTE)a1 - 24,
            a1[64]);
        if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_REMOTEAPP_WINDOWCLIP) )
        {
          v17 = *(HRGN *)(a2 + 24);
          v28 = *(_DWORD *)(a2 + 16);
          v29 = *(_DWORD *)(a2 + 20);
          lpMem = 0LL;
          v27 = 0LL;
          HrgnToRgnData(v17, (struct _RGNDATA **)&lpMem, v16);
          v20 = lpMem;
          if ( lpMem )
          {
            if ( *((_DWORD *)lpMem + 2) )
            {
              v21 = Microsoft_Windows_Dwm_CoreEnableBits;
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
              {
                TemplateEventDescriptor(v18, &EVTDESC_REMOTEAPP_WINDOWCLIP_Start);
                v21 = Microsoft_Windows_Dwm_CoreEnableBits;
              }
              if ( v20[2] )
              {
                do
                {
                  if ( (v21 & 2) != 0 )
                  {
                    Template_xnn(
                      (__int64)&v27,
                      &EVTDESC_REMOTEAPP_WINDOWCLIP,
                      *(_QWORD *)(a2 + 8),
                      v19,
                      (__int64)&v20[4 * v2 + 8],
                      v23,
                      (__int64)&v27);
                    v21 = Microsoft_Windows_Dwm_CoreEnableBits;
                  }
                  ++v2;
                }
                while ( v2 < v20[2] );
              }
              if ( (v21 & 2) != 0 )
                TemplateEventDescriptor(v18, &EVTDESC_REMOTEAPP_WINDOWCLIP_Stop);
            }
            WPF::ProcessHeapImpl::Free(v20);
          }
        }
      }
    }
  }
  return v5;
}
