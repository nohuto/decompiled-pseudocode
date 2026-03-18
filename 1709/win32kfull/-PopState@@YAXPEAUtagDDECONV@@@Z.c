/*
 * XREFs of ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01F0680
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F0990 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F0C20 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F0F80 (-xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F10C0 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F13B0 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F1480 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F1710 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C01F2168 (xxxFreeDdeConv.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     FreeDdeXact @ 0x1C01F18C0 (FreeDdeXact.c)
 */

void __fastcall PopState(struct tagDDECONV *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rdi
  __int64 v6; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  char *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int128 v14; // [rsp+20h] [rbp-48h]
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v16[5]; // [rsp+40h] [rbp-28h] BYREF

  v4 = (char *)a1 + 56;
  v6 = *((_QWORD *)a1 + 7);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v16[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v16;
  v16[1] = v6;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  *(_QWORD *)&v14 = v4;
  v8 = *(_QWORD *)(*(_QWORD *)v4 + 24LL);
  *((_QWORD *)&v14 + 1) = v8;
  v15 = v14;
  v9 = HMAssignmentLock(&v15);
  v10 = (char *)a1 + 64;
  if ( v8 )
    v10 = (char *)(v9 + 24);
  HMAssignmentUnlock(v10);
  v13 = ThreadUnlock1(v12, v11);
  if ( v13 )
    FreeDdeXact(v13);
}
