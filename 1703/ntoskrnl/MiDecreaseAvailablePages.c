/*
 * XREFs of MiDecreaseAvailablePages @ 0x140075ABC
 * Callers:
 *     MiReplenishPageSlist @ 0x1400756C0 (MiReplenishPageSlist.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140138F10 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     MiUpdateAvailableEvents @ 0x1401548AC (MiUpdateAvailableEvents.c)
 *     MiObtainFreePages @ 0x140215244 (MiObtainFreePages.c)
 */

__int64 __fastcall MiDecreaseAvailablePages(__int64 a1, __int64 a2, unsigned __int64 a3, __int16 a4)
{
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  unsigned int v9; // ebx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  int v14; // ecx

  if ( a2 == 1 )
  {
    v7 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 5760));
    if ( v7 == *(_QWORD *)(a1 + 4840) || v7 == *(_QWORD *)(a1 + 4848) )
      MiUpdateAvailableEvents();
    v8 = v7 + 1;
  }
  else
  {
    v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5760), -a2);
    v11 = *(_QWORD *)(a1 + 4848);
    v7 = v8 - a2;
    if ( v8 - a2 <= v11 && v8 > v11 || (v12 = *(_QWORD *)(a1 + 4840), v7 <= v12) && v8 > v12 )
      MiUpdateAvailableEvents();
  }
  v9 = 0;
  if ( v7 <= 0x420 )
  {
    v13 = *(_QWORD *)(a1 + 5544);
    if ( !v13 || !*(_BYTE *)(v13 + 52) )
      MiObtainFreePages(a1);
    if ( v7 < 0xA0 && v8 >= 0xA0 && *(_DWORD *)(a1 + 1192) )
      KeSetEvent((PRKEVENT)(a1 + 1040), 0, 0);
  }
  if ( a3 != -1LL )
  {
    LOBYTE(v9) = v7 >= a3;
    return v9;
  }
  if ( v7 >= 0x9F )
    return 1;
  if ( (a4 & 0x800) != 0 )
    return 1;
  v14 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
  if ( (v14 & 0xC) == 8 )
    return 1;
  if ( v7 >= 0x20 || (ULONG_PTR *)a1 != &MiSystemPartition )
  {
    if ( (a4 & 4) == 0 && ((v14 & 2) == 0 || v7 < 0x21) )
      return (*(unsigned __int8 *)(a1 + 4) >> 4) & 1;
    return 1;
  }
  return v9;
}
