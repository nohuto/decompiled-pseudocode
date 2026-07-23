/*
 * XREFs of sub_18005F868 @ 0x18005F868
 * Callers:
 *     EvtIntReportEventAndSourceAsync @ 0x18005FC40 (EvtIntReportEventAndSourceAsync.c)
 *     EvtIntReportAuthzEventAndSourceAsync @ 0x1801051C0 (EvtIntReportAuthzEventAndSourceAsync.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlValidSid @ 0x1800449F0 (RtlValidSid.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_18005E120 @ 0x18005E120 (sub_18005E120.c)
 *     EtwWriteUMSecurityEvent @ 0x1800861D0 (EtwWriteUMSecurityEvent.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _local_unwind @ 0x180096C40 (_local_unwind.c)
 */

_BOOL8 __fastcall sub_18005F868(
        __int64 a1,
        int a2,
        __int64 a3,
        __int16 a4,
        USHORT a5,
        char a6,
        unsigned __int8 *Sid,
        unsigned __int16 a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  unsigned __int8 *v13; // r12
  _BYTE *Heap; // rdi
  UCHAR v15; // r15
  unsigned int v16; // ecx
  ULONGLONG v17; // rdx
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
  ULONG v29; // r8d
  int v30; // edx
  __int64 v31; // rcx
  LONG v32; // eax
  __int64 v33; // rax
  __int64 v35; // [rsp+0h] [rbp-2D8h] BYREF
  int v36; // [rsp+50h] [rbp-288h]
  LONG Win32Error; // [rsp+54h] [rbp-284h]
  int v38; // [rsp+58h] [rbp-280h] BYREF
  int v39; // [rsp+5Ch] [rbp-27Ch] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-278h] BYREF
  unsigned int v41; // [rsp+70h] [rbp-268h]
  int v42; // [rsp+74h] [rbp-264h]
  _BYTE *v43; // [rsp+78h] [rbp-260h]
  __int64 v44; // [rsp+80h] [rbp-258h] BYREF
  __int64 v45; // [rsp+88h] [rbp-250h]
  __int64 *v46; // [rsp+90h] [rbp-248h]
  _BYTE BaseAddress[512]; // [rsp+A0h] [rbp-238h] BYREF

  v46 = &v35;
  v42 = a2;
  v45 = a1;
  v13 = Sid;
  Win32Error = 0;
  Heap = BaseAddress;
  v43 = BaseAddress;
  v15 = 0;
  v38 = 0;
  if ( !a11 && a9 || !a10 && a8 || !a3 )
  {
    Win32Error = 87;
    goto LABEL_34;
  }
  v16 = a8 + (Sid != 0LL) + 7;
  if ( a9 )
    ++v16;
  if ( v16 > 0x20 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 16LL * v16);
    v43 = Heap;
    if ( !Heap )
    {
      Win32Error = 8;
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
  *(_DWORD *)&EventDescriptor.Id = 0;
  EventDescriptor.Level = v15;
  EventDescriptor.Task = a5;
  EventDescriptor.Opcode = 0;
  EventDescriptor.Keyword = v17;
  if ( v13 )
  {
    if ( !RtlValidSid(v13) )
    {
      Win32Error = 87;
      local_unwind(v46, &loc_18005FBC9);
      goto LABEL_31;
    }
    v38 = 4 * v13[1] + 8;
  }
  v44 = MEMORY[0x7FFE0014];
  *(_QWORD *)Heap = &v44;
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
  v41 = 0;
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
    v41 = ++v23;
  }
  v28 = 2LL * v22;
  *(_QWORD *)&Heap[8 * v28] = &a9;
  *(_QWORD *)&Heap[8 * v28 + 8] = 4LL;
  v29 = v22 + 1;
  v36 = v29;
  v30 = a9;
  if ( a9 )
  {
    v31 = 2LL * v29;
    *(_QWORD *)&Heap[8 * v31] = a11;
    *(_DWORD *)&Heap[8 * v31 + 8] = v30;
    *(_DWORD *)&Heap[8 * v31 + 12] = 0;
    v36 = ++v29;
  }
  if ( !v42 )
  {
    v32 = sub_18005E120(v45, (__int128 *)&EventDescriptor, 0LL, 0, 4u, 0LL, 0LL, v29, (__int64)Heap);
    goto LABEL_32;
  }
LABEL_31:
  v32 = EtwWriteUMSecurityEvent(&EventDescriptor, 4u, v29, (PEVENT_DATA_DESCRIPTOR)Heap);
LABEL_32:
  Win32Error = v32;
  if ( Heap != BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_34:
  RtlSetLastWin32Error(Win32Error);
  return Win32Error == 0;
}
