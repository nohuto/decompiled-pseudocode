/*
 * XREFs of DxgkSetVidPnSourceOwner @ 0x1C00E7770
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E795C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C01002FC (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 */

__int64 __fastcall DxgkSetVidPnSourceOwner(struct _D3DKMT_SETVIDPNSOURCEOWNER *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  struct _D3DKMT_SETVIDPNSOURCEOWNER *v4; // rdx
  void *const **p_pType; // rdx
  int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // edi
  struct _D3DKMT_SETVIDPNSOURCEOWNER *v10; // rax
  __int64 hDevice; // rsi
  unsigned int *pVidPnSourceId; // rdx
  unsigned int v13; // r8d
  _DWORD *p_VidPnSourceCount; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS v18; // [rsp+20h] [rbp-78h]
  _QWORD v19[10]; // [rsp+30h] [rbp-68h] BYREF

  memset(v19, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v19[1]);
  v19[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v19[3]) = 47;
  LOBYTE(v19[6]) = -1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v2, &EventProfilerEnter, v3, 2077);
  v4 = a1 + 1;
  if ( (unsigned __int64)&a1[1] >= MmUserProbeAddress )
    v4 = (struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  v18.0 = (struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057)v4->hDevice;
  p_pType = (void *const **)&a1[1].pType;
  if ( (unsigned __int64)&a1[1].pType >= MmUserProbeAddress )
    p_pType = (void *const **)MmUserProbeAddress;
  if ( (*(_BYTE *)&v18.0 & 2) == 0 )
  {
    v6 = SetVidPnSourceOwnerInternal(a1, v18, *p_pType, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v19);
LABEL_8:
    v8 = v6;
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C005F010, &EventProfilerExit, v7, 2077);
    return v8;
  }
  v10 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v10 = (struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  hDevice = v10->hDevice;
  pVidPnSourceId = (unsigned int *)a1->pVidPnSourceId;
  if ( (unsigned __int64)pVidPnSourceId >= MmUserProbeAddress )
    pVidPnSourceId = (unsigned int *)MmUserProbeAddress;
  v13 = *pVidPnSourceId;
  p_VidPnSourceCount = &a1->VidPnSourceCount;
  if ( (unsigned __int64)&a1->VidPnSourceCount >= MmUserProbeAddress )
    p_VidPnSourceCount = (_DWORD *)MmUserProbeAddress;
  if ( *p_VidPnSourceCount == 1 )
  {
    v6 = DisableDWMVirtualModeOnVidPnSource(hDevice, v13);
    goto LABEL_8;
  }
  v15 = WdLogNewEntry5_WdError(MmUserProbeAddress);
  *(_QWORD *)(v15 + 24) = hDevice;
  WdLogEvent5_WdError(v15);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, 2077);
  return 3221225485LL;
}
