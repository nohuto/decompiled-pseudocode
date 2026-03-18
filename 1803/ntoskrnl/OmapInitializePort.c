/*
 * XREFs of OmapInitializePort @ 0x1402CC650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     OmapSetBaud @ 0x1402CC720 (OmapSetBaud.c)
 *     UartpSetAccess @ 0x1402CE62C (UartpSetAccess.c)
 */

char __fastcall OmapInitializePort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx

  v4 = a2;
  *(_WORD *)(a2 + 12) = 0;
  LOBYTE(a2) = a3;
  LOBYTE(a4) = 32;
  LOBYTE(a3) = 1;
  UartpSetAccess(v4, a2, a3, a4);
  OmapSetBaud(v4, *(unsigned int *)(v4 + 8));
  LOBYTE(v5) = 3;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(v4 + 16))(v4, v5);
  LOBYTE(v7) = 3;
  LOBYTE(v8) = v6 & 0x7F;
  (*(void (__fastcall **)(__int64, __int64, __int64))(v4 + 24))(v4, v7, v8);
  LOBYTE(v9) = 1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(v4 + 24))(v4, v9, 0LL);
  LOBYTE(v10) = 6;
  LOBYTE(v11) = 2;
  (*(void (__fastcall **)(__int64, __int64, __int64))(v4 + 24))(v4, v11, v10);
  LOBYTE(v12) = 4;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64))(v4 + 16))(v4, v12);
  LOBYTE(v14) = 4;
  LOBYTE(v15) = v13 & 3;
  (*(void (__fastcall **)(__int64, __int64, __int64))(v4 + 24))(v4, v14, v15);
  LOBYTE(v16) = 3;
  LOBYTE(v17) = 4;
  (*(void (__fastcall **)(__int64, __int64, __int64))(v4 + 24))(v4, v17, v16);
  LOBYTE(v18) = 1;
  LOBYTE(v19) = 2;
  (*(void (__fastcall **)(__int64, __int64, __int64))(v4 + 24))(v4, v19, v18);
  return 1;
}
