/*
 * XREFs of CmpReportNotify @ 0x14048CFF4
 * Callers:
 *     CmpSetKeySecurity @ 0x14006E950 (CmpSetKeySecurity.c)
 *     CmDeleteLayeredKey @ 0x1401E0660 (CmDeleteLayeredKey.c)
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmpPerformUnloadKey @ 0x1404CB738 (CmpPerformUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x1404CCCAC (CmpLinkHiveToMaster.c)
 *     CmpTransMgrCommitUoW @ 0x1404CDAB8 (CmpTransMgrCommitUoW.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmpProcessLightWeightUOW @ 0x140669CF4 (CmpProcessLightWeightUOW.c)
 *     CmRestoreKey @ 0x140671810 (CmRestoreKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpReportNotifyHelper @ 0x14048D130 (CmpReportNotifyHelper.c)
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
    if ( v8 != CmpMasterHive )
      return CmpReportNotifyHelper(a1, CmpMasterHive, v8, v7, a4, a5, a6);
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
