/*
 * XREFs of StorEtwMiniportEvent @ 0x1C0041A34
 * Callers:
 *     StorEtwMiniportEventProxy @ 0x1C002FA30 (StorEtwMiniportEventProxy.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0011818 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
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
  __int64 v11; // r15
  unsigned int v14; // esi
  ULONG v16; // ebx
  EVENT_DESCRIPTOR v17; // xmm0
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // ecx
  const wchar_t *v24; // rax
  __int64 v25; // rdi
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
  __int64 v41; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+50h] [rbp-B0h] BYREF
  const wchar_t *v45; // [rsp+58h] [rbp-A8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  GUID ActivityId; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  int *v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  int v52; // [rsp+A8h] [rbp-58h]
  int v53; // [rsp+ACh] [rbp-54h]
  __int64 v54; // [rsp+B0h] [rbp-50h]
  __int64 v55; // [rsp+B8h] [rbp-48h]
  char *v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  char *v58; // [rsp+D0h] [rbp-30h]
  __int64 v59; // [rsp+D8h] [rbp-28h]
  char *v60; // [rsp+E0h] [rbp-20h]
  __int64 v61; // [rsp+E8h] [rbp-18h]
  __int64 *v62; // [rsp+F0h] [rbp-10h]
  __int64 v63; // [rsp+F8h] [rbp-8h]
  __int64 *v64; // [rsp+100h] [rbp+0h]
  __int64 v65; // [rsp+108h] [rbp+8h]
  int v66; // [rsp+270h] [rbp+170h] BYREF

  v66 = a3;
  v11 = a8;
  v43 = 0LL;
  v41 = 0LL;
  v14 = a9;
  v42 = a8;
  v16 = 4;
  v44 = 0LL;
  v45 = 0LL;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v38 = -1;
  v39 = -1;
  v40 = -1;
  if ( a8 )
  {
    if ( a9 > 2 )
    {
      if ( a9 > 4 )
        v17 = (EVENT_DESCRIPTOR)EventMiniportRequest8;
      else
        v17 = (EVENT_DESCRIPTOR)EventMiniportRequest4;
    }
    else
    {
      v17 = (EVENT_DESCRIPTOR)EventMiniportRequest2;
    }
  }
  else if ( a2 )
  {
    if ( a9 > 2 )
    {
      if ( a9 > 4 )
        v17 = (EVENT_DESCRIPTOR)EventMiniportLun8;
      else
        v17 = (EVENT_DESCRIPTOR)EventMiniportLun4;
    }
    else
    {
      v17 = (EVENT_DESCRIPTOR)EventMiniportLun2;
    }
  }
  else if ( a9 > 2 )
  {
    if ( a9 > 4 )
      v17 = (EVENT_DESCRIPTOR)EventMiniport8;
    else
      v17 = (EVENT_DESCRIPTOR)EventMiniport4;
  }
  else
  {
    v17 = (EVENT_DESCRIPTOR)EventMiniport2;
  }
  EventDescriptor = v17;
  EventDescriptor.Level = a6;
  EventDescriptor.Opcode = a7;
  v18 = ((a5 & 1) != 0 ? 0x200000600000LL : 0x200000000000LL) | 0x20;
  if ( (a5 & 2) == 0 )
    v18 = (a5 & 1) != 0 ? 0x200000600000LL : 0x200000000000LL;
  v19 = v18 | 0x100000000LL;
  if ( (a5 & 4) == 0 )
    v19 = v18;
  v20 = v19 | 0x400000000LL;
  if ( (a5 & 8) == 0 )
    v20 = v19;
  v21 = v20 | 0x80;
  if ( (a5 & 0x10) == 0 )
    v21 = v20;
  EventDescriptor.Keyword = EventDescriptor.Keyword & 0xFF00000000000000uLL | v21;
  RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v44);
  if ( v45 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v45[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  UserData.Size = v23;
  v24 = L"NULL";
  UserData.Reserved = 0;
  if ( v45 )
    v24 = v45;
  v50 = 4LL;
  UserData.Ptr = (unsigned __int64)v24;
  v49 = &v66;
  if ( !a4 )
    return -1073741811;
  v25 = -1LL;
  do
    ++v25;
  while ( *(_WORD *)(a4 + 2 * v25) );
  if ( (unsigned int)(v25 - 1) > 0x1F )
    return -1073741811;
  v51 = a4;
  v52 = 2 * v25 + 2;
  v54 = a1 + 56;
  v53 = 0;
  v55 = 4LL;
  if ( v11 || a2 )
  {
    if ( a2 && *(_WORD *)a2 == 1 )
    {
      v38 = *(_BYTE *)(a2 + 8);
      v39 = *(_BYTE *)(a2 + 9);
      v40 = *(_BYTE *)(a2 + 10);
    }
    v56 = &v38;
    v58 = &v39;
    v60 = &v40;
    v57 = 1LL;
    v16 = 7;
    v59 = 1LL;
    v61 = 1LL;
    if ( v11 )
    {
      if ( *(_BYTE *)(v11 + 2) == 40 )
        v26 = *(_QWORD *)(v11 + 80);
      else
        v26 = *(_QWORD *)(v11 + 48);
      v41 = v26;
      if ( v26 )
        IoGetActivityIdIrp(v26, &ActivityId);
      v63 = 8LL;
      v62 = &v41;
      v16 = 9;
      v65 = 8LL;
      v64 = &v42;
    }
  }
  v27 = 0;
  if ( v14 )
  {
    v28 = a10;
    v29 = a11;
    do
    {
      v30 = *v28;
      if ( !*v28 )
        goto LABEL_56;
      v25 = -1LL;
      do
        ++v25;
      while ( v30[v25] );
      if ( (unsigned int)v25 > 0x10 )
        return -1073741811;
      v31 = 2 * v25 + 2;
      if ( !(_DWORD)v25 )
LABEL_56:
        v31 = 10;
      if ( !v30 || (v32 = *v28, !(_DWORD)v25) )
        v32 = L"NULL";
      v33 = v16;
      v34 = v16 + 1;
      v33 *= 2LL;
      *(&UserData.Ptr + v33) = (unsigned __int64)v32;
      *(&UserData.Size + 2 * v33) = v31;
      *(&UserData.Reserved + 2 * v33) = 0;
      if ( v30 && (_DWORD)v25 )
        v35 = (__int64 *)(v29 + 8LL * v27);
      else
        v35 = &v43;
      ++v27;
      v36 = 2LL * v34;
      v16 = v34 + 1;
      ++v28;
      *(&UserData.Ptr + v36) = (unsigned __int64)v35;
      *((_QWORD *)&UserData.Size + v36) = 8LL;
    }
    while ( v27 < v14 );
  }
  return EtwWrite(StorPortEventProvider_Context, &EventDescriptor, &ActivityId, v16, &UserData);
}
