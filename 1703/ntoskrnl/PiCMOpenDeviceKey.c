/*
 * XREFs of PiCMOpenDeviceKey @ 0x14043DDA0
 * Callers:
 *     PiCMHandleIoctl @ 0x14048A380 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     PiCMReleaseRegistryInputData @ 0x14043E104 (PiCMReleaseRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x14043E134 (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x14043E1C0 (PiCMCaptureRegistryInputData.c)
 *     PiCMDuplicateRegistryHandle @ 0x14043E3D8 (PiCMDuplicateRegistryHandle.c)
 *     PiCMConvertDeviceKeyType @ 0x14043E474 (PiCMConvertDeviceKeyType.c)
 *     _CmOpenDeviceRegKey @ 0x14048307C (_CmOpenDeviceRegKey.c)
 *     PiAuDoesClientHaveAccess @ 0x1404E4EB0 (PiAuDoesClientHaveAccess.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 */

__int64 __fastcall PiCMOpenDeviceKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  _DWORD *v7; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  int v10; // edi
  int v11; // edi
  int v12; // ebx
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // r9
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v18; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v19[4]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v20; // [rsp+54h] [rbp-2Ch]
  int v21; // [rsp+58h] [rbp-28h]
  __int64 v22; // [rsp+60h] [rbp-20h]
  unsigned int v23; // [rsp+6Ch] [rbp-14h]
  int v24; // [rsp+70h] [rbp-10h]
  int v25; // [rsp+74h] [rbp-Ch]
  unsigned int v26; // [rsp+78h] [rbp-8h]

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
      v12 = CmOpenDeviceRegKey(PiPnpRtlCtx, v11, (_DWORD)a6, v25, v23, 0, (__int64)&Handle, 0LL);
      if ( v12 != -1073741772 )
        goto LABEL_8;
      if ( v24 == 1 )
      {
        if ( (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
        {
          v12 = CmOpenDeviceRegKey(PiPnpRtlCtx, v11, (_DWORD)a6, v25, v13, 1, (__int64)&Handle, 0LL);
LABEL_8:
          if ( v12 >= 0 )
          {
            LOBYTE(v15) = PreviousMode;
            v12 = PiCMDuplicateRegistryHandle(Handle, v14, v13, v15, &v18);
          }
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
  v10 = PiCMReturnHandleResultData((unsigned int)v12, v18, v26, a3, a4, v7);
  if ( Handle )
    ZwClose(Handle);
  if ( v10 < 0 || v12 < 0 )
  {
    if ( v18 )
      ObCloseHandle(v18, PreviousMode);
  }
LABEL_14:
  PiCMReleaseRegistryInputData(v19);
  return (unsigned int)v10;
}
