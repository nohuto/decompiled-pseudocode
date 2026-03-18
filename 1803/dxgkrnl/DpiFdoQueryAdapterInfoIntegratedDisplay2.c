/*
 * XREFs of DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C01F8580
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C01F24BC (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C009F7D8 (DpiReleaseCoreSyncAccessSafe.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00F4918 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C010930C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0109340 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C020A910 (DpiDxgkDdiQueryDeviceDescriptor.c)
 */

__int64 __fastcall DpiFdoQueryAdapterInfoIntegratedDisplay2(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  void *v9; // rax
  DXGADAPTER *v10; // rbx
  __int64 v11; // r8
  unsigned __int16 v12; // ax
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD v16[2]; // [rsp+28h] [rbp-29h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v17; // [rsp+38h] [rbp-19h] BYREF
  _OWORD v18[3]; // [rsp+68h] [rbp+17h] BYREF
  int v19; // [rsp+B8h] [rbp+67h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v19 = *(_DWORD *)(a2 + 24);
  v5 = DpiAcquireCoreSyncAccessSafe(a1, 0);
  v7 = v5;
  if ( v5 >= 0 )
  {
    memset(v18, 0, sizeof(v18));
    *(_QWORD *)&v17.Type = *(_QWORD *)&v18[0];
    v17.pInputData = &v19;
    v9 = *(void **)(a2 + 96);
    *(&v17.InputDataSize + 1) = DWORD1(v18[1]);
    v17.Type = DXGKQAITYPE_INTEGRATED_DISPLAY_DESCRIPTOR2;
    *(_OWORD *)&v17.OutputDataSize = v18[2];
    v17.OutputDataSize = 128;
    v17.InputDataSize = 4;
    v17.pOutputData = v9;
    v10 = *(DXGADAPTER **)(v3 + 3728);
    DXGADAPTER::IsCoreResourceSharedOwner(v10);
    v7 = (int)DXGADAPTER::DdiQueryAdapterInfo(v10, &v17, v11);
    DpiReleaseCoreSyncAccessSafe(a1, 0);
    if ( (int)v7 >= 0 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(a2 + 96) + 123LL) != 1 )
      {
        v14 = WdLogNewEntry5_WdError(v6);
        *(_QWORD *)(v14 + 24) = *(unsigned __int8 *)(*(_QWORD *)(a2 + 96) + 123LL);
        *(_QWORD *)(v14 + 32) = *(unsigned int *)(a2 + 24);
        WdLogEvent5_WdError(v14);
        LODWORD(v7) = -1073741811;
        return (unsigned int)v7;
      }
      v12 = *(_WORD *)(a2 + 92);
      *(_WORD *)(a2 + 94) = v12;
      if ( v12 >= 0x80u )
      {
        v16[0] = 0LL;
        v13 = *(_QWORD *)(v3 + 3728);
        HIDWORD(v16[0]) = v12;
        v16[1] = *(_QWORD *)(a2 + 104);
        DxgkAcquireAdapterDdiSync(v13, 1);
        v7 = (int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD *))DpiDxgkDdiQueryDeviceDescriptor)(
                    *(_QWORD *)(v3 + 40),
                    *(_QWORD *)(v3 + 48),
                    *(unsigned int *)(a2 + 24),
                    v16);
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v3 + 3728));
        if ( (int)v7 >= 0 )
          return (unsigned int)v7;
      }
      else
      {
        v7 = -1073741811LL;
      }
    }
  }
  v8 = WdLogNewEntry5_WdError(v6);
  *(_QWORD *)(v8 + 24) = v7;
  WdLogEvent5_WdError(v8);
  return (unsigned int)v7;
}
