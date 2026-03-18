/*
 * XREFs of ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C00A611C
 * Callers:
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z @ 0x1C00A61B0 (-xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0042660 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C00426D0 (DrvQueryDisplayConfig.c)
 */

void __fastcall DisplayDiagRecordActiveTopology(struct USER_DETECTED_BLACK_SCREEN_REPORT *a1)
{
  __int64 v2; // rbx
  int DisplayConfigBufferSizes; // eax
  __int64 v4; // rax
  int DisplayConfig; // eax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v2 = 0LL;
  DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(2u, (__int64)&v6);
  *((_DWORD *)a1 + 4) = DisplayConfigBufferSizes;
  if ( DisplayConfigBufferSizes >= 0 )
  {
    v4 = v6;
    *((_DWORD *)a1 + 5) = v6;
    if ( (_DWORD)v4 )
      v2 = Win32AllocPool(200 * v4, 0x69647355u);
    if ( v2 )
    {
      DisplayConfig = DrvQueryDisplayConfig(2u, (__int64)&v6, v2, 0LL);
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
