/*
 * XREFs of ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801EB580
 * Callers:
 *     ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x1800D8930 (-PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@.c)
 *     ?NotifyMetaData@CHwDisplayRenderTarget@@UEAAJU_DWMCommonMetaData@@@Z @ 0x1801E75D0 (-NotifyMetaData@CHwDisplayRenderTarget@@UEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18007FCC8 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     McTemplateU0xnn @ 0x1801AA438 (McTemplateU0xnn.c)
 *     McTemplateU0xxx @ 0x1801AA4A4 (McTemplateU0xxx.c)
 *     ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801EBA78 (-NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     McTemplateU0xxqqxx @ 0x1801EBDD0 (McTemplateU0xxqqxx.c)
 */

__int64 __fastcall CSwapChainBase::NotifyMetaData(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  int v5; // ebx
  _QWORD *v6; // r13
  __int64 v7; // rax
  unsigned int v8; // edx
  _OWORD *v9; // rcx
  int v10; // eax
  _QWORD *v11; // r13
  __int64 v12; // rax
  unsigned int v13; // edx
  _OWORD *v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  unsigned int v17; // edx
  _OWORD *v18; // rcx
  int v19; // eax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // rax
  unsigned int v23; // edx
  _OWORD *v24; // rcx
  int v25; // eax
  unsigned int *v26; // r8
  HRGN v27; // rcx
  __int64 v28; // r9
  _DWORD *v29; // r14
  int v30; // ecx
  char v31; // al
  __int64 v33; // [rsp+28h] [rbp-B0h]
  void *lpMem; // [rsp+40h] [rbp-98h] BYREF
  _OWORD v35[3]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v36; // [rsp+80h] [rbp-58h]
  __int64 v37; // [rsp+90h] [rbp-48h] BYREF
  int v38; // [rsp+98h] [rbp-40h]
  int v39; // [rsp+9Ch] [rbp-3Ch]

  v2 = 0;
  v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1) )
  {
    if ( *(_DWORD *)a2 )
    {
      switch ( *(_DWORD *)a2 )
      {
        case 1:
          v20 = *(_OWORD *)(a2 + 16);
          v35[0] = *(_OWORD *)a2;
          v21 = *(_OWORD *)(a2 + 32);
          v35[1] = v20;
          *(_QWORD *)&v20 = *(_QWORD *)(a2 + 48);
          v35[2] = v21;
          v36 = v20;
          CSwapChainBase::NotifyMoveOptimization(a1, v35);
          break;
        case 2:
          v16 = *(unsigned int *)(a1 + 368);
          v17 = v16 + 1;
          v5 = (int)v16 + 1 < (unsigned int)v16 ? 0x80070216 : 0;
          if ( (int)v16 + 1 < (unsigned int)v16 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
          }
          else if ( v17 > *(_DWORD *)(a1 + 364) )
          {
            v19 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 344, 0x30u, 1, a2);
            v5 = v19;
            if ( v19 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xC0u);
          }
          else
          {
            v18 = (_OWORD *)(*(_QWORD *)(a1 + 344) + 48 * v16);
            *v18 = *(_OWORD *)a2;
            v18[1] = *(_OWORD *)(a2 + 16);
            v18[2] = *(_OWORD *)(a2 + 32);
            *(_DWORD *)(a1 + 368) = v17;
          }
          if ( v5 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1BBu);
          break;
        case 3:
          v11 = (_QWORD *)(a1 + 344);
          v12 = *(unsigned int *)(a1 + 368);
          v13 = v12 + 1;
          v5 = (int)v12 + 1 < (unsigned int)v12 ? 0x80070216 : 0;
          if ( (int)v12 + 1 < (unsigned int)v12 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
          }
          else if ( v13 > *(_DWORD *)(a1 + 364) )
          {
            v15 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 344, 0x30u, 1, a2);
            v5 = v15;
            if ( v15 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xC0u);
          }
          else
          {
            v14 = (_OWORD *)(*v11 + 48 * v12);
            *v14 = *(_OWORD *)a2;
            v14[1] = *(_OWORD *)(a2 + 16);
            v14[2] = *(_OWORD *)(a2 + 32);
            *(_DWORD *)(a1 + 368) = v13;
          }
          if ( v5 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1B0u);
          }
          else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          {
            McTemplateU0xxx(
              Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_DETECT_DESKTOPSCREEN_WRITE,
              *(_QWORD *)(a2 + 8),
              v11,
              *(unsigned int *)(a1 + 368));
          }
          break;
        case 4:
          v6 = (_QWORD *)(a1 + 344);
          v7 = *(unsigned int *)(a1 + 368);
          v8 = v7 + 1;
          v5 = (int)v7 + 1 < (unsigned int)v7 ? 0x80070216 : 0;
          if ( (int)v7 + 1 < (unsigned int)v7 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
          }
          else if ( v8 > *(_DWORD *)(a1 + 364) )
          {
            v10 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 344, 0x30u, 1, a2);
            v5 = v10;
            if ( v10 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
          }
          else
          {
            v9 = (_OWORD *)(*v6 + 48 * v7);
            *v9 = *(_OWORD *)a2;
            v9[1] = *(_OWORD *)(a2 + 16);
            v9[2] = *(_OWORD *)(a2 + 32);
            *(_DWORD *)(a1 + 368) = v8;
          }
          if ( v5 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1A9u);
          }
          else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          {
            McTemplateU0xxx(
              Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_DETECT_TOPLEVELWINDOW_DESTROY,
              *(_QWORD *)(a2 + 8),
              v6,
              *(unsigned int *)(a1 + 368));
          }
          break;
      }
    }
    else
    {
      v22 = *(unsigned int *)(a1 + 368);
      v23 = v22 + 1;
      v5 = (int)v22 + 1 < (unsigned int)v22 ? 0x80070216 : 0;
      if ( (int)v22 + 1 < (unsigned int)v22 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
      }
      else if ( v23 > *(_DWORD *)(a1 + 364) )
      {
        v25 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 344, 0x30u, 1, a2);
        v5 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xC0u);
      }
      else
      {
        v24 = (_OWORD *)(*(_QWORD *)(a1 + 344) + 48 * v22);
        *v24 = *(_OWORD *)a2;
        v24[1] = *(_OWORD *)(a2 + 16);
        v24[2] = *(_OWORD *)(a2 + 32);
        *(_DWORD *)(a1 + 368) = v23;
      }
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x17Du);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0xxqqxx(
            (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
            v23,
            *(_QWORD *)(a2 + 8),
            *(_QWORD *)(a2 + 24),
            *(_DWORD *)(a2 + 16),
            *(_DWORD *)(a2 + 20),
            a1 + 88,
            *(_DWORD *)(a1 + 368));
        if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_REMOTEAPP_WINDOWCLIP) )
        {
          v27 = *(HRGN *)(a2 + 24);
          v38 = *(_DWORD *)(a2 + 16);
          v39 = *(_DWORD *)(a2 + 20);
          lpMem = 0LL;
          v37 = 0LL;
          HrgnToRgnData(v27, (struct _RGNDATA **)&lpMem, v26);
          v29 = lpMem;
          if ( lpMem )
          {
            v30 = *((_DWORD *)lpMem + 2);
            if ( v30 )
            {
              v31 = Microsoft_Windows_Dwm_CoreEnableBits;
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
              {
                McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_REMOTEAPP_WINDOWCLIP_Start);
                v30 = v29[2];
                v31 = Microsoft_Windows_Dwm_CoreEnableBits;
              }
              if ( v30 )
              {
                do
                {
                  if ( (v31 & 2) != 0 )
                  {
                    McTemplateU0xnn(
                      Microsoft_Windows_Dwm_Core_Provider_Context,
                      &EVTDESC_REMOTEAPP_WINDOWCLIP,
                      *(_QWORD *)(a2 + 8),
                      v28,
                      (__int64)&v29[4 * v2 + 8],
                      v33,
                      (__int64)&v37);
                    v31 = Microsoft_Windows_Dwm_CoreEnableBits;
                  }
                  ++v2;
                }
                while ( v2 < v29[2] );
              }
              if ( (v31 & 2) != 0 )
                McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_REMOTEAPP_WINDOWCLIP_Stop);
            }
            operator delete(v29);
          }
        }
      }
    }
  }
  return (unsigned int)v5;
}
