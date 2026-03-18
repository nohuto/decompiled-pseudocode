/*
 * XREFs of CkptRestore @ 0x1C001D438
 * Callers:
 *     UpdateCheckpoint @ 0x1C001D3E8 (UpdateCheckpoint.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0132A60 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C0132F04 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01F0224 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01F27EC (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F33EC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01F470C (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 *     xxxSetWindowShowState @ 0x1C020B5C8 (xxxSetWindowShowState.c)
 * Callees:
 *     CkptUpdate @ 0x1C001D51C (CkptUpdate.c)
 *     DesktopAlloc @ 0x1C0042C20 (DesktopAlloc.c)
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

char *__fastcall CkptRestore(__int64 a1, _OWORD *a2)
{
  char *Prop; // rbx
  __int64 v6; // rax

  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 25LL) & 1) == 0 )
  {
    Prop = (char *)GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
    if ( Prop )
    {
LABEL_3:
      CkptUpdate(a1, a2, Prop);
      return Prop;
    }
    v6 = DesktopAlloc(*(_QWORD *)(a1 + 24), 52LL, 1952674645LL);
    Prop = (char *)v6;
    if ( v6 )
    {
      if ( (unsigned int)InternalSetProp(a1, (unsigned __int16)atomCheckpointProp, v6, 9LL) )
      {
        *((_DWORD *)Prop + 8) &= 0xFFFFFF80;
        *((_DWORD *)Prop + 4) = -1;
        *((_DWORD *)Prop + 5) = -1;
        *((_DWORD *)Prop + 6) = -1;
        *((_DWORD *)Prop + 7) = -1;
        *(_OWORD *)Prop = *a2;
        *(_OWORD *)(Prop + 36) = *a2;
        goto LABEL_3;
      }
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 128LL), 0, Prop);
    }
  }
  return 0LL;
}
