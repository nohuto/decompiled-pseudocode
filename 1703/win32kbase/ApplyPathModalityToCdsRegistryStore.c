/*
 * XREFs of ApplyPathModalityToCdsRegistryStore @ 0x1C005D518
 * Callers:
 *     ApplyPathsModality @ 0x1C005B154 (ApplyPathsModality.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C005D670 (DrvUpdateDisplayDriverParameters.c)
 */

__int64 __fastcall ApplyPathModalityToCdsRegistryStore(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _devicemodeW *v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  wchar_t *v7; // rbx
  unsigned int v8; // r14d
  struct _devicemodeW *v9; // rbp
  __int64 v10; // r8
  wchar_t *v11; // rcx
  unsigned int v12; // ecx
  __int64 v14; // rax
  _QWORD *v15; // rax
  int v16; // [rsp+20h] [rbp-18h]

  v4 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL, 1936876615LL, 1);
  if ( v4 )
  {
    v7 = gpGraphicsDeviceList;
    v8 = 1;
    while ( v7 )
    {
      if ( (*((_DWORD *)v7 + 40) & 0x800000) != 0 )
      {
        v12 = 0;
        v9 = v4;
        if ( !*(_WORD *)(a1 + 20) )
          goto LABEL_18;
        while ( 1 )
        {
          v2 = 264LL * v12;
          if ( *(_QWORD *)(v2 + a1 + 232) )
          {
            if ( *((_DWORD *)v7 + 66) == *(_DWORD *)(v2 + a1 + 64)
              && *((_DWORD *)v7 + 67) == *(_DWORD *)(v2 + a1 + 68)
              && *((_DWORD *)v7 + 68) == *(_DWORD *)(v2 + a1 + 72) )
            {
              break;
            }
          }
          if ( ++v12 >= *(unsigned __int16 *)(a1 + 20) )
            goto LABEL_18;
        }
        v9 = *(struct _devicemodeW **)(264LL * v12 + a1 + 232);
        if ( v9 == v4 )
LABEL_18:
          v10 = 1LL;
        else
          v10 = 0LL;
        v11 = gpGraphicsDeviceList;
        if ( !gpGraphicsDeviceList )
          goto LABEL_23;
        do
        {
          if ( v11 == v7 )
            break;
          v11 = (wchar_t *)*((_QWORD *)v11 + 16);
        }
        while ( v11 );
        if ( !v11 || (int)DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)v11, v9, v10, v16) < 0 )
        {
LABEL_23:
          v15 = (_QWORD *)WdLogNewEntry5_WdError(v11, v2, v10);
          v15[3] = v7;
          v15[6] = v9 == v4;
          v15[4] = a1;
          v15[5] = v9;
          WdLogEvent5_WdError(v15);
          v8 = 0;
        }
      }
      v7 = (wchar_t *)*((_QWORD *)v7 + 16);
    }
    Win32FreePool((__int64)v4);
    return v8;
  }
  else
  {
    v14 = WdLogNewEntry5_WdLowResource(v3, v2, v5, v6);
    *(_QWORD *)(v14 + 24) = 220LL;
    *(_QWORD *)(v14 + 32) = a1;
    WdLogEvent5_WdLowResource(v14);
    return 0LL;
  }
}
