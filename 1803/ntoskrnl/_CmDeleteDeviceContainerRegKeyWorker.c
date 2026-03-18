/*
 * XREFs of _CmDeleteDeviceContainerRegKeyWorker @ 0x1407E9948
 * Callers:
 *     _CmDeleteDeviceContainerRegKey @ 0x1407E9808 (_CmDeleteDeviceContainerRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlPrefixUnicodeString @ 0x1405059D0 (RtlPrefixUnicodeString.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140506374 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x140586E4C (_CmGetDeviceContainerRegKeyPath.c)
 *     _RegRtlDeleteTreeInternal @ 0x140604CCC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140653FF0 (_RegRtlDeleteKeyTransacted.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1407F0408 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmDeleteDeviceContainerRegKeyWorker(__int64 a1, __int64 a2, unsigned int a3, int a4, char a5)
{
  wchar_t *pszDest; // rdi
  int v9; // r12d
  SIZE_T v10; // r15
  signed int DeviceContainerRegKeyPath; // ebx
  unsigned __int64 v12; // rcx
  __int64 v13; // r9
  unsigned __int16 Length; // bx
  const WCHAR *v15; // r14
  char *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  signed int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r8
  int v24; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  char *v27; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+48h] BYREF

  LODWORD(v29) = a4;
  pszDest = 0LL;
  v27 = 0LL;
  Handle = 0LL;
  v9 = 4;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
    goto LABEL_39;
  v10 = 260LL;
  while ( 1 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = (unsigned int)v10 >> 1;
    DeviceContainerRegKeyPath = CmGetDeviceContainerRegKeyPath(
                                  (unsigned int)v10 >> 1,
                                  a2,
                                  a3,
                                  v13,
                                  v24,
                                  pszDest,
                                  cchDest,
                                  (unsigned int *)&v29);
    if ( DeviceContainerRegKeyPath == -1073741789 )
    {
      ExFreePoolWithTag(pszDest, 0);
      v12 = 2LL * (unsigned int)v29;
      pszDest = 0LL;
      v10 = 0xFFFFFFFFLL;
      if ( v12 <= 0xFFFFFFFF )
        v10 = (unsigned int)v12;
      DeviceContainerRegKeyPath = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v12 <= 0xFFFFFFFF )
        continue;
    }
    goto LABEL_10;
  }
  DeviceContainerRegKeyPath = -1073741801;
LABEL_10:
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_40;
  if ( (a3 & 0x100) != 0 )
  {
    v15 = pszDest;
    if ( a1 )
      v17 = *(_QWORD *)(a1 + 224);
    else
      v17 = 0LL;
    DeviceContainerRegKeyPath = SysCtxRegOpenCurrentUserKey(v17, 0LL, 0x2000000LL, &Handle);
    if ( DeviceContainerRegKeyPath < 0 )
      goto LABEL_40;
    v16 = (char *)Handle;
    goto LABEL_25;
  }
  DeviceContainerRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_40;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= (unsigned int)v10
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
          &DestinationString,
          1u) )
  {
LABEL_39:
    DeviceContainerRegKeyPath = -1073741811;
    goto LABEL_40;
  }
  v15 = pszDest + 25;
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = pszDest + 25;
  DestinationString.Length = Length - 50;
  if ( RtlPrefixUnicodeString(
         &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::DeviceContainersKeyPrefix,
         &DestinationString,
         1u) )
  {
    v9 = 10;
    v15 = pszDest + 50;
  }
  DeviceContainerRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v9, (__int64)&v27);
  if ( DeviceContainerRegKeyPath >= 0 )
  {
    v16 = v27;
LABEL_25:
    if ( a5 )
    {
      if ( a1 && (v18 = *(_QWORD *)(a1 + 224)) != 0 )
        v19 = *(_QWORD *)(v18 + 8);
      else
        v19 = 0LL;
      v20 = RegRtlDeleteTreeInternal(v16, v15, v19, 0);
    }
    else
    {
      if ( a1 && (v21 = *(_QWORD *)(a1 + 224)) != 0 )
        v22 = *(_QWORD *)(v21 + 8);
      else
        v22 = 0LL;
      v20 = RegRtlDeleteKeyTransacted(v16, v15, v22);
    }
    if ( (int)(v20 + 0x80000000) >= 0 && v20 != -1073741444 )
      DeviceContainerRegKeyPath = v20;
  }
LABEL_40:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)DeviceContainerRegKeyPath;
}
