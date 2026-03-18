/*
 * XREFs of OmapSetBaud @ 0x1402CC720
 * Callers:
 *     OmapInitializePort @ 0x1402CC650 (OmapInitializePort.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall OmapSetBaud(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rdx
  char v7; // bl
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx

  if ( !a1 || !*(_QWORD *)a1 )
    return 0;
  LOBYTE(a3) = 7;
  LOBYTE(a2) = 8;
  (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 24))(a1, a2, a3);
  LOBYTE(v4) = -65;
  LOBYTE(v5) = 3;
  (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 24))(a1, v5, v4);
  LOBYTE(v6) = 2;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 16))(a1, v6);
  LOBYTE(v8) = v7 | 0x10;
  LOBYTE(v9) = 2;
  (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 24))(a1, v9, v8);
  LOBYTE(v10) = 3;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(a1 + 24))(a1, v10, 0LL);
  LOBYTE(v11) = 1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(a1 + 24))(a1, v11, 0LL);
  LOBYTE(v12) = -65;
  LOBYTE(v13) = 3;
  (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 24))(a1, v13, v12);
  LOBYTE(v14) = 1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(a1 + 24))(a1, v14, 0LL);
  LOBYTE(v15) = 26;
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(a1, 0LL, v15);
  LOBYTE(v16) = v7;
  LOBYTE(v17) = 2;
  (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 24))(a1, v17, v16);
  LOBYTE(v18) = 3;
  (*(void (__fastcall **)(__int64, __int64))(a1 + 24))(a1, v18);
  LOBYTE(v19) = 8;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(a1 + 24))(a1, v19, 0LL);
  return 1;
}
