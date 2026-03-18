/*
 * XREFs of RIMDevChangeDoUsermodeCallback @ 0x1C01A83DC
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C01A8830 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     xxxClientRimDevCallback @ 0x1C020132C (xxxClientRimDevCallback.c)
 */

void __fastcall RIMDevChangeDoUsermodeCallback(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int16 v5; // r15
  __int16 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rcx
  BOOLEAN IsResourceAcquiredExclusiveLite; // bp
  __int64 v12; // rcx
  __int16 v13; // [rsp+28h] [rbp-50h]

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(v1 + 408);
  if ( *(_BYTE *)(v1 + 112) != 3
    && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
    && gptiCurrent
    && *(_QWORD *)(v3 + 32) == PsGetCurrentProcess(v4)
    && *(_QWORD *)(v3 + 768) )
  {
    *(_BYTE *)(v3 + 75) = 1;
    if ( *(_BYTE *)(v3 + 72) && !*(_BYTE *)(v3 + 73) || *(_BYTE *)(v3 + 74) )
      RIMUnlockExclusive(v3 + 696);
    RIMUnlockExclusive(v3 + 96);
    RawInputManagerDeviceObjectReference(v1);
    v5 = 0;
    v6 = 0;
    *(_QWORD *)(gptiCurrent + 1208LL) = v1;
    if ( *(_BYTE *)(v1 + 112) == 2 )
    {
      v7 = *(_QWORD *)(v1 + 520);
      if ( v7 )
      {
        v5 = *(_WORD *)(v7 + 40);
        v6 = *(_WORD *)(v7 + 42);
      }
    }
    v8 = *(_QWORD *)(v1 + 80);
    if ( (*(_DWORD *)(v1 + 248) & 0x1000) != 0 )
    {
      if ( *(_DWORD *)a1 == 1 )
        *(_DWORD *)a1 = 2;
      if ( *(_DWORD *)a1 == 4 )
        *(_DWORD *)a1 = 3;
      v9 = *(_DWORD *)(v1 + 248);
      if ( (v9 & 0x20000) != 0 || (v9 & 0x40000) != 0 )
        v8 = *(_QWORD *)(v1 + 416);
    }
    IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
    if ( IsResourceAcquiredExclusiveLite )
      LeaveDeviceInfoListCrit_(v10);
    v13 = v5;
    xxxClientRimDevCallback(
      *(_DWORD *)a1,
      *(_DWORD *)(a1 + 4),
      *(_DWORD *)(a1 + 8),
      *(_QWORD *)(v3 + 64),
      v8,
      v13,
      v6,
      *(_QWORD *)(v3 + 528),
      *(_QWORD *)(v3 + 768));
    if ( IsResourceAcquiredExclusiveLite )
      EnterDeviceInfoListCrit_(v12);
    *(_QWORD *)(gptiCurrent + 1208LL) = 0LL;
    RIMLockExclusive(v3 + 96);
    if ( *(_BYTE *)(v3 + 72) && !*(_BYTE *)(v3 + 73) || *(_BYTE *)(v3 + 74) )
      RIMLockExclusive(v3 + 696);
    *(_BYTE *)(v3 + 75) = 0;
    if ( (*(_DWORD *)(v1 + 264) & 0x80u) != 0 || (*(_DWORD *)(v1 + 248) & 0x1000) != 0 )
    {
      if ( *(_DWORD *)a1 == 2 )
        *(_DWORD *)(v1 + 248) |= 0x200000u;
      if ( *(_DWORD *)a1 == 3 )
        *(_DWORD *)(v1 + 248) |= 0x400000u;
    }
    RawInputManagerDeviceObjectDereference(v1);
  }
}
