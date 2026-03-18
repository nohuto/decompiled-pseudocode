/*
 * XREFs of ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C00D777C
 * Callers:
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00D7870 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 * Callees:
 *     DrvQueryDisplayConfig @ 0x1C000D270 (DrvQueryDisplayConfig.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C000D3A0 (DrvGetDisplayConfigBufferSizes.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall DisplayDiagRecordActiveTopology(struct USER_DETECTED_BLACK_SCREEN_REPORT *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  int DisplayConfigBufferSizes; // eax
  __int64 v5; // rcx
  unsigned int v6; // eax
  int v7; // eax
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0;
  v8 = 0;
  v2 = 0LL;
  v3 = 0LL;
  DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(2u, (__int64)&v9, (__int64)&v8);
  *((_DWORD *)a1 + 4) = DisplayConfigBufferSizes;
  if ( DisplayConfigBufferSizes >= 0 )
  {
    v5 = v9;
    v6 = v8;
    *((_DWORD *)a1 + 5) = v9;
    *((_DWORD *)a1 + 6) = v6;
    if ( (_DWORD)v5 )
    {
      v2 = Win32AllocPool(72 * v5, 0x69647355u);
      v6 = v8;
    }
    if ( v6 )
      v3 = Win32AllocPool((unsigned __int64)v6 << 6, 0x69647355u);
    if ( v2 && v3 )
    {
      v7 = DrvQueryDisplayConfig(2u, &v9, v2, (__int64)&v8, v3, 0LL);
      *((_DWORD *)a1 + 4) = v7;
      if ( v7 >= 0 )
      {
        *((_QWORD *)a1 + 4) = v2;
        v2 = 0LL;
        *((_QWORD *)a1 + 5) = v3;
        v3 = 0LL;
      }
    }
    else
    {
      *((_DWORD *)a1 + 4) = 14;
    }
    if ( v2 )
      Win32FreePool(v2);
    if ( v3 )
      Win32FreePool(v3);
  }
}
