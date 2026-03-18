/*
 * XREFs of MiCaptureAndResetWorkingSetAccessBits @ 0x14021CEDC
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14009C460 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x140011730 (MiEmptyPageAccessLog.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiWalkPageTables @ 0x14009CD60 (MiWalkPageTables.c)
 *     MiTbFlushType @ 0x1400A5D50 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void __fastcall MiCaptureAndResetWorkingSetAccessBits(__int64 a1, char a2, char a3)
{
  bool v6; // zf
  int v7; // eax
  LONG *SharedVm; // rbx
  _QWORD *v9; // rcx
  int v10; // [rsp+20h] [rbp-E0h] BYREF
  int *v11; // [rsp+28h] [rbp-D8h]
  _DWORD *v12; // [rsp+30h] [rbp-D0h]
  _QWORD v13[20]; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v15; // [rsp+E4h] [rbp-1Ch]
  int v16; // [rsp+E8h] [rbp-18h]
  int v17; // [rsp+ECh] [rbp-14h]
  __int64 v18; // [rsp+F0h] [rbp-10h]
  __int64 v19; // [rsp+F8h] [rbp-8h]
  _DWORD v20[68]; // [rsp+1A0h] [rbp+A0h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  memset((char *)v13 + 4, 0, 0x94uLL);
  v13[3] = -1LL;
  v6 = (*(_BYTE *)(a1 + 192) & 7) == 0;
  v13[16] = MiResetAccessBitPte;
  v13[17] = MiResetAccessBitsTail;
  LODWORD(v13[0]) = 2;
  v13[1] = a1;
  BYTE4(v13[0]) = a2;
  if ( v6 && *(_QWORD *)(a1 + 584) )
  {
    v20[0] = 0;
    v12 = v20;
    v20[1] = 32;
  }
  if ( (a3 & 0x10) != 0 )
  {
    v17 = 0;
    v11 = &v14;
    v7 = MiTbFlushType(a1);
    v15 = 0;
    v18 = 0LL;
    v19 = 0LL;
    v14 = v7;
    v16 = 20;
  }
  v10 = dword_140388C68;
  v13[18] = &v10;
  MiWalkPageTables((__int64)v13);
  SharedVm = MiGetSharedVm(a1);
  v9 = (_QWORD *)*((_QWORD *)SharedVm + 5);
  if ( v9 )
  {
    MiEmptyPageAccessLog(v9);
    *((_QWORD *)SharedVm + 5) = 0LL;
  }
}
