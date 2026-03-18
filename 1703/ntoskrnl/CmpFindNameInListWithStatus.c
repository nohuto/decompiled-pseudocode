/*
 * XREFs of CmpFindNameInListWithStatus @ 0x1404905C4
 * Callers:
 *     CmQueryMultipleValueForLayeredKey @ 0x1401DF0C4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14048FD04 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpFindNameInList @ 0x140490580 (CmpFindNameInList.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryValueKey @ 0x1405063C0 (CmQueryValueKey.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpFindNameInListCellWithStatus @ 0x140490670 (CmpFindNameInListCellWithStatus.c)
 */

__int64 __fastcall CmpFindNameInListWithStatus(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rsi
  _DWORD *v11; // rdx
  unsigned int NameInListCellWithStatus; // edi
  char v14; // [rsp+68h] [rbp+10h] BYREF

  v10 = 0LL;
  HvpGetCellContextReinitialize((__int64)&v14);
  if ( *v11 )
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(a1 + 8))(a1, (unsigned int)v11[1], &v14);
  NameInListCellWithStatus = CmpFindNameInListCellWithStatus(a1, v10, *a2, a3, a4, a5, a6);
  if ( v10 )
    (*(void (__fastcall **)(__int64, char *))(a1 + 16))(a1, &v14);
  return NameInListCellWithStatus;
}
