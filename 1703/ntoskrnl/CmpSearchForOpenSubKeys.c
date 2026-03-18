/*
 * XREFs of CmpSearchForOpenSubKeys @ 0x1404CAA50
 * Callers:
 *     CmpTryToRundownHive @ 0x14007EC54 (CmpTryToRundownHive.c)
 *     CmpFreezeHive @ 0x1404CA998 (CmpFreezeHive.c)
 *     CmpPerformUnloadKey @ 0x1404CB738 (CmpPerformUnloadKey.c)
 *     NtQueryOpenSubKeys @ 0x14065EDDC (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14065EFBC (NtQueryOpenSubKeysEx.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmpForceInvalidatePostCallback @ 0x14066D990 (CmpForceInvalidatePostCallback.c)
 *     CmRestoreKey @ 0x140671810 (CmRestoreKey.c)
 *     CmpCommitRenameKeyUoW @ 0x140673838 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140674188 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllOpenSubKeys @ 0x1404CAAE4 (CmpEnumerateAllOpenSubKeys.c)
 *     CmpDumpKeyBodyList @ 0x140665BB0 (CmpDumpKeyBodyList.c)
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
          v5 = (__int64 (__fastcall *)())CmpSearchAndTagNoDelayCloseWorker;
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
    v5 = (__int64 (__fastcall *)())CmpSearchIfSubkeysExistWorker;
  }
  LOBYTE(a2) = v3;
  ((void (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(), __int64 *))CmpEnumerateAllOpenSubKeys)(
    a1,
    a2,
    v5,
    &v8);
  return LODWORD(v9[0]);
}
