/*
 * XREFs of ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C0077FC8
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0068EFC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     HmgShareLockCheck @ 0x1C0031F10 (HmgShareLockCheck.c)
 *     HmgNextOwned @ 0x1C0032D20 (HmgNextOwned.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0037A44 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009FA3C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall vCleanupSurfaces(int a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    result = HmgNextOwned(v3, a1, &v9);
    v3 = result;
    if ( !(_DWORD)result )
      break;
    if ( (BYTE2(v9) & 0x1F) == 5 )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v8);
      v6 = HmgShareLockCheck(v9, 5);
      v8 = v6;
      if ( v6 )
      {
        if ( ((*(int *)(v6 + 112) < 0) & !_bittest((const signed __int32 *)(v6 + 112), 0x12u)) == 0 )
        {
          SURFREF::bDeleteSurface(&v8, a2);
          v6 = v8;
        }
        if ( v6 )
          HmgDecrementShareReferenceCount(v6);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange");
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion(v7);
      }
    }
  }
  return result;
}
