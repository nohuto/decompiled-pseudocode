/*
 * XREFs of PipMakeGloballyUniqueId @ 0x1405C146C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406AA480 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14003DA94 (RtlStringCchPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x14004C0E0 (RtlStringCchPrintfExW.c)
 *     RtlStringCbCopyW @ 0x14004C84C (RtlStringCbCopyW.c)
 *     RtlStringCchCopyW @ 0x1400815D0 (RtlStringCchCopyW.c)
 *     RtlStringCbPrintfW @ 0x140088044 (RtlStringCbPrintfW.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x14048307C (_CmOpenDeviceRegKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404841B8 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlUpcaseUnicodeString @ 0x1404971A0 (RtlUpcaseUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall PipMakeGloballyUniqueId(__int64 a1, __int64 a2, wchar_t **a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r13
  __int64 v5; // r14
  wchar_t **v6; // r12
  wchar_t *v8; // r15
  wchar_t *v9; // rdi
  wchar_t *v10; // rsi
  int CachedContextBaseKey; // ebx
  unsigned int v12; // r13d
  wchar_t *v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  wchar_t *v16; // rax
  unsigned int v18; // r13d
  wchar_t *PoolWithTag; // rax
  wchar_t *Buffer; // rdx
  int v21; // r8d
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rcx
  wchar_t *v24; // rax
  unsigned __int64 v25; // rcx
  int v26; // eax
  int v27; // ebx
  unsigned int v28; // eax
  ULONG Length[2]; // [rsp+20h] [rbp-89h]
  PULONG ResultLength; // [rsp+28h] [rbp-81h]
  __int64 v31; // [rsp+30h] [rbp-79h]
  __int64 v32; // [rsp+38h] [rbp-71h]
  ULONG v33; // [rsp+50h] [rbp-59h] BYREF
  wchar_t **v34; // [rsp+58h] [rbp-51h]
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-49h] BYREF
  int Data; // [rsp+70h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-31h] BYREF
  int v38; // [rsp+80h] [rbp-29h]
  HANDLE v39; // [rsp+88h] [rbp-21h] BYREF
  size_t cbDest; // [rsp+90h] [rbp-19h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+98h] [rbp-11h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-9h]
  _BYTE KeyValueInformation[4]; // [rsp+A8h] [rbp-1h] BYREF
  int v44; // [rsp+ACh] [rbp+3h]
  int v45; // [rsp+B0h] [rbp+7h]
  unsigned int v46; // [rsp+B4h] [rbp+Bh]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = -1LL;
  v34 = a3;
  v6 = a3;
  v42 = a2;
  v8 = 0LL;
  --CurrentThread->KernelApcDisable;
  v9 = 0LL;
  v10 = 0LL;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  if ( a1 )
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  CachedContextBaseKey = CmOpenDeviceRegKey(
                           *(__int64 *)&PiPnpRtlCtx,
                           *(_QWORD *)(v4 + 48),
                           0x10u,
                           0,
                           131103,
                           0,
                           (__int64)&KeyHandle,
                           0LL);
  if ( CachedContextBaseKey >= 0 )
  {
    ValueName.Buffer = L"UniqueParentID";
    *(_DWORD *)&ValueName.Length = 1966108;
    CachedContextBaseKey = ZwQueryValueKey(
                             KeyHandle,
                             &ValueName,
                             KeyValuePartialInformation,
                             KeyValueInformation,
                             0x10u,
                             &v33);
    if ( CachedContextBaseKey >= 0 )
    {
      if ( v44 != 4 || v45 != 4 )
      {
        CachedContextBaseKey = -1073741811;
        goto LABEL_18;
      }
      v18 = v46;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x12uLL, 0x6E657050u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_46;
      RtlStringCbPrintfW(PoolWithTag, 0x12uLL, L"%x", v18);
    }
    else
    {
      *(_DWORD *)&ValueName.Length = 1966108;
      v33 = 66;
      ValueName.Buffer = L"ParentIdPrefix";
      v10 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x42uLL, 0x6E657050u);
      if ( !v10 )
        goto LABEL_46;
      CachedContextBaseKey = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v10, v33, &v33);
      if ( CachedContextBaseKey >= 0 )
      {
        if ( *((_DWORD *)v10 + 1) == 1 )
        {
          v12 = *((_DWORD *)v10 + 2);
          v13 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v12, 0x6E657050u);
          v9 = v13;
          if ( v13 )
          {
            RtlStringCbCopyW(v13, v12, v10 + 6);
            goto LABEL_10;
          }
LABEL_46:
          CachedContextBaseKey = -1073741670;
          goto LABEL_17;
        }
        CachedContextBaseKey = -1073741811;
LABEL_17:
        v6 = v34;
LABEL_18:
        ZwClose(KeyHandle);
        goto LABEL_19;
      }
      v33 = 31;
      CachedContextBaseKey = RtlUpcaseUnicodeString(&ValueName, (PCUNICODE_STRING)(v4 + 40), 1u);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
      Buffer = ValueName.Buffer;
      v21 = 0;
      v22 = 0LL;
      v23 = (unsigned __int64)ValueName.Length >> 1;
      v24 = &ValueName.Buffer[v23];
      v25 = (2 * v23 + 1) >> 1;
      if ( ValueName.Buffer > v24 )
        v25 = 0LL;
      if ( v25 )
      {
        do
        {
          v26 = *Buffer;
          ++v22;
          ++Buffer;
          v21 = v26 + 37 * v21;
        }
        while ( v22 < v25 );
      }
      v27 = (int)abs32(314159269 * v21) % 1000000007;
      v38 = v27;
      RtlFreeUnicodeString(&ValueName);
      cbDest = 2 * v33;
      v9 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, cbDest, 0x6E657050u);
      if ( !v9 )
        goto LABEL_46;
      LODWORD(ResultLength) = *(_DWORD *)(v4 + 136);
      Length[0] = v27;
      RtlStringCbPrintfW(v9, cbDest, L"%s.%x.%x", L"NextParentID", *(_QWORD *)Length, ResultLength);
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 5, &v39);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
      RtlInitUnicodeString(&ValueName, v9);
      if ( ZwQueryValueKey(v39, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &v33) < 0
        || v44 != 4
        || (v28 = v46, v45 != 4) )
      {
        v28 = 0;
      }
      Data = v28 + 1;
      CachedContextBaseKey = ZwSetValueKey(v39, &ValueName, 0, 4u, &Data, 4u);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
      ValueName.Buffer = L"ParentIdPrefix";
      --Data;
      LODWORD(v32) = v38;
      *(_DWORD *)&ValueName.Length = 1966108;
      LODWORD(v31) = *(_DWORD *)(v4 + 136);
      ppszDestEnd = v9;
      RtlStringCchPrintfExW(v9, cbDest >> 1, &ppszDestEnd, 0LL, 0, L"%x&%x&%x", v31, v32, Data);
      v33 = ppszDestEnd - v9 + 1;
      CachedContextBaseKey = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, v9, 2 * v33);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
    }
LABEL_10:
    v14 = v42;
    if ( v42 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)(v42 + 2 * v15) );
    }
    else
    {
      LODWORD(v15) = 0;
    }
    do
      ++v5;
    while ( v9[v5] );
    v33 = v5 + v15 + 2;
    v16 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v33, 0x6E657050u);
    v8 = v16;
    if ( v16 )
    {
      if ( v14 )
        RtlStringCchPrintfW(v16, v33, L"%s&%s", v9, v14);
      else
        RtlStringCchCopyW(v16, v33, v9);
      goto LABEL_17;
    }
    goto LABEL_46;
  }
LABEL_19:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  *v6 = v8;
  return (unsigned int)CachedContextBaseKey;
}
