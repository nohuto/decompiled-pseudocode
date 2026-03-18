/*
 * XREFs of DxgkSetVidPnSourceOwner1 @ 0x1C0096D40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0098158 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C0101280 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 */

__int64 __fastcall DxgkSetVidPnSourceOwner1(struct _D3DKMT_SETVIDPNSOURCEOWNER *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  struct _D3DKMT_SETVIDPNSOURCEOWNER *v4; // rdx
  struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS v5; // edx
  unsigned int v6; // eax
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
  _QWORD v18[8]; // [rsp+20h] [rbp-58h] BYREF

  memset(v18, 0, sizeof(v18));
  EtwActivityIdControl(3u, (LPGUID)&v18[1]);
  v18[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v18[3]) = 48;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v2, &EventProfilerEnter, v3, 2077);
  v4 = a1 + 1;
  if ( (unsigned __int64)&a1[1] >= MmUserProbeAddress )
    v4 = (struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  v5.0 = (struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057)v4->hDevice;
  if ( (*(_BYTE *)&v5.0 & 2) == 0 )
  {
    v6 = SetVidPnSourceOwnerInternal(a1, v5, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v18);
LABEL_6:
    v8 = v6;
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C006E790, &EventProfilerExit, v7, 2077);
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
    goto LABEL_6;
  }
  v15 = WdLogNewEntry5_WdError(MmUserProbeAddress, p_VidPnSourceCount);
  *(_QWORD *)(v15 + 24) = hDevice;
  WdLogEvent5_WdError(v15);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v16, &EventProfilerExit, v17, 2077);
  return 3221225485LL;
}
