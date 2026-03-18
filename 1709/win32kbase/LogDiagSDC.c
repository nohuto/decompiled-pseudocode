/*
 * XREFs of LogDiagSDC @ 0x1C0067094
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00662E0 (DrvSetDisplayConfig.c)
 *     xxxUserSetDisplayConfig @ 0x1C00DDDC0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     DrvDxgkWriteDiagEntry @ 0x1C0067180 (DrvDxgkWriteDiagEntry.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00A4550 (DrvDxgkLogCodePointPacket.c)
 */

__int64 __fastcall LogDiagSDC(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // r14
  unsigned int v12; // edi
  _DWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v19; // rax
  char *v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdx

  v8 = a1;
  v12 = 192 * a1 + 88;
  v13 = PALLOCMEM2(v12, 1936876615LL, 1);
  v17 = (__int64)v13;
  if ( v13 )
  {
    *v13 = 38;
    v13[10] = 0;
    *((_QWORD *)v13 + 4) = 0LL;
    v13[1] = v12;
    *((_QWORD *)v13 + 1) = 0LL;
    *((_QWORD *)v13 + 2) = 0LL;
    *((_QWORD *)v13 + 3) = 0LL;
    v13[15] = a5;
    v13[16] = a6;
    v13[13] = v8;
    v13[17] = a4;
    v13[18] = a3;
    v13[19] = 192;
    *((_QWORD *)v13 + 10) = a7;
    v13[12] = (a8 != 0 ? 8 : 0) | (3 - (a2 != 0));
    if ( a2 && (_DWORD)v8 )
    {
      v20 = (char *)(v13 + 24);
      v21 = a2 - (_QWORD)(v13 + 22);
      v22 = v8;
      do
      {
        *((_QWORD *)v20 - 1) = *(_QWORD *)&v20[v21 - 8];
        *(_QWORD *)v20 = *(_QWORD *)&v20[v21];
        *((_QWORD *)v20 + 1) = *(_QWORD *)&v20[v21 + 8];
        *((_DWORD *)v20 + 4) = *(_DWORD *)&v20[v21 + 16];
        *((_DWORD *)v20 + 5) = *(_DWORD *)&v20[v21 + 20];
        *(_OWORD *)(v20 + 24) = *(_OWORD *)&v20[v21 + 24];
        *(_OWORD *)(v20 + 40) = *(_OWORD *)&v20[v21 + 40];
        *(_OWORD *)(v20 + 56) = *(_OWORD *)&v20[v21 + 56];
        *((_DWORD *)v20 + 18) = *(_DWORD *)&v20[v21 + 72];
        *((_DWORD *)v20 + 19) = *(_DWORD *)&v20[v21 + 76];
        *((_QWORD *)v20 + 10) = *(_QWORD *)&v20[v21 + 80];
        *((_DWORD *)v20 + 22) = *(_DWORD *)&v20[v21 + 88];
        v20[92] = v20[v21 + 92];
        v20[93] = v20[v21 + 93];
        *((_DWORD *)v20 + 24) = *(_DWORD *)&v20[v21 + 96];
        *((_DWORD *)v20 + 25) = *(_DWORD *)&v20[v21 + 100];
        *((_DWORD *)v20 + 26) = *(_DWORD *)&v20[v21 + 104];
        *(_QWORD *)(v20 + 108) = *(_QWORD *)&v20[v21 + 108];
        *(_QWORD *)(v20 + 116) = *(_QWORD *)&v20[v21 + 116];
        *(_QWORD *)(v20 + 124) = *(_QWORD *)&v20[v21 + 124];
        *(_OWORD *)(v20 + 132) = *(_OWORD *)&v20[v21 + 132];
        *((_DWORD *)v20 + 37) = *(_DWORD *)&v20[v21 + 148];
        *((_DWORD *)v20 + 38) = *(_DWORD *)&v20[v21 + 152];
        *((_DWORD *)v20 + 39) = *(_DWORD *)&v20[v21 + 156];
        *((_QWORD *)v20 + 20) = *(_QWORD *)&v20[v21 + 160];
        *((_QWORD *)v20 + 21) = *(_QWORD *)&v20[v21 + 168];
        *((_DWORD *)v20 + 44) = *(_DWORD *)&v20[v21 + 176];
        v20 += 192;
        --v22;
      }
      while ( v22 );
    }
    DrvDxgkWriteDiagEntry(v13);
    return Win32FreePool(v17);
  }
  else
  {
    v19 = WdLogNewEntry5_WdLowResource(v15, v14, v16);
    *(_QWORD *)(v19 + 24) = v12;
    WdLogEvent5_WdLowResource(v19);
    return DrvDxgkLogCodePointPacket(3LL, a3, a4, a6);
  }
}
