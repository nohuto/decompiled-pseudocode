/*
 * XREFs of ??1?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAA@XZ @ 0x1800183F4
 * Callers:
 *     ??1AgileRegistrationList@@QEAA@XZ @ 0x180007D7C (--1AgileRegistrationList@@QEAA@XZ.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x180007E1C (--1CApplicationManager@@MEAA@XZ.c)
 *     ??1CImmersiveMode@@MEAA@XZ @ 0x180031D24 (--1CImmersiveMode@@MEAA@XZ.c)
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x180074034 (--1CApplicationViewManager@@EEAA@XZ.c)
 *     ??_GApplicationViewManagerVisibilityDebouncer@@UEAAPEAXI@Z @ 0x18007B400 (--_GApplicationViewManagerVisibilityDebouncer@@UEAAPEAXI@Z.c)
 *     ??_EHolographicPositioner@@UEAAPEAXI@Z @ 0x1801058D8 (--_EHolographicPositioner@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<AgileRegistrationList::Item>::~vector<AgileRegistrationList::Item>(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  v2 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    while ( v2 != v3 )
    {
      v4 = *(_QWORD *)(v2 + 8);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      v2 += 16LL;
    }
    v5 = *a1;
    v6 = (__int64)(a1[2] - *a1) >> 4;
    if ( v6 <= 0xFFFFFFFFFFFFFFFLL )
    {
      if ( 16 * v6 < 0x1000 )
      {
LABEL_13:
        operator delete((void *)v5);
        *a1 = 0LL;
        a1[1] = 0LL;
        a1[2] = 0LL;
        return;
      }
      if ( (v5 & 0x1F) == 0 )
      {
        v7 = *(_QWORD *)(v5 - 8);
        if ( v7 < v5 )
        {
          v5 = v5 - v7 - 8;
          if ( v5 <= 0x1F )
          {
            v5 = v7;
            goto LABEL_13;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v5);
  }
}
