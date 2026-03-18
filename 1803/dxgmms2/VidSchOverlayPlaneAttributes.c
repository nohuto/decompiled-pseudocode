/*
 * XREFs of VidSchOverlayPlaneAttributes @ 0x1C002EBD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 */

void __fastcall VidSchOverlayPlaneAttributes(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _DWORD *a5, int *a6)
{
  __int64 v7; // r14
  __int64 v10; // rdi
  int v11; // r15d
  __int64 i; // r8
  __int64 v13; // r9
  __int64 v14; // r11
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int128 v18; // xmm1
  __int64 v19; // xmm0_8
  __int64 v20; // rcx
  __int128 v21; // xmm1
  int v22; // eax
  __int64 v23; // r9
  char *v24; // rdx
  char *v25; // r8
  __int64 v26; // rcx
  int v27; // eax
  __int128 v28; // xmm1
  __int128 v29; // xmm1
  __int64 v30; // xmm0_8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-368h] BYREF
  _OWORD v32[25]; // [rsp+40h] [rbp-348h] BYREF
  _OWORD v33[23]; // [rsp+1D0h] [rbp-1B8h] BYREF

  v7 = a2;
  *a5 = 0;
  v10 = 0LL;
  v11 = *a6;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 132); i = (unsigned int)(i + 1) )
  {
    v13 = *(_QWORD *)(a1 + 8 * v7 + 3032);
    v14 = 216LL * (unsigned int)i;
    if ( *(_WORD *)(v14 + v13 + 106) > (unsigned __int16)*(_DWORD *)(v14 + v13 + 104) )
    {
      v15 = 2560 * i;
      if ( *(_QWORD *)(2560 * i + v13 + 2400) )
      {
        v16 = *(_DWORD *)(v14 + v13 + 136);
        v17 = 5 * v10;
        v18 = *(_OWORD *)(v15 + v13 + 2416);
        *(_OWORD *)((char *)v32 + 8 * v17) = *(_OWORD *)(v15 + v13 + 2400);
        v19 = *(_QWORD *)(v15 + v13 + 2432);
        v20 = 9 * v10;
        *(_OWORD *)((char *)&v32[1] + 8 * v17) = v18;
        v21 = *(_OWORD *)(v14 + v13 + 120);
        *((_QWORD *)&v32[2] + v17) = v19;
        *(_OWORD *)((char *)v33 + 4 * v20) = *(_OWORD *)(v14 + v13 + 104);
        *(_OWORD *)((char *)&v33[1] + 4 * v20) = v21;
        *((_DWORD *)&v33[2] + v20) = v16;
        v22 = v10;
        if ( (_DWORD)i != v11 )
          v22 = v11;
        v11 = v22;
        if ( a4 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)v32 + 5 * v10 + 1) + 16LL) + 8LL));
        v10 = (unsigned int)(v10 + 1);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (_DWORD)v10 )
  {
    v23 = (unsigned int)v10;
    v24 = (char *)v33 - a3;
    v25 = (char *)v32 - a4;
    v26 = a4;
    do
    {
      v27 = *(_DWORD *)&v24[a3 + 32];
      v28 = *(_OWORD *)&v24[a3 + 16];
      *(_OWORD *)a3 = *(_OWORD *)&v24[a3];
      *(_OWORD *)(a3 + 16) = v28;
      *(_DWORD *)(a3 + 32) = v27;
      if ( a4 )
      {
        v29 = *(_OWORD *)&v25[v26 + 16];
        *(_OWORD *)v26 = *(_OWORD *)&v25[v26];
        v30 = *(_QWORD *)&v25[v26 + 32];
        *(_OWORD *)(v26 + 16) = v29;
        *(_QWORD *)(v26 + 32) = v30;
      }
      a3 += 36LL;
      v26 += 40LL;
      --v23;
    }
    while ( v23 );
  }
  *a5 = v10;
  *a6 = v11;
}
