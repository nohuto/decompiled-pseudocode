/*
 * XREFs of Uart16550DoesPortExist @ 0x1402CC824
 * Callers:
 *     Uart16550InitializePortCommon @ 0x1402CCA04 (Uart16550InitializePortCommon.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

bool __fastcall Uart16550DoesPortExist(__int64 a1, __int64 a2)
{
  bool v2; // di
  char v4; // si
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx

  v2 = 0;
  if ( !a1 || !*(_QWORD *)a1 )
    return 0;
  LOBYTE(a2) = 4;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 16))(a1, a2);
  LOBYTE(v5) = 16;
  LOBYTE(v6) = 4;
  (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 24))(a1, v6, v5);
  LOBYTE(v7) = 16;
  LOBYTE(v8) = 4;
  (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 24))(a1, v8, v7);
  LOBYTE(v9) = 6;
  if ( ((*(__int64 (__fastcall **)(__int64, __int64))(a1 + 16))(a1, v9) & 0xF0) == 0 )
  {
    LOBYTE(v11) = 20;
    LOBYTE(v10) = 4;
    (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 24))(a1, v10, v11);
    LOBYTE(v12) = 6;
    v2 = ((*(__int64 (__fastcall **)(__int64, __int64))(a1 + 16))(a1, v12) & 0x40) != 0;
  }
  LOBYTE(v11) = v4;
  LOBYTE(v10) = 4;
  (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 24))(a1, v10, v11);
  return v2;
}
