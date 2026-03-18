/*
 * XREFs of CmpSearchForOpenSubKeys @ 0x14046E954
 * Callers:
 *     CmpTryToRundownHive @ 0x1400AFAE0 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x14046E4FC (CmpPerformUnloadKey.c)
 *     CmpFreezeHive @ 0x14046ED40 (CmpFreezeHive.c)
 *     NtQueryOpenSubKeys @ 0x140687BF0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140687E00 (NtQueryOpenSubKeysEx.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmpForceInvalidatePostCallback @ 0x140697EB0 (CmpForceInvalidatePostCallback.c)
 *     CmRestoreKey @ 0x14069C888 (CmRestoreKey.c)
 *     CmpCommitRenameKeyUoW @ 0x14069E7D0 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14069F008 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllOpenSubKeys @ 0x14046E9E8 (CmpEnumerateAllOpenSubKeys.c)
 *     CmpDumpKeyBodyList @ 0x14068F5F0 (CmpDumpKeyBodyList.c)
 */

__int64 __fastcall CmpSearchForOpenSubKeys(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 (__fastcall *v5)(); // rdi
  int v7; // edx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF

  v8 = a1;
  v3 = 0;
  v9[0] = 0LL;
  v9[1] = a3;
  if ( (_DWORD)a2 )
  {
    a2 = (unsigned int)(a2 - 1);
    if ( (_DWORD)a2 )
    {
      v7 = a2 - 1;
      if ( v7 )
      {
        a2 = (unsigned int)(v7 - 1);
        if ( (_DWORD)a2 )
        {
          if ( (_DWORD)a2 != 1 )
            __fastfail(5u);
          v5 = CmpSearchAndTagNoDelayCloseWorker;
        }
        else
        {
          v5 = CmpSearchAndRehashWorker;
        }
      }
      else
      {
        v3 = 1;
        v5 = CmpSearchAndCountWorker;
        CmpDumpKeyBodyList(a1, v9);
      }
    }
    else
    {
      v5 = CmpSearchAndDerefWorker;
    }
  }
  else
  {
    v5 = CmpSearchIfSubkeysExistWorker;
  }
  LOBYTE(a2) = v3;
  ((void (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(), __int64 *))CmpEnumerateAllOpenSubKeys)(
    a1,
    a2,
    v5,
    &v8);
  return LODWORD(v9[0]);
}
