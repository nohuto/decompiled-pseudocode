/*
 * XREFs of Uart16550SetBaudCommon @ 0x1402CCCF8
 * Callers:
 *     Uart16550SetBaud @ 0x1402CCCD0 (Uart16550SetBaud.c)
 *     Apm88xxxxSetBaud @ 0x1402CD5E0 (Apm88xxxxSetBaud.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall Uart16550SetBaudCommon(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rdx
  unsigned int v6; // ebx
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  char result; // al

  if ( !a1 || !*(_QWORD *)a1 || !a2 )
    return 0;
  v5 = a3 % a2;
  LOBYTE(v5) = 3;
  v6 = a3 / a2;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 16))(a1, v5);
  LOBYTE(v8) = 3;
  LOBYTE(v9) = v7 | 0x80;
  (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 24))(a1, v8, v9);
  LOBYTE(v10) = 1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(a1 + 24))(a1, v10, v6 >> 8);
  LOBYTE(v11) = v6;
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(a1, 0LL, v11);
  LOBYTE(v12) = 3;
  (*(void (__fastcall **)(__int64, __int64))(a1 + 24))(a1, v12);
  result = 1;
  *(_DWORD *)(a1 + 8) = a2;
  return result;
}
