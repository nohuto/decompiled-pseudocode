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
        unsigned __int64 a3,
        __int16 a4,
        unsigned __int16 a5,
        char a6,
        unsigned __int8 *Sid,
        unsigned __int16 a8,
        int a9,
        __int64 a10,
        unsigned __int64 a11)
{
  unsigned __int8 *v13; // r12
  _EVENT_DATA_DESCRIPTOR *p_UserData; // rdi
  unsigned __int8 v15; // r15
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // r8d
  int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // r8d
  unsigned int v23; // edx
  unsigned __int64 v24; // r9
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
  _EVENT_DATA_DESCRIPTOR *v43; // [rsp+78h] [rbp-260h]
  __int64 v44; // [rsp+80h] [rbp-258h] BYREF
  __int64 v45; // [rsp+88h] [rbp-250h]
  __int64 *v46; // [rsp+90h] [rbp-248h]
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-238h] BYREF

  v46 = &v35;
  v42 = a2;
  v45 = a1;
  v13 = Sid;
  Win32Error = 0;
  p_UserData = &UserData;
  v43 = &UserData;
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
    p_UserData = (_EVENT_DATA_DESCRIPTOR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 16LL * v16);
    v43 = p_UserData;
    if ( !p_UserData )
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
      local_unwind(v46, &loc_180016BF9);
      goto LABEL_31;
    }
    v38 = 4 * v13[1] + 8;
  }
  v44 = MEMORY[0x7FFE0014];
  p_UserData->Ptr = (unsigned __int64)&v44;
  *(_QWORD *)&p_UserData->Size = 8LL;
  p_UserData[1].Ptr = (unsigned __int64)&a6;
  *(_QWORD *)&p_UserData[1].Size = 4LL;
  v36 = 2;
  v33 = -1LL;
  do
    ++v33;
  while ( *(_WORD *)(a3 + 2 * v33) );
  v39 = (unsigned __int16)(v33 + 1);
  p_UserData[2].Ptr = (unsigned __int64)&v39;
  *(_QWORD *)&p_UserData[2].Size = 2LL;
  v18 = 2 * v39;
  p_UserData[3].Ptr = a3;
  p_UserData[3].Size = v18;
  p_UserData[3].Reserved = 0;
  p_UserData[4].Ptr = (unsigned __int64)&v38;
  *(_QWORD *)&p_UserData[4].Size = 2LL;
  v19 = 5;
  v36 = 5;
  v20 = v38;
  if ( v38 )
  {
    p_UserData[5].Ptr = (unsigned __int64)v13;
    p_UserData[5].Size = v20;
    p_UserData[5].Reserved = 0;
    v19 = 6;
    v36 = 6;
  }
  v21 = v19;
  p_UserData[v21].Ptr = (unsigned __int64)&a8;
  *(_QWORD *)&p_UserData[v21].Size = 2LL;
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
    v27 = v22;
    p_UserData[v27].Ptr = v24;
    *(_QWORD *)&p_UserData[v27].Size = v26;
    v36 = ++v22;
    v41 = ++v23;
  }
  v28 = v22;
  p_UserData[v28].Ptr = (unsigned __int64)&a9;
  *(_QWORD *)&p_UserData[v28].Size = 4LL;
  v29 = v22 + 1;
  v36 = v29;
  v30 = a9;
  if ( a9 )
  {
    v31 = v29;
    p_UserData[v31].Ptr = a11;
    p_UserData[v31].Size = v30;
    p_UserData[v31].Reserved = 0;
    v36 = ++v29;
  }
  if ( !v42 )
  {
    v32 = EtwpEventWriteFull(v45, (unsigned int)&EventDescriptor, 0, 0, 4, 0LL, 0LL, v29, (__int64)p_UserData);
    goto LABEL_32;
  }
LABEL_31:
  v32 = EtwWriteUMSecurityEvent(&EventDescriptor, 4u, v29, p_UserData);
LABEL_32:
  Win32Error = v32;
  if ( p_UserData != &UserData )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, p_UserData);
LABEL_34:
  RtlSetLastWin32Error(Win32Error);
  return Win32Error == 0;
}
