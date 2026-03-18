/*
 * XREFs of PiCMValidateDeviceInstance @ 0x1404E6C28
 * Callers:
 *     PiCMHandleIoctl @ 0x14048A380 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x140483F04 (_RegRtlQueryValue.c)
 *     _PnpOpenObjectRegKey @ 0x140487A28 (_PnpOpenObjectRegKey.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140489ECC (PiPnpRtlApplyMandatoryFilters.c)
 *     PiAuDoesClientHaveAccess @ 0x1404E4EB0 (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBasicResultData @ 0x1404E6BA8 (PiCMReturnBasicResultData.c)
 *     _CmGetDeviceStatus @ 0x1404E7B28 (_CmGetDeviceStatus.c)
 *     PiCMReleaseObjectInputData @ 0x1404E850C (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1404E8E44 (PiCMCaptureObjectInputData.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
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
  HANDLE Handle; // [rsp+48h] [rbp-39h] BYREF
  int v14; // [rsp+50h] [rbp-31h] BYREF
  int v15; // [rsp+54h] [rbp-2Dh] BYREF
  _BYTE v16[4]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v17[4]; // [rsp+5Ch] [rbp-25h] BYREF
  char v18; // [rsp+60h] [rbp-21h] BYREF
  _BYTE v19[4]; // [rsp+68h] [rbp-19h] BYREF
  int v20; // [rsp+6Ch] [rbp-15h]
  int v21; // [rsp+70h] [rbp-11h]
  int v22[2]; // [rsp+78h] [rbp-9h]
  int v23; // [rsp+84h] [rbp+3h]
  int v24; // [rsp+88h] [rbp+7h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp+Fh] BYREF

  v6 = a6;
  Handle = 0LL;
  LOBYTE(a6) = 1;
  *v6 = 0;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, v19);
  if ( v9 < 0 )
    goto LABEL_17;
  if ( !*(_QWORD *)v22 || (v10 = v20, (unsigned int)(v20 - 1) > 1) || v21 != 1 || v23 || !a3 || a4 < 8 )
  {
    v11 = -1073741811;
    goto LABEL_14;
  }
  v11 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, *(__int64 *)v22, 1u, 1, 0, (__int64)&Handle, 0LL, 0);
  if ( v11 >= 0 )
  {
    if ( v10 == 2 && PiAuDoesClientHaveAccess(2u) )
    {
LABEL_19:
      LODWORD(a6) = 4;
      if ( (int)RegRtlQueryValue(Handle, L"Phantom", &v14, &v15, (unsigned int *)&a6) < 0
        || v14 != 4
        || (_DWORD)a6 != 4
        || !v15 )
      {
        goto LABEL_14;
      }
      goto LABEL_21;
    }
    SeCaptureSubjectContext(&SubjectContext);
    v11 = PiPnpRtlApplyMandatoryFilters(
            *(__int64 *)&PiPnpRtlCtx,
            *(const wchar_t **)v22,
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
      if ( (int)CmGetDeviceStatus(PiPnpRtlCtx, v22[0], (_DWORD)Handle, (unsigned int)&v18, (__int64)v17, (__int64)v16) < 0 )
LABEL_21:
        v11 = -1073741810;
    }
  }
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  v9 = PiCMReturnBasicResultData(v11, v24, a3, a4, v6);
LABEL_17:
  PiCMReleaseObjectInputData(v19);
  return (unsigned int)v9;
}
