/*
 * XREFs of KeTryToFreezeThreadStack @ 0x140153618
 * Callers:
 *     MiSwapStackPage @ 0x14002BD10 (MiSwapStackPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x140043AC0 (KiAcquireThreadStateLock.c)
 */

char __fastcall KeTryToFreezeThreadStack(__int64 a1, _QWORD *a2)
{
  unsigned __int8 v4; // al
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF
  volatile signed __int64 *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return 0;
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v6);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v4 = KiAcquireThreadStateLock(a1, &v7, (volatile signed __int32 **)&v8);
  if ( v4 <= 4u )
    goto LABEL_7;
  if ( v4 != 5 )
  {
    if ( v4 != 7 && v4 != 9 )
      goto LABEL_21;
    goto LABEL_7;
  }
  if ( !*(_BYTE *)(a1 + 391) || (*(_DWORD *)(a1 + 120) & 0x20) == 0 || *(char *)(a1 + 195) >= 25 || *(_BYTE *)(a1 + 113) )
  {
LABEL_7:
    if ( v7 )
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
    if ( v8 )
      _InterlockedAnd64(v8, 0LL);
    *(_QWORD *)(a1 + 64) = 0LL;
    return 0;
  }
LABEL_21:
  *a2 = v7;
  return 1;
}
