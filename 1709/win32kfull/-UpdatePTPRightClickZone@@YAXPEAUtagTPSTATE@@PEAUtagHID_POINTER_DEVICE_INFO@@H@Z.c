/*
 * XREFs of ?UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AF948
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01B2518 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     InitTouchpadState @ 0x1C01B4038 (InitTouchpadState.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdatePTPRightClickZone(struct tagTPSTATE *a1, struct tagHID_POINTER_DEVICE_INFO *a2, int a3)
{
  int v5; // ecx
  unsigned int v6; // edx
  int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // edx
  int v11; // edx
  unsigned int v12; // ecx
  int v13; // eax

  if ( a3 )
  {
    if ( *((_DWORD *)a2 + 67) )
    {
      *((_DWORD *)a1 + 471) = *((_DWORD *)a2 + 38) * (100 - *((_DWORD *)a2 + 65)) / 100;
    }
    else
    {
      v5 = gTPThresholds[57];
      if ( (unsigned int)(v5 - 1) > 0x63 )
      {
        v7 = *((_DWORD *)a2 + 38);
        v8 = v7 * (100 - gTPThresholds[11]);
        v9 = v7 - 1000;
        v6 = v8 / 0x64;
        if ( v6 >= v9 )
          v6 = v9;
      }
      else
      {
        v6 = *((_DWORD *)a2 + 38) * (100 - v5) / 0x64u;
      }
      *((_DWORD *)a1 + 471) = v6;
    }
    *((_DWORD *)a1 + 473) = *((_DWORD *)a2 + 38);
    if ( *((_DWORD *)a2 + 67) )
    {
      v10 = *((_DWORD *)a2 + 37) * *((_DWORD *)a2 + 64) / 100;
    }
    else
    {
      v11 = gTPThresholds[58];
      if ( (unsigned int)(v11 - 1) > 0x63 )
        v12 = *((_DWORD *)a2 + 37) * gTPThresholds[12];
      else
        v12 = v11 * *((_DWORD *)a2 + 37);
      v10 = v12 / 0x64;
    }
    *((_DWORD *)a1 + 524) = v10;
  }
  if ( *(_DWORD *)(gpsi + 1972LL) )
  {
    v13 = *((_DWORD *)a1 + 524);
    *((_DWORD *)a1 + 470) = 0;
  }
  else
  {
    *((_DWORD *)a1 + 470) = *((_DWORD *)a2 + 37) - *((_DWORD *)a1 + 524);
    v13 = *((_DWORD *)a2 + 37);
  }
  *((_DWORD *)a1 + 472) = v13;
  *((_DWORD *)a1 + 480) ^= (*((_DWORD *)a1 + 480) ^ (*(_DWORD *)(gpsi + 1972LL) << 15)) & 0x8000;
}
