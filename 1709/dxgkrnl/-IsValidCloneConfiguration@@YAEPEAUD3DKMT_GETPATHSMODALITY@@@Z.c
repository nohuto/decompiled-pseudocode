/*
 * XREFs of ?IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01036AC
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0102AA4 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?IsVirtualModeSupported@@YAEAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0103788 (-IsVirtualModeSupported@@YAEAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

unsigned __int8 __fastcall IsValidCloneConfiguration(struct D3DKMT_GETPATHSMODALITY *a1)
{
  struct D3DKMT_GETPATHSMODALITY *v1; // r9
  unsigned int i; // edx
  __int64 v3; // rax
  unsigned int v4; // r11d
  char *v5; // rbx
  char v6; // si
  unsigned __int8 v7; // bp
  unsigned int v8; // edi
  unsigned __int16 v9; // r10
  unsigned int v10; // eax
  char *v12; // r10
  __int64 v13; // r10

  v1 = a1;
  if ( a1 )
  {
    for ( i = 0; i < *((unsigned __int16 *)a1 + 10); *((_QWORD *)a1 + 33 * v3 + 6) &= ~0x2000000000uLL )
      v3 = i++;
    v4 = 0;
    if ( !*((_WORD *)a1 + 10) )
      return 1;
    while ( 1 )
    {
      v5 = (char *)v1 + 264 * v4;
      if ( (*((_QWORD *)v5 + 6) & 0x2000000000LL) == 0 )
      {
        v6 = 1;
        v7 = IsVirtualModeSupported((struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v5 + 48));
        v8 = v4 + 1;
        v10 = v9;
        while ( v8 < v10 )
        {
          v12 = (char *)v1 + 264 * v8;
          if ( *((_DWORD *)v5 + 58) == *((_DWORD *)v12 + 58) )
          {
            v7 &= -(IsVirtualModeSupported((struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v12 + 48)) != 0);
            if ( *((_DWORD *)v5 + 18) != *(_DWORD *)(v13 + 72)
              || *((_DWORD *)v5 + 16) != *(_DWORD *)(v13 + 64)
              || *((_DWORD *)v5 + 17) != *(_DWORD *)(v13 + 68) )
            {
              v6 = 0;
            }
            *(_QWORD *)(v13 + 48) |= 0x2000000000uLL;
          }
          v10 = *((unsigned __int16 *)v1 + 10);
          ++v8;
        }
        if ( !v7 && !v6 )
          break;
      }
      if ( ++v4 >= *((unsigned __int16 *)v1 + 10) )
        return 1;
    }
  }
  return 0;
}
