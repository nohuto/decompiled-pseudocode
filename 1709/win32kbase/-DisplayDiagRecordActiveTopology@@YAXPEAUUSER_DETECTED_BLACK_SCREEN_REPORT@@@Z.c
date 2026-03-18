/*
 * XREFs of ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C00DD8DC
 * Callers:
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00DD980 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0064710 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C0064A40 (DrvQueryDisplayConfig.c)
 */

void __fastcall DisplayDiagRecordActiveTopology(struct USER_DETECTED_BLACK_SCREEN_REPORT *a1)
{
  __int64 v2; // rbx
  int DisplayConfigBufferSizes; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  int DisplayConfig; // eax
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  v2 = 0LL;
  DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(2LL, (__int64)&v7);
  *((_DWORD *)a1 + 4) = DisplayConfigBufferSizes;
  if ( DisplayConfigBufferSizes >= 0 )
  {
    v4 = v7;
    *((_DWORD *)a1 + 5) = v7;
    if ( (_DWORD)v4 && (v5 = Win32AllocPool(192 * v4, 0x69647355u), (v2 = v5) != 0) )
    {
      DisplayConfig = DrvQueryDisplayConfig(2LL, (__int64)&v7, v5, 0LL);
      *((_DWORD *)a1 + 4) = DisplayConfig;
      if ( DisplayConfig >= 0 )
      {
        *((_QWORD *)a1 + 3) = v2;
        v2 = 0LL;
      }
    }
    else
    {
      *((_DWORD *)a1 + 4) = 14;
    }
    if ( v2 )
      Win32FreePool(v2);
  }
}
