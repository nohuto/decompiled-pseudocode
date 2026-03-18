/*
 * XREFs of ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C001F3A4
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007B8E0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C001F458 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0042C1C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C004D5B0 (HmgShareLockCheck.c)
 *     HmgNextOwned @ 0x1C004DEA0 (HmgNextOwned.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall vCleanupSurfaces(unsigned int a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  struct OBJECT *v6; // rax
  int v7; // ecx
  struct OBJECT *v8; // [rsp+40h] [rbp+18h] BYREF
  struct HOBJ__ *v9; // [rsp+48h] [rbp+20h] BYREF

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
      v6 = (struct OBJECT *)HmgShareLockCheck(v9);
      v8 = v6;
      if ( v6 )
      {
        v7 = *((_DWORD *)v6 + 28);
        if ( v7 >= 0 || (v7 & 0x40000) != 0 )
        {
          SURFREF::bDeleteSurface(&v8, a2);
          v6 = v8;
        }
        if ( v6 )
          HmgDecrementShareReferenceCountEx(v6);
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion();
      }
    }
  }
  return result;
}
