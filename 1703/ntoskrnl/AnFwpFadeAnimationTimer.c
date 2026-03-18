/*
 * XREFs of AnFwpFadeAnimationTimer @ 0x140757430
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     BgpFwReleaseLock @ 0x1401406CC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140140710 (BgpFwAcquireLock.c)
 *     BgpGxDrawRectangle @ 0x140140A34 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x140140DD4 (BgpGetBitsPerPixel.c)
 *     LogFwStat @ 0x140757900 (LogFwStat.c)
 */

void __fastcall AnFwpFadeAnimationTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // ebx
  char v5; // r14
  char v6; // r13
  char v7; // r12
  __int64 v8; // r15
  unsigned int v9; // ebp
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  int v13; // esi
  __int64 v14; // r9
  unsigned int v15; // edx
  __int64 v16; // r10
  __int64 m; // r8
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  int v21; // edi
  unsigned int v22; // edx
  __int64 v23; // r8
  __int64 n; // r9
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rdx
  unsigned int v29; // ecx
  __int64 v30; // r10
  __int64 i; // r9
  unsigned __int8 v32; // al
  unsigned int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // r8
  __int64 j; // r9
  unsigned __int8 v37; // al
  unsigned int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 k; // r9
  unsigned __int8 v42; // al
  unsigned int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 ii; // r9
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  int v50; // [rsp+24h] [rbp-54h]
  __int64 v51; // [rsp+28h] [rbp-50h]
  __int64 v52; // [rsp+30h] [rbp-48h]
  __int64 v53; // [rsp+38h] [rbp-40h] BYREF
  __int64 v54; // [rsp+40h] [rbp-38h]
  _BYTE v55[8]; // [rsp+48h] [rbp-30h] BYREF

  BgpFwAcquireLock();
  v4 = 0;
  if ( byte_14036F159 )
  {
    LogFwStat(1LL, 6LL, 0LL);
    LogFwStat(1LL, 4LL, 0LL);
    v5 = byte_14033FB52;
    v6 = byte_14033FB50;
    v7 = byte_14033FB51;
    v8 = qword_14033FBB8;
    v53 = qword_14033FB48;
    v52 = qword_14033FBC0;
    v50 = dword_14033FB44;
    v51 = qword_14033FB80;
    v54 = qword_14033FB90;
    v9 = 10 * (dword_14033FB40 - dword_14033FB40 / (unsigned int)(dword_140341A34 - dword_14033FB44));
    v13 = 0;
    if ( (unsigned int)BgpGetBitsPerPixel() == 24 )
    {
      if ( !v5 )
      {
        v28 = qword_14033FB88;
        v29 = 0;
        v30 = *(_QWORD *)(v11 + 24);
        for ( i = *(_QWORD *)(qword_14033FB88 + 24); v29 < *(_DWORD *)(v28 + 12); ++v29 )
        {
          v32 = *(_BYTE *)(v29 + i);
          if ( v32 )
          {
            v33 = (v9 * v32) >> 10;
            *(_BYTE *)(v29 + v30) = v33;
            if ( v33 )
              ++v13;
          }
        }
        v10 = v51;
      }
      v21 = 0;
      if ( !v6 )
      {
        v34 = 0;
        v35 = *(_QWORD *)(v12 + 24);
        for ( j = *(_QWORD *)(v10 + 24); v34 < *(_DWORD *)(v12 + 12); ++v34 )
        {
          v37 = *(_BYTE *)(v34 + v35);
          if ( v37 )
          {
            v38 = (v9 * v37) >> 10;
            *(_BYTE *)(v34 + j) = v38;
            if ( v38 )
              ++v21;
          }
        }
      }
      if ( !v7 )
      {
        v39 = 0LL;
        v40 = *(_QWORD *)(v8 + 24);
        for ( k = *(_QWORD *)(v52 + 24); (unsigned int)v39 < *(_DWORD *)(v8 + 12); v39 = (unsigned int)(v39 + 1) )
        {
          v42 = *(_BYTE *)(v39 + v40);
          if ( v42 )
          {
            v43 = (v9 * v42) >> 10;
            *(_BYTE *)(v39 + k) = v43;
            if ( v43 )
              ++v4;
          }
        }
      }
    }
    else
    {
      if ( !v5 )
      {
        v14 = qword_14033FB88;
        v15 = 0;
        v16 = *(_QWORD *)(v11 + 24);
        for ( m = *(_QWORD *)(qword_14033FB88 + 24); v15 < *(_DWORD *)(v14 + 12); v15 += 4 )
        {
          if ( *(_DWORD *)(v15 + m) )
          {
            v18 = (v9 * *(unsigned __int8 *)(v15 + m)) >> 10;
            *(_BYTE *)(v15 + v16) = v18;
            if ( v18 )
              ++v13;
            v19 = (v9 * *(unsigned __int8 *)(v15 + 1 + m)) >> 10;
            *(_BYTE *)(v15 + 1 + v16) = v19;
            if ( v19 )
              ++v13;
            v20 = (v9 * *(unsigned __int8 *)(v15 + 2 + m)) >> 10;
            *(_BYTE *)(v15 + 2 + v16) = v20;
            if ( v20 )
              ++v13;
          }
        }
        v10 = v51;
      }
      v21 = 0;
      if ( !v6 )
      {
        v22 = 0;
        v23 = *(_QWORD *)(v12 + 24);
        for ( n = *(_QWORD *)(v10 + 24); v22 < *(_DWORD *)(v12 + 12); v22 += 4 )
        {
          if ( *(_DWORD *)(v22 + v23) )
          {
            v25 = (v9 * *(unsigned __int8 *)(v22 + v23)) >> 10;
            *(_BYTE *)(v22 + n) = v25;
            if ( v25 )
              ++v21;
            v26 = (v9 * *(unsigned __int8 *)(v22 + 1 + v23)) >> 10;
            *(_BYTE *)(v22 + 1 + n) = v26;
            if ( v26 )
              ++v21;
            v27 = (v9 * *(unsigned __int8 *)(v22 + 2 + v23)) >> 10;
            *(_BYTE *)(v22 + 2 + n) = v27;
            if ( v27 )
              ++v21;
          }
        }
      }
      if ( !v7 )
      {
        v44 = 0LL;
        v45 = *(_QWORD *)(v8 + 24);
        for ( ii = *(_QWORD *)(v52 + 24); (unsigned int)v44 < *(_DWORD *)(v8 + 12); v44 = (unsigned int)(v44 + 4) )
        {
          if ( *(_DWORD *)(v44 + v45) )
          {
            v47 = (v9 * *(unsigned __int8 *)(v44 + v45)) >> 10;
            *(_BYTE *)(v44 + ii) = v47;
            if ( v47 )
              ++v4;
            v48 = (v9 * *(unsigned __int8 *)((unsigned int)(v44 + 1) + v45)) >> 10;
            *(_BYTE *)((unsigned int)(v44 + 1) + ii) = v48;
            if ( v48 )
              ++v4;
            v49 = (v9 * *(unsigned __int8 *)((unsigned int)(v44 + 2) + v45)) >> 10;
            *(_BYTE *)((unsigned int)(v44 + 2) + ii) = v49;
            if ( v49 )
              ++v4;
          }
        }
      }
    }
    LogFwStat(0LL, 4LL, 0LL);
    LogFwStat(1LL, 3LL, 0LL);
    if ( !v5 )
    {
      BgpGxDrawRectangle(v54, (__int64)&v53);
      v5 = v13 == 0;
    }
    if ( !v6 )
    {
      if ( !v50 && !v21 || (BgpGxDrawRectangle(v51, (__int64)&xmmword_14033FB60), !v21) )
        v6 = 1;
    }
    if ( !v7 )
    {
      if ( !v50 && !v4 || (BgpGxDrawRectangle(v52, (__int64)&xmmword_14033FB98), !v4) )
        v7 = 1;
    }
    LogFwStat(0LL, 3LL, 0LL);
    LogFwStat(0LL, 6LL, v55);
    if ( v13 || v4 || v21 )
    {
      byte_14033FB50 = v6;
      byte_14033FB51 = v7;
      dword_14033FB40 = v9 / 0xA;
      dword_14033FB44 = v50 + 1;
      byte_14033FB52 = v5;
    }
    else
    {
      byte_14036F159 = 0;
      KeCancelTimer(&stru_140387540);
      KeSetEvent(&stru_140387580, 0, 0);
    }
  }
  BgpFwReleaseLock();
}
