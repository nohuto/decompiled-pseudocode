/*
 * XREFs of RIMFreeSpecificDev @ 0x1C0094300
 * Callers:
 *     rimPassivateSecondaryRims @ 0x1C00930C4 (rimPassivateSecondaryRims.c)
 *     RIMUnregisterForInput @ 0x1C0093730 (RIMUnregisterForInput.c)
 *     RIMRemoveDevOfInputType @ 0x1C0094240 (RIMRemoveDevOfInputType.c)
 *     RIMFreeDev @ 0x1C010DB18 (RIMFreeDev.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x1C0051F54 (rimDoRimDevChange.c)
 *     RIMRemoveHoldingFrame @ 0x1C00950C8 (RIMRemoveHoldingFrame.c)
 */

__int64 __fastcall RIMFreeSpecificDev(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx

  if ( !*(_QWORD *)(a1 + 768) || *(_DWORD *)(a1 + 976) )
    v4 = 1;
  else
    v4 = (unsigned __int16)(~(unsigned __int16)*(_DWORD *)(a2 + 184) & 0x1000) >> 12;
  if ( v4 )
    rimDoRimDevChange(a1, a2, 4);
  v5 = a2 + 120;
  if ( *(_QWORD *)v5 != v5 )
  {
    v7 = *(_QWORD *)v5;
    v8 = *(_QWORD **)(a2 + 128);
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || *v8 != v5 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *(_QWORD *)(a2 + 128) = a2 + 120;
    *(_QWORD *)v5 = v5;
  }
  if ( (*(_DWORD *)(a2 + 184) & 0x1000) != 0 )
  {
    RIMLockExclusive((__int64)&gObListLock);
    *(_DWORD *)(a2 + 200) |= 4u;
    qword_1C018EC88 = 0LL;
    ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( *(_BYTE *)(a2 + 48) == 2 )
    RIMRemoveHoldingFrame(a1, a2);
  return rimDereferenceDev(a2);
}
