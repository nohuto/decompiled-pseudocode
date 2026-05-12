/*
 * XREFs of RaidStallDeviceQueue @ 0x1C000EF98
 * Callers:
 *     RaidUnitProcessBusyRequest @ 0x1C000EE34 (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     RaidSetUnitPauseTimer @ 0x1C00019E0 (RaidSetUnitPauseTimer.c)
 *     DbgLogRequest @ 0x1C0004198 (DbgLogRequest.c)
 *     WPP_SF_DD @ 0x1C0030998 (WPP_SF_DD.c)
 *     WPP_SF_D @ 0x1C0030E98 (WPP_SF_D.c)
 */

void __fastcall RaidStallDeviceQueue(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  KIRQL v8; // al
  KIRQL v9; // r15
  int v10; // ecx
  __int64 v11; // rax
  unsigned __int8 v12; // dl
  int v13; // eax
  __int64 v14; // r9
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_DD(WPP_GLOBAL_Control->AttachedDevice, 11LL, &WPP_3044ac6483f2361a1a6f2536ad6212eb_Traceguids, a2, a3);
  }
  if ( a2 && a3 )
  {
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    v9 = v8;
    if ( *(int *)(a1 + 28) > 0 || *(_DWORD *)(a1 + 32) || (v10 = *(_DWORD *)(a1 + 76), v10 >= *(_DWORD *)(a1 + 4)) )
    {
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v8);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_DD(WPP_GLOBAL_Control->AttachedDevice, 12LL, &WPP_3044ac6483f2361a1a6f2536ad6212eb_Traceguids, a2, a3);
      }
    }
    else
    {
      if ( a2 == 1 )
      {
        v11 = *(_QWORD *)(a4 + 24);
        if ( v11 )
          v12 = *(_BYTE *)(v11 + 56);
        else
          v12 = -1;
        v13 = *(_DWORD *)(a4 + 88);
        _InterlockedAdd((volatile signed __int32 *)(a1 + 28), 1u);
        if ( (qword_1C0056210 & 0x200) != 0 )
          DbgLogRequest(
            *(_QWORD *)(a4 + 24),
            4,
            retaddr,
            BYTE2(v13) | (unsigned __int64)((BYTE1(v13) | (((unsigned __int8)v13 | (v12 << 8)) << 8)) << 8),
            *(int *)(a4 + 428),
            0LL,
            0LL);
      }
      else if ( a2 == 2 && v10 > 0 )
      {
        v14 = a3 * v10 / 0x64;
        if ( !(_DWORD)v14 )
          v14 = 1LL;
        *(_DWORD *)(a1 + 32) = v14;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        {
          WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 13LL, &WPP_3044ac6483f2361a1a6f2536ad6212eb_Traceguids, v14);
        }
      }
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v9);
      if ( a2 == 1 )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        {
          WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_3044ac6483f2361a1a6f2536ad6212eb_Traceguids, a3);
        }
        RaidSetUnitPauseTimer(a4, a3);
      }
    }
  }
}
