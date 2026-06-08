/*
 * XREFs of RegisterHvPackage @ 0x1C002CA40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 *     GetHvPackage @ 0x1C002BCD4 (GetHvPackage.c)
 */

__int64 __fastcall RegisterHvPackage(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // r8
  _DWORD *HvPackage; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // r8
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = HvlQueryProcessorTopology(*(unsigned int *)(a1 + 72), 0LL, &v9, 0LL);
  if ( v2 >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001A5D8,
      0LL);
    v3 = qword_1C001A608;
    if ( (__int64 *)qword_1C001A608 == &qword_1C001A608 )
      goto LABEL_6;
    do
    {
      HvPackage = (_DWORD *)v3;
      if ( *(_DWORD *)(v3 + 32) == v9 )
        break;
      v3 = *(_QWORD *)v3;
      HvPackage = 0LL;
    }
    while ( (__int64 *)v3 != &qword_1C001A608 );
    if ( !HvPackage )
    {
LABEL_6:
      HvPackage = GetHvPackage(v9);
      if ( !HvPackage )
      {
LABEL_13:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C001A5D8);
        return (unsigned int)v2;
      }
      v5 = (_QWORD *)qword_1C001A610;
      if ( *(__int64 **)qword_1C001A610 != &qword_1C001A608 )
        __fastfail(3u);
      *(_QWORD *)HvPackage = &qword_1C001A608;
      *((_QWORD *)HvPackage + 1) = v5;
      *v5 = HvPackage;
      qword_1C001A610 = (__int64)HvPackage;
    }
    *(_QWORD *)(a1 + 1048) = HvPackage;
    ++HvPackage[10];
    v6 = (_QWORD *)(a1 + 1056);
    v7 = (_QWORD *)*((_QWORD *)HvPackage + 3);
    if ( (_DWORD *)*v7 != HvPackage + 4 )
      __fastfail(3u);
    *v6 = HvPackage + 4;
    *(_QWORD *)(a1 + 1064) = v7;
    *v7 = v6;
    *((_QWORD *)HvPackage + 3) = v6;
    v2 = HvPackage[9] != HvPackage[10] ? 0x103 : 0;
    goto LABEL_13;
  }
  return (unsigned int)v2;
}
