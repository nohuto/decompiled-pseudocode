/*
 * XREFs of ?IsExtendTopology@@YAHXZ @ 0x1C01A8EC0
 * Callers:
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A9F10 (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_M.c)
 * Callees:
 *     <none>
 */

__int64 IsExtendTopology(void)
{
  unsigned int v0; // edi
  __int64 v1; // rsi
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  if ( !(unsigned int)DrvGetDisplayConfigBufferSizes(18LL, &v7, &v8) && v7 > 1 )
  {
    v1 = Win32AllocPool(72LL * v7, 1665430357LL);
    v2 = Win32AllocPool((unsigned __int64)v8 << 6, 1665430357LL);
    v3 = v2;
    if ( v1 )
    {
      if ( v2 )
      {
        if ( !(unsigned int)DrvQueryDisplayConfig(18LL, &v7, v1, &v8, v2, 0LL) )
        {
          v4 = 0LL;
          if ( v7 )
          {
            while ( 1 )
            {
              v5 = (unsigned __int64)*(unsigned __int16 *)(v1 + 72 * v4 + 14) << 6;
              if ( *(_DWORD *)(v5 + v3 + 28) || *(_DWORD *)(v5 + v3 + 32) )
                break;
              v4 = (unsigned int)(v4 + 1);
              if ( (unsigned int)v4 >= v7 )
                goto LABEL_12;
            }
            v0 = 1;
          }
        }
      }
LABEL_12:
      Win32FreePool(v1);
    }
    if ( v3 )
      Win32FreePool(v3);
  }
  return v0;
}
