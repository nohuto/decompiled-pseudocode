/*
 * XREFs of VidSchCheckSurfaceIndependentFlipAssignment @ 0x1C00122A0
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
        __int64 a5,
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
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  int v33; // eax
  __int128 v34; // xmm1
  char v35; // [rsp+28h] [rbp-79h]
  _LUID DestinationLuid[2]; // [rsp+30h] [rbp-71h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-61h] BYREF
  __int128 v38; // [rsp+58h] [rbp-49h]
  __int128 v39; // [rsp+68h] [rbp-39h]
  int v40; // [rsp+78h] [rbp-29h]
  char v41; // [rsp+E8h] [rbp+47h]
  char v43; // [rsp+138h] [rbp+97h]

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
  v43 = *(_BYTE *)(a1 + 132);
  v35 = 0;
  v19 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1888), &LockHandle);
  v20 = *(_DWORD *)(a1 + 40);
  v21 = 0;
  v22 = 0;
  v23 = *(_OWORD *)&DestinationLuid[0].LowPart;
  v24 = *(_OWORD *)&DestinationLuid[0].LowPart;
  if ( !v20 )
  {
    v15 = (unsigned int)a8;
    v29 = (char)a8;
    goto LABEL_12;
  }
  v25 = *(_DWORD *)(a1 + 128);
  v41 = (char)a8;
  while ( !v25 )
  {
LABEL_10:
    if ( ++v22 >= v20 )
      goto LABEL_11;
    v15 = 0;
  }
  v26 = *(_QWORD *)(a1 + 8LL * v22 + 3008);
  while ( 1 )
  {
    if ( !v26 )
      goto LABEL_9;
    v23 = *(_OWORD *)(v26 + 2908);
    v24 = *(_OWORD *)(v26 + 2924);
    v27 = 280LL * v15;
    v41 = *(_BYTE *)(v26 + 2904);
    v28 = *(_DWORD *)(v27 + v26 + 180);
    if ( (unsigned int)(v28 - 1) > 1 )
      break;
    if ( DestinationLuid[0].LowPart == *(_DWORD *)(v27 + v26 + 148)
      && DestinationLuid[0].HighPart == *(_DWORD *)(v27 + v26 + 152) )
    {
      if ( a4 != *(_QWORD *)(v27 + v26 + 160) && a4 != -1 )
      {
        *a10 = 1;
        *a8 = v15;
        goto LABEL_40;
      }
      if ( *(_BYTE *)(v27 + v26 + 176) )
      {
        v19 = *(_BYTE *)(v27 + v26 + 179);
        v30 = v43;
        v35 = 1;
        a10 = *(_DWORD **)(v27 + v26 + 168);
        if ( v19 || v43 )
        {
          v31 = *(_OWORD *)(v27 + v26 + 104);
          v32 = *(_OWORD *)(v27 + v26 + 120);
          v40 = *(_DWORD *)(v27 + v26 + 136);
          v38 = v31;
          v39 = v32;
        }
      }
      else
      {
        v35 = 0;
LABEL_40:
        v30 = v43;
      }
      v29 = v41;
      v21 = 1;
      goto LABEL_13;
    }
LABEL_9:
    if ( ++v15 >= v25 )
      goto LABEL_10;
  }
  if ( v28 != 3
    || DestinationLuid[0].LowPart != *(_DWORD *)(v27 + v26 + 148)
    || DestinationLuid[0].HighPart != *(_DWORD *)(v27 + v26 + 152)
    || a4 == -1
    || a4 != *(_QWORD *)(v27 + v26 + 160) )
  {
    goto LABEL_9;
  }
  *a11 = 1;
  v21 = 1;
LABEL_11:
  v29 = v41;
LABEL_12:
  v30 = v43;
LABEL_13:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v35 )
  {
    *a6 = 1;
    *a8 = v15;
    *a7 = v19;
    *a9 = a10;
    if ( v19 || v30 )
    {
      v33 = v40;
      v34 = v39;
      *(_OWORD *)a5 = v38;
      *(_OWORD *)(a5 + 16) = v34;
      *(_DWORD *)(a5 + 32) = v33;
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
