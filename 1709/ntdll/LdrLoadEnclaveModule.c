/*
 * XREFs of LdrLoadEnclaveModule @ 0x1800D0260
 * Callers:
 *     <none>
 * Callees:
 *     LdrpPreprocessDllName @ 0x1800318FC (LdrpPreprocessDllName.c)
 *     LdrpInitializeDllPath @ 0x180035884 (LdrpInitializeDllPath.c)
 *     RtlReleasePath @ 0x180038070 (RtlReleasePath.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x180047BC0 (LdrpObtainLockedEnclave.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D03CC (LdrpCleanupEnclaveLoadState.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800D0490 (LdrpCreatePendingEnclaveModule.c)
 *     LdrpDereferenceEnclave @ 0x1800D06BC (LdrpDereferenceEnclave.c)
 *     LdrpLoadEnclaveModule @ 0x1800D0B74 (LdrpLoadEnclaveModule.c)
 */

__int64 __fastcall LdrLoadEnclaveModule(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // r14
  _QWORD *v7; // rsi
  int PendingEnclaveModule; // ebx
  _QWORD *i; // rdi
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  int v11[3]; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v12[15]; // [rsp+50h] [rbp-B0h] BYREF
  char v13; // [rsp+CCh] [rbp-34h]
  int v14; // [rsp+D0h] [rbp-30h] BYREF
  __int16 *v15; // [rsp+D8h] [rbp-28h]
  __int16 v16; // [rsp+E0h] [rbp-20h] BYREF

  v5 = LdrpObtainLockedEnclave(a1, 1);
  if ( !v5 )
    return 3221225632LL;
  LdrpInitializeDllPath(*(_QWORD *)(a3 + 8), a2, v12);
  if ( v5[10] || (v7 = v5 + 11, (_QWORD *)*v7 != v7) )
  {
    PendingEnclaveModule = -1073741800;
  }
  else
  {
    v14 = 0x1000000;
    v15 = &v16;
    v16 = 0;
    v10 = 0x800000;
    PendingEnclaveModule = LdrpPreprocessDllName((unsigned __int16 *)a3, (unsigned __int16 *)&v14, 0LL, &v10);
    if ( PendingEnclaveModule >= 0 )
    {
      v11[0] = 0;
      PendingEnclaveModule = LdrpCreatePendingEnclaveModule(
                               (_DWORD)v5,
                               (unsigned int)&v14,
                               v10,
                               7,
                               (__int64)v12,
                               0LL,
                               0LL,
                               (__int64)v11);
      if ( PendingEnclaveModule >= 0 )
      {
        for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
        {
          PendingEnclaveModule = LdrpLoadEnclaveModule(i[22]);
          if ( PendingEnclaveModule < 0 )
            goto LABEL_13;
        }
        PendingEnclaveModule = v11[0];
      }
    }
  }
LABEL_13:
  LdrpCleanupEnclaveLoadState(v5, (unsigned int)PendingEnclaveModule);
  RtlLeaveCriticalSection((__int64)(v5 + 2));
  LdrpDereferenceEnclave(v5);
  if ( v13 )
    RtlReleasePath(v12[0]);
  return (unsigned int)PendingEnclaveModule;
}
