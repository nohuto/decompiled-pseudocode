/*
 * XREFs of LdrpEnclaveAddDependentModule @ 0x1800D07BC
 * Callers:
 *     LdrpEnclaveAddDelayloadModules @ 0x1800D0704 (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800D08EC (LdrpEnclaveAddForwarderModules.c)
 * Callees:
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18002BE98 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpPreprocessDllName @ 0x1800318FC (LdrpPreprocessDllName.c)
 *     NtdllpFreeStringRoutine @ 0x18004FA20 (NtdllpFreeStringRoutine.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800D09C0 (LdrpFindOrPrepareEnclaveModule.c)
 */

__int64 __fastcall LdrpEnclaveAddDependentModule(_QWORD *a1, const ANSI_STRING *a2)
{
  int appended; // ebx
  unsigned int v5; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v6[8]; // [rsp+48h] [rbp-B8h] BYREF
  const void *v7; // [rsp+50h] [rbp-B0h] BYREF
  _WORD *v8; // [rsp+58h] [rbp-A8h]
  _WORD v9[128]; // [rsp+60h] [rbp-A0h] BYREF
  int v10; // [rsp+160h] [rbp+60h] BYREF
  _WORD *v11; // [rsp+168h] [rbp+68h]
  _WORD v12[128]; // [rsp+170h] [rbp+70h] BYREF

  LODWORD(v7) = 0x1000000;
  v8 = v9;
  v10 = 0x1000000;
  v11 = v12;
  v9[0] = 0;
  v12[0] = 0;
  appended = LdrpAppendAnsiStringToFilenameBuffer(&v7, a2);
  if ( appended >= 0 )
  {
    v5 = 0x800000;
    appended = LdrpPreprocessDllName((unsigned __int16 *)&v7, (unsigned __int16 *)&v10, 0LL, &v5);
    if ( appended >= 0 )
      appended = LdrpFindOrPrepareEnclaveModule(a1[21], &v10, a1[2], v5, a1[7], v6, a1[5]);
  }
  if ( v9 != v8 )
    NtdllpFreeStringRoutine(v8);
  v8 = v9;
  LODWORD(v7) = 0x1000000;
  v9[0] = 0;
  if ( v12 != v11 )
    NtdllpFreeStringRoutine(v11);
  return (unsigned int)appended;
}
