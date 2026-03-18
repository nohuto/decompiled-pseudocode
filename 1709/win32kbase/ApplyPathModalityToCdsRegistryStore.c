/*
 * XREFs of ApplyPathModalityToCdsRegistryStore @ 0x1C0069968
 * Callers:
 *     ApplyPathsModality @ 0x1C0067D1C (ApplyPathsModality.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0069AC0 (DrvUpdateDisplayDriverParameters.c)
 */

__int64 __fastcall ApplyPathModalityToCdsRegistryStore(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _devicemodeW *v4; // rsi
  __int64 v5; // r8
  wchar_t *v6; // rbx
  unsigned int v7; // r14d
  struct _devicemodeW *v8; // rbp
  __int64 v9; // r8
  wchar_t *v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rax
  int v15; // [rsp+20h] [rbp-18h]

  v4 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL, 1936876615LL, 1);
  if ( v4 )
  {
    v6 = gpGraphicsDeviceList;
    v7 = 1;
    while ( v6 )
    {
      if ( (*((_DWORD *)v6 + 40) & 0x800000) != 0 )
      {
        v11 = 0LL;
        v8 = v4;
        if ( !*(_WORD *)(a1 + 20) )
          goto LABEL_18;
        while ( 1 )
        {
          v2 = 264LL * (unsigned int)v11;
          if ( *(_QWORD *)(v2 + a1 + 264) )
          {
            if ( *((_DWORD *)v6 + 66) == *(_DWORD *)(v2 + a1 + 64)
              && *((_DWORD *)v6 + 67) == *(_DWORD *)(v2 + a1 + 68)
              && *((_DWORD *)v6 + 68) == *(_DWORD *)(v2 + a1 + 72) )
            {
              break;
            }
          }
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= *(unsigned __int16 *)(a1 + 20) )
            goto LABEL_18;
        }
        v8 = *(struct _devicemodeW **)(264 * (v11 + 1) + a1);
        if ( v8 == v4 )
LABEL_18:
          v9 = 1LL;
        else
          v9 = 0LL;
        v10 = gpGraphicsDeviceList;
        if ( !gpGraphicsDeviceList )
          goto LABEL_23;
        do
        {
          if ( v10 == v6 )
            break;
          v10 = (wchar_t *)*((_QWORD *)v10 + 16);
        }
        while ( v10 );
        if ( !v10 || (int)DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)v10, v8, v9, v15) < 0 )
        {
LABEL_23:
          v14 = (_QWORD *)WdLogNewEntry5_WdError(v10, v2, v9);
          v14[3] = v6;
          v14[6] = v8 == v4;
          v14[4] = a1;
          v14[5] = v8;
          WdLogEvent5_WdError(v14);
          v7 = 0;
        }
      }
      v6 = (wchar_t *)*((_QWORD *)v6 + 16);
    }
    Win32FreePool((__int64)v4);
    return v7;
  }
  else
  {
    v13 = WdLogNewEntry5_WdLowResource(v3, v2, v5);
    *(_QWORD *)(v13 + 24) = 220LL;
    *(_QWORD *)(v13 + 32) = a1;
    WdLogEvent5_WdLowResource(v13);
    return 0LL;
  }
}
