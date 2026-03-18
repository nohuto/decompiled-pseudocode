/*
 * XREFs of GreLockVisRgnSharedOrExclusive @ 0x1C00FC1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C003CE20 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     GreLockVisRgn @ 0x1C003E280 (GreLockVisRgn.c)
 *     GreAcquireSemaphoreSharedInternal @ 0x1C0042D00 (GreAcquireSemaphoreSharedInternal.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00552F8 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0055314 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0073530 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall GreLockVisRgnSharedOrExclusive(__int64 a1, HDC a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  int v5; // edx
  bool v6; // bl
  int v7; // edx
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = a1;
  if ( a2 )
  {
    DCOBJA::DCOBJA((DCOBJA *)v12, a2);
    v3 = v12[0];
    if ( !v12[0] )
    {
      DCOBJA::~DCOBJA((DCOBJA *)v12);
      return 0LL;
    }
    v2 = *(_QWORD *)(v12[0] + 48LL);
    v13 = v2;
    v6 = 0;
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v13) )
    {
      v5 = *(_DWORD *)(v3 + 36);
      if ( (v5 & 0x200) == 0 || (*(_DWORD *)(*(_QWORD *)(v3 + 80) + 8LL) & 0x4000) != 0 || (v5 & 0x8000) != 0 )
        v6 = 1;
    }
    DCOBJA::~DCOBJA((DCOBJA *)v12);
  }
  else
  {
    v13 = a1;
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v13) )
    {
LABEL_15:
      GreAcquireSemaphoreSharedInternal((__int64)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v9);
      GreAcquireSemaphoreSharedInternal((__int64)ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemGreLock", (int)ghsemGreLock, v10);
      GreAcquireSemaphoreSharedInternal((__int64)ghsemDCVisRgn);
      EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, v11);
      return 1LL;
    }
    v6 = 0;
  }
  if ( v6 )
    goto LABEL_15;
  GreLockVisRgn(v2, v7, v8);
  return 1LL;
}
