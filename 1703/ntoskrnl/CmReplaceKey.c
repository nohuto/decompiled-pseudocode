/*
 * XREFs of CmReplaceKey @ 0x14066430C
 * Callers:
 *     NtReplaceKey @ 0x14065F7EC (NtReplaceKey.c)
 * Callees:
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwFlushBuffersFile @ 0x14017E8A0 (ZwFlushBuffersFile.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpCmdHiveClose @ 0x1404CD78C (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x1404CF38C (CmpDestroySecurityCache.c)
 *     HvFreeHive @ 0x1404D2664 (HvFreeHive.c)
 *     CmpCmdHiveOpen @ 0x1404D65D8 (CmpCmdHiveOpen.c)
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpCmdRenameHive @ 0x14066959C (CmpCmdRenameHive.c)
 *     HvSyncHive @ 0x14066CBA0 (HvSyncHive.c)
 *     CmpPreserveSystemHiveData @ 0x14066F58C (CmpPreserveSystemHiveData.c)
 */

__int64 __fastcall CmReplaceKey(ULONG_PTR BugCheckParameter2, __int64 a2, const UNICODE_STRING *a3)
{
  __int64 result; // rax
  ULONG_PTR v6; // rsi
  NTSTATUS v7; // ebx
  int v8; // eax
  int v9; // ecx
  ULONG_PTR v10; // rdi
  __int64 v11; // rdx
  _QWORD *v12; // rax
  _BYTE v13[8]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BugCheckParameter2a; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v16[352]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE ObjectInformation[512]; // [rsp+1D0h] [rbp+D0h] BYREF

  memset(v16, 0, sizeof(v16));
  v13[0] = 0;
  result = CmpCmdHiveOpen(a3, 0, (__int64)v13, (__int64)&BugCheckParameter2a, 16777217, 0, 0LL, 0LL, (__int64)v16);
  if ( (int)result >= 0 )
  {
    while ( 1 )
    {
      CmpLockRegistry();
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
      v6 = BugCheckParameter2a;
      if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 4) != 0 )
      {
        v7 = -1073741611;
        goto LABEL_21;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 5360) & 0x20) != 0 )
      {
        v7 = -1073741811;
        goto LABEL_21;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 5488) & 1) == 0 )
        break;
      ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
      CmpUnlockRegistry();
      if ( (int)CmpFlushHive(BugCheckParameter2, 4u) < 0 )
      {
        v7 = -1073741670;
        CmpLockRegistry();
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
        goto LABEL_21;
      }
    }
    if ( BugCheckParameter2 == qword_14033BE70 )
    {
      v7 = CmpPreserveSystemHiveData(BugCheckParameter2, BugCheckParameter2a);
      if ( v7 < 0 )
        goto LABEL_21;
      if ( !(unsigned __int8)HvSyncHive(v6) )
        goto LABEL_10;
    }
    v7 = CmpCmdRenameHive(*(HANDLE *)(BugCheckParameter2 + 2664), ObjectInformation, 0);
    if ( v7 >= 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 144) |= 4u;
      v7 = CmpCmdRenameHive(*(HANDLE *)(v6 + 2664), 0LL, 0);
      if ( v7 >= 0 )
      {
        v7 = ZwFlushBuffersFile(*(HANDLE *)(v6 + 2664), &IoStatusBlock);
        if ( v7 < 0 )
        {
          v8 = CmpCmdRenameHive(*(HANDLE *)(BugCheckParameter2 + 2664), 0LL, 0);
          v9 = v7;
          if ( v8 < 0 )
            v9 = -1073741492;
          v7 = v9;
        }
      }
      else if ( (int)CmpCmdRenameHive(*(HANDLE *)(BugCheckParameter2 + 2664), 0LL, 0) < 0 )
      {
LABEL_10:
        v7 = -1073741492;
      }
    }
LABEL_21:
    ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
    CmpUnlockRegistry();
    CmpDestroySecurityCache(v6);
    v10 = v6 + 5368;
    if ( *(_QWORD *)v10 != v10 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
      v11 = *(_QWORD *)v10;
      v12 = *(_QWORD **)(v6 + 5376);
      if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 || *v12 != v10 )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    }
    HvFreeHive(v6, 1);
    if ( v7 < 0 )
      CmpCmdHiveClose(v6);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 5496), 0xFFFFFFFF) == 1 )
      CmpDeleteHive(BugCheckParameter2a);
    return (unsigned int)v7;
  }
  return result;
}
