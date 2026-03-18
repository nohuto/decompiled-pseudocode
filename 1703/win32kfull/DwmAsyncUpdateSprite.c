/*
 * XREFs of DwmAsyncUpdateSprite @ 0x1C009D7AC
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C001665C (GreTransferSpriteStateToDwmState.c)
 *     GreHintSpriteShape @ 0x1C0023878 (GreHintSpriteShape.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C006DDF0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C009D48C (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C024C3D4 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 *     GreProtectSpriteContent @ 0x1C024E9CC (GreProtectSpriteContent.c)
 *     GreWindowResizeStarted @ 0x1C024F05C (GreWindowResizeStarted.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall DwmAsyncUpdateSprite(
        PVOID Object,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int128 *a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        int a10,
        __int64 a11)
{
  unsigned int v14; // r15d
  int v15; // eax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  int v19; // eax
  __int128 v20; // xmm1
  __int64 v21; // rcx
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  _QWORD v29[20]; // [rsp+30h] [rbp-B1h] BYREF

  v14 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset((char *)v29 + 2, 0, 0x9AuLL);
    LODWORD(v29[0]) = 10223732;
    WORD2(v29[0]) = 0x8000;
    v29[16] = a3;
    LODWORD(v29[5]) = 1073741830;
    *(_QWORD *)((char *)&v29[5] + 4) = a2;
    HIDWORD(v29[6]) = a4 & 0xFFFFFF7F;
    if ( a5 )
    {
      v15 = *(_DWORD *)(a5 + 8);
      *(_QWORD *)((char *)&v29[14] + 4) = *(_QWORD *)a5;
      HIDWORD(v29[15]) = v15;
    }
    if ( a6 )
    {
      v16 = *a6;
      LODWORD(v29[7]) = 1;
      v17 = a6[1];
      *(_OWORD *)((char *)&v29[7] + 4) = v16;
      v18 = a6[2];
      *(_OWORD *)((char *)&v29[9] + 4) = v17;
      *(_QWORD *)&v17 = *((_QWORD *)a6 + 6);
      *(_OWORD *)((char *)&v29[11] + 4) = v18;
      *(_QWORD *)((char *)&v29[13] + 4) = v17;
    }
    v29[17] = __PAIR64__(a8, a7);
    LODWORD(v29[18]) = a9;
    *(_QWORD *)((char *)&v29[18] + 4) = a11;
    if ( a10 && g_cDelayedUpdateSpriteNotifications < 0x14 )
    {
      v19 = v29[19];
      v20 = *(_OWORD *)&v29[7];
      v21 = 116LL * g_cDelayedUpdateSpriteNotifications++;
      *(_OWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + v21) = *(_OWORD *)&v29[5];
      v22 = *(_OWORD *)&v29[9];
      *(_OWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + v21 + 16) = v20;
      v23 = *(_OWORD *)&v29[11];
      *(_OWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + v21 + 32) = v22;
      v24 = *(_OWORD *)&v29[13];
      *(_OWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + v21 + 48) = v23;
      v25 = *(_OWORD *)&v29[15];
      *(_OWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + v21 + 64) = v24;
      v26 = *(_OWORD *)&v29[17];
      *(_OWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + v21 + 80) = v25;
      *(_OWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + v21 + 96) = v26;
      *(_DWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + v21 + 112) = v19;
    }
    else
    {
      EtwUpdateEvent(a2, 1073741830LL);
      v14 = LpcRequestPort(Object, v29);
    }
    ObfDereferenceObject(Object);
  }
  return v14;
}
