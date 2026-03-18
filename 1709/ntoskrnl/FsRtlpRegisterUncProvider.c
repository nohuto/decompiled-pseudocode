/*
 * XREFs of FsRtlpRegisterUncProvider @ 0x1405E5684
 * Callers:
 *     FsRtlRegisterUncProviderEx2 @ 0x1405E5660 (FsRtlRegisterUncProviderEx2.c)
 *     FsRtlRegisterUncProvider @ 0x1406B0960 (FsRtlRegisterUncProvider.c)
 *     FsRtlRegisterUncProviderEx @ 0x1406B09A0 (FsRtlRegisterUncProviderEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1400DBA40 (KeReleaseSemaphore.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1405E577C (FsRtlpRegisterProviderWithMUP.c)
 *     FsRtlpOpenDev @ 0x1405E5860 (FsRtlpOpenDev.c)
 */

__int64 __fastcall FsRtlpRegisterUncProvider(__int64 a1, __int64 a2, __int64 a3, HANDLE *a4)
{
  int v5; // esi
  __int64 result; // rax
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  Handle = (HANDLE)-1LL;
  if ( a1 && *(_QWORD *)(a1 + 8) && *(_WORD *)a1 && *(_WORD *)(a1 + 2) && (*(_WORD *)(a3 + 2) < 0x101u || a2) )
  {
    KeWaitForSingleObject(&FsRtlpUncSemaphore, Executive, 0, 0, 0LL);
    v5 = FsRtlpOpenDev(&Handle);
    if ( v5 < 0 || (v5 = FsRtlpRegisterProviderWithMUP(Handle), v5 < 0) )
    {
      if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        ZwClose(Handle);
      *a4 = (HANDLE)-1LL;
    }
    else
    {
      ++FsRtlpRedirs;
      *a4 = Handle;
    }
    KeReleaseSemaphore(&FsRtlpUncSemaphore, 0, 1, 0);
    return (unsigned int)v5;
  }
  else
  {
    result = 3221225485LL;
    *a4 = (HANDLE)-1LL;
  }
  return result;
}
