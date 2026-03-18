/*
 * XREFs of RIMFindSiblingMouseDevice @ 0x1C000A2DC
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C000D844 (RIMAllocateHidDesc.c)
 * Callees:
 *     RIMIsParentCommon @ 0x1C000A3BC (RIMIsParentCommon.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 */

void __fastcall RIMFindSiblingMouseDevice(__int64 a1, __int64 a2, __int16 a3, int a4)
{
  __int64 *i; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int16 v10; // dx

  RIMLockExclusive(&gObListLock);
  for ( i = (__int64 *)gObRimDevList; i != &gObRimDevList; i = (__int64 *)*i )
  {
    v8 = (__int64)(i + 6);
    v9 = v8 & -(__int64)(i != (__int64 *)16);
    if ( !*(_BYTE *)(v9 + 0x30)
      && (*(_DWORD *)((v8 & -(__int64)(i != (__int64 *)16)) + 0xB8) & 0x200) == 0
      && (unsigned int)RIMIsParentCommon(
                         a4,
                         i != (__int64 *)16 ? v8 : 0,
                         a2,
                         *(unsigned __int16 *)((v8 & -(__int64)(i != (__int64 *)16)) + 0x2DE),
                         *(_WORD *)((v8 & -(__int64)(i != (__int64 *)16)) + 0x2E0)) )
    {
      v10 = 0;
      switch ( a3 )
      {
        case 2:
          v10 = 4;
          break;
        case 4:
          v10 = 8;
          break;
        case 5:
          v10 = 2;
          break;
      }
      *(_WORD *)(v9 + 732) = (v10 | *(_WORD *)(v9 + 732)) & 0xFFFE;
      if ( a3 == 5 && *(_WORD *)(a2 + 110) == 1118 )
        *(_DWORD *)(v9 + 184) |= 0x6000000u;
      break;
    }
  }
  qword_1C0193AE8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
