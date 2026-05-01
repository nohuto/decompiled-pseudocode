/*
 * XREFs of ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x180022E50
 * Callers:
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180020370 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?HampActNotifyResourcesAcquired@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180023100 (-HampActNotifyResourcesAcquired@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HAM_ACTIVITY_RM_CONTEXT::OnAcquired(HAM_ACTIVITY_RM_CONTEXT *this, void *a2)
{
  __int64 v4; // rax
  DWORD v5; // esi
  __int64 v6; // r14
  _QWORD *Value; // rbx
  char v8; // si
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v12; // rax
  char v13; // cl
  char v15; // [rsp+30h] [rbp-99h] BYREF
  char v16; // [rsp+31h] [rbp-98h] BYREF
  void *v17; // [rsp+38h] [rbp-91h] BYREF
  void *v18; // [rsp+40h] [rbp-89h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-81h] BYREF
  EVENT_DESCRIPTOR v20; // [rsp+58h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-61h] BYREF
  void *v22; // [rsp+78h] [rbp-51h]
  int v23; // [rsp+80h] [rbp-49h]
  int v24; // [rsp+84h] [rbp-45h]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+90h] [rbp-39h] BYREF
  void *v26; // [rsp+A0h] [rbp-29h]
  int v27; // [rsp+A8h] [rbp-21h]
  int v28; // [rsp+ACh] [rbp-1Dh]
  char *v29; // [rsp+B0h] [rbp-19h]
  __int64 v30; // [rsp+B8h] [rbp-11h]
  char *v31; // [rsp+C0h] [rbp-9h]
  __int64 v32; // [rsp+C8h] [rbp-1h]
  void **v33; // [rsp+D0h] [rbp+7h]
  __int64 v34; // [rsp+D8h] [rbp+Fh]
  void **v35; // [rsp+E0h] [rbp+17h]
  __int64 v36; // [rsp+E8h] [rbp+1Fh]

  if ( _volatile_metadata > 4u )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800920F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800832B6 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800920F8;
    v22 = &unk_1800832C1;
    UserData.Reserved = 2;
    v23 = 30;
    v24 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v4 = *((_QWORD *)this + 1);
  v5 = HampLockTrackerId;
  v17 = a2;
  v6 = *(_QWORD *)(v4 + 80);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v6);
  *(_DWORD *)(v6 + 8) = GetCurrentThreadId();
  v18 = (void *)*((_QWORD *)this + 2);
  if ( v17 == v18 )
    v8 = HampActNotifyResourcesAcquired(*((_QWORD *)this + 1));
  else
    v8 = 1;
  v9 = *(_QWORD *)(*((_QWORD *)this + 1) + 80LL);
  if ( HampLockTrackerId != -1 )
  {
    v10 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v10 & 2) == 0 )
      __int2c();
    if ( v10[2]-- == 1LL )
      *v10 &= ~2uLL;
  }
  *(_DWORD *)(v9 + 8) = 0;
  RtlReleaseSRWLockExclusive(v9);
  if ( _volatile_metadata > 4u && (byte_180092100 & 8) != 0 && (qword_180092108 & 8) == qword_180092108 )
  {
    v15 = v8;
    v29 = &v15;
    v12 = *((_QWORD *)this + 1);
    v30 = 1LL;
    v13 = *(_BYTE *)(v12 + 540);
    v31 = &v16;
    v33 = &v17;
    v35 = &v18;
    v16 = v13;
    v32 = 1LL;
    v34 = 8LL;
    v36 = 8LL;
    *(_DWORD *)&v20.Level = 516;
    v25.Ptr = (ULONGLONG)off_1800920F8;
    *(_DWORD *)&v20.Id = ((unsigned int)&unk_1800831D3 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v20.Keyword = 8LL;
    v25.Size = *(unsigned __int16 *)off_1800920F8;
    v26 = &unk_1800831DE;
    v25.Reserved = 2;
    v27 = 84;
    v28 = 1;
    EventWriteTransfer(RegHandle, &v20, 0LL, 0LL, 6u, &v25);
  }
  return 0LL;
}
