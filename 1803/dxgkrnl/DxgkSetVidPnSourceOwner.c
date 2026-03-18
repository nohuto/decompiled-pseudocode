/*
 * XREFs of DxgkSetVidPnSourceOwner @ 0x1C0109F00
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C010A2A0 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010A57C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 */

__int64 __fastcall DxgkSetVidPnSourceOwner(struct _D3DKMT_SETVIDPNSOURCEOWNER *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057 *v4; // rdx
  void *const **p_pType; // rdx
  void *const *v6; // r8
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // r8
  struct _D3DKMT_SETVIDPNSOURCEOWNER *v11; // rax
  __int64 hDevice; // rsi
  unsigned int *pVidPnSourceId; // rdx
  unsigned int v14; // r8d
  _DWORD *p_VidPnSourceCount; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // [rsp+20h] [rbp-88h] BYREF
  __int64 v20; // [rsp+28h] [rbp-80h]
  _D3DKMT_VIDPNSOURCEOWNER_FLAGS v21; // [rsp+30h] [rbp-78h]
  void *const *v22; // [rsp+38h] [rbp-70h]
  _QWORD v23[10]; // [rsp+40h] [rbp-68h] BYREF

  memset(v23, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v23[1]);
  v23[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v23[3]) = 47;
  LOBYTE(v23[6]) = -1;
  v20 = 0LL;
  v19 = 2077;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v2, &EventProfilerEnter, v3, 2077);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 2077);
  v4 = (struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057 *)&a1[1];
  if ( (unsigned __int64)&a1[1] >= MmUserProbeAddress )
    v4 = (struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057 *)MmUserProbeAddress;
  v21.0 = *v4;
  p_pType = (void *const **)&a1[1].pType;
  if ( (unsigned __int64)&a1[1].pType >= MmUserProbeAddress )
    p_pType = (void *const **)MmUserProbeAddress;
  v6 = *p_pType;
  v22 = *p_pType;
  if ( (*(_BYTE *)&v21.0 & 2) == 0 )
  {
    v7 = SetVidPnSourceOwnerInternal(a1, v21, v6, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v23);
LABEL_8:
    v8 = v7;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C0079010, &EventProfilerExit, v9, v19);
    return v8;
  }
  v11 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v11 = (struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  hDevice = v11->hDevice;
  pVidPnSourceId = (unsigned int *)a1->pVidPnSourceId;
  if ( (unsigned __int64)pVidPnSourceId >= MmUserProbeAddress )
    pVidPnSourceId = (unsigned int *)MmUserProbeAddress;
  v14 = *pVidPnSourceId;
  p_VidPnSourceCount = &a1->VidPnSourceCount;
  if ( (unsigned __int64)&a1->VidPnSourceCount >= MmUserProbeAddress )
    p_VidPnSourceCount = (_DWORD *)MmUserProbeAddress;
  if ( *p_VidPnSourceCount == 1 )
  {
    v7 = DisableDWMVirtualModeOnVidPnSource(hDevice, v14);
    goto LABEL_8;
  }
  v16 = WdLogNewEntry5_WdError(MmUserProbeAddress);
  *(_QWORD *)(v16 + 24) = hDevice;
  WdLogEvent5_WdError(v16);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v17, &EventProfilerExit, v18, v19);
  return 3221225485LL;
}
