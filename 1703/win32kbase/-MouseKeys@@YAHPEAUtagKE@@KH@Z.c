/*
 * XREFs of ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0118C10
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x1C00669C0 (PostWinlogonMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C013B444 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1C013C174 (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall MouseKeys(struct tagKE *a1)
{
  __int16 v1; // dx
  unsigned __int8 v2; // di
  int v3; // r9d
  __int64 v4; // r8
  __int64 v6; // rcx
  __int16 v7; // dx
  unsigned int v8; // ebx
  int v9; // esi
  __int64 i; // rax
  __int16 v11; // dx
  int v12; // eax

  v1 = *((_WORD *)a1 + 1);
  v2 = *((_BYTE *)a1 + 2);
  v3 = v1 & 0x8000;
  v4 = (unsigned __int8)gLockBits | (unsigned __int8)gLatchBits | (unsigned int)(unsigned __int8)gPhysModifierState;
  if ( (dword_1C018AD44 & 1) == 0 )
  {
    if ( (dword_1C018AD44 & 4) != 0 && v2 == gNumLockVk && (*((_WORD *)a1 + 1) & 0x8000) == 0 && (_DWORD)v4 == 17 )
    {
      gMKPreviousVk = *((_BYTE *)a1 + 2);
      if ( (dword_1C018AD44 & 0x10) != 0 )
        ApiSetEditionPostRitSound(*(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL), 0LL, v4, 0LL);
      PostWinlogonMessage(1026LL, 3u);
      return 0LL;
    }
    return 1LL;
  }
  v6 = gpusMouseVKey;
  v7 = v2 | v1 & 0x100;
  v8 = 0;
  v9 = 0;
  for ( i = 0LL; i < 16; ++i )
  {
    if ( v7 == *(_WORD *)(gpusMouseVKey + 2 * i) )
      break;
    ++v9;
  }
  if ( v9 == 16 )
    return 1LL;
  v11 = gNumLockVk;
  if ( !gbMKMouseMode && v2 != gNumLockVk )
    return 1LL;
  if ( v2 == 46 )
  {
    LOBYTE(v6) = (((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) & 0x30) != 0;
    if ( ((unsigned __int8)v6 & ((((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) & 0xC) != 0)) != 0 )
      return 1LL;
  }
  if ( v3 )
  {
    if ( gMKPreviousVk == v2 )
    {
      if ( gtmridMKMoveCursor )
      {
        ApiSetEditionKillAccessibilityTimer(v6, gtmridMKMoveCursor);
        v11 = gNumLockVk;
        gtmridMKMoveCursor = 0LL;
      }
      gdwPUDFlags &= ~0x2000u;
      gMKPreviousVk = 0;
    }
    LOBYTE(v8) = (unsigned __int16)v2 == v11;
    return v8;
  }
  else
  {
    if ( gMKPreviousVk == v2 )
      v12 = gdwPUDFlags | 0x2000;
    else
      v12 = gdwPUDFlags & 0xFFFFDFFF;
    gdwPUDFlags = v12;
    if ( (v12 & 0x2000) == 0 && gtmridMKMoveCursor )
    {
      ApiSetEditionKillAccessibilityTimer(0x2000LL, gtmridMKMoveCursor);
      gtmridMKMoveCursor = 0LL;
    }
    gMKPreviousVk = v2;
    return off_1C015FCE0[v9](word_1C016E988[v9]);
  }
}
