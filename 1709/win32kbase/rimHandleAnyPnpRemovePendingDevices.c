/*
 * XREFs of rimHandleAnyPnpRemovePendingDevices @ 0x1C000A1A0
 * Callers:
 *     RIMReadInput @ 0x1C00095B0 (RIMReadInput.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x1C001AEAC (rimDoRimDevChange.c)
 *     RIMFreeDev @ 0x1C010CAFC (RIMFreeDev.c)
 */

void __fastcall rimHandleAnyPnpRemovePendingDevices(ULONG_PTR BugCheckParameter3)
{
  int v1; // r14d
  ULONG_PTR v2; // rsi
  int v4; // r15d
  int v5; // edx
  __int64 i; // rbx
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  int v10; // [rsp+50h] [rbp+8h]

  v1 = v10;
  v2 = BugCheckParameter3 + 696;
  while ( 1 )
  {
    v4 = 0;
    RIMLockExclusive(v2);
    for ( i = *(_QWORD *)(BugCheckParameter3 + 552); i; i = *(_QWORD *)(i + 40) )
    {
      v7 = *(_DWORD *)(i + 184);
      if ( (v7 & 0x20000000) != 0 )
      {
        *(_DWORD *)(i + 184) = v7 & 0xDFFFFFFF;
        LOBYTE(v5) = 3;
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v5,
          20,
          30,
          (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
          i);
      }
      v8 = *(_DWORD *)(i + 200);
      if ( (v8 & 1) != 0 || (v8 & 2) != 0 )
      {
        v9 = *(_DWORD *)(i + 184);
        if ( (v9 & 0x40000000) == 0 && v9 >= 0 && !*(_QWORD *)(i + 192) )
        {
          v4 = 1;
          *(_DWORD *)(i + 200) = v8 & 0xFFFFFFFC;
          LOBYTE(v5) = 3;
          WPP_RECORDER_SF_q(
            WPP_GLOBAL_Control->DeviceExtension,
            v5,
            20,
            31,
            (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
            i);
          v1 = (unsigned __int8)(v8 & 2) >> 1;
          break;
        }
      }
    }
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    if ( !v4 )
      break;
    if ( v1 )
    {
      RIMLockExclusive(v2);
      *(_BYTE *)(BugCheckParameter3 + 74) = 1;
    }
    else if ( *(_BYTE *)(BugCheckParameter3 + 74) )
    {
      KeBugCheckEx(0x164u, 0x12uLL, 0LL, BugCheckParameter3, 0LL);
    }
    rimDoRimDevChange(BugCheckParameter3, i, 3LL);
    RIMFreeDev(BugCheckParameter3, i);
    if ( v1 )
    {
      *(_BYTE *)(BugCheckParameter3 + 74) = 0;
      *(_QWORD *)(v2 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v2, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
