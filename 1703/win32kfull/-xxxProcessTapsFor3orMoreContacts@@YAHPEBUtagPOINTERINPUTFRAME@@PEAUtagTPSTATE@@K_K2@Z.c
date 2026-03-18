/*
 * XREFs of ?xxxProcessTapsFor3orMoreContacts@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z @ 0x1C01B02FC
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01AF180 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?SuppressContactForMultiFingerTap@@YAHPEBUtagTPCONTACTSTATE@@@Z @ 0x1C01ABF70 (-SuppressContactForMultiFingerTap@@YAHPEBUtagTPCONTACTSTATE@@@Z.c)
 *     ?xxxSend2FingerTap@@YAXPEAUtagTPSTATE@@_K@Z @ 0x1C01B05C0 (-xxxSend2FingerTap@@YAXPEAUtagTPSTATE@@_K@Z.c)
 *     ?xxxSend3FingerTapHotkey@@YAXXZ @ 0x1C01B06C4 (-xxxSend3FingerTapHotkey@@YAXXZ.c)
 *     ?xxxSend4FingerTapHotkey@@YAXXZ @ 0x1C01B0810 (-xxxSend4FingerTapHotkey@@YAXXZ.c)
 *     IsFirstActionAfterKey @ 0x1C01B0CF4 (IsFirstActionAfterKey.c)
 */

__int64 __fastcall xxxProcessTapsFor3orMoreContacts(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagTPSTATE *a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5)
{
  const struct tagPOINTERINPUTFRAME *v5; // r11
  struct tagTPSTATE *v7; // rcx
  int v8; // r10d
  struct tagTPSTATE *i; // rdx
  unsigned int v10; // eax
  int v11; // esi
  __int64 v12; // r9
  unsigned int j; // edi
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9

  v5 = a1;
  v7 = a2;
  v8 = 0;
  for ( i = (struct tagTPSTATE *)((char *)a2 + 1632); v7 != i; v7 = (struct tagTPSTATE *)((char *)v7 + 272) )
  {
    if ( (*((_DWORD *)v7 + 66) & 1) != 0 && SuppressContactForMultiFingerTap(v7) )
      ++v8;
  }
  v10 = *((_DWORD *)a2 + 412);
  if ( v10 > 2 && a3 < v10 || (*((_DWORD *)a2 + 480) & 0x800000) != 0 )
  {
    v11 = 0;
    if ( __CFSHR__(*((_DWORD *)a2 + 480), 24) || a5 - a4 < gliQpcFreq * (unsigned int)gTPThresholds[23] / 1000LL )
    {
      v12 = *((_QWORD *)v5 + 11);
      for ( j = 0; j < *((_DWORD *)v5 + 10); v12 += 216LL )
      {
        if ( *(_DWORD *)(v12 + 68)
          && !SuppressContactForMultiFingerTap((struct tagTPSTATE *)((char *)a2
                                                                   + 272
                                                                   * ((unsigned int)*(unsigned __int16 *)(v12 + 48)
                                                                    % *((_DWORD *)a2 + 411)))) )
        {
          v16 = *(_DWORD *)(v14 + 264);
          if ( (v16 & 4) != 0 || (v16 & 8) != 0 )
          {
LABEL_26:
            *((_DWORD *)a2 + 480) &= ~0x800000u;
            break;
          }
          if ( v15 )
          {
            if ( (v16 & 0x20000) == 0 )
              goto LABEL_26;
          }
          else
          {
            *(_DWORD *)(v14 + 264) = v16 | 0x20000;
          }
          v17 = v11 + 1;
          if ( (*(_DWORD *)(v12 + 68) & 0x40000) == 0 )
            v17 = v11;
          v11 = v17;
          v18 = *((_DWORD *)a2 + 480);
          if ( (v18 & 0x800000) == 0 && v11 )
          {
            *((_DWORD *)a2 + 480) = v18 | 0x800000;
            *((_DWORD *)a2 + 413) = *((_DWORD *)a2 + 412) - v8;
          }
        }
        ++j;
      }
    }
    v19 = *((_DWORD *)a2 + 480);
    if ( (v19 & 0x800000) != 0 )
    {
      if ( (v19 & 0x10) == 0 && (v19 & 0x20) == 0 )
      {
        if ( v11 != *((_DWORD *)v5 + 10) - v8 )
          return 1LL;
        v20 = *((_DWORD *)a2 + 413);
        if ( v20 == 3 )
        {
          xxxSend3FingerTapHotkey();
          if ( (unsigned int)IsFirstActionAfterKey(v22, v21, v23, v24) )
            *((_DWORD *)&gTPTelemTimings + 10) = 3;
          else
            *((_DWORD *)&gTPTelemTimings + 11) = 3;
          ++*((_DWORD *)&gTPTelemState + 7);
        }
        else
        {
          if ( v20 != 4 )
          {
            if ( v20 == 2 && (gTouchPadParameters[3] & 0x400) != 0 )
              xxxSend2FingerTap(
                a2,
                (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
            goto LABEL_45;
          }
          xxxSend4FingerTapHotkey();
          if ( (unsigned int)IsFirstActionAfterKey(v26, v25, v27, v28) )
            *((_DWORD *)&gTPTelemTimings + 10) = 4;
          else
            *((_DWORD *)&gTPTelemTimings + 11) = 4;
          ++*((_DWORD *)&gTPTelemState + 8);
        }
        ++*((_DWORD *)&gTPTelemState + 13);
LABEL_45:
        *((_DWORD *)a2 + 480) &= ~0x800000u;
        return 1LL;
      }
      *((_DWORD *)a2 + 480) = v19 & 0xFF7FFFFF;
    }
  }
  return 0LL;
}
