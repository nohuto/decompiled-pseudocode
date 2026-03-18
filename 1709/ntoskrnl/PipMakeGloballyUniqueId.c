/*
 * XREFs of PipMakeGloballyUniqueId @ 0x14058CC98
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406D56F0 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140019294 (RtlStringCbPrintfW.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfExW @ 0x1400DEF40 (RtlStringCchPrintfExW.c)
 *     RtlStringCchPrintfW @ 0x1400DF084 (RtlStringCchPrintfW.c)
 *     RtlStringCchCopyW @ 0x1400DF0FC (RtlStringCchCopyW.c)
 *     RtlStringCbCopyW @ 0x1400DF4A4 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x140520CAC (_CmOpenDeviceRegKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14052210C (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x14054A990 (RtlUpcaseUnicodeString.c)
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
  int v24; // eax
  int v25; // ebx
  unsigned int v26; // eax
  ULONG Length[2]; // [rsp+20h] [rbp-79h]
  PULONG ResultLength; // [rsp+28h] [rbp-71h]
  __int64 v29; // [rsp+30h] [rbp-69h]
  __int64 v30; // [rsp+38h] [rbp-61h]
  ULONG v31; // [rsp+50h] [rbp-49h] BYREF
  wchar_t **v32; // [rsp+58h] [rbp-41h]
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-39h] BYREF
  int Data; // [rsp+70h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-21h] BYREF
  int v36; // [rsp+80h] [rbp-19h]
  HANDLE v37; // [rsp+88h] [rbp-11h] BYREF
  size_t cbDest; // [rsp+90h] [rbp-9h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+98h] [rbp-1h] BYREF
  __int64 v40; // [rsp+A0h] [rbp+7h]
  _BYTE KeyValueInformation[4]; // [rsp+A8h] [rbp+Fh] BYREF
  int v42; // [rsp+ACh] [rbp+13h]
  int v43; // [rsp+B0h] [rbp+17h]
  unsigned int v44; // [rsp+B4h] [rbp+1Bh]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = -1LL;
  v32 = a3;
  v6 = a3;
  v40 = a2;
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
                             &v31);
    if ( CachedContextBaseKey >= 0 )
    {
      if ( v42 != 4 || v43 != 4 )
      {
        CachedContextBaseKey = -1073741811;
        goto LABEL_18;
      }
      v18 = v44;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x12uLL, 0x6E657050u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_46;
      RtlStringCbPrintfW(PoolWithTag, 0x12uLL, L"%x", v18);
    }
    else
    {
      *(_DWORD *)&ValueName.Length = 1966108;
      v31 = 66;
      ValueName.Buffer = (wchar_t *)L"ParentIdPrefix";
      v10 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x42uLL, 0x6E657050u);
      if ( !v10 )
        goto LABEL_46;
      CachedContextBaseKey = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v10, v31, &v31);
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
        v6 = v32;
LABEL_18:
        ZwClose(KeyHandle);
        goto LABEL_19;
      }
      v31 = 31;
      CachedContextBaseKey = RtlUpcaseUnicodeString(&ValueName, (PCUNICODE_STRING)(v4 + 40), 1u);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
      Buffer = ValueName.Buffer;
      v21 = 0;
      v22 = 0LL;
      v23 = (unsigned __int64)ValueName.Length >> 1;
      if ( ValueName.Buffer > &ValueName.Buffer[v23] )
        v23 = 0LL;
      if ( v23 )
      {
        do
        {
          v24 = *Buffer;
          ++v22;
          ++Buffer;
          v21 = v24 + 37 * v21;
        }
        while ( v22 < v23 );
      }
      v25 = (int)abs32(314159269 * v21) % 1000000007;
      v36 = v25;
      RtlFreeUnicodeString(&ValueName);
      cbDest = 2 * v31;
      v9 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, cbDest, 0x6E657050u);
      if ( !v9 )
        goto LABEL_46;
      LODWORD(ResultLength) = *(_DWORD *)(v4 + 136);
      Length[0] = v25;
      RtlStringCbPrintfW(v9, cbDest, L"%s.%x.%x", L"NextParentID", *(_QWORD *)Length, ResultLength);
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 5, &v37);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
      RtlInitUnicodeString(&ValueName, v9);
      if ( ZwQueryValueKey(v37, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &v31) < 0
        || v42 != 4
        || (v26 = v44, v43 != 4) )
      {
        v26 = 0;
      }
      Data = v26 + 1;
      CachedContextBaseKey = ZwSetValueKey(v37, &ValueName, 0, 4u, &Data, 4u);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
      ValueName.Buffer = (wchar_t *)L"ParentIdPrefix";
      --Data;
      LODWORD(v30) = v36;
      *(_DWORD *)&ValueName.Length = 1966108;
      LODWORD(v29) = *(_DWORD *)(v4 + 136);
      ppszDestEnd = v9;
      RtlStringCchPrintfExW(v9, cbDest >> 1, &ppszDestEnd, 0LL, 0, L"%x&%x&%x", v29, v30, Data);
      v31 = ppszDestEnd - v9 + 1;
      CachedContextBaseKey = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, v9, 2 * v31);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
    }
LABEL_10:
    v14 = v40;
    if ( v40 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)(v40 + 2 * v15) );
    }
    else
    {
      LODWORD(v15) = 0;
    }
    do
      ++v5;
    while ( v9[v5] );
    v31 = v5 + v15 + 2;
    v16 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v31, 0x6E657050u);
    v8 = v16;
    if ( v16 )
    {
      if ( v14 )
        RtlStringCchPrintfW(v16, v31, L"%s&%s", v9, v14);
      else
        RtlStringCchCopyW(v16, v31, v9);
      goto LABEL_17;
    }
    goto LABEL_46;
  }
LABEL_19:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  *v6 = v8;
  return (unsigned int)CachedContextBaseKey;
}
