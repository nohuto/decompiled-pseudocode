/*
 * XREFs of DwmAsyncProcessSurfaceComplete @ 0x1C024BAE0
 * Callers:
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C024C3D4 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 *     GreWindowResizeComplete @ 0x1C024EE98 (GreWindowResizeComplete.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall DwmAsyncProcessSurfaceComplete(PVOID Object, __int64 a2)
{
  unsigned int i; // r14d
  unsigned int v5; // ebx
  unsigned int v6; // r8d
  __int64 v7; // rdi
  char *v8; // rdi
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __m128i v11; // xmm2
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  unsigned int v16; // eax
  unsigned int v17; // r9d
  __int64 v18; // rdx
  int v19; // eax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  _QWORD v27[20]; // [rsp+28h] [rbp-79h] BYREF

  i = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  v5 = 0;
  if ( Object )
  {
    v6 = g_cDelayedUpdateSpriteNotifications;
    if ( g_cDelayedUpdateSpriteNotifications )
    {
      do
      {
        v7 = 116LL * v5;
        if ( a2 == *(_QWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + v7 + 88) )
        {
          memset((char *)v27 + 2, 0, 0x9AuLL);
          v8 = (char *)&g_rgDelayedUpdateSpriteNotifications + v7;
          LODWORD(v27[0]) = 10223732;
          WORD2(v27[0]) = 0x8000;
          v9 = *((_OWORD *)v8 + 1);
          v10 = *((_OWORD *)v8 + 2);
          LODWORD(v27[19]) = *((_DWORD *)v8 + 28);
          v11 = *(__m128i *)v8;
          *(_OWORD *)&v27[7] = v9;
          v12 = *((_OWORD *)v8 + 3);
          *(__m128i *)&v27[5] = v11;
          *(_OWORD *)&v27[9] = v10;
          v13 = *((_OWORD *)v8 + 4);
          *(_OWORD *)&v27[11] = v12;
          v14 = *((_OWORD *)v8 + 5);
          *(_OWORD *)&v27[13] = v13;
          HIDWORD(v27[6]) = _mm_srli_si128(v11, 8).m128i_i32[1] | 0x80;
          v15 = *((_OWORD *)v8 + 6);
          *(_OWORD *)&v27[15] = v14;
          *(_OWORD *)&v27[17] = v15;
          EtwUpdateEvent(*(_OWORD *)&v11 >> 32, 1073741830LL);
          v16 = LpcRequestPort(Object, v27);
          v17 = v5;
          v6 = g_cDelayedUpdateSpriteNotifications - 1;
          for ( i = v16; v17 < v6; v8 += 116 )
          {
            v18 = 116LL * ++v17;
            v19 = *(_DWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + v18 + 112);
            v20 = *(_OWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + v18 + 16);
            *(_OWORD *)v8 = *(_OWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + v18);
            v21 = *(_OWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + v18 + 32);
            *((_OWORD *)v8 + 1) = v20;
            v22 = *(_OWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + v18 + 48);
            *((_OWORD *)v8 + 2) = v21;
            v23 = *(_OWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + v18 + 64);
            *((_OWORD *)v8 + 3) = v22;
            v24 = *(_OWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + v18 + 80);
            *((_OWORD *)v8 + 4) = v23;
            v25 = *(_OWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + v18 + 96);
            *((_OWORD *)v8 + 5) = v24;
            *((_OWORD *)v8 + 6) = v25;
            *((_DWORD *)v8 + 28) = v19;
          }
          g_cDelayedUpdateSpriteNotifications = v6;
        }
        else
        {
          ++v5;
        }
      }
      while ( v5 < v6 );
    }
    ObfDereferenceObject(Object);
  }
  return i;
}
