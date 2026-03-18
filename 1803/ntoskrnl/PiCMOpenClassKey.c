/*
 * XREFs of PiCMOpenClassKey @ 0x14056AD20
 * Callers:
 *     PiCMHandleIoctl @ 0x14050A580 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     _CmOpenInterfaceClassRegKey @ 0x140490620 (_CmOpenInterfaceClassRegKey.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     PiCMReleaseRegistryInputData @ 0x14050B204 (PiCMReleaseRegistryInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x14050B234 (PiCMCaptureRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x14050C23C (PiCMReturnHandleResultData.c)
 *     PiCMDuplicateRegistryHandle @ 0x14050CC68 (PiCMDuplicateRegistryHandle.c)
 *     RtlUpcaseUnicodeString @ 0x140539150 (RtlUpcaseUnicodeString.c)
 *     _CmOpenInstallerClassRegKey @ 0x14056B408 (_CmOpenInstallerClassRegKey.c)
 *     PiAuDoesClientHaveAccess @ 0x1405C68D0 (PiAuDoesClientHaveAccess.c)
 *     _CmCreateInterfaceClass @ 0x1405F1AF8 (_CmCreateInterfaceClass.c)
 *     _PnpCtxOpenContextBaseKey @ 0x1405F31C0 (_PnpCtxOpenContextBaseKey.c)
 *     _CmCreateInstallerClass @ 0x1407E6F60 (_CmCreateInstallerClass.c)
 */

__int64 __fastcall PiCMOpenClassKey(_DWORD *a1, unsigned int a2, _OWORD *a3, unsigned int a4, int a5, _DWORD *Handle)
{
  _DWORD *v6; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  int v10; // ecx
  int v11; // edi
  int v12; // r8d
  int v13; // edi
  int inited; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // zf
  ACCESS_MASK v18; // edi
  __int64 v19; // rdx
  bool v20; // sf
  int InterfaceClass; // eax
  HANDLE v23; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-11h] BYREF
  char v25[4]; // [rsp+60h] [rbp-1h] BYREF
  int v26; // [rsp+64h] [rbp+3h]
  int v27; // [rsp+68h] [rbp+7h]
  PCWSTR SourceString; // [rsp+70h] [rbp+Fh]
  ACCESS_MASK v29; // [rsp+7Ch] [rbp+1Bh]
  int v30; // [rsp+80h] [rbp+1Fh]
  int v31; // [rsp+84h] [rbp+23h]
  int v32; // [rsp+88h] [rbp+27h]

  v6 = Handle;
  Handle = 0LL;
  v23 = 0LL;
  *v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = PiCMCaptureRegistryInputData(a1, a2, a5, v25);
  if ( v11 < 0 )
    goto LABEL_19;
  if ( v26 || v31 || !a3 || a4 < 0x10 || (v13 = v27, (unsigned int)(v27 - 2) > 1) )
  {
    inited = -1073741811;
    goto LABEL_15;
  }
  if ( !SourceString )
  {
    v18 = v29;
    inited = PnpCtxOpenContextBaseKey(v10, 8 - (unsigned int)(v27 != 3), v12, v29, (__int64)&Handle);
    v20 = inited < 0;
LABEL_13:
    if ( !v20 )
      inited = PiCMDuplicateRegistryHandle(Handle, v19, v18, PreviousMode, &v23);
    goto LABEL_15;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( inited >= 0 )
  {
    inited = RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
    if ( inited >= 0 )
    {
      v17 = v13 == 3;
      v18 = v29;
      if ( v17 )
      {
        inited = CmOpenInterfaceClassRegKey(PiPnpRtlCtx, (int)SourceString, v15, v16, v29, 0, (__int64)&Handle, 0LL);
        if ( inited != -1073741772 )
          goto LABEL_12;
        if ( v30 == 1 )
        {
          if ( (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
          {
            InterfaceClass = CmCreateInterfaceClass(
                               PiPnpRtlCtx,
                               (_DWORD)SourceString,
                               v18,
                               (unsigned int)&Handle,
                               0LL,
                               0);
LABEL_25:
            inited = InterfaceClass;
            goto LABEL_12;
          }
          goto LABEL_24;
        }
      }
      else
      {
        inited = CmOpenInstallerClassRegKey(PiPnpRtlCtx, (_DWORD)SourceString, v15, v16, v29, 0, (__int64)&Handle, 0LL);
        if ( inited != -1073741772 )
        {
LABEL_12:
          v20 = inited < 0;
          goto LABEL_13;
        }
        if ( v30 == 1 )
        {
          if ( (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
          {
            InterfaceClass = CmCreateInstallerClass(
                               PiPnpRtlCtx,
                               (_DWORD)SourceString,
                               v18,
                               (unsigned int)&Handle,
                               0LL,
                               0);
            goto LABEL_25;
          }
LABEL_24:
          inited = -1073741790;
        }
      }
    }
  }
LABEL_15:
  v11 = PiCMReturnHandleResultData(inited, (__int64)v23, v32, a3, a4, v6);
  if ( Handle )
    ZwClose(Handle);
  if ( v11 < 0 || inited < 0 )
  {
    if ( v23 )
      ObCloseHandle(v23, PreviousMode);
  }
LABEL_19:
  PiCMReleaseRegistryInputData((__int64)v25);
  return (unsigned int)v11;
}
