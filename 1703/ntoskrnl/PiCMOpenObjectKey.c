/*
 * XREFs of PiCMOpenObjectKey @ 0x14043DF64
 * Callers:
 *     PiCMHandleIoctl @ 0x14048A380 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     PiCMReleaseRegistryInputData @ 0x14043E104 (PiCMReleaseRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x14043E134 (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x14043E1C0 (PiCMCaptureRegistryInputData.c)
 *     PiCMDuplicateRegistryHandle @ 0x14043E3D8 (PiCMDuplicateRegistryHandle.c)
 *     _PnpOpenObjectRegKey @ 0x140487A28 (_PnpOpenObjectRegKey.c)
 *     PiAuDoesClientHaveAccess @ 0x1404E4EB0 (PiAuDoesClientHaveAccess.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     _PnpCreateObject @ 0x14073D4C4 (_PnpCreateObject.c)
 */

__int64 __fastcall PiCMOpenObjectKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  KPROCESSOR_MODE PreviousMode; // r15
  int Object; // ebx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r9
  int v15; // ecx
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v17; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v18[4]; // [rsp+50h] [rbp-30h] BYREF
  int v19; // [rsp+54h] [rbp-2Ch]
  int v20; // [rsp+58h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp-20h]
  unsigned int v22; // [rsp+6Ch] [rbp-14h]
  int v23; // [rsp+70h] [rbp-10h]
  int v24; // [rsp+74h] [rbp-Ch]
  unsigned int v25; // [rsp+78h] [rbp-8h]

  v17 = 0LL;
  Handle = 0LL;
  *a6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = PiCMCaptureRegistryInputData(a1, a2, a5, v18);
  if ( Object < 0 )
    goto LABEL_21;
  if ( !v21 || v19 || v24 || !a3 || a4 < 0x10 || (v20 & 0x7FFF0000) != 0 )
    goto LABEL_36;
  if ( v20 >= 0 )
  {
    if ( (unsigned __int16)v20 != 1 )
    {
      switch ( (unsigned __int16)v20 )
      {
        case 2u:
          v10 = 2;
          goto LABEL_11;
        case 3u:
          v10 = 4;
          goto LABEL_11;
        case 4u:
          v10 = 3;
          goto LABEL_11;
      }
LABEL_36:
      Object = -1073741811;
      goto LABEL_18;
    }
    v10 = 1;
  }
  else
  {
    v10 = (unsigned __int16)v20 < 0xBu ? (unsigned __int16)v20 : 0;
  }
  if ( !v10 )
    goto LABEL_36;
LABEL_11:
  if ( v10 == 1 || v10 == 3 || v10 == 5 )
    Object = -1073741637;
  if ( Object < 0 )
    goto LABEL_18;
  Object = PnpOpenObjectRegKey(PiPnpRtlCtx, v21, v10, v22, 0, (__int64)&Handle, 0LL, 0);
  if ( Object != -1073741772 )
    goto LABEL_16;
  if ( v23 == 1 )
  {
    if ( (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
    {
      Object = PnpCreateObject(v15, v21, v10, v22, (__int64)&Handle);
LABEL_16:
      if ( Object >= 0 )
      {
        LOBYTE(v12) = PreviousMode;
        Object = PiCMDuplicateRegistryHandle(Handle, v11, v22, v12, &v17);
      }
      goto LABEL_18;
    }
    Object = -1073741790;
  }
LABEL_18:
  Object = PiCMReturnHandleResultData((unsigned int)Object, v17, v25, a3, a4, a6);
  if ( Handle )
    ZwClose(Handle);
  if ( Object < 0 && v17 )
    ObCloseHandle(v17, PreviousMode);
LABEL_21:
  PiCMReleaseRegistryInputData(v18);
  return (unsigned int)Object;
}
