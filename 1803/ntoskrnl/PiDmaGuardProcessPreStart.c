/*
 * XREFs of PiDmaGuardProcessPreStart @ 0x14014714C
 * Callers:
 *     PipProcessStartPhase1 @ 0x1405D5C5C (PipProcessStartPhase1.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     PiIommuUnblockDevice @ 0x14073BFA4 (PiIommuUnblockDevice.c)
 */

void __fastcall PiDmaGuardProcessPreStart(ULONG_PTR BugCheckParameter4)
{
  int v2; // eax
  ULONG_PTR v3; // rsi
  __int64 v4; // rax

  if ( PipDmaRemappingEnabled )
  {
    if ( *(_QWORD *)(BugCheckParameter4 + 720) )
    {
      v2 = PiIommuUnblockDevice();
      v3 = v2;
      if ( v2 < 0 )
      {
        IoAddTriageDumpDataBlock(BugCheckParameter4, 728LL);
        if ( *(_WORD *)(BugCheckParameter4 + 40) )
        {
          IoAddTriageDumpDataBlock(BugCheckParameter4 + 40, 2LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(BugCheckParameter4 + 48), *(unsigned __int16 *)(BugCheckParameter4 + 40));
        }
        if ( *(_WORD *)(BugCheckParameter4 + 56) )
        {
          IoAddTriageDumpDataBlock(BugCheckParameter4 + 56, 2LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(BugCheckParameter4 + 64), *(unsigned __int16 *)(BugCheckParameter4 + 56));
        }
        v4 = *(_QWORD *)(BugCheckParameter4 + 16);
        if ( v4 )
        {
          if ( *(_WORD *)(v4 + 56) )
          {
            IoAddTriageDumpDataBlock(v4 + 56, 2LL);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 16) + 64LL),
              *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter4 + 16) + 56LL));
          }
        }
        KeBugCheckEx(0xCAu, 0x13uLL, 0x1000uLL, v3, BugCheckParameter4);
      }
    }
  }
}
