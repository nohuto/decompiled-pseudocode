/*
 * XREFs of IopCreateLegacyDeviceIds @ 0x140739AEC
 * Callers:
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14006DED4 (RtlStringCchPrintfExW.c)
 *     RtlStringCchPrintfW @ 0x14009F42C (RtlStringCchPrintfW.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _CmSetDeviceRegProp @ 0x1405CF5C8 (_CmSetDeviceRegProp.c)
 */

__int64 __fastcall IopCreateLegacyDeviceIds(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  wchar_t *v4; // rdi
  __int64 v5; // rsi
  int v6; // ecx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned int v11; // r14d
  wchar_t *PoolWithTag; // rax
  int v13; // ebx
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+90h] [rbp+8h] BYREF
  size_t pcchRemaining; // [rsp+A8h] [rbp+20h] BYREF

  ppszDestEnd = 0LL;
  v4 = 0LL;
  pcchRemaining = 0LL;
  if ( a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  if ( v5 && *(_QWORD *)(v5 + 48) )
  {
    if ( a3 )
    {
      v6 = *(_DWORD *)(a3 + 4);
      if ( (unsigned int)(v6 + 1) > 0x13 )
        v6 = 18;
    }
    else
    {
      v6 = 0;
    }
    v7 = v6 + 1;
    v8 = -1LL;
    v9 = v7;
    v10 = *((_QWORD *)&off_1402F3A10 + v7);
    do
      ++v8;
    while ( *(_WORD *)(v10 + 2 * v8) );
    v11 = 2 * (*a2 + (_DWORD)v8) + 42;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v11, 0x6F697050u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, v11);
    v13 = RtlStringCchPrintfExW(
            v4,
            (unsigned __int64)v11 >> 1,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"%ws%ws\\%wZ",
            L"DETECTED",
            *((_QWORD *)&off_1402F3A10 + v9),
            a2);
    if ( v13 >= 0 )
    {
      v13 = RtlStringCchPrintfW(ppszDestEnd + 1, pcchRemaining - 1, L"%ws\\%wZ", L"DETECTED", a2);
      if ( v13 >= 0 )
        v13 = CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v5 + 48), 0LL, 3u, 7u, (__int64)v4, v11, 0);
    }
  }
  else
  {
    v13 = -1073741811;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v13;
}
