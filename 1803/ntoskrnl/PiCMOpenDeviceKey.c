/*
 * XREFs of PiCMOpenDeviceKey @ 0x1405731B0
 * Callers:
 *     PiCMHandleIoctl @ 0x14050A580 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     _CmOpenDeviceRegKey @ 0x140504BB4 (_CmOpenDeviceRegKey.c)
 *     PiCMReleaseRegistryInputData @ 0x14050B204 (PiCMReleaseRegistryInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x14050B234 (PiCMCaptureRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x14050C23C (PiCMReturnHandleResultData.c)
 *     PiCMDuplicateRegistryHandle @ 0x14050CC68 (PiCMDuplicateRegistryHandle.c)
 *     PiCMConvertDeviceKeyType @ 0x14057332C (PiCMConvertDeviceKeyType.c)
 *     PiAuDoesClientHaveAccess @ 0x1405C68D0 (PiAuDoesClientHaveAccess.c)
 */

__int64 __fastcall PiCMOpenDeviceKey(_DWORD *a1, unsigned int a2, _OWORD *a3, unsigned int a4, int a5, _DWORD *a6)
{
  _DWORD *v7; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  int v10; // edi
  __int64 v11; // rdi
  int v12; // ebx
  int v13; // esi
  __int64 v14; // rdx
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v18; // [rsp+48h] [rbp-38h] BYREF
  char v19[4]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v20; // [rsp+54h] [rbp-2Ch]
  int v21; // [rsp+58h] [rbp-28h]
  __int64 v22; // [rsp+60h] [rbp-20h]
  int v23; // [rsp+6Ch] [rbp-14h]
  int v24; // [rsp+70h] [rbp-10h]
  unsigned int v25; // [rsp+74h] [rbp-Ch]
  int v26; // [rsp+78h] [rbp-8h]

  v18 = 0LL;
  Handle = 0LL;
  v7 = a6;
  LODWORD(a6) = 0;
  *v7 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = PiCMCaptureRegistryInputData(a1, a2, a5, v19);
  if ( v10 < 0 )
    goto LABEL_14;
  v11 = v22;
  if ( v22 && v21 == 1 && a3 && a4 >= 0x10 )
  {
    v12 = PiCMConvertDeviceKeyType(v20, &a6);
    if ( v12 >= 0 )
    {
      v13 = v23;
      v12 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v11, (unsigned int)a6, v25, v23, 0, (__int64)&Handle, 0LL);
      if ( v12 != -1073741772 )
        goto LABEL_8;
      if ( v24 == 1 )
      {
        if ( (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
        {
          v12 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v11, (unsigned int)a6, v25, v13, 1, (__int64)&Handle, 0LL);
LABEL_8:
          if ( v12 >= 0 )
            v12 = PiCMDuplicateRegistryHandle(Handle, v14, v13, PreviousMode, &v18);
          goto LABEL_10;
        }
        v12 = -1073741790;
      }
    }
  }
  else
  {
    v12 = -1073741811;
  }
LABEL_10:
  v10 = PiCMReturnHandleResultData(v12, (__int64)v18, v26, a3, a4, v7);
  if ( Handle )
    ZwClose(Handle);
  if ( v10 < 0 || v12 < 0 )
  {
    if ( v18 )
      ObCloseHandle(v18, PreviousMode);
  }
LABEL_14:
  PiCMReleaseRegistryInputData((__int64)v19);
  return (unsigned int)v10;
}
