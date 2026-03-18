/*
 * XREFs of HvlDiscardSecurePagesFromHibernation @ 0x14022BCEC
 * Callers:
 *     PopSaveHiberContext @ 0x140473E20 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x140156AD0 (PoSetHiberRange.c)
 *     HvlDiscardPagesFromHibernation @ 0x14022BC8C (HvlDiscardPagesFromHibernation.c)
 *     HvlpEndSecurePageListIteration @ 0x14022EB88 (HvlpEndSecurePageListIteration.c)
 *     HvlpGetSecurePageList @ 0x14022ECF4 (HvlpGetSecurePageList.c)
 *     HvlpStartSecurePageListIteration @ 0x14022EF40 (HvlpStartSecurePageListIteration.c)
 */

void __fastcall HvlDiscardSecurePagesFromHibernation(PVOID MemoryMap)
{
  int SecurePageList; // ebx
  __int64 v3; // rdi
  unsigned int i; // ebp
  unsigned __int64 v5; // r9
  char v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  if ( (int)HvlpStartSecurePageListIteration(0LL, 7LL) >= 0 )
  {
    do
    {
      SecurePageList = HvlpGetSecurePageList(0LL, 0LL, 0LL, &v7, 0LL, &v6);
      if ( SecurePageList >= 0 )
      {
        v3 = v7;
        for ( i = 0; i < *(unsigned __int16 *)(v3 + 8); ++i )
        {
          v5 = *(_QWORD *)(v3 + 8LL * i + 16);
          PoSetHiberRange(MemoryMap, 0xC000u, (PVOID)(v5 & 0xFFFFFFFFFFLL), (v5 >> 40) + 1, 0x686C7648u);
        }
      }
    }
    while ( !SecurePageList );
    HvlpEndSecurePageListIteration(0LL, 0LL, 0LL);
    HvlDiscardPagesFromHibernation(MemoryMap);
  }
}
