/*
 * XREFs of MiCaptureAndResetWorkingSetAccessBits @ 0x14013F704
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400D8800 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x140006990 (MiEmptyPageAccessLog.c)
 *     MiTbFlushType @ 0x14007FA04 (MiTbFlushType.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiWalkPageTables @ 0x1400D7BB0 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

void __fastcall MiCaptureAndResetWorkingSetAccessBits(__int64 a1, char a2, char a3)
{
  int v6; // eax
  LONG *SharedVm; // rbx
  _QWORD *v8; // rcx
  int v9; // [rsp+20h] [rbp-E0h] BYREF
  int *v10; // [rsp+28h] [rbp-D8h]
  _QWORD v11[18]; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v13; // [rsp+C4h] [rbp-3Ch]
  int v14; // [rsp+C8h] [rbp-38h]
  int v15; // [rsp+CCh] [rbp-34h]
  __int64 v16; // [rsp+D0h] [rbp-30h]
  __int64 v17; // [rsp+D8h] [rbp-28h]

  v10 = 0LL;
  memset((char *)v11 + 4, 0, 0x8CuLL);
  v11[3] = -1LL;
  v11[15] = MiResetAccessBitPte;
  v11[16] = MiResetAccessBitsTail;
  LODWORD(v11[0]) = 2;
  v11[1] = a1;
  BYTE4(v11[0]) = a2;
  if ( (a3 & 0x10) != 0 )
  {
    v6 = MiTbFlushType(a1);
    v15 = 0;
    v13 = 0;
    v16 = 0LL;
    v17 = 0LL;
    v10 = &v12;
    v12 = v6;
    v14 = 20;
  }
  v9 = dword_14036CA68;
  v11[17] = &v9;
  MiWalkPageTables((__int64)v11);
  SharedVm = MiGetSharedVm(a1);
  v8 = (_QWORD *)*((_QWORD *)SharedVm + 5);
  if ( v8 )
  {
    MiEmptyPageAccessLog(v8);
    *((_QWORD *)SharedVm + 5) = 0LL;
  }
}
