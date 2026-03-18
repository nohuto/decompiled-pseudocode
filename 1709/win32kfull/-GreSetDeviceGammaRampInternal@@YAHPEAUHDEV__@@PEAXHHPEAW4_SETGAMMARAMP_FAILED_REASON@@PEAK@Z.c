/*
 * XREFs of ?GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z @ 0x1C00F6A5C
 * Callers:
 *     GreSetDeviceGammaRamp @ 0x1C00F6708 (GreSetDeviceGammaRamp.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     UpdateGammaRampOnDevice @ 0x1C00F6D00 (UpdateGammaRampOnDevice.c)
 *     ?ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ @ 0x1C0290880 (-ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetDeviceGammaRampInternal(
        enum _SETGAMMARAMP_FAILED_REASON *a1,
        _OWORD *a2,
        __int64 a3,
        int a4,
        enum _SETGAMMARAMP_FAILED_REASON *a5,
        unsigned int *a6)
{
  enum _SETGAMMARAMP_FAILED_REASON *v6; // r14
  unsigned int *v8; // rcx
  unsigned int updated; // edi
  int v10; // r12d
  _OWORD *v11; // rsi
  const void *v12; // rcx
  BOOL v13; // ebp
  signed int v14; // ecx
  unsigned int v15; // r13d
  __int64 v16; // rdx
  signed int v17; // r9d
  signed int v18; // r10d
  signed int v19; // r11d
  int v20; // eax
  int v21; // edx
  signed int v22; // eax
  _OWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int128 v26; // xmm1
  void *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  void *v33; // rax

  v6 = a5;
  v8 = a6;
  updated = 0;
  a5 = a1;
  v10 = a3;
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
  v14 = -giIcmGammaRange;
  v15 = 2 * giIcmGammaRange;
  while ( updated && v10 || v13 )
  {
    v16 = v14 + giIcmGammaRange;
    if ( (unsigned int)v16 >= 0x100 )
      break;
    v17 = *((unsigned __int8 *)v11 + 2 * v16 + 1);
    v18 = *((unsigned __int8 *)v11 + 2 * v16 + 513);
    v19 = *((unsigned __int8 *)v11 + 2 * v16 + 1025);
    a3 = (unsigned int)v16;
    if ( updated )
    {
      if ( v10 )
      {
        if ( v17 < v14 || (v22 = v14 + v15, v17 > (int)(v14 + v15)) || v18 < v14 || v18 > v22 || v19 < v14 || v19 > v22 )
        {
          updated = 0;
          *(_DWORD *)v6 = 5;
        }
      }
    }
    if ( v13 )
    {
      v20 = *((unsigned __int16 *)v11 + (unsigned int)v16);
      v21 = (_DWORD)v16 << 8;
      if ( v20 != v21 || *((unsigned __int16 *)v11 + a3 + 256) != v21 || *((unsigned __int16 *)v11 + a3 + 512) != v21 )
        v13 = 0;
    }
    ++v14;
  }
  if ( !updated && !a4 )
    return updated;
  if ( !*((_QWORD *)a1 + 213) )
  {
    v28 = PALLOCMEM2(0x600uLL, 1835231559LL, 0);
    if ( !v28 )
    {
      *(_DWORD *)v6 = 6;
      return 0;
    }
    *((_QWORD *)a1 + 213) = v28;
  }
  v23 = (_OWORD *)*((_QWORD *)a1 + 213);
  v24 = 12LL;
  v25 = 128LL;
  do
  {
    *v23 = *v11;
    v23[1] = v11[1];
    v23[2] = v11[2];
    v23[3] = v11[3];
    v23[4] = v11[4];
    v23[5] = v11[5];
    v23[6] = v11[6];
    v23 += 8;
    v26 = v11[7];
    v11 += 8;
    *(v23 - 1) = v26;
    --v24;
  }
  while ( v24 );
  if ( updated )
  {
    if ( *((_QWORD *)a1 + 214) )
    {
      if ( !*((_QWORD *)a1 + 215) )
      {
        v33 = PALLOCMEM2(0x600uLL, 1735354695LL, 0);
        if ( v33 )
          *((_QWORD *)a1 + 215) = v33;
        else
          updated = 0;
      }
      if ( !updated )
        goto LABEL_35;
      PDEVOBJ::ComposeDeviceGammaRampsUnsafe((PDEVOBJ *)&a5);
    }
    updated = UpdateGammaRampOnDevice(a1, 1LL);
    *(_DWORD *)v6 = 7;
  }
LABEL_35:
  if ( v13 )
  {
    v29 = *((_QWORD *)a1 + 213);
    *((_QWORD *)a1 + 213) = 0LL;
    Win32FreePool(v29, v25, a3);
    v32 = *((_QWORD *)a1 + 215);
    if ( v32 )
    {
      *((_QWORD *)a1 + 215) = 0LL;
      Win32FreePool(v32, v30, v31);
    }
  }
  return updated;
}
