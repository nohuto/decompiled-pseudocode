/*
 * XREFs of VidSchOverlayPlaneAttributes @ 0x1C002A180
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 */

void __fastcall VidSchOverlayPlaneAttributes(
        __int64 a1,
        unsigned int a2,
        char *a3,
        __int64 a4,
        unsigned int *a5,
        int *a6)
{
  __int64 v7; // r14
  unsigned int v10; // edi
  unsigned int v11; // ebp
  unsigned int i; // r9d
  __int64 v13; // r10
  __int64 v14; // r11
  unsigned __int64 v15; // r8
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // r8
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  __int64 v22; // rdx
  __int128 v23; // xmm1
  __int128 v24; // xmm1
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-268h] BYREF
  _OWORD v26[16]; // [rsp+40h] [rbp-248h] BYREF
  _OWORD v27[16]; // [rsp+140h] [rbp-148h] BYREF

  v7 = a2;
  *a5 = 0;
  v10 = 0;
  v11 = *a6;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &LockHandle);
  for ( i = 0; i < *(_DWORD *)(a1 + 128); ++i )
  {
    v13 = *(_QWORD *)(a1 + 8 * v7 + 2992);
    v14 = 272LL * i;
    if ( *(_WORD *)(v14 + v13 + 90) > (unsigned __int16)*(_DWORD *)(v14 + v13 + 88) )
    {
      v15 = (unsigned __int64)i << 11;
      if ( *(_QWORD *)(v15 + v13 + 2384) )
      {
        v16 = *(_OWORD *)(v15 + v13 + 2400);
        if ( i == v11 )
          v11 = v10;
        v26[2 * v10] = *(_OWORD *)(v15 + v13 + 2384);
        v17 = *(_OWORD *)(v14 + v13 + 88);
        v26[2 * v10 + 1] = v16;
        v18 = *(_OWORD *)(v14 + v13 + 104);
        v27[2 * v10] = v17;
        v27[2 * v10 + 1] = v18;
        if ( a4 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)&v26[2 * v10] + 1) + 16LL) + 8LL));
        ++v10;
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v10 )
  {
    v19 = v10;
    v20 = (char *)v27 - a3;
    v21 = (char *)v26 - a3;
    v22 = a4 - (_QWORD)a3;
    do
    {
      v23 = *(_OWORD *)&a3[v20 + 16];
      *(_OWORD *)a3 = *(_OWORD *)&a3[v20];
      *((_OWORD *)a3 + 1) = v23;
      if ( a4 )
      {
        v24 = *(_OWORD *)&a3[v21 + 16];
        *(_OWORD *)&a3[v22] = *(_OWORD *)&a3[v21];
        *(_OWORD *)&a3[v22 + 16] = v24;
      }
      a3 += 32;
      --v19;
    }
    while ( v19 );
  }
  *a5 = v10;
  *a6 = v11;
}
