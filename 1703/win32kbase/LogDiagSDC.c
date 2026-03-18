/*
 * XREFs of LogDiagSDC @ 0x1C0057B04
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0056E00 (DrvSetDisplayConfig.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062EA0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     DrvDxgkWriteDiagEntry @ 0x1C0057C30 (DrvDxgkWriteDiagEntry.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C009B960 (DrvDxgkLogCodePointPacket.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall LogDiagSDC(
        unsigned int a1,
        const void *a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        unsigned int a8,
        __int64 a9,
        char a10)
{
  __int64 v10; // rdi
  __int64 v11; // r14
  unsigned int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // rcx
  _DWORD *v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rax

  v10 = a1;
  v11 = a3;
  v14 = (a3 << 6) + 8 * (a1 + 11 + 8 * a1);
  v17 = PALLOCMEM2(v14, 1936876615LL, 1);
  if ( v17 )
  {
    v17[1] = v14;
    v17[10] = 0;
    *((_QWORD *)v17 + 4) = 0LL;
    *v17 = (a5 & 0xC000) != 0 ? 21 : 1;
    *((_QWORD *)v17 + 1) = 0LL;
    *((_QWORD *)v17 + 2) = 0LL;
    *((_QWORD *)v17 + 3) = 0LL;
    v17[15] = a7;
    v17[18] = a5;
    v17[16] = a8;
    v17[17] = a6;
    v17[13] = v10;
    v17[14] = v11;
    *((_QWORD *)v17 + 10) = a9;
    v17[12] = (a10 != 0 ? 8 : 0) | (a4 == 0LL ? 2 : 0) | (a2 == 0LL);
    if ( a2 )
      memmove(v17 + 22, a2, 72 * v10);
    if ( a4 )
      memmove(&v17[16 * v10 + 22 + 2 * v10], a4, v11 << 6);
    DrvDxgkWriteDiagEntry(v17);
    return Win32FreePool((__int64)v17);
  }
  else
  {
    v21 = WdLogNewEntry5_WdLowResource(v16, v15, v18, v19);
    *(_QWORD *)(v21 + 24) = v14;
    WdLogEvent5_WdLowResource(v21);
    return DrvDxgkLogCodePointPacket(3LL, a5, a6, a8);
  }
}
