/*
 * XREFs of VidSchOverlayPlaneAttributes @ 0x1C002BB70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 */

void __fastcall VidSchOverlayPlaneAttributes(__int64 a1, unsigned int a2, __int64 a3, char *a4, _DWORD *a5, int *a6)
{
  __int64 v7; // r15
  __int64 v10; // rdi
  int v11; // r14d
  unsigned int i; // r9d
  __int64 v13; // r10
  __int64 v14; // r11
  unsigned __int64 v15; // r8
  int v16; // eax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // r9
  char *v21; // rdx
  char *v22; // r8
  _OWORD *v23; // rcx
  int v24; // eax
  __int128 v25; // xmm1
  __int128 v26; // xmm1
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-318h] BYREF
  _OWORD v28[20]; // [rsp+40h] [rbp-2F8h] BYREF
  _OWORD v29[23]; // [rsp+180h] [rbp-1B8h] BYREF

  v7 = a2;
  *a5 = 0;
  v10 = 0LL;
  v11 = *a6;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1888), &LockHandle);
  for ( i = 0; i < *(_DWORD *)(a1 + 128); ++i )
  {
    v13 = *(_QWORD *)(a1 + 8 * v7 + 3008);
    v14 = 280LL * i;
    if ( *(_WORD *)(v14 + v13 + 106) > (unsigned __int16)*(_DWORD *)(v14 + v13 + 104) )
    {
      v15 = (unsigned __int64)i << 11;
      if ( *(_QWORD *)(v15 + v13 + 3040) )
      {
        v16 = *(_DWORD *)(v14 + v13 + 136);
        v17 = *(_OWORD *)(v15 + v13 + 3056);
        if ( i == v11 )
          v11 = v10;
        v28[2 * (unsigned int)v10] = *(_OWORD *)(v15 + v13 + 3040);
        v18 = *(_OWORD *)(v14 + v13 + 104);
        v28[2 * (unsigned int)v10 + 1] = v17;
        v19 = *(_OWORD *)(v14 + v13 + 120);
        *(_OWORD *)((char *)v29 + 36 * v10) = v18;
        *(_OWORD *)((char *)&v29[1] + 36 * v10) = v19;
        *((_DWORD *)&v29[2] + 9 * v10) = v16;
        if ( a4 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)&v28[2 * (unsigned int)v10] + 1)
                                                                      + 16LL)
                                                          + 8LL));
        v10 = (unsigned int)(v10 + 1);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (_DWORD)v10 )
  {
    v20 = (unsigned int)v10;
    v21 = (char *)v29 - a3;
    v22 = (char *)((char *)v28 - a4);
    v23 = a4;
    do
    {
      v24 = *(_DWORD *)&v21[a3 + 32];
      v25 = *(_OWORD *)&v21[a3 + 16];
      *(_OWORD *)a3 = *(_OWORD *)&v21[a3];
      *(_OWORD *)(a3 + 16) = v25;
      *(_DWORD *)(a3 + 32) = v24;
      if ( a4 )
      {
        v26 = *(_OWORD *)((char *)v23 + (_QWORD)v22 + 16);
        *v23 = *(_OWORD *)((char *)v23 + (_QWORD)v22);
        v23[1] = v26;
      }
      a3 += 36LL;
      v23 += 2;
      --v20;
    }
    while ( v20 );
  }
  *a5 = v10;
  *a6 = v11;
}
