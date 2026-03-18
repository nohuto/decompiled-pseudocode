/*
 * XREFs of CmpReportNotifyForKcbStack @ 0x1404E25D4
 * Callers:
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 *     CmDeleteLayeredKey @ 0x140222964 (CmDeleteLayeredKey.c)
 *     CmDeleteValueKey @ 0x14049B18C (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 *     CmpReportNotify @ 0x14054F614 (CmpReportNotify.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
 *     CmpReportNotifyHelper @ 0x1404E2660 (CmpReportNotifyHelper.c)
 */

__int64 __fastcall CmpReportNotifyForKcbStack(__int64 a1, int a2, int a3, __int64 a4)
{
  int v7; // edi
  __int64 KcbAtLayerHeight; // rbx
  int v9; // ecx
  __int64 v10; // r9
  __int64 result; // rax

  v7 = a1;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, *(_WORD *)(a1 + 2));
  result = CmpReportNotifyHelper(v9, *(_QWORD *)(KcbAtLayerHeight + 24), a2, a3, v10);
  if ( *(PVOID *)(KcbAtLayerHeight + 24) != CmpMasterHive )
    return CmpReportNotifyHelper(v7, (_DWORD)CmpMasterHive, a2, a3, a4);
  return result;
}
