/*
 * XREFs of VidSchCheckSurfaceIndependentFlipAssignment @ 0x1C00111E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall VidSchCheckSurfaceIndependentFlipAssignment(
        __int64 a1,
        unsigned int *a2,
        struct _LUID *a3,
        __int64 a4,
        _OWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        unsigned int *a8,
        _QWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12,
        _OWORD *a13,
        _OWORD *a14)
{
  unsigned int v15; // edi
  _DWORD *result; // rax
  unsigned __int8 v19; // r15
  unsigned int v20; // r10d
  char v21; // r14
  unsigned int v22; // r12d
  __int128 v23; // xmm7
  __int128 v24; // xmm6
  unsigned int v25; // r11d
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // r9d
  char v29; // bl
  char v30; // si
  __int128 v31; // xmm1
  __int128 v32; // xmm1
  char v33; // [rsp+28h] [rbp-69h]
  _LUID DestinationLuid[2]; // [rsp+30h] [rbp-61h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-51h] BYREF
  __int128 v36; // [rsp+58h] [rbp-39h]
  __int128 v37; // [rsp+68h] [rbp-29h]
  char v38; // [rsp+D8h] [rbp+47h]
  char v40; // [rsp+128h] [rbp+97h]

  v15 = 0;
  *a6 = 0;
  *a7 = 0;
  *a8 = 0;
  *a9 = 0LL;
  *a10 = 0;
  result = a12;
  *a11 = 0;
  *a12 = 0;
  if ( !*(_BYTE *)(a1 + 47) )
    return result;
  RtlCopyLuid(DestinationLuid, a3);
  v40 = *(_BYTE *)(a1 + 132);
  v33 = 0;
  v19 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &LockHandle);
  v20 = *(_DWORD *)(a1 + 40);
  v21 = 0;
  v22 = 0;
  v23 = *(_OWORD *)&DestinationLuid[0].LowPart;
  v24 = *(_OWORD *)&DestinationLuid[0].LowPart;
  if ( !v20 )
  {
    v15 = (unsigned int)a8;
    v29 = (char)a8;
    goto LABEL_13;
  }
  v25 = *(_DWORD *)(a1 + 128);
  v38 = (char)a8;
  while ( !v25 )
  {
LABEL_10:
    if ( ++v22 >= v20 )
    {
LABEL_12:
      v29 = v38;
LABEL_13:
      v30 = v40;
      goto LABEL_14;
    }
    v15 = 0;
  }
  v26 = *(_QWORD *)(a1 + 8LL * v22 + 2992);
  while ( 1 )
  {
    if ( !v26 )
      goto LABEL_9;
    v23 = *(_OWORD *)(v26 + 2268);
    v24 = *(_OWORD *)(v26 + 2284);
    v27 = 272LL * v15;
    v38 = *(_BYTE *)(v26 + 2264);
    v28 = *(_DWORD *)(v27 + v26 + 156);
    if ( (unsigned int)(v28 - 1) <= 1 )
      break;
    if ( v28 == 3
      && DestinationLuid[0].LowPart == *(_DWORD *)(v27 + v26 + 128)
      && DestinationLuid[0].HighPart == *(_DWORD *)(v27 + v26 + 132)
      && a4 != -1
      && a4 == *(_QWORD *)(v27 + v26 + 136) )
    {
      *a11 = 1;
      v21 = 1;
      goto LABEL_12;
    }
LABEL_9:
    if ( ++v15 >= v25 )
      goto LABEL_10;
  }
  if ( DestinationLuid[0].LowPart != *(_DWORD *)(v27 + v26 + 128)
    || DestinationLuid[0].HighPart != *(_DWORD *)(v27 + v26 + 132) )
  {
    goto LABEL_9;
  }
  if ( a4 != *(_QWORD *)(v27 + v26 + 136) && a4 != -1 )
  {
    *a10 = 1;
    *a8 = v15;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(v27 + v26 + 152) )
  {
    v19 = *(_BYTE *)(v27 + v26 + 155);
    v30 = v40;
    v33 = 1;
    a10 = *(_DWORD **)(v27 + v26 + 144);
    if ( v19 || v40 )
    {
      v31 = *(_OWORD *)(v27 + v26 + 104);
      v36 = *(_OWORD *)(v27 + v26 + 88);
      v37 = v31;
    }
  }
  else
  {
    v33 = 0;
LABEL_34:
    v30 = v40;
  }
  v29 = v38;
  v21 = 1;
LABEL_14:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v33 )
  {
    *a6 = 1;
    *a8 = v15;
    *a7 = v19;
    *a9 = a10;
    if ( v19 || v30 )
    {
      v32 = v37;
      *a5 = v36;
      a5[1] = v32;
    }
  }
  if ( v21 )
    *a2 = v22;
  *a12 = v29 != 0;
  if ( a13 )
    *a13 = v23;
  result = a14;
  if ( a14 )
    *a14 = v24;
  return result;
}
