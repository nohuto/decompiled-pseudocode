/*
 * XREFs of VrpPreOpenOrCreate @ 0x14067CD10
 * Callers:
 *     RegistryCallback @ 0x140678E30 (RegistryCallback.c)
 * Callees:
 *     EtwActivityIdControl @ 0x140024570 (EtwActivityIdControl.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     VrpTranslatePath @ 0x14067D470 (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x14067E57C (VrpBuildKeyPath.c)
 */

__int64 __fastcall VrpPreOpenOrCreate(__int64 a1, __int64 a2)
{
  UNICODE_STRING **v2; // rdi
  UNICODE_STRING *PoolWithTag; // rsi
  PCUNICODE_STRING v5; // r15
  UNICODE_STRING *v7; // rbx
  UNICODE_STRING *v8; // rax
  int v9; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r15d
  wchar_t *Buffer; // rcx
  PCUNICODE_STRING v13; // rax
  unsigned __int16 *p_Length; // rdx
  bool v15; // zf
  int v16; // ecx
  UNICODE_STRING *v18; // rax
  UNICODE_STRING v19; // xmm1
  UNICODE_STRING v20; // xmm0
  UNICODE_STRING *v21; // rax
  UNICODE_STRING v22; // xmm1
  PCUNICODE_STRING v23; // rax
  unsigned __int16 *v24; // rdx
  int v25; // ecx
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P[2]; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING *v32; // [rsp+78h] [rbp-88h]
  UNICODE_STRING v33; // [rsp+80h] [rbp-80h] BYREF
  GUID ActivityId; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR v35; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  __int64 v38; // [rsp+D0h] [rbp-30h]
  _DWORD v39[2]; // [rsp+D8h] [rbp-28h] BYREF
  int *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  _DWORD *v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  __int64 v45; // [rsp+130h] [rbp+30h]
  _DWORD v46[2]; // [rsp+138h] [rbp+38h] BYREF
  int *v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]

  v2 = *(UNICODE_STRING ***)a1;
  PoolWithTag = 0LL;
  P[0] = 0LL;
  P[1] = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v5 = *v2;
  v7 = v2[11];
  DestinationString.Buffer = 0LL;
  v33 = (UNICODE_STRING)0LL;
  v26 = 0;
  Object = 0LL;
  v8 = v2[1];
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v32 = v8;
  EtwActivityIdControl(3u, &ActivityId);
  if ( v5->Length && *v5->Buffer == 92 )
  {
    v9 = VrpBuildKeyPath(0LL, *v2, (PUNICODE_STRING)P);
    if ( v9 < 0 )
    {
LABEL_33:
      if ( v9 >= 0 )
        return (unsigned int)v9;
      goto LABEL_34;
    }
  }
  else
  {
    if ( !v7 )
      return 0;
    v9 = VrpBuildKeyPath((PCUNICODE_STRING)((unsigned __int64)&v7[1] & -(__int64)(v7 != 0LL)), *v2, (PUNICODE_STRING)P);
    if ( v9 < 0 )
      goto LABEL_34;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a2 + 16, 0LL);
  v9 = VrpTranslatePath(P, &DestinationString, &v33, &Object, v32, a2, &v26);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 16));
  KeAbPostRelease(a2 + 16);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v11 = v26;
  if ( (v26 & 4) != 0 )
  {
    Buffer = (*v2)->Buffer;
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0x67655256u);
    **v2 = DestinationString;
    RtlInitUnicodeString(&DestinationString, 0LL);
    *(_DWORD *)(a1 + 8) = 872;
    v9 = -1073740541;
    goto LABEL_35;
  }
  if ( v9 == -1073741772 )
    return 0;
  if ( v9 >= 0 )
  {
    PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x67655256u);
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
      goto LABEL_19;
    }
    v18 = v2[1];
    v19 = *(UNICODE_STRING *)P;
    v2[10] = PoolWithTag;
    *(_QWORD *)&PoolWithTag->Length = v18;
    PoolWithTag[1] = **v2;
    v20 = *v2[14];
    v21 = (UNICODE_STRING *)Object;
    PoolWithTag[3] = v19;
    *(_DWORD *)&PoolWithTag[4].Length = v11;
    v22 = v33;
    PoolWithTag->Buffer = (wchar_t *)a2;
    PoolWithTag[2] = v20;
    v2[1] = v21;
    **v2 = DestinationString;
    *v2[14] = v22;
    goto LABEL_33;
  }
LABEL_34:
  if ( v9 != -1073740541 )
  {
LABEL_19:
    if ( stru_14033C400.LevelPlus1 > 2 )
    {
      v13 = *v2;
      p_Length = (unsigned __int16 *)&EmptyUnicodeString;
      v15 = (*v2)->Buffer == 0LL;
      v28 = v9;
      if ( !v15 )
        p_Length = &v13->Length;
      v16 = *p_Length;
      v45 = *((_QWORD *)p_Length + 1);
      v47 = &v28;
      v43 = v46;
      v44 = 2LL;
      v46[0] = v16;
      v46[1] = 0;
      v48 = 4LL;
      TlgWrite(&stru_14033C400, &unk_1402AB9A4, &ActivityId, 0LL, 5u, &pData);
    }
    goto LABEL_23;
  }
LABEL_35:
  if ( stru_14033C400.LevelPlus1 > 5 )
  {
    v23 = *v2;
    v24 = (unsigned __int16 *)&EmptyUnicodeString;
    v15 = (*v2)->Buffer == 0LL;
    v27 = -1073740541;
    if ( !v15 )
      v24 = &v23->Length;
    v25 = *v24;
    v38 = *((_QWORD *)v24 + 1);
    v40 = &v27;
    v36 = v39;
    v37 = 2LL;
    v39[0] = v25;
    v39[1] = 0;
    v41 = 4LL;
    TlgWrite(&stru_14033C400, &unk_1402AB8C2, &ActivityId, 0LL, 5u, &v35);
  }
LABEL_23:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x67655256u);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0x67655256u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x67655256u);
  return (unsigned int)v9;
}
