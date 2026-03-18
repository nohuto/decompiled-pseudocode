/*
 * XREFs of PiCMOpenObjectKey @ 0x140574110
 * Callers:
 *     PiCMHandleIoctl @ 0x140525E40 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     _PnpCreateObject @ 0x140450FF0 (_PnpCreateObject.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     _PnpOpenObjectRegKey @ 0x1405264F8 (_PnpOpenObjectRegKey.c)
 *     PiCMReleaseObjectInputData @ 0x140530DB0 (PiCMReleaseObjectInputData.c)
 *     PiCMReturnHandleResultData @ 0x1405742E0 (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x14057436C (PiCMCaptureRegistryInputData.c)
 *     PiCMDuplicateRegistryHandle @ 0x140574580 (PiCMDuplicateRegistryHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x140574D38 (PiAuDoesClientHaveAccess.c)
 */

__int64 __fastcall PiCMOpenObjectKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  KPROCESSOR_MODE PreviousMode; // r15
  int v9; // ebx
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v14; // rcx
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v16; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v17[4]; // [rsp+50h] [rbp-30h] BYREF
  int v18; // [rsp+54h] [rbp-2Ch]
  int v19; // [rsp+58h] [rbp-28h]
  __int64 v20; // [rsp+60h] [rbp-20h]
  unsigned int v21; // [rsp+6Ch] [rbp-14h]
  int v22; // [rsp+70h] [rbp-10h]
  int v23; // [rsp+74h] [rbp-Ch]
  unsigned int v24; // [rsp+78h] [rbp-8h]

  v16 = 0LL;
  Handle = 0LL;
  *a6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = PiCMCaptureRegistryInputData(a1, a2, a5, v17);
  if ( v9 < 0 )
    goto LABEL_21;
  if ( !v20 || v18 || v23 || !a3 || a4 < 0x10 || (v19 & 0x7FFF0000) != 0 )
    goto LABEL_35;
  if ( v19 >= 0 )
  {
    if ( (unsigned __int16)v19 != 1 )
    {
      switch ( (unsigned __int16)v19 )
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
LABEL_35:
      v9 = -1073741811;
      goto LABEL_18;
    }
    v10 = 1;
  }
  else
  {
    v10 = (unsigned __int16)v19 < 0xBu ? (unsigned __int16)v19 : 0;
  }
  if ( !v10 )
    goto LABEL_35;
LABEL_11:
  if ( v10 == 1 || v10 == 3 || v10 == 5 )
    v9 = -1073741637;
  if ( v9 < 0 )
    goto LABEL_18;
  v9 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, v20, v10, v21, 0, (__int64)&Handle, 0LL, 0);
  if ( v9 != -1073741772 )
    goto LABEL_16;
  if ( v22 == 1 )
  {
    if ( (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
    {
      v9 = PnpCreateObject(v14, v20, v10, v21, &Handle);
LABEL_16:
      if ( v9 >= 0 )
      {
        LOBYTE(v12) = PreviousMode;
        v9 = PiCMDuplicateRegistryHandle(Handle, v11, v21, v12, &v16);
      }
      goto LABEL_18;
    }
    v9 = -1073741790;
  }
LABEL_18:
  v9 = PiCMReturnHandleResultData((unsigned int)v9, v16, v24, a3, a4, a6);
  if ( Handle )
    ZwClose(Handle);
  if ( v9 < 0 && v16 )
    ObCloseHandle(v16, PreviousMode);
LABEL_21:
  PiCMReleaseObjectInputData((__int64)v17);
  return (unsigned int)v9;
}
