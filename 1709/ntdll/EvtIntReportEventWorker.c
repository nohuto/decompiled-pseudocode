/*
 * XREFs of EvtIntReportEventWorker @ 0x180016898
 * Callers:
 *     EvtIntReportEventAndSourceAsync @ 0x180016830 (EvtIntReportEventAndSourceAsync.c)
 *     EvtIntReportAuthzEventAndSourceAsync @ 0x18010A4A0 (EvtIntReportAuthzEventAndSourceAsync.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x180019F70 (EtwpEventWriteFull.c)
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlValidSid @ 0x18002DA50 (RtlValidSid.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     EtwWriteUMSecurityEvent @ 0x18007DC30 (EtwWriteUMSecurityEvent.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _local_unwind @ 0x180091A40 (_local_unwind.c)
 */

_BOOL8 __fastcall EvtIntReportEventWorker(
        __int64 a1,
        int a2,
        __int64 a3,
        __int16 a4,
        __int16 a5,
        char a6,
        __int64 a7,
        unsigned __int16 a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v13; // r12
  _BYTE *Heap; // rdi
  char v15; // r15
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // r8d
  int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // r8d
  unsigned int v23; // edx
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r8
  int v30; // edx
  __int64 v31; // rcx
  unsigned int v32; // eax
  __int64 v33; // rax
  __int64 v35; // [rsp+0h] [rbp-2D8h] BYREF
  int v36; // [rsp+50h] [rbp-288h]
  unsigned int v37; // [rsp+54h] [rbp-284h]
  int v38; // [rsp+58h] [rbp-280h] BYREF
  int v39; // [rsp+5Ch] [rbp-27Ch] BYREF
  int v40; // [rsp+60h] [rbp-278h] BYREF
  char v41; // [rsp+64h] [rbp-274h]
  char v42; // [rsp+65h] [rbp-273h]
  __int16 v43; // [rsp+66h] [rbp-272h]
  unsigned __int64 v44; // [rsp+68h] [rbp-270h]
  unsigned int v45; // [rsp+70h] [rbp-268h]
  int v46; // [rsp+74h] [rbp-264h]
  _BYTE *v47; // [rsp+78h] [rbp-260h]
  __int64 v48; // [rsp+80h] [rbp-258h] BYREF
  __int64 v49; // [rsp+88h] [rbp-250h]
  __int64 *v50; // [rsp+90h] [rbp-248h]
  _BYTE v51[512]; // [rsp+A0h] [rbp-238h] BYREF

  v50 = &v35;
  v46 = a2;
  v49 = a1;
  v13 = a7;
  v37 = 0;
  Heap = v51;
  v47 = v51;
  v15 = 0;
  v38 = 0;
  if ( !a11 && a9 || !a10 && a8 || !a3 )
  {
    v37 = 87;
    goto LABEL_34;
  }
  v16 = a8 + (a7 != 0) + 7;
  if ( a9 )
    ++v16;
  if ( v16 > 0x20 )
  {
    Heap = (_BYTE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 16LL * v16);
    v47 = Heap;
    if ( !Heap )
    {
      v37 = 8;
      goto LABEL_34;
    }
  }
  v17 = 0x8000000000000000uLL;
  if ( a4 )
  {
    switch ( a4 )
    {
      case 1:
        v15 = 2;
        break;
      case 2:
        v15 = 3;
        break;
      case 4:
        v15 = 4;
        break;
      case 8:
        v17 = 0x8020000000000000uLL;
        break;
      case 16:
        v17 = 0x8010000000000000uLL;
        break;
    }
  }
  else
  {
    v15 = 0;
  }
  v40 = 0;
  v41 = v15;
  v43 = a5;
  v42 = 0;
  v44 = v17;
  if ( v13 )
  {
    if ( !(unsigned __int8)RtlValidSid(v13) )
    {
      v37 = 87;
      local_unwind(v50, &loc_180016BF9);
      goto LABEL_31;
    }
    v38 = 4 * *(unsigned __int8 *)(v13 + 1) + 8;
  }
  v48 = MEMORY[0x7FFE0014];
  *(_QWORD *)Heap = &v48;
  *((_QWORD *)Heap + 1) = 8LL;
  *((_QWORD *)Heap + 2) = &a6;
  *((_QWORD *)Heap + 3) = 4LL;
  v36 = 2;
  v33 = -1LL;
  do
    ++v33;
  while ( *(_WORD *)(a3 + 2 * v33) );
  v39 = (unsigned __int16)(v33 + 1);
  *((_QWORD *)Heap + 4) = &v39;
  *((_QWORD *)Heap + 5) = 2LL;
  v18 = 2 * v39;
  *((_QWORD *)Heap + 6) = a3;
  *((_DWORD *)Heap + 14) = v18;
  *((_DWORD *)Heap + 15) = 0;
  *((_QWORD *)Heap + 8) = &v38;
  *((_QWORD *)Heap + 9) = 2LL;
  v19 = 5;
  v36 = 5;
  v20 = v38;
  if ( v38 )
  {
    *((_QWORD *)Heap + 10) = v13;
    *((_DWORD *)Heap + 22) = v20;
    *((_DWORD *)Heap + 23) = 0;
    v19 = 6;
    v36 = 6;
  }
  v21 = 2LL * v19;
  *(_QWORD *)&Heap[8 * v21] = &a8;
  *(_QWORD *)&Heap[8 * v21 + 8] = 2LL;
  v22 = v19 + 1;
  v36 = v22;
  v23 = 0;
  v45 = 0;
  while ( v23 < a8 )
  {
    v24 = *(_QWORD *)(a10 + 8LL * v23);
    v25 = -1LL;
    do
      ++v25;
    while ( *(_WORD *)(v24 + 2 * v25) );
    v26 = 2 * v25 + 2;
    v27 = 2LL * v22;
    *(_QWORD *)&Heap[8 * v27] = v24;
    *(_QWORD *)&Heap[8 * v27 + 8] = v26;
    v36 = ++v22;
    v45 = ++v23;
  }
  v28 = 2LL * v22;
  *(_QWORD *)&Heap[8 * v28] = &a9;
  *(_QWORD *)&Heap[8 * v28 + 8] = 4LL;
  v29 = v22 + 1;
  v36 = v29;
  v30 = a9;
  if ( a9 )
  {
    v31 = 2LL * (unsigned int)v29;
    *(_QWORD *)&Heap[8 * v31] = a11;
    *(_DWORD *)&Heap[8 * v31 + 8] = v30;
    *(_DWORD *)&Heap[8 * v31 + 12] = 0;
    v29 = (unsigned int)(v29 + 1);
    v36 = v29;
  }
  if ( !v46 )
  {
    v32 = EtwpEventWriteFull(v49, (unsigned int)&v40, 0, 0, 4, 0LL, 0LL, v29, (__int64)Heap);
    goto LABEL_32;
  }
LABEL_31:
  v32 = EtwWriteUMSecurityEvent(&v40, 4LL, v29, Heap);
LABEL_32:
  v37 = v32;
  if ( Heap != v51 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
LABEL_34:
  RtlSetLastWin32Error(v37);
  return v37 == 0;
}
