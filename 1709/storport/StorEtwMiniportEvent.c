/*
 * XREFs of StorEtwMiniportEvent @ 0x1C00426B8
 * Callers:
 *     StorEtwMiniportEventProxy @ 0x1C0033508 (StorEtwMiniportEventProxy.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0018680 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall StorEtwMiniportEvent(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        __int64 a8,
        unsigned int a9,
        const wchar_t **a10,
        __int64 a11)
{
  unsigned int v11; // esi
  ULONG v15; // ebx
  EVENT_DESCRIPTOR v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // ecx
  const wchar_t *v23; // rax
  __int64 v24; // rdi
  ULONG v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // edx
  const wchar_t **v28; // r8
  __int64 v29; // r11
  const wchar_t *v30; // rcx
  unsigned int v31; // r10d
  const wchar_t *v32; // r9
  __int64 v33; // rax
  ULONG v34; // ebx
  __int64 *v35; // rcx
  __int64 v36; // rax
  char v38; // [rsp+30h] [rbp-D0h] BYREF
  char v39; // [rsp+31h] [rbp-CFh] BYREF
  char v40; // [rsp+32h] [rbp-CEh] BYREF
  ULONG v41; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v42; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+50h] [rbp-B0h] BYREF
  const wchar_t *v46; // [rsp+58h] [rbp-A8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  GUID ActivityId; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  int *v50; // [rsp+90h] [rbp-70h]
  __int64 v51; // [rsp+98h] [rbp-68h]
  __int64 v52; // [rsp+A0h] [rbp-60h]
  int v53; // [rsp+A8h] [rbp-58h]
  int v54; // [rsp+ACh] [rbp-54h]
  ULONG *v55; // [rsp+B0h] [rbp-50h]
  __int64 v56; // [rsp+B8h] [rbp-48h]
  char *v57; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+C8h] [rbp-38h]
  char *v59; // [rsp+D0h] [rbp-30h]
  __int64 v60; // [rsp+D8h] [rbp-28h]
  char *v61; // [rsp+E0h] [rbp-20h]
  __int64 v62; // [rsp+E8h] [rbp-18h]
  __int64 *v63; // [rsp+F0h] [rbp-10h]
  __int64 v64; // [rsp+F8h] [rbp-8h]
  __int64 *v65; // [rsp+100h] [rbp+0h]
  __int64 v66; // [rsp+108h] [rbp+8h]
  int v67; // [rsp+270h] [rbp+170h] BYREF

  v67 = a3;
  v11 = a9;
  v43 = a8;
  v45 = 0LL;
  v46 = 0LL;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v15 = 4;
  v44 = 0LL;
  v38 = -1;
  v39 = -1;
  v40 = -1;
  v42 = 0LL;
  if ( a8 )
  {
    if ( a9 > 2 )
    {
      if ( a9 > 4 )
        v16 = (EVENT_DESCRIPTOR)EventMiniportRequest8;
      else
        v16 = (EVENT_DESCRIPTOR)EventMiniportRequest4;
    }
    else
    {
      v16 = (EVENT_DESCRIPTOR)EventMiniportRequest2;
    }
  }
  else if ( a2 )
  {
    if ( a9 > 2 )
    {
      if ( a9 > 4 )
        v16 = (EVENT_DESCRIPTOR)EventMiniportLun8;
      else
        v16 = (EVENT_DESCRIPTOR)EventMiniportLun4;
    }
    else
    {
      v16 = (EVENT_DESCRIPTOR)EventMiniportLun2;
    }
  }
  else if ( a9 > 2 )
  {
    if ( a9 > 4 )
      v16 = (EVENT_DESCRIPTOR)EventMiniport8;
    else
      v16 = (EVENT_DESCRIPTOR)EventMiniport4;
  }
  else
  {
    v16 = (EVENT_DESCRIPTOR)EventMiniport2;
  }
  EventDescriptor = v16;
  EventDescriptor.Level = a6;
  EventDescriptor.Opcode = a7;
  v17 = ((a5 & 1) != 0 ? 0x200000600000LL : 0x200000000000LL) | 0x20;
  if ( (a5 & 2) == 0 )
    v17 = (a5 & 1) != 0 ? 0x200000600000LL : 0x200000000000LL;
  v18 = v17 | 0x100000000LL;
  if ( (a5 & 4) == 0 )
    v18 = v17;
  v19 = v18 | 0x400000000LL;
  if ( (a5 & 8) == 0 )
    v19 = v18;
  v20 = v19 | 0x80;
  if ( (a5 & 0x10) == 0 )
    v20 = v19;
  EventDescriptor.Keyword = EventDescriptor.Keyword & 0xFF00000000000000uLL | v20;
  RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v45);
  if ( v46 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v46[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  UserData.Size = v22;
  v23 = L"NULL";
  UserData.Reserved = 0;
  if ( v46 )
    v23 = v46;
  v51 = 4LL;
  UserData.Ptr = (unsigned __int64)v23;
  v50 = &v67;
  if ( !a4 )
    return -1073741811;
  v24 = -1LL;
  do
    ++v24;
  while ( *(_WORD *)(a4 + 2 * v24) );
  if ( (unsigned int)(v24 - 1) > 0x1F )
    return -1073741811;
  v52 = a4;
  v53 = 2 * v24 + 2;
  v25 = *(_DWORD *)(a1 + 56);
  v54 = 0;
  v41 = v25;
  if ( v25 == -1 )
    v41 = IoGetConfigurationInformation()->ScsiPortCount + 1;
  v55 = &v41;
  v56 = 4LL;
  if ( v43 || a2 )
  {
    if ( a2 && *(_WORD *)a2 == 1 )
    {
      v38 = *(_BYTE *)(a2 + 8);
      v39 = *(_BYTE *)(a2 + 9);
      v40 = *(_BYTE *)(a2 + 10);
    }
    v58 = 1LL;
    v57 = &v38;
    v59 = &v39;
    v61 = &v40;
    v15 = 7;
    v60 = 1LL;
    v62 = 1LL;
    if ( v43 )
    {
      if ( *(_BYTE *)(v43 + 2) == 40 )
        v26 = *(_QWORD *)(v43 + 80);
      else
        v26 = *(_QWORD *)(v43 + 48);
      v42 = v26;
      if ( v26 )
        IoGetActivityIdIrp(v26, &ActivityId);
      v64 = 8LL;
      v63 = &v42;
      v15 = 9;
      v66 = 8LL;
      v65 = &v43;
    }
  }
  v27 = 0;
  if ( v11 )
  {
    v28 = a10;
    v29 = a11;
    do
    {
      v30 = *v28;
      if ( !*v28 )
        goto LABEL_58;
      v24 = -1LL;
      do
        ++v24;
      while ( v30[v24] );
      if ( (unsigned int)v24 > 0x10 )
        return -1073741811;
      v31 = 2 * v24 + 2;
      if ( !(_DWORD)v24 )
LABEL_58:
        v31 = 10;
      if ( !v30 || (v32 = *v28, !(_DWORD)v24) )
        v32 = L"NULL";
      v33 = v15;
      v34 = v15 + 1;
      v33 *= 2LL;
      *(&UserData.Ptr + v33) = (unsigned __int64)v32;
      *(&UserData.Size + 2 * v33) = v31;
      *(&UserData.Reserved + 2 * v33) = 0;
      if ( v30 && (_DWORD)v24 )
        v35 = (__int64 *)(v29 + 8LL * v27);
      else
        v35 = &v44;
      ++v27;
      v36 = 2LL * v34;
      v15 = v34 + 1;
      ++v28;
      *(&UserData.Ptr + v36) = (unsigned __int64)v35;
      *((_QWORD *)&UserData.Size + v36) = 8LL;
    }
    while ( v27 < v11 );
  }
  return EtwWrite(StorPortEventProvider_Context, &EventDescriptor, &ActivityId, v15, &UserData);
}
