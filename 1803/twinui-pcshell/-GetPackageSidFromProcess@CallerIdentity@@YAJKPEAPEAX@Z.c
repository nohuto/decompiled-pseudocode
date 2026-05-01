/*
 * XREFs of ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z @ 0x1802FE39C
 * Callers:
 *     ?ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTYPE@1@@Z @ 0x180112B20 (-ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTY.c)
 * Callees:
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x18008EE04 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??0?$CAutoHandle@PEAX@@QEAA@PEAX@Z @ 0x1801F7330 (--0-$CAutoHandle@PEAX@@QEAA@PEAX@Z.c)
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x1802FE404 (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetPackageSidFromProcess(DWORD dwProcessId, _QWORD *a2, void **a3)
{
  HANDLE v4; // rax
  void **v5; // r8
  signed int PackageSidFromProcessHandle; // edi
  CallerIdentity *v8; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = OpenProcess(0x1000u, 0, dwProcessId);
  CAutoHandle<void *>::CAutoHandle<void *>(&v8, (__int64)v4);
  if ( v8 || (PackageSidFromProcessHandle = ResultFromKnownLastError(), PackageSidFromProcessHandle >= 0) )
    PackageSidFromProcessHandle = CallerIdentity::GetPackageSidFromProcessHandle(v8, a2, v5);
  CAutoHandle<void *>::~CAutoHandle<void *>((void **)&v8);
  return (unsigned int)PackageSidFromProcessHandle;
}
