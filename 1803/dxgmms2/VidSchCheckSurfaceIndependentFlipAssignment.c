/*
 * XREFs of VidSchCheckSurfaceIndependentFlipAssignment @ 0x1C00028A0
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
        _DWORD *a8,
        _QWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12,
        _OWORD *a13,
        _OWORD *a14)
{
  unsigned int v15; // edi
  _DWORD *result; // rax
  char v20; // r15
  int v21; // r8d
  __int128 v22; // xmm6
  char v23; // bl
  __int128 v24; // xmm7
  __int64 v25; // rsi
  char v26; // r14
  _DWORD *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int i; // eax
  int v31; // r8d
  __int64 v32; // rdx
  __int64 v33; // rax
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  int v36; // eax
  __int128 v37; // xmm1
  _LUID DestinationLuid; // [rsp+28h] [rbp-79h] BYREF
  __int128 v39; // [rsp+30h] [rbp-71h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-61h] BYREF
  __int128 v41; // [rsp+58h] [rbp-49h]
  __int128 v42; // [rsp+68h] [rbp-39h]
  int v43; // [rsp+78h] [rbp-29h]
  unsigned __int8 v44; // [rsp+E8h] [rbp+47h]
  char v46; // [rsp+130h] [rbp+8Fh]
  char v47; // [rsp+138h] [rbp+97h]

  v15 = 0;
  *a6 = 0;
  *a7 = 0;
  *a8 = 0;
  *a9 = 0LL;
  result = a12;
  *a10 = 0;
  *a11 = 0;
  *a12 = 0;
  if ( !*(_BYTE *)(a1 + 47) )
    return result;
  RtlCopyLuid(&DestinationLuid, a3);
  v46 = *(_BYTE *)(a1 + 136);
  v47 = 0;
  v20 = 0;
  v44 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
  v21 = 0;
  if ( *(int *)(a1 + 3320) < 0 )
  {
LABEL_3:
    v22 = v39;
    v23 = (char)a8;
    v24 = v39;
    LODWORD(v25) = (_DWORD)a8;
    v15 = (unsigned int)a8;
LABEL_4:
    v26 = v46;
    goto LABEL_5;
  }
  v27 = *(_DWORD **)(a1 + 3160);
  v28 = 0LL;
  while ( *v27 != DestinationLuid.LowPart || v27[1] != DestinationLuid.HighPart )
  {
    ++v21;
    ++v28;
    v27 += 34;
    if ( v28 > *(int *)(a1 + 3320) )
      goto LABEL_3;
  }
  v29 = *(_QWORD *)(a1 + 3160) + 136LL * v21;
  v20 = 1;
  for ( i = *(_DWORD *)(v29 + 16); (i & 1) == 0; i >>= 1 )
    ++v15;
  v31 = *(_DWORD *)(v29 + 112);
  v25 = *(unsigned int *)(v29 + 20);
  v32 = *(_QWORD *)(a1 + 8LL * v15 + 3032);
  v23 = *(_BYTE *)(v32 + 2264);
  v24 = *(_OWORD *)(v32 + 2268);
  v22 = *(_OWORD *)(v32 + 2284);
  if ( (unsigned int)(v31 - 1) > 1 )
  {
    if ( v31 == 3 && a4 != -1 && a4 == *(_QWORD *)(v29 + 8) )
    {
      *a11 = 1;
      v20 = 1;
    }
    goto LABEL_4;
  }
  if ( a4 == *(_QWORD *)(v29 + 8) || a4 == -1 )
  {
    if ( *(_BYTE *)(v29 + 96) )
    {
      v26 = v46;
      v47 = 1;
      v44 = *(_BYTE *)(v29 + 108);
      *(_QWORD *)&v39 = *(_QWORD *)(v29 + 88);
      if ( v44 || v46 )
      {
        v34 = *(_OWORD *)(216 * v25 + v32 + 104);
        v35 = *(_OWORD *)(216 * v25 + v32 + 120);
        v43 = *(_DWORD *)(216 * v25 + v32 + 136);
        v41 = v34;
        v42 = v35;
      }
      goto LABEL_23;
    }
    v47 = 0;
  }
  else
  {
    *a10 = 1;
    *a8 = v25;
  }
  v26 = v46;
LABEL_23:
  v20 = 1;
LABEL_5:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v47 )
  {
    *a6 = 1;
    *a8 = v25;
    v33 = v39;
    *a7 = v44;
    *a9 = v33;
    if ( v44 || v26 )
    {
      v36 = v43;
      v37 = v42;
      *(_OWORD *)a5 = v41;
      *(_OWORD *)(a5 + 16) = v37;
      *(_DWORD *)(a5 + 32) = v36;
    }
  }
  if ( v20 )
    *a2 = v15;
  *a12 = v23 != 0;
  if ( a13 )
    *a13 = v24;
  result = a14;
  if ( a14 )
    *a14 = v22;
  return result;
}
