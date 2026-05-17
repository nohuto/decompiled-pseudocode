/*
 * XREFs of sub_180006FA8 @ 0x180006FA8
 * Callers:
 *     EvtIntReportEventAndSourceAsync @ 0x180006F40 (EvtIntReportEventAndSourceAsync.c)
 *     EvtIntReportAuthzEventAndSourceAsync @ 0x180107CC0 (EvtIntReportAuthzEventAndSourceAsync.c)
 * Callees:
 *     sub_180007480 @ 0x180007480 (sub_180007480.c)
 *     RtlSetLastWin32Error @ 0x180008390 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlValidSid @ 0x180037790 (RtlValidSid.c)
 *     EtwWriteUMSecurityEvent @ 0x18007D3C0 (EtwWriteUMSecurityEvent.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _local_unwind @ 0x18008BEA0 (_local_unwind.c)
 */

_BOOL8 __fastcall sub_180006FA8(
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
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // r8d
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned int v24; // r9d
  __int64 v25; // rdx
  __int64 v26; // r10
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rcx
  unsigned int v30; // eax
  __int64 v32; // [rsp+0h] [rbp-2D8h] BYREF
  int v33; // [rsp+50h] [rbp-288h]
  unsigned int v34; // [rsp+54h] [rbp-284h]
  int v35; // [rsp+58h] [rbp-280h] BYREF
  int v36; // [rsp+5Ch] [rbp-27Ch] BYREF
  int v37; // [rsp+60h] [rbp-278h] BYREF
  char v38; // [rsp+64h] [rbp-274h]
  char v39; // [rsp+65h] [rbp-273h]
  __int16 v40; // [rsp+66h] [rbp-272h]
  unsigned __int64 v41; // [rsp+68h] [rbp-270h]
  unsigned int i; // [rsp+70h] [rbp-268h]
  int v43; // [rsp+74h] [rbp-264h]
  _BYTE *v44; // [rsp+78h] [rbp-260h]
  __int64 v45; // [rsp+80h] [rbp-258h] BYREF
  __int64 v46; // [rsp+88h] [rbp-250h]
  __int64 *v47; // [rsp+90h] [rbp-248h]
  _BYTE v48[512]; // [rsp+A0h] [rbp-238h] BYREF

  v47 = &v32;
  v43 = a2;
  v46 = a1;
  v13 = a7;
  v34 = 0;
  Heap = v48;
  v44 = v48;
  v15 = 0;
  v35 = 0;
  if ( !a11 && a9 || !a10 && a8 || !a3 )
  {
    v34 = 87;
    goto LABEL_32;
  }
  v16 = a8 + (a7 != 0) + 7;
  if ( a9 )
    ++v16;
  if ( v16 > 0x20 )
  {
    Heap = (_BYTE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 16LL * v16);
    v44 = Heap;
    if ( !Heap )
    {
      v34 = 8;
      goto LABEL_32;
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
  v37 = 0;
  v38 = v15;
  v40 = a5;
  v39 = 0;
  v41 = v17;
  if ( v13 )
  {
    if ( !(unsigned __int8)RtlValidSid(v13) )
    {
      v34 = 87;
      local_unwind(v47, &loc_1800072F3);
      goto LABEL_29;
    }
    v35 = 4 * *(unsigned __int8 *)(v13 + 1) + 8;
  }
  v45 = MEMORY[0x7FFE0014];
  *(_QWORD *)Heap = &v45;
  *((_QWORD *)Heap + 1) = 8LL;
  *((_QWORD *)Heap + 2) = &a6;
  *((_QWORD *)Heap + 3) = 4LL;
  v33 = 2;
  v18 = -1LL;
  do
    ++v18;
  while ( *(_WORD *)(a3 + 2 * v18) );
  v36 = (unsigned __int16)(v18 + 1);
  *((_QWORD *)Heap + 4) = &v36;
  *((_QWORD *)Heap + 5) = 2LL;
  v19 = 2 * v36;
  *((_QWORD *)Heap + 6) = a3;
  *((_DWORD *)Heap + 14) = v19;
  *((_DWORD *)Heap + 15) = 0;
  *((_QWORD *)Heap + 8) = &v35;
  *((_QWORD *)Heap + 9) = 2LL;
  v20 = 5;
  v33 = 5;
  v21 = v35;
  if ( v35 )
  {
    *((_QWORD *)Heap + 10) = v13;
    *((_DWORD *)Heap + 22) = v21;
    *((_DWORD *)Heap + 23) = 0;
    v20 = 6;
    v33 = 6;
  }
  v22 = 2LL * v20;
  *(_QWORD *)&Heap[8 * v22] = &a8;
  *(_QWORD *)&Heap[8 * v22 + 8] = 2LL;
  LODWORD(v23) = v20 + 1;
  v33 = v23;
  v24 = 0;
  for ( i = 0; ; i = v24 )
  {
    v25 = 2LL * (unsigned int)v23;
    v23 = (unsigned int)(v23 + 1);
    if ( v24 >= a8 )
      break;
    v26 = *(_QWORD *)(a10 + 8LL * v24);
    v27 = -1LL;
    do
      ++v27;
    while ( *(_WORD *)(v26 + 2 * v27) );
    *(_QWORD *)&Heap[8 * v25] = v26;
    *(_QWORD *)&Heap[8 * v25 + 8] = (unsigned int)(2 * v27 + 2);
    v33 = v23;
    ++v24;
  }
  *(_QWORD *)&Heap[8 * v25] = &a9;
  *(_QWORD *)&Heap[8 * v25 + 8] = 4LL;
  v33 = v23;
  v28 = a9;
  if ( a9 )
  {
    v29 = 2LL * (unsigned int)v23;
    *(_QWORD *)&Heap[8 * v29] = a11;
    *(_DWORD *)&Heap[8 * v29 + 8] = v28;
    *(_DWORD *)&Heap[8 * v29 + 12] = 0;
    v23 = (unsigned int)(v23 + 1);
    v33 = v23;
  }
  if ( !v43 )
  {
    v30 = sub_180007480(v46, (unsigned int)&v37, 0, 0, 4, 0LL, 0LL, v23, (__int64)Heap);
    goto LABEL_30;
  }
LABEL_29:
  v30 = EtwWriteUMSecurityEvent(&v37, 4LL, v23, Heap);
LABEL_30:
  v34 = v30;
  if ( Heap != v48 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
LABEL_32:
  RtlSetLastWin32Error(v34);
  return v34 == 0;
}
