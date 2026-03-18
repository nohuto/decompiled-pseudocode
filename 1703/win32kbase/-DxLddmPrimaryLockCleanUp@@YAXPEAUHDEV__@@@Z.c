/*
 * XREFs of ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C005AD88
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C005AC10 (GreSuspendDirectDraw.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0037A44 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00386EC (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C005AE14 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     hdevEnumerate @ 0x1C005BFB0 (hdevEnumerate.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DxLddmPrimaryLockCleanUp(HDEV a1)
{
  int v2; // eax
  __int64 v3; // rcx
  PDEV *i; // rcx
  int v5; // ecx
  __int64 v6; // rax
  HDEV *v7; // rbx
  HDEV v8; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v8);
  v8 = a1;
  if ( a1 )
  {
    v2 = *((_DWORD *)a1 + 8);
    if ( (v2 & 1) != 0 )
    {
      if ( (v2 & 0x20000) != 0 )
      {
        for ( i = 0LL; ; i = (PDEV *)v7 )
        {
          v6 = hdevEnumerate(i);
          v7 = (HDEV *)v6;
          if ( !v6 )
            break;
          v5 = *(_DWORD *)(v6 + 32) & 0x20001;
          v8 = (HDEV)v6;
          if ( v5 == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v8) && v7[2] == a1 )
            DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v8);
        }
      }
      else if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v8) )
      {
        DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v8);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v3);
  }
}
