/*
 * XREFs of ?IsExtendTopology@@YAHXZ @ 0x1C01AC298
 * Callers:
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AD21C (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK.c)
 * Callees:
 *     <none>
 */

__int64 IsExtendTopology(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned int v5; // ecx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( !(unsigned int)DrvGetDisplayConfigBufferSizes(18LL, &v7) && v7 > 1 )
  {
    v1 = Win32AllocPool(192LL * v7, 1665430357LL);
    v2 = v1;
    if ( v1 )
    {
      if ( !(unsigned int)DrvQueryDisplayConfig(18LL, &v7, v1, 0LL) )
      {
        v5 = 0;
        if ( v7 )
        {
          while ( 1 )
          {
            v3 = 192LL * v5;
            if ( *(_DWORD *)(v3 + v2 + 116) || *(_DWORD *)(v3 + v2 + 120) )
              break;
            if ( ++v5 >= v7 )
              goto LABEL_11;
          }
          v0 = 1;
        }
      }
LABEL_11:
      Win32FreePool(v2, v3, v4);
    }
  }
  return v0;
}
