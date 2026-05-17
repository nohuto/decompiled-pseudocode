/*
 * XREFs of sub_1800503AC @ 0x1800503AC
 * Callers:
 *     sub_180050300 @ 0x180050300 (sub_180050300.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180050A28 @ 0x180050A28 (sub_180050A28.c)
 *     sub_180050A6C @ 0x180050A6C (sub_180050A6C.c)
 *     sub_180050AD8 @ 0x180050AD8 (sub_180050AD8.c)
 *     sub_18005115C @ 0x18005115C (sub_18005115C.c)
 *     sub_18007D794 @ 0x18007D794 (sub_18007D794.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwSetInformationProcess @ 0x18009AE40 (ZwSetInformationProcess.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800D0B18 @ 0x1800D0B18 (sub_1800D0B18.c)
 */

__int64 __fastcall sub_1800503AC(unsigned __int64 a1)
{
  unsigned __int64 v1; // r15
  unsigned int v2; // ebx
  int v3; // eax
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  void *ProcessHeap; // r14
  _BYTE *Heap; // rdi
  unsigned __int64 v11; // rcx
  signed int v12; // esi
  __int64 v13; // r8
  int v14; // r13d
  int v15; // esi
  unsigned int v16; // r11d
  __int64 v17; // r8
  __int64 v18; // r15
  unsigned int v19; // r13d
  unsigned int v20; // ecx
  __int64 v21; // rax
  _QWORD *v22; // r13
  __int64 v23; // rcx
  int v24; // esi
  __int64 v25; // r8
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r13
  char v30; // [rsp+30h] [rbp-F8h]
  char v31; // [rsp+31h] [rbp-F7h] BYREF
  int v32; // [rsp+34h] [rbp-F4h]
  unsigned int v33; // [rsp+38h] [rbp-F0h] BYREF
  unsigned int v34; // [rsp+3Ch] [rbp-ECh]
  int v35; // [rsp+40h] [rbp-E8h]
  unsigned int v36; // [rsp+44h] [rbp-E4h]
  _BYTE *v37; // [rsp+48h] [rbp-E0h]
  _DWORD v38[2]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int i; // [rsp+58h] [rbp-D0h]
  __int64 v40; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 v41; // [rsp+68h] [rbp-C0h]
  _BYTE *v42; // [rsp+78h] [rbp-B0h]
  size_t Size; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v44; // [rsp+88h] [rbp-A0h]
  __int64 v45; // [rsp+90h] [rbp-98h] BYREF
  __int64 v46; // [rsp+98h] [rbp-90h]
  unsigned __int64 v47; // [rsp+A0h] [rbp-88h]
  unsigned __int64 v48[4]; // [rsp+A8h] [rbp-80h] BYREF
  _BYTE v49[40]; // [rsp+C8h] [rbp-60h] BYREF

  v1 = a1;
  v41 = a1;
  v48[2] = a1;
  v2 = 0;
  if ( !dword_18015C1C0 )
    return 0LL;
  v3 = sub_18001014C(*(_QWORD *)(a1 + 48), 1, 9u, &v33, &v40);
  v7 = v40;
  if ( v3 < 0 )
    v7 = 0LL;
  v40 = v7;
  if ( !v7 )
    return 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v48[1] = (unsigned __int64)ProcessHeap;
  v35 = 0;
  v48[0] = 0LL;
  Heap = 0LL;
  v42 = 0LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D118, v4, v5, v6);
  if ( dword_18015C1C0 == 1 )
  {
    Heap = v49;
    v42 = v49;
  }
  else
  {
    v11 = 24LL * (unsigned int)dword_18015C1C0;
    if ( is_mul_ok((unsigned int)dword_18015C1C0, 0x18uLL) )
    {
      v12 = 0;
    }
    else
    {
      v11 = -1LL;
      v12 = -1073741675;
    }
    if ( v12 >= 0 )
    {
      v13 = -1LL;
      if ( v11 + 16 >= v11 )
        v13 = v11 + 16;
      v12 = v11 + 16 < v11 ? 0xC0000095 : 0;
      if ( v11 + 16 >= v11 )
      {
        Heap = (_BYTE *)RtlAllocateHeap((__int64)ProcessHeap, dword_18015C294 + 786432, v13);
        v42 = Heap;
        if ( !Heap )
          v12 = -1073741801;
      }
    }
    if ( v12 < 0 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015D118);
      return (unsigned int)v12;
    }
  }
  v37 = Heap;
  v48[3] = (unsigned __int64)Heap;
  v14 = dword_18015C1D0;
  v36 = dword_18015C1D0;
  v15 = sub_180050AD8(v40, v1, (unsigned int)&v33, (unsigned int)&v31, (__int64)&v45);
  v32 = v15;
  if ( v15 < 0 )
    goto LABEL_35;
  *((_DWORD *)Heap + 2) = dword_18015C1C0;
  v30 = v31;
  v16 = v33;
  v34 = v33;
  if ( v31 )
  {
    *((_DWORD *)Heap + 1) = 1;
    *((_DWORD *)Heap + 3) = v14;
    v36 = dword_18015C1D0;
  }
  else
  {
    *((_DWORD *)Heap + 1) = 0;
    *((_DWORD *)Heap + 3) = v16;
  }
  v46 = v45;
  v17 = sub_180050A28(v45, v38);
  Size = v17;
  LODWORD(v18) = 0;
  v19 = v38[0];
  for ( i = v38[0]; ; v19 = i )
  {
    v38[1] = v18;
    LODWORD(v40) = v18;
    v20 = *((_DWORD *)Heap + 2);
    if ( (unsigned int)v18 >= v20 )
    {
      *(_DWORD *)Heap = 0;
      v32 = ZwSetInformationProcess(-1LL, 35LL, Heap, 24 * v20 + 16);
      goto LABEL_25;
    }
    v44 = v19;
    v21 = RtlAllocateHeap((__int64)ProcessHeap, dword_18015C294 + 786432, v19 + 1LL + v17);
    v47 = v21;
    if ( !v21 )
      break;
    v22 = (_QWORD *)(~v44 & (v21 + v19 + 1));
    v44 = (unsigned __int64)v22;
    *(v22 - 1) = v21;
    memmove(v22, *(const void **)(v46 + 16), Size);
    if ( v30 )
    {
      v27 = sub_180050A6C(v36);
      if ( !v27 )
      {
        RtlFreeHeap((__int64)ProcessHeap, 0, v47);
        break;
      }
      *(_QWORD *)(v27 + 8LL * v34) = v22;
      v22 = (_QWORD *)v27;
    }
    v23 = 3LL * (unsigned int)v40;
    *(_QWORD *)&v37[8 * v23 + 24] = v22;
    *(_DWORD *)&Heap[8 * v23 + 16] = 0;
    LODWORD(v18) = v18 + 1;
    v17 = Size;
  }
  v32 = -1073741801;
LABEL_25:
  v24 = v35;
  while ( (_DWORD)v18 )
  {
    v18 = (unsigned int)(v18 - 1);
    if ( (Heap[24 * v18 + 16] & 2) != 0 )
    {
      v25 = *(_QWORD *)&v37[24 * v18 + 24];
      if ( v25 )
      {
        if ( !v30 )
        {
          v26 = *(_QWORD *)(v25 - 8);
          goto LABEL_31;
        }
        sub_18005115C(v25, *(_QWORD *)&v37[24 * v18 + 32]);
      }
    }
    else if ( (Heap[24 * v18 + 16] & 1) != 0 )
    {
      ++dword_18015C1C4;
    }
    else
    {
      ++v24;
      v28 = *(_QWORD *)&v37[24 * v18 + 24];
      if ( v30 )
      {
        v29 = *(_QWORD *)(v28 + 8LL * v34);
        RtlFreeHeap((__int64)ProcessHeap, 0, v28 - 16);
      }
      else
      {
        v29 = *(_QWORD *)&v37[24 * v18 + 24];
      }
      v26 = *(_QWORD *)(v29 - 8);
LABEL_31:
      RtlFreeHeap((__int64)ProcessHeap, 0, v26);
    }
  }
  v35 = v24;
  v15 = v32;
  v1 = v41;
  if ( v32 < 0 )
  {
    sub_18007D794(v41, v48);
    if ( v30 )
      dword_18015C1D0 -= 8;
  }
  else if ( v35 )
  {
    dword_18015C1C0 -= v35;
  }
LABEL_35:
  if ( v15 >= 0 )
    *(_WORD *)(v1 + 110) = -1;
  RtlReleaseSRWLockExclusive(&qword_18015D118);
  if ( Heap != v49 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Heap);
  if ( v48[0] )
    RtlFreeHeap((__int64)ProcessHeap, 0, v48[0]);
  if ( v15 < 0 )
    return (unsigned int)v15;
  return v2;
}
