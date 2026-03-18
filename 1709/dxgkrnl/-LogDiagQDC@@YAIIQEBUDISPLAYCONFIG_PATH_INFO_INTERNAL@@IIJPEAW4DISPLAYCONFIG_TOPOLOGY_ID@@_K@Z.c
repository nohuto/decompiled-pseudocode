/*
 * XREFs of ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C00D0F78
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00E0F88 (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall LogDiagQDC(
        unsigned int a1,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *const a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a6,
        unsigned __int64 a7)
{
  unsigned int v10; // ebx
  unsigned int v11; // ebp
  char *v12; // rax
  __int64 v13; // rcx
  char *v14; // rdi
  char *v15; // rcx
  __int64 v16; // rdx
  char *v17; // rsi
  unsigned int v18; // ebx
  unsigned int v20; // eax
  __int64 *v21; // rcx
  __int64 v22; // rax

  v10 = a1;
  if ( (a3 & 7) == 1 )
  {
    v20 = 0;
    if ( a1 )
    {
      v21 = (__int64 *)a2;
      do
      {
        if ( *v21 >= 0 )
          break;
        ++v20;
        v21 += 24;
      }
      while ( v20 < v10 );
    }
    v10 = v20;
  }
  v11 = 192 * v10 + 88;
  v12 = (char *)operator new[](v11, 0x43434451u, PagedPool);
  v14 = v12;
  if ( v12 )
  {
    memset(v12, 0, v11);
    *((_DWORD *)v14 + 10) = 0;
    *((_QWORD *)v14 + 4) = 0LL;
    *(_DWORD *)v14 = 39;
    *((_DWORD *)v14 + 1) = v11;
    *((_QWORD *)v14 + 1) = 0LL;
    *((_QWORD *)v14 + 2) = 0LL;
    *((_QWORD *)v14 + 3) = 0LL;
    *((_DWORD *)v14 + 14) = 0;
    *((_DWORD *)v14 + 13) = v10;
    *((_DWORD *)v14 + 15) = a5;
    *((_DWORD *)v14 + 16) = a4 | a3;
    if ( a6 )
      *((_DWORD *)v14 + 17) = *(_DWORD *)a6;
    *((_DWORD *)v14 + 18) = 192;
    *((_QWORD *)v14 + 10) = a7;
    *((_DWORD *)v14 + 12) = (a6 != 0LL ? 4 : 0) | (3 - (a2 != 0LL));
    if ( a2 && v10 )
    {
      v15 = v14 + 96;
      v16 = v10;
      v17 = (char *)(a2 - (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *const)(v14 + 88));
      do
      {
        *((_QWORD *)v15 - 1) = *(_QWORD *)&v17[(_QWORD)v15 - 8];
        *(_QWORD *)v15 = *(_QWORD *)&v15[(_QWORD)v17];
        *((_QWORD *)v15 + 1) = *(_QWORD *)&v17[(_QWORD)v15 + 8];
        *((_DWORD *)v15 + 4) = *(_DWORD *)&v17[(_QWORD)v15 + 16];
        *((_DWORD *)v15 + 5) = *(_DWORD *)&v17[(_QWORD)v15 + 20];
        *(_OWORD *)(v15 + 24) = *(_OWORD *)&v17[(_QWORD)v15 + 24];
        *(_OWORD *)(v15 + 40) = *(_OWORD *)&v17[(_QWORD)v15 + 40];
        *(_OWORD *)(v15 + 56) = *(_OWORD *)&v17[(_QWORD)v15 + 56];
        *((_DWORD *)v15 + 18) = *(_DWORD *)&v17[(_QWORD)v15 + 72];
        *((_DWORD *)v15 + 19) = *(_DWORD *)&v17[(_QWORD)v15 + 76];
        *((_QWORD *)v15 + 10) = *(_QWORD *)&v15[(_QWORD)v17 + 80];
        *((_DWORD *)v15 + 22) = *(_DWORD *)&v15[(_QWORD)v17 + 88];
        v15[92] = v15[(_QWORD)v17 + 92];
        v15[93] = v15[(_QWORD)v17 + 93];
        *((_DWORD *)v15 + 24) = *(_DWORD *)&v15[(_QWORD)v17 + 96];
        *((_DWORD *)v15 + 25) = *(_DWORD *)&v15[(_QWORD)v17 + 100];
        *((_DWORD *)v15 + 26) = *(_DWORD *)&v15[(_QWORD)v17 + 104];
        *(_QWORD *)(v15 + 108) = *(_QWORD *)&v15[(_QWORD)v17 + 108];
        *(_QWORD *)(v15 + 116) = *(_QWORD *)&v15[(_QWORD)v17 + 116];
        *(_QWORD *)(v15 + 124) = *(_QWORD *)&v15[(_QWORD)v17 + 124];
        *(_OWORD *)(v15 + 132) = *(_OWORD *)&v15[(_QWORD)v17 + 132];
        *((_DWORD *)v15 + 37) = *(_DWORD *)&v15[(_QWORD)v17 + 148];
        *((_DWORD *)v15 + 38) = *(_DWORD *)&v15[(_QWORD)v17 + 152];
        *((_DWORD *)v15 + 39) = *(_DWORD *)&v15[(_QWORD)v17 + 156];
        *((_QWORD *)v15 + 20) = *(_QWORD *)&v15[(_QWORD)v17 + 160];
        *((_QWORD *)v15 + 21) = *(_QWORD *)&v15[(_QWORD)v17 + 168];
        *((_DWORD *)v15 + 44) = *(_DWORD *)&v15[(_QWORD)v17 + 176];
        v15 += 192;
        --v16;
      }
      while ( v16 );
    }
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v14);
    v18 = *((_DWORD *)v14 + 10);
    ExFreePoolWithTag(v14, 0);
    return v18;
  }
  else
  {
    v22 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v22 + 24) = v11;
    WdLogEvent5_WdLowResource(v22);
    DxgkLogCodePointPacket(0xAu, a3, a5, 0, 0LL);
    return 0xFFFFFFFFLL;
  }
}
