/*
 * XREFs of MiCompareTbFlushTimeStamp @ 0x140070D44
 * Callers:
 *     MiAttachSession @ 0x140070CAC (MiAttachSession.c)
 *     MmMapViewInSystemCache @ 0x1400DD850 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400DDFF0 (MiObtainSystemCacheView.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 */

char __fastcall MiCompareTbFlushTimeStamp(int a1, int a2)
{
  int v3; // ebx
  unsigned int v5; // eax
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 & 1;
  do
  {
    _InterlockedOr(v7, 0);
    v5 = a2 & (KiTbFlushTimeStamp - a1);
    if ( v5 > 2 || !v3 && v5 >= 2 )
      break;
    if ( (KiTbFlushTimeStamp & 1) == 0 )
      return 1;
    v8 = 0;
    _InterlockedOr(v7, 0);
    while ( _bittest(&KiTbFlushTimeStamp, 0) )
      KeYieldProcessorEx(&v8);
  }
  while ( v3 );
  return 0;
}
