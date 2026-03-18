/*
 * XREFs of CmpReportNotify @ 0x14047C204
 * Callers:
 *     CmpSetKeySecurity @ 0x1400161F0 (CmpSetKeySecurity.c)
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 *     CmpProcessLightWeightUOW @ 0x14044BDE0 (CmpProcessLightWeightUOW.c)
 *     CmpPerformUnloadKey @ 0x14046E4FC (CmpPerformUnloadKey.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmpLinkHiveToMaster @ 0x1404E46C4 (CmpLinkHiveToMaster.c)
 *     CmpTransMgrCommitUoW @ 0x1405A5398 (CmpTransMgrCommitUoW.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmRestoreKey @ 0x14069C888 (CmRestoreKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpReportNotifyHelper @ 0x14047C340 (CmpReportNotifyHelper.c)
 */

__int64 __fastcall CmpReportNotify(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, __int64 a6)
{
  unsigned int v7; // edi
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v11; // rdx
  _DWORD v12[4]; // [rsp+40h] [rbp-28h] BYREF

  v7 = a3;
  v8 = a2;
  if ( a5 != 1 )
  {
LABEL_2:
    result = CmpReportNotifyHelper(a1, v8, v8, v7, a4, a5, a6);
    if ( (PVOID)v8 != CmpMasterHive )
      return CmpReportNotifyHelper(a1, (_DWORD)CmpMasterHive, v8, v7, a4, a5, a6);
    return result;
  }
  v12[0] = -1;
  v12[1] = 0;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a2 + 8))(a2, a3, v12);
  v11 = result;
  if ( result )
  {
    v7 = *(_DWORD *)(result + 16);
    if ( (*(_BYTE *)(result + 2) & 4) == 0
      || ((*(void (__fastcall **)(__int64, _DWORD *))(v8 + 16))(v8, v12),
          a1 = *(_QWORD *)(a1 + 64),
          v8 = *(_QWORD *)(a1 + 24),
          v7 = *(_DWORD *)(a1 + 32),
          result = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v8 + 8))(v8, v7, v12),
          (v11 = result) != 0) )
    {
      a1 = *(_QWORD *)(a1 + 64);
      if ( (*(_BYTE *)(v11 + 2) & 2) != 0 )
        v7 = *(_DWORD *)(v11 + 16);
      (*(void (__fastcall **)(__int64, _DWORD *))(v8 + 16))(v8, v12);
      goto LABEL_2;
    }
  }
  return result;
}
