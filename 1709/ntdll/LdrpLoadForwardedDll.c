/*
 * XREFs of LdrpLoadForwardedDll @ 0x18002BF34
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x180022A6C (LdrpGetDelayloadExportDll.c)
 *     LdrpHandleProtectedDelayload @ 0x180026850 (LdrpHandleProtectedDelayload.c)
 *     LdrpResolveProcedureAddress @ 0x180029014 (LdrpResolveProcedureAddress.c)
 * Callees:
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18002BE98 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpLoadDllInternal @ 0x18002DFFC (LdrpLoadDllInternal.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18002EE40 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180031110 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpPreprocessDllName @ 0x1800318FC (LdrpPreprocessDllName.c)
 *     NtdllpFreeStringRoutine @ 0x18004FA20 (NtdllpFreeStringRoutine.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall LdrpLoadForwardedDll(
        const ANSI_STRING *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int appended; // [rsp+40h] [rbp-2C8h] BYREF
  int v10; // [rsp+44h] [rbp-2C4h] BYREF
  __int64 v11; // [rsp+50h] [rbp-2B8h] BYREF
  int v12; // [rsp+58h] [rbp-2B0h]
  _BYTE v13[56]; // [rsp+60h] [rbp-2A8h] BYREF
  const void *v14; // [rsp+A0h] [rbp-268h] BYREF
  _WORD *v15; // [rsp+A8h] [rbp-260h]
  _WORD v16[128]; // [rsp+B0h] [rbp-258h] BYREF
  _UNICODE_STRING v17; // [rsp+1B0h] [rbp-158h] BYREF
  _WORD v18[128]; // [rsp+1C0h] [rbp-148h] BYREF

  v17.Buffer = v18;
  *(_DWORD *)&v17.Length = 0x1000000;
  v18[0] = 0;
  v15 = v16;
  LODWORD(v14) = 0x1000000;
  v16[0] = 0;
  appended = LdrpAppendAnsiStringToFilenameBuffer(&v14, a1);
  if ( appended >= 0 )
  {
    v11 = 72LL;
    v12 = 1;
    memset(v13, 0, sizeof(v13));
    RtlActivateActivationContextUnsafeFast(&v11, *(_QWORD *)(a4 + 136));
    v10 = 0;
    appended = LdrpPreprocessDllName(&v14, &v17, a4, &v10);
    if ( appended >= 0 )
      LdrpLoadDllInternal(&v17, a4, a3, a6, (__int64)&appended);
    RtlDeactivateActivationContextUnsafeFast(&v11);
  }
  if ( v16 != v15 )
    NtdllpFreeStringRoutine(v15);
  v15 = v16;
  LODWORD(v14) = 0x1000000;
  v16[0] = 0;
  if ( v18 != v17.Buffer )
    NtdllpFreeStringRoutine(v17.Buffer);
  return (unsigned int)appended;
}
