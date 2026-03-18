/*
 * XREFs of ?UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AC5CC
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01AF180 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     InitTouchpadState @ 0x1C01B0C48 (InitTouchpadState.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdatePTPRightClickZone(struct tagTPSTATE *a1, struct tagHID_POINTER_DEVICE_INFO *a2, int a3)
{
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // edx
  int v11; // edx
  unsigned int v12; // ecx
  int v13; // eax

  if ( a3 )
  {
    if ( *((_DWORD *)a2 + 63) )
    {
      *((_DWORD *)a1 + 471) = *((_DWORD *)a2 + 54) * (100 - *((_DWORD *)a2 + 61)) / 100;
    }
    else
    {
      v5 = gTPThresholds[57];
      if ( (unsigned int)(v5 - 1) > 0x63 )
      {
        v6 = *((_DWORD *)a2 + 54);
        v7 = v6 * (100 - gTPThresholds[11]);
        v8 = v6 - 1000;
        v9 = v7 / 0x64;
        if ( v9 < v8 )
          v8 = v9;
        *((_DWORD *)a1 + 471) = v8;
      }
      else
      {
        *((_DWORD *)a1 + 471) = *((_DWORD *)a2 + 54) * (100 - v5) / 0x64u;
      }
    }
    *((_DWORD *)a1 + 473) = *((_DWORD *)a2 + 54);
    if ( *((_DWORD *)a2 + 63) )
    {
      v10 = *((_DWORD *)a2 + 53) * *((_DWORD *)a2 + 60) / 100;
    }
    else
    {
      v11 = gTPThresholds[58];
      if ( (unsigned int)(v11 - 1) > 0x63 )
        v12 = *((_DWORD *)a2 + 53) * gTPThresholds[12];
      else
        v12 = v11 * *((_DWORD *)a2 + 53);
      v10 = v12 / 0x64;
    }
    *((_DWORD *)a1 + 524) = v10;
  }
  if ( *(_DWORD *)(gpsi + 1972LL) )
  {
    *((_DWORD *)a1 + 470) = 0;
    v13 = *((_DWORD *)a1 + 524);
  }
  else
  {
    *((_DWORD *)a1 + 470) = *((_DWORD *)a2 + 53) - *((_DWORD *)a1 + 524);
    v13 = *((_DWORD *)a2 + 53);
  }
  *((_DWORD *)a1 + 472) = v13;
  *((_DWORD *)a1 + 480) ^= (*((_DWORD *)a1 + 480) ^ (*(_DWORD *)(gpsi + 1972LL) << 15)) & 0x8000;
}
