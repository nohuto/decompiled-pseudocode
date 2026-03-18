/*
 * XREFs of VidSchEnterIndependentFlip @ 0x1C0014C80
 * Callers:
 *     <none>
 * Callees:
 *     ??0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z @ 0x1C001532C (--0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0txqqqtxtx @ 0x1C002E008 (McTemplateK0txqqqtxtx.c)
 */

_QWORD *__fastcall VidSchEnterIndependentFlip(
        __int64 a1,
        unsigned int a2,
        struct _LUID *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        _QWORD *a8)
{
  _QWORD *result; // rax
  __int64 v11; // rdx
  int v12; // r12d
  char v13; // r11
  unsigned int v14; // r15d
  unsigned int v15; // ebx
  __int64 v16; // rdi
  __int64 v17; // r8
  unsigned int v18; // r9d
  unsigned int v19; // r10d
  __int64 v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // r13d
  unsigned int v23; // edx
  unsigned int v24; // r15d
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // r12
  __int64 v28; // rbx
  int v29; // r9d
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rcx
  bool v35; // zf
  int v36; // edx
  int v37; // r8d
  _QWORD *v38; // r9
  __int64 v39; // r14
  unsigned int v40; // edi
  char v41; // si
  unsigned int v42; // ebx
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  struct _LUID DestinationLuid; // [rsp+68h] [rbp-49h] BYREF
  unsigned int v46; // [rsp+70h] [rbp-41h] BYREF
  unsigned int v47; // [rsp+74h] [rbp-3Dh]
  unsigned int v48; // [rsp+78h] [rbp-39h]
  __int64 v49; // [rsp+80h] [rbp-31h]
  unsigned int v50; // [rsp+88h] [rbp-29h] BYREF
  int v51; // [rsp+8Ch] [rbp-25h]
  unsigned int v52; // [rsp+90h] [rbp-21h]
  __int64 v53; // [rsp+98h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-11h] BYREF
  unsigned int v55; // [rsp+F8h] [rbp+47h]

  *a7 = 0;
  result = a8;
  *a8 = 0LL;
  if ( *(_BYTE *)(a1 + 47) )
  {
    RtlCopyLuid(&DestinationLuid, a3);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0LL;
    v17 = a2;
    v18 = 0;
    v19 = 0;
    if ( a2 )
    {
      do
      {
        if ( (v17 & 1) != 0 )
          break;
        ++v18;
        v17 = (unsigned int)v17 >> 1;
      }
      while ( (_DWORD)v17 );
    }
    while ( (_DWORD)v17 )
    {
      v11 = 216LL * *(unsigned int *)(a5 + 4LL * v19);
      v20 = *(int *)(v11 + *(_QWORD *)(a1 + 8LL * v18 + 3032) + 140);
      if ( (int)v20 > -1 )
        v16 = *(_QWORD *)(a1 + 3160) + 136 * v20;
      else
        v16 = 0LL;
      if ( v16 )
        v13 = 1;
      else
        ++v15;
      v21 = v14 + 1;
      if ( !v16 )
        v21 = v14;
      v14 = v21;
      while ( 1 )
      {
        v17 = (unsigned int)v17 >> 1;
        if ( !(_DWORD)v17 || (v17 & 1) != 0 )
          break;
        ++v18;
      }
      ++v19;
    }
    v22 = 0;
    if ( v15 && v14 )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(1LL, v11, v17);
      v43[5] = v14;
      v43[6] = v15;
      v43[3] = 281LL;
      v43[4] = 0x8000LL;
      v43[7] = a1;
      WdLogEvent5_WdCriticalError(v43);
      JUMPOUT(0x1C00196A4LL);
    }
    if ( !v13 )
    {
      v17 = *(unsigned int *)(a1 + 3304);
      if ( (int)v17 > 0 )
      {
        v11 = *(_QWORD *)(a1 + 3160);
        while ( *(_QWORD *)v11 )
        {
          ++v12;
          v11 += 136LL;
          if ( v12 >= (int)v17 )
            goto LABEL_24;
        }
        v16 = *(_QWORD *)(a1 + 3160) + 136LL * v12;
        if ( v12 > *(_DWORD *)(a1 + 3320) )
          *(_DWORD *)(a1 + 3320) = v12;
      }
    }
LABEL_24:
    if ( !v16 )
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdCriticalError(1LL, v11, v17);
      v44[3] = 281LL;
      v44[4] = 0x2000LL;
      v44[5] = *(unsigned int *)(a1 + 3304);
      v44[6] = *(int *)(a1 + 3320);
      v44[7] = a1;
      WdLogEvent5_WdCriticalError(v44);
      JUMPOUT(0x1C00196F5LL);
    }
    if ( v13 )
    {
      v27 = a4;
    }
    else
    {
      *(_DWORD *)(v16 + 16) = a2;
      memset((void *)(v16 + 20), 0, 0x40uLL);
      v23 = 0;
      v24 = 0;
      if ( a2 )
      {
        do
        {
          if ( (a2 & 1) != 0 )
            break;
          ++v24;
          a2 >>= 1;
        }
        while ( a2 );
        while ( a2 )
        {
          v55 = v23 + 1;
          *(_DWORD *)(v16 + 4LL * v23 + 20) = *(_DWORD *)(a5 + 4LL * v22);
          v25 = 216LL * *(unsigned int *)(a5 + 4LL * v22);
          *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v24 + 3032) + v25 + 140) = v12;
          v26 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v25, v24);
          v26[3] = *a3;
          v26[4] = a4;
          v26[5] = *(unsigned int *)(a5 + 4LL * v22);
          WdLogEvent5_WdPresentTokenEvent(v26);
          while ( 1 )
          {
            a2 >>= 1;
            if ( !a2 || (a2 & 1) != 0 )
              break;
            ++v24;
          }
          v23 = v55;
          ++v22;
        }
      }
      v27 = a4;
      *(_QWORD *)(v16 + 112) = 1LL;
      *(struct _LUID *)v16 = DestinationLuid;
      *(_QWORD *)(v16 + 8) = a4;
      *(_WORD *)(v16 + 96) = 0;
      *(_BYTE *)(v16 + 98) = 0;
    }
    *(_DWORD *)(v16 + 100) = a6;
    v28 = *(_QWORD *)(a1 + 3312);
    *(_QWORD *)(v16 + 88) = v28;
    VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
      (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v46,
      (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v16);
    v30 = v46;
    v31 = v48;
    while ( v30 )
    {
      v32 = *(_QWORD *)(v16 + 88);
      v33 = *(_QWORD *)(a1 + 8LL * v47 + 3032) + 216LL * *(unsigned int *)(v49 + 4 * v31);
      v34 = 5LL * *(unsigned int *)(v33 + 312);
      *(_QWORD *)(v33 + 8 * v34 + 184) = MEMORY[0xFFFFF78000000320];
      *(_WORD *)(v33 + 8 * v34 + 152) = 257;
      *(struct _LUID *)(v33 + 8 * v34 + 156) = DestinationLuid;
      *(_QWORD *)(v33 + 8 * v34 + 168) = v27;
      *(_QWORD *)(v33 + 8 * v34 + 176) = v32;
      *(_DWORD *)(v33 + 312) = ((_BYTE)v29 + (unsigned __int8)*(_DWORD *)(v33 + 312)) & 3;
      v35 = v46 >> 1 == 0;
      v30 = v46 >> 1;
      v46 >>= 1;
      if ( !v35 )
      {
        do
        {
          if ( ((unsigned __int8)v30 & (unsigned __int8)v29) != 0 )
            break;
          v47 += v29;
          v30 >>= 1;
        }
        while ( v30 );
        v46 = v30;
      }
      v31 = v29 + v48;
      v48 += v29;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v35 = bTracingEnabled == 0;
    *a8 = v28;
    if ( !v35 )
    {
      VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
        (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v50,
        (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v16);
      v39 = v53;
      v40 = v52;
      v41 = v51;
      v42 = v50;
      while ( v42 )
      {
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0txqqqtxtx(
            v40,
            v36,
            v37,
            1,
            DestinationLuid.LowPart,
            v41,
            *(_DWORD *)(v39 + 4LL * v40),
            a6,
            0,
            v27,
            1,
            *v38);
          v38 = a8;
        }
        while ( 1 )
        {
          v42 >>= 1;
          if ( !v42 || (v42 & 1) != 0 )
            break;
          ++v41;
        }
        ++v40;
      }
    }
    result = a7;
    *a7 = 1;
  }
  return result;
}
