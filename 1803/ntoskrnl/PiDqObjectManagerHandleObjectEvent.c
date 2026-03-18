/*
 * XREFs of PiDqObjectManagerHandleObjectEvent @ 0x1405E0490
 * Callers:
 *     PiPnpRtlObjectEventDispatch @ 0x140509CE4 (PiPnpRtlObjectEventDispatch.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     PiDqObjectActionQueueEntryCreate @ 0x1405E05D4 (PiDqObjectActionQueueEntryCreate.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x14072A89C (PiDqDeleteUserObjectFromLoadedHives.c)
 */

void __fastcall PiDqObjectManagerHandleObjectEvent(__int64 a1, __int64 a2)
{
  int v2; // esi
  char v3; // bp
  int v6; // ecx
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  _QWORD *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0;
  if ( (*(_DWORD *)(a2 + 4) & 2) != 0 )
    PiDqDeleteUserObjectFromLoadedHives(
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL),
      *(unsigned int *)(*(_QWORD *)(a2 + 8) + 28LL));
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 104));
  v6 = *(_DWORD *)(a1 + 228);
  if ( (v6 & 2) == 0 && *(_QWORD *)(a1 + 192) != a1 + 192 )
  {
    v2 = PiDqObjectActionQueueEntryCreate(a2, &v9);
    if ( v2 < 0 )
    {
      *(_DWORD *)(a1 + 228) |= 2u;
    }
    else
    {
      v7 = *(_QWORD **)(a1 + 216);
      if ( *v7 != a1 + 208 )
        __fastfail(3u);
      v8 = v9;
      *v9 = a1 + 208;
      v8[1] = v7;
      *v7 = v8;
      *(_QWORD *)(a1 + 216) = v8;
    }
    v6 = *(_DWORD *)(a1 + 228);
  }
  if ( (v6 & 1) == 0 && (*(_QWORD *)(a1 + 208) != a1 + 208 || v2 < 0) )
  {
    v3 = 1;
    *(_DWORD *)(a1 + 228) = v6 | 1;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 104));
  if ( v3 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 160), NormalWorkQueue);
}
