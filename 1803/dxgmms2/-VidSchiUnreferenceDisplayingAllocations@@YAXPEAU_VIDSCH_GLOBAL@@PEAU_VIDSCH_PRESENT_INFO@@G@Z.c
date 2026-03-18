/*
 * XREFs of ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C001454C
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0005D0C (VidSchiSetFlipDevice.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C001451C (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00103BC (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiSignalFlipEvents @ 0x1C0014694 (VidSchiSignalFlipEvents.c)
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C0014798 (VidSchiUpdateFlipDeviceStatus.c)
 */

void __fastcall VidSchiUnreferenceDisplayingAllocations(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        unsigned __int16 a3)
{
  int v4; // ebp
  char v5; // r13
  int v6; // r14d
  char v7; // cl
  int v9; // eax
  char v10; // r15
  __int64 v11; // r12
  unsigned int v12; // r15d
  __int64 v13; // rbx
  unsigned int updated; // eax
  char v15; // [rsp+20h] [rbp-48h]

  if ( a3 )
  {
    LOWORD(v4) = a3;
    v5 = 0;
    LOWORD(v6) = 0;
    do
    {
      v7 = -1;
      if ( _BitScanForward((unsigned int *)&v9, (unsigned __int16)v4) )
        v7 = v9;
      v10 = v7;
      v15 = v7;
      if ( *((_WORD *)a2 + 14001) )
      {
        v11 = (__int64)v7 << 6;
        v12 = 0;
        do
        {
          v13 = v12;
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)a2 + 5 * v11 + 5 * v12 + 301) + 16LL)
                                                          + 8LL));
          VidSchiCheckPendingDeviceCommand(*((_QWORD **)a2 + 2));
          *((_QWORD *)a2 + 5 * v11 + 5 * v12 + 301) = 0LL;
          *((_WORD *)a2 + 20 * v11 + 20 * v12 + 1216) = 0;
          *((_QWORD *)a2 + 5 * v11 + 5 * v12++ + 303) = 0LL;
          *((_QWORD *)a2 + 5 * v11 + 5 * v13 + 300) = 0LL;
        }
        while ( v12 < *((unsigned __int16 *)a2 + 14001) );
        v10 = v15;
        v5 = 1;
      }
      v4 = (unsigned __int16)v4 & ~(1 << v10);
      v6 = (unsigned __int16)v6 | (1 << v10);
      *((_WORD *)a2 + 14000) &= ~(1 << v10);
    }
    while ( (_WORD)v4 );
    if ( v5 )
    {
      updated = VidSchiUpdateFlipDeviceStatus(a2);
      VidSchiSignalFlipEvents(a2, updated, a3);
      *((_WORD *)a2 + 14002) &= ~(_WORD)v6;
    }
  }
}
