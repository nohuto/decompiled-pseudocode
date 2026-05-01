/*
 * XREFs of ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z @ 0x1801C2DE0
 * Callers:
 *     ?GetPackageSidFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAX@Z @ 0x1801C1294 (-GetPackageSidFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x180021460 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ??0?$CAutoHandle@PEAUHBITMAP__@@@@QEAA@PEAUHBITMAP__@@@Z @ 0x180051434 (--0-$CAutoHandle@PEAUHBITMAP__@@@@QEAA@PEAUHBITMAP__@@@Z.c)
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x1801C2E60 (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetPackageSidFromProcess(DWORD dwProcessId, _QWORD *a2, void **a3)
{
  HANDLE v4; // rax
  void **v5; // r8
  signed int LastError; // eax
  signed int PackageSidFromProcessHandle; // edi
  HANDLE ProcessHandle; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = OpenProcess(0x1000u, 0, dwProcessId);
  CAutoHandle<HBITMAP__ *>::CAutoHandle<HBITMAP__ *>(&ProcessHandle, (__int64)v4);
  if ( ProcessHandle )
  {
    PackageSidFromProcessHandle = CallerIdentity::GetPackageSidFromProcessHandle(ProcessHandle, a2, v5);
  }
  else
  {
    LastError = GetLastError();
    PackageSidFromProcessHandle = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      PackageSidFromProcessHandle = LastError;
    if ( PackageSidFromProcessHandle >= 0 )
      PackageSidFromProcessHandle = -2147467259;
  }
  CAutoHandle<void *>::~CAutoHandle<void *>(&ProcessHandle);
  return (unsigned int)PackageSidFromProcessHandle;
}
