/*
 * XREFs of MiCaptureAndResetWorkingSetAccessBits @ 0x14016A1C8
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14000B2A0 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiTbFlushType @ 0x14003B3C0 (MiTbFlushType.c)
 *     MiDrainSystemAccessLog @ 0x14007A2A4 (MiDrainSystemAccessLog.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiCaptureAndResetWorkingSetAccessBits(__int64 a1, char a2, char a3)
{
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v9; // [rsp+20h] [rbp-E0h] BYREF
  int *v10; // [rsp+28h] [rbp-D8h]
  _DWORD *v11; // [rsp+30h] [rbp-D0h]
  _QWORD v12[22]; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v14; // [rsp+F4h] [rbp-Ch]
  __int64 v15; // [rsp+F8h] [rbp-8h]
  __int64 v16; // [rsp+100h] [rbp+0h]
  __int64 v17; // [rsp+108h] [rbp+8h]
  _DWORD v18[68]; // [rsp+1B0h] [rbp+B0h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  memset(v12, 0, sizeof(v12));
  v12[5] = -1LL;
  v12[19] = MiResetAccessBitPte;
  v6 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v12[20] = MiResetAccessBitsTail;
  LODWORD(v12[0]) = 6;
  v12[3] = a1;
  BYTE4(v12[0]) = a2;
  if ( v6 && *(_QWORD *)(a1 + 584) )
  {
    v18[0] = 0;
    v11 = v18;
    v18[1] = 32;
  }
  if ( (a3 & 0x10) != 0 )
  {
    v15 = 20LL;
    v10 = &v13;
    v13 = MiTbFlushType(a1);
    v14 = v7;
    v16 = v7;
    v17 = v7;
  }
  LODWORD(v9) = dword_1403CBF28;
  v12[21] = &v9;
  MiWalkPageTables((int *)v12);
  return MiDrainSystemAccessLog(a1);
}
