/*
 * XREFs of AnFwpFadeAnimationTimer @ 0x1408404D0
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     BgpFwReleaseLock @ 0x140164E40 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140164F8C (BgpFwAcquireLock.c)
 *     BgpGxDrawRectangle @ 0x1401651B0 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x140165560 (BgpGetBitsPerPixel.c)
 *     LogFwStat @ 0x14083B8CC (LogFwStat.c)
 */

void __fastcall AnFwpFadeAnimationTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // r13d
  __int64 v5; // rbx
  __int64 v6; // rdi
  char v7; // r12
  char v8; // r15
  char v9; // bp
  unsigned int v10; // r14d
  __int64 v11; // r9
  __int64 v12; // r11
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 i; // r10
  unsigned __int8 v18; // al
  unsigned int v19; // eax
  int v20; // edi
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 j; // r10
  unsigned __int8 v24; // al
  unsigned int v25; // eax
  int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 k; // r9
  unsigned __int8 v30; // al
  unsigned int v31; // eax
  __int64 v32; // r10
  __int64 v33; // r8
  __int64 v34; // rdi
  __int64 m; // rbx
  int v36; // eax
  int v37; // edx
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  __int64 v41; // r10
  __int64 v42; // r8
  __int64 n; // rbx
  int v44; // eax
  int v45; // edx
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 ii; // r10
  int v52; // eax
  int v53; // edx
  unsigned int v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // eax
  __int64 v57; // r8
  __int64 v58; // [rsp+20h] [rbp-58h]
  __int64 v59; // [rsp+28h] [rbp-50h]
  __int64 v60; // [rsp+30h] [rbp-48h] BYREF
  __int64 v61; // [rsp+38h] [rbp-40h]
  LARGE_INTEGER v62[2]; // [rsp+40h] [rbp-38h] BYREF

  BgpFwAcquireLock();
  if ( byte_1403EFAD0 )
  {
    LogFwStat(1, 6, 0LL);
    LogFwStat(1, 4, 0LL);
    v4 = dword_14039C964;
    v5 = qword_14039C9A0;
    v6 = qword_14039C9B0;
    v7 = byte_14039C970;
    v8 = byte_14039C971;
    v9 = byte_14039C972;
    v60 = qword_14039C968;
    v59 = qword_14039C9E0;
    v58 = qword_14039C9A0;
    v61 = qword_14039C9B0;
    v10 = 10 * (dword_14039C960 - dword_14039C960 / (unsigned int)(dword_14039D7F4 - dword_14039C964));
    v13 = 0;
    if ( (unsigned int)BgpGetBitsPerPixel() == 24 )
    {
      if ( !v9 )
      {
        v14 = qword_14039C9A8;
        v15 = 0LL;
        v16 = *(_QWORD *)(v6 + 24);
        for ( i = *(_QWORD *)(qword_14039C9A8 + 24);
              (unsigned int)v15 < *(_DWORD *)(v14 + 12);
              v15 = (unsigned int)(v15 + 1) )
        {
          v18 = *(_BYTE *)(v15 + i);
          if ( v18 )
          {
            v19 = (v10 * v18) >> 10;
            *(_BYTE *)(v15 + v16) = v19;
            if ( v19 )
              ++v13;
          }
        }
        v5 = v58;
      }
      v20 = 0;
      if ( !v7 )
      {
        v21 = *(_QWORD *)(v11 + 24);
        v22 = 0LL;
        for ( j = *(_QWORD *)(v5 + 24); (unsigned int)v22 < *(_DWORD *)(v11 + 12); v22 = (unsigned int)(v22 + 1) )
        {
          v24 = *(_BYTE *)(v22 + v21);
          if ( v24 )
          {
            v25 = (v10 * v24) >> 10;
            *(_BYTE *)(v22 + j) = v25;
            if ( v25 )
              ++v20;
          }
        }
      }
      v26 = 0;
      if ( !v8 )
      {
        v27 = 0LL;
        v28 = *(_QWORD *)(v12 + 24);
        for ( k = *(_QWORD *)(v59 + 24); (unsigned int)v27 < *(_DWORD *)(v12 + 12); v27 = (unsigned int)(v27 + 1) )
        {
          v30 = *(_BYTE *)(v27 + v28);
          if ( v30 )
          {
            v31 = (v10 * v30) >> 10;
            *(_BYTE *)(v27 + k) = v31;
            if ( v31 )
              ++v26;
          }
        }
      }
    }
    else
    {
      if ( !v9 )
      {
        v32 = qword_14039C9A8;
        v33 = 0LL;
        v34 = *(_QWORD *)(v6 + 24);
        for ( m = *(_QWORD *)(qword_14039C9A8 + 24);
              (unsigned int)v33 < *(_DWORD *)(v32 + 12);
              v33 = (unsigned int)(v33 + 4) )
        {
          v36 = *(_DWORD *)(v33 + m);
          if ( v36 )
          {
            v37 = v13 + 1;
            v38 = (v10 * (unsigned __int8)v36) >> 10;
            *(_BYTE *)(v33 + v34) = v38;
            if ( !v38 )
              v37 = v13;
            v13 = v37 + 1;
            v39 = (v10 * *(unsigned __int8 *)((unsigned int)(v33 + 1) + m)) >> 10;
            *(_BYTE *)((unsigned int)(v33 + 1) + v34) = v39;
            if ( !v39 )
              v13 = v37;
            v40 = (v10 * *(unsigned __int8 *)((unsigned int)(v33 + 2) + m)) >> 10;
            *(_BYTE *)((unsigned int)(v33 + 2) + v34) = v40;
            if ( v40 )
              ++v13;
          }
        }
        v5 = v58;
      }
      v20 = 0;
      if ( !v7 )
      {
        v41 = *(_QWORD *)(v11 + 24);
        v42 = 0LL;
        for ( n = *(_QWORD *)(v5 + 24); (unsigned int)v42 < *(_DWORD *)(v11 + 12); v42 = (unsigned int)(v42 + 4) )
        {
          v44 = *(_DWORD *)(v42 + v41);
          if ( v44 )
          {
            v45 = v20 + 1;
            v46 = (v10 * (unsigned __int8)v44) >> 10;
            *(_BYTE *)(v42 + n) = v46;
            if ( !v46 )
              v45 = v20;
            v20 = v45 + 1;
            v47 = (v10 * *(unsigned __int8 *)((unsigned int)(v42 + 1) + v41)) >> 10;
            *(_BYTE *)((unsigned int)(v42 + 1) + n) = v47;
            if ( !v47 )
              v20 = v45;
            v48 = (v10 * *(unsigned __int8 *)((unsigned int)(v42 + 2) + v41)) >> 10;
            *(_BYTE *)((unsigned int)(v42 + 2) + n) = v48;
            if ( v48 )
              ++v20;
          }
        }
      }
      v26 = 0;
      if ( !v8 )
      {
        v49 = 0LL;
        v50 = *(_QWORD *)(v12 + 24);
        for ( ii = *(_QWORD *)(v59 + 24); (unsigned int)v49 < *(_DWORD *)(v12 + 12); v49 = (unsigned int)(v49 + 4) )
        {
          v52 = *(_DWORD *)(v49 + v50);
          if ( v52 )
          {
            v53 = v26 + 1;
            v54 = (v10 * (unsigned __int8)v52) >> 10;
            *(_BYTE *)(v49 + ii) = v54;
            if ( !v54 )
              v53 = v26;
            v26 = v53 + 1;
            v55 = (v10 * *(unsigned __int8 *)((unsigned int)(v49 + 1) + v50)) >> 10;
            *(_BYTE *)((unsigned int)(v49 + 1) + ii) = v55;
            if ( !v55 )
              v26 = v53;
            v56 = (v10 * *(unsigned __int8 *)((unsigned int)(v49 + 2) + v50)) >> 10;
            *(_BYTE *)((unsigned int)(v49 + 2) + ii) = v56;
            if ( v56 )
              ++v26;
          }
        }
      }
    }
    LogFwStat(0, 4, 0LL);
    LogFwStat(1, 3, 0LL);
    if ( !v9 )
    {
      BgpGxDrawRectangle(v61, (__int64)&v60, v57);
      v9 = v13 == 0;
    }
    if ( !v7 )
    {
      if ( !v4 && !v20 || (BgpGxDrawRectangle(v58, (__int64)&xmmword_14039C980, v57), !v20) )
        v7 = 1;
    }
    if ( !v8 )
    {
      if ( !v4 && !v26 || (BgpGxDrawRectangle(v59, (__int64)&xmmword_14039C9B8, v57), !v26) )
        v8 = 1;
    }
    LogFwStat(0, 3, 0LL);
    LogFwStat(0, 6, v62);
    if ( v13 || v26 || v20 )
    {
      byte_14039C970 = v7;
      byte_14039C971 = v8;
      dword_14039C960 = v10 / 0xA;
      dword_14039C964 = v4 + 1;
      byte_14039C972 = v9;
    }
    else
    {
      byte_1403EFAD0 = 0;
      KeCancelTimer(&stru_1403EBE50);
      KeSetEvent(&stru_1403E9090, 0, 0);
    }
  }
  BgpFwReleaseLock();
}
