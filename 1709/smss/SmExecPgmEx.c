/*
 * XREFs of SmExecPgmEx @ 0x1400023E4
 * Callers:
 *     SmscpExecuteInitialCommand @ 0x140002340 (SmscpExecuteInitialCommand.c)
 *     SmscpLoadSubSystem @ 0x140002490 (SmscpLoadSubSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 *     memset_0 @ 0x14000C86D (memset_0.c)
 */

__int64 __fastcall SmExecPgmEx(__int64 a1, __int128 *a2)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm1
  _BYTE v8[40]; // [rsp+20h] [rbp-E0h] BYREF
  int v9; // [rsp+48h] [rbp-B8h]
  __int128 v10; // [rsp+50h] [rbp-B0h]
  __int128 v11; // [rsp+60h] [rbp-A0h]
  __int128 v12; // [rsp+70h] [rbp-90h]
  __int128 v13; // [rsp+80h] [rbp-80h]
  __int128 v14; // [rsp+90h] [rbp-70h]
  __int128 v15; // [rsp+A0h] [rbp-60h]
  __int64 v16; // [rsp+B0h] [rbp-50h]
  char v17; // [rsp+B8h] [rbp-48h]

  memset_0(v8, 0, 0x148uLL);
  v3 = a2[1];
  v10 = *a2;
  v12 = a2[2];
  v4 = a2[4];
  v11 = v3;
  v5 = a2[3];
  v14 = v4;
  *(_QWORD *)&v4 = *((_QWORD *)a2 + 12);
  v13 = v5;
  v6 = a2[5];
  v16 = v4;
  v15 = v6;
  v17 = 0;
  v9 = 3;
  return RtlSendMsgToSm(SmpApiConnectionPort, v8);
}
