/*
 * XREFs of PiCMValidateDeviceInstance @ 0x140530010
 * Callers:
 *     PiCMHandleIoctl @ 0x140525E40 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     _RegRtlQueryValue @ 0x140521C44 (_RegRtlQueryValue.c)
 *     _PnpOpenObjectRegKey @ 0x1405264F8 (_PnpOpenObjectRegKey.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140528568 (PiPnpRtlApplyMandatoryFilters.c)
 *     _CmGetDeviceStatus @ 0x140529914 (_CmGetDeviceStatus.c)
 *     PiCMReturnBasicResultData @ 0x14052FF90 (PiCMReturnBasicResultData.c)
 *     PiCMReleaseObjectInputData @ 0x140530DB0 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x140531014 (PiCMCaptureObjectInputData.c)
 *     PiAuDoesClientHaveAccess @ 0x140574D38 (PiAuDoesClientHaveAccess.c)
 */

__int64 __fastcall PiCMValidateDeviceInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r12
  int v9; // ebx
  int v10; // edi
  int v11; // ebx
  unsigned int v13; // [rsp+38h] [rbp-49h]
  HANDLE Handle; // [rsp+48h] [rbp-39h] BYREF
  int v15; // [rsp+50h] [rbp-31h] BYREF
  int v16; // [rsp+54h] [rbp-2Dh] BYREF
  int v17; // [rsp+58h] [rbp-29h] BYREF
  int v18; // [rsp+5Ch] [rbp-25h] BYREF
  int v19; // [rsp+60h] [rbp-21h] BYREF
  _BYTE v20[4]; // [rsp+68h] [rbp-19h] BYREF
  int v21; // [rsp+6Ch] [rbp-15h]
  int v22; // [rsp+70h] [rbp-11h]
  int v23[2]; // [rsp+78h] [rbp-9h]
  int v24; // [rsp+84h] [rbp+3h]
  int v25; // [rsp+88h] [rbp+7h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp+Fh] BYREF

  v6 = a6;
  Handle = 0LL;
  LOBYTE(a6) = 1;
  *v6 = 0;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, v20);
  if ( v9 < 0 )
    goto LABEL_17;
  if ( !*(_QWORD *)v23 || (v10 = v21, (unsigned int)(v21 - 1) > 1) || v22 != 1 || v24 || !a3 || a4 < 8 )
  {
    v11 = -1073741811;
    goto LABEL_14;
  }
  v11 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, *(__int64 *)v23, 1u, 1, 0, (__int64)&Handle, 0LL, 0);
  if ( v11 >= 0 )
  {
    if ( v10 == 2 && (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
    {
LABEL_19:
      LODWORD(a6) = 4;
      if ( (int)RegRtlQueryValue(Handle, L"Phantom", &v15, &v16, (unsigned int *)&a6) < 0
        || v15 != 4
        || (_DWORD)a6 != 4
        || !v16 )
      {
        goto LABEL_14;
      }
      goto LABEL_21;
    }
    SeCaptureSubjectContext(&SubjectContext);
    v11 = PiPnpRtlApplyMandatoryFilters(
            *(__int64 *)&PiPnpRtlCtx,
            *(__int64 *)v23,
            1,
            (__int64)Handle,
            &SubjectContext,
            &a6);
    SeReleaseSubjectContext(&SubjectContext);
    if ( v11 >= 0 )
    {
      if ( !(_BYTE)a6 )
        goto LABEL_21;
      if ( v10 == 2 )
        goto LABEL_19;
      if ( (int)CmGetDeviceStatus(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(const WCHAR **)v23,
                  (__int64)Handle,
                  &v19,
                  &v18,
                  &v17,
                  v13) < 0 )
LABEL_21:
        v11 = -1073741810;
    }
  }
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  v9 = PiCMReturnBasicResultData(v11, v25, a3, a4, v6);
LABEL_17:
  PiCMReleaseObjectInputData(v20);
  return (unsigned int)v9;
}
