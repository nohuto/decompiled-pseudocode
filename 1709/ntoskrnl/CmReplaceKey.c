/*
 * XREFs of CmReplaceKey @ 0x14068D9FC
 * Callers:
 *     NtReplaceKey @ 0x14068866C (NtReplaceKey.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwFlushBuffersFile @ 0x14017E220 (ZwFlushBuffersFile.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpCmdHiveClose @ 0x14046FEEC (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x140470024 (CmpDestroySecurityCache.c)
 *     HvFreeHive @ 0x140479C44 (HvFreeHive.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpCmdHiveOpen @ 0x1404DD728 (CmpCmdHiveOpen.c)
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     CmpCmdRenameHive @ 0x1406943BC (CmpCmdRenameHive.c)
 *     HvSyncHive @ 0x140697218 (HvSyncHive.c)
 *     CmpPreserveSystemHiveData @ 0x140699C54 (CmpPreserveSystemHiveData.c)
 */

__int64 __fastcall CmReplaceKey(ULONG_PTR BugCheckParameter2, __int64 a2, const UNICODE_STRING *a3)
{
  int v5; // eax
  char *v6; // rdi
  NTSTATUS v7; // ebx
  int v8; // eax
  int v9; // ecx
  __int64 v10; // r8
  char *v11; // rsi
  __int64 v12; // rdx
  char **v13; // rax
  char v15[8]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v18[352]; // [rsp+70h] [rbp-90h] BYREF
  char ObjectInformation[512]; // [rsp+1D0h] [rbp+D0h] BYREF

  P = 0LL;
  v15[0] = 0;
  memset(v18, 0, sizeof(v18));
  v5 = CmpCmdHiveOpen(a3, 0, (__int64)v15, (__int64)&P, 16777217, 0, 0LL, 0LL, (__int64)v18);
  v6 = (char *)P;
  v7 = v5;
  if ( v5 >= 0 )
  {
    while ( 1 )
    {
      CmpLockRegistry();
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
      if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 4) != 0 )
      {
        v7 = -1073741611;
        goto LABEL_19;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 5360) & 0x20) != 0 )
      {
        v7 = -1073741811;
        goto LABEL_19;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 5488) & 1) == 0 )
        break;
      ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
      CmpUnlockRegistry();
      if ( (int)CmpFlushHive(BugCheckParameter2, 4u) < 0 )
      {
        v7 = -1073741670;
        goto LABEL_20;
      }
    }
    if ( BugCheckParameter2 != qword_140353EA0 )
      goto LABEL_11;
    v7 = CmpPreserveSystemHiveData(BugCheckParameter2, v6);
    if ( v7 < 0 )
      goto LABEL_19;
    if ( (unsigned __int8)HvSyncHive((ULONG_PTR)v6) )
    {
LABEL_11:
      v7 = CmpCmdRenameHive(*(HANDLE *)(BugCheckParameter2 + 2664), ObjectInformation, 0);
      if ( v7 >= 0 )
      {
        *(_DWORD *)(BugCheckParameter2 + 144) |= 4u;
        v7 = CmpCmdRenameHive(*((HANDLE *)v6 + 333), 0LL, 0);
        if ( v7 < 0 || (v7 = ZwFlushBuffersFile(*((HANDLE *)v6 + 333), &IoStatusBlock), v7 < 0) )
        {
          v8 = CmpCmdRenameHive(*(HANDLE *)(BugCheckParameter2 + 2664), 0LL, 0);
          v9 = v7;
          if ( v8 < 0 )
            v9 = -1073741492;
          v7 = v9;
        }
      }
    }
    else
    {
      v7 = -1073741492;
    }
LABEL_19:
    ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
    CmpUnlockRegistry();
  }
LABEL_20:
  if ( v6 )
  {
    CmpDestroySecurityCache((__int64)v6);
    v11 = v6 + 5368;
    if ( *(char **)v11 != v11 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
      v12 = *(_QWORD *)v11;
      if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 || (v13 = (char **)*((_QWORD *)v6 + 672), *v13 != v11) )
        __fastfail(3u);
      *v13 = (char *)v12;
      *(_QWORD *)(v12 + 8) = v13;
      ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    }
    HvFreeHive((__int64)v6, 1, v10);
    if ( v7 < 0 )
      CmpCmdHiveClose((__int64)v6);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 1374, 0xFFFFFFFF) == 1 )
      CmpDeleteHive((PERESOURCE *)P);
  }
  return (unsigned int)v7;
}
