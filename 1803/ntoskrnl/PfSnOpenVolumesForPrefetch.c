/*
 * XREFs of PfSnOpenVolumesForPrefetch @ 0x14048F544
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x14048E5B0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140061AF0 (RtlStringCbPrintfW.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PfSnQueryVolumeInfo @ 0x14048FB8C (PfSnQueryVolumeInfo.c)
 *     PfSnIsVolumeMounted @ 0x14048FCC8 (PfSnIsVolumeMounted.c)
 *     PfMetadataRecordIsEqual @ 0x14048FDCC (PfMetadataRecordIsEqual.c)
 *     PfSnLogOpenVolumesForPrefetch @ 0x14048FDE8 (PfSnLogOpenVolumesForPrefetch.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14048FE7C (PfSnVolumeCheckSeekPenalty.c)
 *     IopGetDeviceInterfaces @ 0x1404901A0 (IopGetDeviceInterfaces.c)
 *     PfpOpenHandleCreate @ 0x1404A2488 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x1404A25EC (PfpOpenHandleClose.c)
 *     NtCreateEvent @ 0x1404C3A60 (NtCreateEvent.c)
 *     NtClose @ 0x1405A2660 (NtClose.c)
 *     PfSnVolumeCheckIsSdBus @ 0x14075CBC4 (PfSnVolumeCheckIsSdBus.c)
 */

__int64 __fastcall PfSnOpenVolumesForPrefetch(__int64 *a1, _DWORD *a2)
{
  __int64 *v2; // r14
  WCHAR *v3; // r12
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  unsigned int v8; // eax
  PVOID PoolWithTag; // rax
  unsigned int v10; // r12d
  _QWORD *v11; // rsi
  NTSTATUS v12; // edi
  int DeviceInterfaces; // eax
  unsigned int v14; // edi
  const WCHAR *v15; // r14
  __int64 v16; // r12
  int IsVolumeMounted; // eax
  int v18; // ecx
  PVOID **v19; // rax
  PVOID **v20; // rsi
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  int v23; // eax
  PVOID *v24; // rax
  wchar_t *v25; // rsi
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdi
  unsigned int *v29; // rcx
  PVOID *v30; // r9
  __int64 v31; // r8
  __int64 v32; // r10
  __int64 v33; // rax
  wchar_t *v34; // rcx
  __int16 v35; // cx
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int64 *v38; // rcx
  HANDLE v39; // rdx
  _QWORD *v40; // rbx
  __int64 v41; // rax
  __int64 *v43; // rcx
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-B8h]
  PCWSTR SourceString; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE EventHandle; // [rsp+58h] [rbp-A8h] BYREF
  int v48; // [rsp+60h] [rbp-A0h]
  int v49; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID *v50; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v51; // [rsp+70h] [rbp-90h]
  int v52; // [rsp+78h] [rbp-88h] BYREF
  wchar_t *v53; // [rsp+80h] [rbp-80h]
  _OWORD v54[2]; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v55[2]; // [rsp+A8h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  PVOID *v58; // [rsp+150h] [rbp+50h]
  unsigned int v60; // [rsp+160h] [rbp+60h]
  int v61; // [rsp+160h] [rbp+60h]
  int cbDest; // [rsp+168h] [rbp+68h]
  size_t cbDesta; // [rsp+168h] [rbp+68h]

  p_P = &P;
  v2 = a1;
  SourceString = 0LL;
  P = &P;
  v3 = 0LL;
  memset(v55, 0, sizeof(v55));
  *((_QWORD *)&v55[1] + 1) = 0x200000000LL;
  memset(v54, 0, sizeof(v54));
  v4 = *v2;
  LOBYTE(v5) = 1;
  v6 = *v2;
  *((_QWORD *)&v54[1] + 1) = 0x200000000LL;
  EventHandle = 0LL;
  v7 = 0;
  PfSnLogOpenVolumesForPrefetch(v6, v5);
  if ( !v4 || (v8 = *(_DWORD *)(v4 + 112), v8 >= 0x4000) )
  {
    v12 = -1073741811;
    goto LABEL_44;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 112 * v8, 0x76506343u);
  v2[2] = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v12 = -1073741670;
    goto LABEL_44;
  }
  if ( *(_DWORD *)(v4 + 112) )
  {
    v10 = 0;
    do
    {
      v11 = (_QWORD *)(v2[2] + 112LL * v10);
      memset(v11, 0, 0x70uLL);
      v11[1] = v11;
      *v11 = v11;
      memset(v11 + 4, 0, 0x20uLL);
      v11[7] |= 0x200000000uLL;
      memset(v11 + 8, 0, 0x20uLL);
      v11[11] |= 0x200000000uLL;
      ++v10;
    }
    while ( v10 < *(_DWORD *)(v4 + 112) );
    v3 = (WCHAR *)SourceString;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v12 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v12 >= 0 )
  {
    DeviceInterfaces = IopGetDeviceInterfaces(
                         (unsigned int)&GUID_DEVINTERFACE_VOLUME,
                         0,
                         0,
                         0,
                         (__int64)&SourceString,
                         0LL);
    v3 = (WCHAR *)SourceString;
    v12 = DeviceInterfaces;
    if ( DeviceInterfaces >= 0 )
    {
      v14 = 0;
      v60 = 0;
      v15 = SourceString;
      if ( *SourceString )
      {
        while ( 1 )
        {
          v16 = -1LL;
          do
            ++v16;
          while ( v15[v16] );
          v51 = 2LL * (unsigned int)(v16 + 1);
          if ( v14 <= v51 )
            v60 = 2 * v16 + 2;
          IsVolumeMounted = PfSnIsVolumeMounted(v15);
          v18 = cbDest;
          if ( IsVolumeMounted < 0 )
            v18 = 0;
          cbDest = v18;
          if ( v18 && !v48 && (int)PfSnQueryVolumeInfo(a1[1], v15, v55, &v50, &v49) >= 0 )
          {
            v19 = (PVOID **)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x76506343u);
            v20 = v19;
            if ( !v19 )
            {
              v3 = (WCHAR *)SourceString;
LABEL_67:
              v2 = a1;
              v12 = -1073741670;
              goto LABEL_44;
            }
            memset(v19, 0, 0x48uLL);
            memset(v20 + 2, 0, 0x20uLL);
            v21 = v55[0];
            v20[8] = v50;
            v22 = v55[1];
            v23 = v49;
            *((_OWORD *)v20 + 1) = v21;
            *((_DWORD *)v20 + 15) = v23;
            *((_OWORD *)v20 + 2) = v22;
            memset(v55, 0, sizeof(v55));
            v20[6] = (PVOID *)v15;
            *((_DWORD *)v20 + 14) = v16;
            *((_QWORD *)&v55[1] + 1) = 0x200000000LL;
            v24 = p_P;
            if ( *p_P != &P )
              __fastfail(3u);
            v20[1] = p_P;
            *v20 = &P;
            *v24 = v20;
            p_P = (PVOID *)v20;
          }
          v15 = (const WCHAR *)((char *)v15 + v51);
          v14 = v60;
          if ( !*v15 )
          {
            v3 = (WCHAR *)SourceString;
            break;
          }
        }
      }
      cbDesta = v14 + 2;
      v25 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, cbDesta, 0x76506343u);
      if ( !v25 )
        goto LABEL_67;
      v2 = a1;
      v26 = v4 + *(unsigned int *)(v4 + 108);
      v27 = 0LL;
      v51 = v26;
      v61 = 0;
      if ( *(_DWORD *)(v4 + 112) )
      {
        while ( 1 )
        {
          v28 = v2[2] + 112 * v27;
          v29 = (unsigned int *)(v26 + 96 * v27);
          *(_QWORD *)(v28 + 16) = v26 + *v29;
          *(_DWORD *)(v28 + 24) = v29[1];
          *(_DWORD *)(v28 + 104) = 0;
          *(_QWORD *)(v28 + 96) = v26 + v29[7];
          v30 = (PVOID *)P;
          if ( P == &P )
            goto LABEL_58;
          do
          {
            v31 = *((unsigned int *)v30 + 15);
            v50 = (PVOID *)v30[8];
            v58 = v30;
            if ( (unsigned __int8)PfMetadataRecordIsEqual(v29, &v50, v31) )
              break;
            v30 = (PVOID *)*v30;
          }
          while ( v30 != &P );
          if ( v30 == &P )
            goto LABEL_58;
          RtlStringCbPrintfW(v25, cbDesta, L"%s\\", *(_QWORD *)(v32 + 48));
          v52 = 0;
          v33 = 0x7FFFLL;
          v53 = 0LL;
          v34 = v25;
          do
          {
            if ( !*v34 )
              break;
            ++v34;
            --v33;
          }
          while ( v33 );
          if ( v33 )
            v35 = 0x7FFF - v33;
          else
            v35 = 0;
          if ( v33 )
          {
            v53 = v25;
            LOWORD(v52) = 2 * v35;
            HIWORD(v52) = 2 * v35 + 2;
          }
          if ( (int)PfpOpenHandleCreate(
                      (unsigned int)v54,
                      v2[1],
                      (unsigned int)&v52,
                      0,
                      1179785,
                      33,
                      128,
                      (__int64)(v58 + 2)) < 0 )
          {
LABEL_58:
            memset(v54, 0, sizeof(v54));
            *((_QWORD *)&v54[1] + 1) = 0x200000000LL;
            v43 = (__int64 *)v2[4];
            if ( (__int64 *)*v43 != v2 + 3 )
              __fastfail(3u);
            *(_QWORD *)v28 = v2 + 3;
            *(_QWORD *)(v28 + 8) = v43;
            *v43 = v28;
            v2[4] = v28;
          }
          else
          {
            *(_OWORD *)(v28 + 32) = *((_OWORD *)v58 + 1);
            *(_OWORD *)(v28 + 48) = *((_OWORD *)v58 + 2);
            memset(v58 + 2, 0, 0x20uLL);
            v36 = v54[0];
            v37 = v54[1];
            v58[5] = (PVOID)((unsigned __int64)v58[5] | 0x200000000LL);
            *(_OWORD *)(v28 + 64) = v36;
            *(_OWORD *)(v28 + 80) = v37;
            memset(v54, 0, sizeof(v54));
            *((_QWORD *)&v54[1] + 1) = 0x200000000LL;
            v38 = (__int64 *)v2[6];
            if ( (__int64 *)*v38 != v2 + 5 )
              __fastfail(3u);
            v39 = EventHandle;
            *(_QWORD *)(v28 + 8) = v38;
            *(_QWORD *)v28 = v2 + 5;
            *v38 = v28;
            v2[6] = v28;
            *(_DWORD *)(v28 + 108) ^= (*(_DWORD *)(v28 + 108) ^ PfSnVolumeCheckSeekPenalty(v28 + 32, v39)) & 1;
            if ( (*(_DWORD *)(v28 + 108) & 1) != 0 )
            {
              v7 |= 1u;
            }
            else if ( (v7 & 3) == 0 && !(unsigned int)PfSnVolumeCheckIsSdBus(v28 + 32, EventHandle) )
            {
              v7 |= 2u;
            }
          }
          v27 = (unsigned int)(v61 + 1);
          v61 = v27;
          if ( (unsigned int)v27 >= *(_DWORD *)(v4 + 112) )
            break;
          v26 = v51;
        }
      }
      v12 = 0;
      *a2 = v7;
      ExFreePoolWithTag(v25, 0);
    }
  }
LABEL_44:
  if ( (*((_QWORD *)&v55[1] + 1) & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v55, v2[1]);
  while ( 1 )
  {
    v40 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P || (v41 = *(_QWORD *)P, *(PVOID *)(*(_QWORD *)P + 8LL) != P) )
      __fastfail(3u);
    P = *(PVOID *)P;
    *(_QWORD *)(v41 + 8) = &P;
    if ( (v40[5] & 0x400000000LL) != 0 )
      PfpOpenHandleClose(v40 + 2, v2[1]);
    ExFreePoolWithTag(v40, 0);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( EventHandle )
    NtClose(EventHandle);
  PfSnLogOpenVolumesForPrefetch(v4, 0LL);
  return (unsigned int)v12;
}
