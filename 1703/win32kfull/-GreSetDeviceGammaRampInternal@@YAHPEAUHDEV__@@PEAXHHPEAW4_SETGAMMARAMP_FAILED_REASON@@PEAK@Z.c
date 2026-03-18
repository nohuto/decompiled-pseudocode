/*
 * XREFs of ?GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z @ 0x1C00E707C
 * Callers:
 *     GreSetDeviceGammaRamp @ 0x1C00E6DB8 (GreSetDeviceGammaRamp.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     UpdateGammaRampOnDevice @ 0x1C00E72D0 (UpdateGammaRampOnDevice.c)
 *     ?ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ @ 0x1C0294144 (-ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetDeviceGammaRampInternal(
        enum _SETGAMMARAMP_FAILED_REASON *a1,
        _OWORD *a2,
        int a3,
        int a4,
        enum _SETGAMMARAMP_FAILED_REASON *a5,
        unsigned int *a6)
{
  enum _SETGAMMARAMP_FAILED_REASON *v6; // r14
  unsigned int *v8; // rcx
  unsigned int updated; // edi
  _OWORD *v11; // rsi
  const void *v12; // rcx
  BOOL v13; // ebp
  __int64 v14; // rdx
  unsigned int v15; // r13d
  signed int v16; // r9d
  int v17; // r10d
  int v18; // r11d
  int v19; // ecx
  _OWORD *v20; // rax
  __int64 v21; // rcx
  __int128 v22; // xmm1
  void *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  int v28; // ecx
  void *v29; // rax

  v6 = a5;
  v8 = a6;
  updated = 0;
  a5 = a1;
  v11 = a2;
  *(_DWORD *)v6 = 2;
  *v8 = (unsigned int)a1;
  if ( !a1 || (*((_DWORD *)a1 + 8) & 1) == 0 )
    return updated;
  if ( (unsigned int)(*((_DWORD *)a1 + 531) - 4) > 2 )
  {
    *(_DWORD *)v6 = 3;
    *v8 = *((_DWORD *)a1 + 531);
  }
  else
  {
    if ( *((_QWORD *)a1 + 405) && (*((_DWORD *)a1 + 536) & 0x10) != 0 )
    {
      updated = 1;
      goto LABEL_7;
    }
    *(_DWORD *)v6 = 4;
  }
  if ( !a4 )
    return updated;
LABEL_7:
  v12 = (const void *)*((_QWORD *)a1 + 213);
  v13 = a3 == 0;
  if ( v12 && RtlCompareMemory(v12, a2, 0x600uLL) == 1536 )
    return updated;
  v14 = 0LL;
  v15 = 2 * giIcmGammaRange;
  while ( (updated && a3 || v13) && (unsigned int)v14 < 0x100 )
  {
    v16 = *((unsigned __int8 *)v11 + 2 * v14 + 1);
    v17 = *((unsigned __int8 *)v11 + 2 * v14 + 513);
    v18 = *((unsigned __int8 *)v11 + 2 * v14 + 1025);
    if ( updated )
    {
      if ( a3 )
      {
        v27 = v14 - giIcmGammaRange;
        if ( v16 < (int)(v14 - giIcmGammaRange)
          || (v28 = v27 + v15, v16 > (int)(v27 + v15))
          || v17 < v27
          || v17 > v28
          || v18 < v27
          || v18 > v28 )
        {
          updated = 0;
          *(_DWORD *)v6 = 5;
        }
      }
    }
    if ( v13 )
    {
      v19 = (_DWORD)v14 << 8;
      if ( *((unsigned __int16 *)v11 + v14) != (_DWORD)v14 << 8
        || *((unsigned __int16 *)v11 + v14 + 256) != v19
        || *((unsigned __int16 *)v11 + v14 + 512) != v19 )
      {
        v13 = 0;
      }
    }
    v14 = (unsigned int)(v14 + 1);
  }
  if ( !updated && !a4 )
    return updated;
  if ( !*((_QWORD *)a1 + 213) )
  {
    v24 = PALLOCMEM2(0x600uLL, 1835231559LL, 0);
    if ( !v24 )
    {
      *(_DWORD *)v6 = 6;
      return 0;
    }
    *((_QWORD *)a1 + 213) = v24;
  }
  v20 = (_OWORD *)*((_QWORD *)a1 + 213);
  v21 = 12LL;
  do
  {
    *v20 = *v11;
    v20[1] = v11[1];
    v20[2] = v11[2];
    v20[3] = v11[3];
    v20[4] = v11[4];
    v20[5] = v11[5];
    v20[6] = v11[6];
    v20 += 8;
    v22 = v11[7];
    v11 += 8;
    *(v20 - 1) = v22;
    --v21;
  }
  while ( v21 );
  if ( updated )
  {
    if ( *((_QWORD *)a1 + 214) )
    {
      if ( !*((_QWORD *)a1 + 215) )
      {
        v29 = PALLOCMEM2(0x600uLL, 1735354695LL, 0);
        if ( v29 )
          *((_QWORD *)a1 + 215) = v29;
        else
          updated = 0;
      }
      if ( !updated )
        goto LABEL_28;
      PDEVOBJ::ComposeDeviceGammaRampsUnsafe((PDEVOBJ *)&a5);
    }
    updated = UpdateGammaRampOnDevice(a1, 1LL);
    *(_DWORD *)v6 = 7;
  }
LABEL_28:
  if ( v13 )
  {
    v25 = *((_QWORD *)a1 + 213);
    *((_QWORD *)a1 + 213) = 0LL;
    Win32FreePool(v25);
    v26 = *((_QWORD *)a1 + 215);
    if ( v26 )
    {
      *((_QWORD *)a1 + 215) = 0LL;
      Win32FreePool(v26);
    }
  }
  return updated;
}
