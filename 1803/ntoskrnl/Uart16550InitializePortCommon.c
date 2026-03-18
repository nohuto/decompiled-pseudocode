/*
 * XREFs of Uart16550InitializePortCommon @ 0x1402CCA04
 * Callers:
 *     NvidiaInitializePort @ 0x1402CC620 (NvidiaInitializePort.c)
 *     Uart16550InitializePort @ 0x1402CC9E0 (Uart16550InitializePort.c)
 *     Uart16550LegacyInitializePort @ 0x1402CCAE0 (Uart16550LegacyInitializePort.c)
 *     Uart16550MmInitializePort @ 0x1402CCB50 (Uart16550MmInitializePort.c)
 *     Apm88xxxxInitializePort @ 0x1402CD5B0 (Apm88xxxxInitializePort.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     Uart16550DoesPortExist @ 0x1402CC824 (Uart16550DoesPortExist.c)
 *     Uart16550SetBaud @ 0x1402CCCD0 (Uart16550SetBaud.c)
 *     UartpSetAccess @ 0x1402CE62C (UartpSetAccess.c)
 */

bool __fastcall Uart16550InitializePortCommon(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // al
  char v6; // bl
  __int64 v7; // rdi
  __int64 v8; // rdx
  bool result; // al
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rdx

  v5 = a4;
  v6 = a3;
  LOBYTE(a4) = a5;
  v7 = a2;
  LOBYTE(a3) = v5;
  LOBYTE(a2) = v6;
  UartpSetAccess(v7, a2, a3, a4);
  if ( v6 || (result = Uart16550DoesPortExist(v7, v8)) )
  {
    LOBYTE(v8) = 3;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64))(v7 + 16))(v7, v8);
    LOBYTE(v11) = 3;
    LOBYTE(v12) = v10 & 0x7F;
    (*(void (__fastcall **)(__int64, __int64, __int64))(v7 + 24))(v7, v11, v12);
    LOBYTE(v13) = 1;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(v7 + 24))(v7, v13, 0LL);
    LOBYTE(v14) = 6;
    LOBYTE(v15) = 2;
    (*(void (__fastcall **)(__int64, __int64, __int64))(v7 + 24))(v7, v15, v14);
    Uart16550SetBaud(v7, *(unsigned int *)(v7 + 8));
    LOBYTE(v16) = 1;
    LOBYTE(v17) = 2;
    (*(void (__fastcall **)(__int64, __int64, __int64))(v7 + 24))(v7, v17, v16);
    LOBYTE(v18) = 3;
    LOBYTE(v19) = 4;
    (*(void (__fastcall **)(__int64, __int64, __int64))(v7 + 24))(v7, v19, v18);
    LOBYTE(v20) = 6;
    if ( ((*(__int64 (__fastcall **)(__int64, __int64))(v7 + 16))(v7, v20) & 0x40) != 0 )
      *(_WORD *)(v7 + 12) |= 2u;
    return 1;
  }
  return result;
}
