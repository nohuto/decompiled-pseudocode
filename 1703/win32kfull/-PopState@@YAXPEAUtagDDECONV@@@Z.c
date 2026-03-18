/*
 * XREFs of ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01E4660
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E4950 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E4BE0 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E4F40 (-xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E5080 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E5370 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E5440 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E56D0 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C01E6124 (xxxFreeDdeConv.c)
 * Callees:
 *     FreeDdeXact @ 0x1C01E58A0 (FreeDdeXact.c)
 */

void __fastcall PopState(struct tagDDECONV *a1)
{
  __int64 v1; // r8
  __int64 v3; // rbx
  __int64 v4; // rax
  char *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  char *v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h]
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 7);
  v9 = (char *)a1 + 56;
  v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v11;
  v11[1] = v1;
  ++*(_DWORD *)(v1 + 8);
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 7) + 24LL);
  v3 = v10;
  v4 = HMAssignmentLock(&v9);
  v5 = (char *)a1 + 64;
  if ( v3 )
    v5 = (char *)(v4 + 24);
  HMAssignmentUnlock(v5);
  v8 = ThreadUnlock1(v7, v6);
  if ( v8 )
    FreeDdeXact(v8);
}
