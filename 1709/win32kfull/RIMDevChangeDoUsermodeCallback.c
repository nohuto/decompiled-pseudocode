/*
 * XREFs of RIMDevChangeDoUsermodeCallback @ 0x1C01AB768
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C01ABBC0 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxClientRimDevCallback @ 0x1C0202C08 (xxxClientRimDevCallback.c)
 */

void __fastcall RIMDevChangeDoUsermodeCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int16 v9; // r15
  __int16 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  BOOLEAN IsResourceAcquiredExclusiveLite; // bp
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9

  v4 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(v4 + 408);
  if ( *(_BYTE *)(v4 + 112) != 3
    && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4)
    && gptiCurrent
    && *(_QWORD *)(v6 + 32) == PsGetCurrentProcess(v8, v7)
    && *(_QWORD *)(v6 + 768) )
  {
    *(_BYTE *)(v6 + 75) = 1;
    if ( *(_BYTE *)(v6 + 72) && !*(_BYTE *)(v6 + 73) || *(_BYTE *)(v6 + 74) )
      RIMUnlockExclusive(v6 + 696);
    RIMUnlockExclusive(v6 + 96);
    RawInputManagerDeviceObjectReference(v4);
    v9 = 0;
    v10 = 0;
    *(_QWORD *)(gptiCurrent + 1296LL) = v4;
    if ( *(_BYTE *)(v4 + 112) == 2 )
    {
      v11 = *(_QWORD *)(v4 + 520);
      if ( v11 )
      {
        v9 = *(_WORD *)(v11 + 40);
        v10 = *(_WORD *)(v11 + 42);
      }
    }
    v12 = *(_QWORD *)(v4 + 80);
    if ( (*(_DWORD *)(v4 + 248) & 0x1000) != 0 )
    {
      if ( *(_DWORD *)a1 == 1 )
        *(_DWORD *)a1 = 2;
      if ( *(_DWORD *)a1 == 4 )
        *(_DWORD *)a1 = 3;
      v13 = *(_DWORD *)(v4 + 248);
      if ( (v13 & 0x20000) != 0 || (v13 & 0x40000) != 0 )
        v12 = *(_QWORD *)(v4 + 416);
    }
    IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
    if ( IsResourceAcquiredExclusiveLite )
      LeaveDeviceInfoListCrit_(v15, v14, v17);
    xxxClientRimDevCallback(
      *(_DWORD *)a1,
      *(_DWORD *)(a1 + 4),
      *(_DWORD *)(a1 + 8),
      *(_QWORD *)(v6 + 64),
      v12,
      v9,
      v10,
      *(_QWORD *)(v6 + 528),
      *(_QWORD *)(v6 + 768));
    if ( IsResourceAcquiredExclusiveLite )
      EnterDeviceInfoListCrit_(v19, v18, v20, v21);
    *(_QWORD *)(gptiCurrent + 1296LL) = 0LL;
    RIMLockExclusive(v6 + 96);
    if ( *(_BYTE *)(v6 + 72) && !*(_BYTE *)(v6 + 73) || *(_BYTE *)(v6 + 74) )
      RIMLockExclusive(v6 + 696);
    *(_BYTE *)(v6 + 75) = 0;
    if ( (*(_DWORD *)(v4 + 264) & 0x80u) != 0 || (*(_DWORD *)(v4 + 248) & 0x1000) != 0 )
    {
      if ( *(_DWORD *)a1 == 2 )
        *(_DWORD *)(v4 + 248) |= 0x200000u;
      if ( *(_DWORD *)a1 == 3 )
        *(_DWORD *)(v4 + 248) |= 0x400000u;
    }
    RawInputManagerDeviceObjectDereference(v4);
  }
}
