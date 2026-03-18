/*
 * XREFs of _CmDeleteDevicePanelRegKeyWorker @ 0x1407EC744
 * Callers:
 *     _CmDeleteDevicePanelRegKey @ 0x1407EC604 (_CmDeleteDevicePanelRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     wcsrchr @ 0x14018A7C0 (wcsrchr.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlPrefixUnicodeString @ 0x1405059D0 (RtlPrefixUnicodeString.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140506374 (_PnpCtxGetCachedContextBaseKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x140604CCC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140653FF0 (_RegRtlDeleteKeyTransacted.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x1407ECE68 (_CmGetDevicePanelRegKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1407F0408 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmDeleteDevicePanelRegKeyWorker(__int64 a1, int a2, int a3, int a4, char a5)
{
  wchar_t *pszDest; // r14
  int v9; // r12d
  SIZE_T v10; // r15
  signed int DevicePanelRegKeyPath; // ebx
  unsigned __int64 v12; // rcx
  int v13; // r9d
  unsigned __int16 Length; // bx
  const WCHAR *v15; // rsi
  char *v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r8
  wchar_t *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r8
  wchar_t *v26; // rax
  __int64 v27; // rax
  __int64 v28; // r8
  int v30; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  char *v33; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v35; // [rsp+A8h] [rbp+48h] BYREF

  LODWORD(v35) = a4;
  pszDest = 0LL;
  v33 = 0LL;
  Handle = 0LL;
  v9 = 4;
  if ( !a3 || (a3 & 0xFFFFFE9F) != 0 )
    goto LABEL_54;
  v10 = 317LL;
  while ( 1 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = (unsigned int)v10 >> 1;
    DevicePanelRegKeyPath = CmGetDevicePanelRegKeyPath(
                              (unsigned int)v10 >> 1,
                              a2,
                              a3,
                              v13,
                              v30,
                              pszDest,
                              cchDest,
                              (__int64)&v35);
    if ( DevicePanelRegKeyPath == -1073741789 )
    {
      ExFreePoolWithTag(pszDest, 0);
      v12 = 2LL * (unsigned int)v35;
      pszDest = 0LL;
      v10 = 0xFFFFFFFFLL;
      if ( v12 <= 0xFFFFFFFF )
        v10 = (unsigned int)v12;
      DevicePanelRegKeyPath = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v12 <= 0xFFFFFFFF )
        continue;
    }
    goto LABEL_10;
  }
  DevicePanelRegKeyPath = -1073741801;
LABEL_10:
  if ( DevicePanelRegKeyPath < 0 )
    goto LABEL_55;
  if ( (a3 & 0x100) != 0 )
  {
    v15 = pszDest;
    v17 = 0LL;
    if ( a1 )
      v17 = *(_QWORD *)(a1 + 224);
    DevicePanelRegKeyPath = SysCtxRegOpenCurrentUserKey(v17, 0LL, 0x2000000LL, &Handle);
    if ( DevicePanelRegKeyPath < 0 )
      goto LABEL_55;
    v16 = (char *)Handle;
    goto LABEL_24;
  }
  DevicePanelRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
  if ( DevicePanelRegKeyPath < 0 )
    goto LABEL_55;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= (unsigned int)v10
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
          &DestinationString,
          1u) )
  {
LABEL_54:
    DevicePanelRegKeyPath = -1073741811;
    goto LABEL_55;
  }
  v15 = pszDest + 25;
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = pszDest + 25;
  DestinationString.Length = Length - 50;
  if ( RtlPrefixUnicodeString(&`_CmDeleteDevicePanelRegKeyWorker'::`2'::DevicePanelsKeyPrefix, &DestinationString, 1u) )
  {
    v9 = 11;
    v15 = pszDest + 46;
  }
  DevicePanelRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v9, (__int64)&v33);
  if ( DevicePanelRegKeyPath < 0 )
    goto LABEL_55;
  v16 = v33;
LABEL_24:
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
  if ( v20 == -1073741444 )
    goto LABEL_55;
  if ( v20 < 0 )
    goto LABEL_37;
  v23 = wcsrchr(v15, 0x5Cu);
  if ( !v23 )
    goto LABEL_39;
  *v23 = 0;
  if ( a1 && (v24 = *(_QWORD *)(a1 + 224)) != 0 )
    v25 = *(_QWORD *)(v24 + 8);
  else
    v25 = 0LL;
  v20 = RegRtlDeleteKeyTransacted(v16, v15, v25);
  if ( v20 != -1073741535 )
  {
    if ( v20 < 0 )
      goto LABEL_37;
    v26 = wcsrchr(v15, 0x5Cu);
    if ( !v26 )
    {
LABEL_39:
      DevicePanelRegKeyPath = -1073741595;
      goto LABEL_55;
    }
    *v26 = 0;
    if ( a1 && (v27 = *(_QWORD *)(a1 + 224)) != 0 )
      v28 = *(_QWORD *)(v27 + 8);
    else
      v28 = 0LL;
    v20 = RegRtlDeleteKeyTransacted(v16, v15, v28);
    if ( (int)(v20 + 0x80000000) >= 0 && v20 != -1073741535 )
LABEL_37:
      DevicePanelRegKeyPath = v20;
  }
LABEL_55:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)DevicePanelRegKeyPath;
}
