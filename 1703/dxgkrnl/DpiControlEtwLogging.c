/*
 * XREFs of DpiControlEtwLogging @ 0x1C01C2370
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C00122B8 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00013AC (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

LONG __fastcall DpiControlEtwLogging(char a1, unsigned int a2, char a3)
{
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rbx
  void (__fastcall *v9)(__int64, _QWORD, __int64); // rax
  __int64 v10; // r8

  AcquireMiniportListMutex();
  v7 = qword_1C006F9F8;
  byte_1C006F9D4 = a1;
  v8 = qword_1C006F9F8;
  if ( *(_QWORD *)v8 != v8 )
  {
    do
    {
      v9 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v8 + 264);
      v10 = a2 & 0xFFFFCFFF;
      if ( *(_DWORD *)(v8 + 28) < 0x5008u )
        v10 = a2;
      a2 = v10;
      if ( v9 )
      {
        LOBYTE(v10) = a3;
        LOBYTE(v6) = a1;
        v9(v6, a2, v10);
        v7 = qword_1C006F9F8;
      }
      v8 = *(_QWORD *)v8;
    }
    while ( *(_QWORD *)v8 != v7 );
  }
  _InterlockedExchange64(&qword_1C006FA08, 0LL);
  return KeReleaseMutex(Mutex, 0);
}
