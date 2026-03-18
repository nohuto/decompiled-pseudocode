/*
 * XREFs of ?ValidUmpdHdev@@YAHPEAUHDEV__@@@Z @ 0x1C0110414
 * Callers:
 *     NtGdiEngAssociateSurface @ 0x1C0110140 (NtGdiEngAssociateSurface.c)
 *     NtGdiGetDhpdev @ 0x1C0293370 (NtGdiGetDhpdev.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidUmpdHdev(HDEV a1)
{
  unsigned int v1; // ebx
  HDEV i; // rcx
  HDEV v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !a1 || a1 < MmSystemRangeStart )
    return 0LL;
  GreAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
  for ( i = (HDEV)gppdevList; i; i = *(HDEV *)i )
  {
    if ( i == a1 )
    {
      v5 = a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v5);
      v1 = 1;
      break;
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  return v1;
}
