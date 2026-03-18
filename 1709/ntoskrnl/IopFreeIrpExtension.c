/*
 * XREFs of IopFreeIrpExtension @ 0x140117B28
 * Callers:
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     IopFreeIrp @ 0x1400853D0 (IopFreeIrp.c)
 *     IoSetActivityIdIrp @ 0x14014A2C0 (IoSetActivityIdIrp.c)
 *     IoCleanupIrp @ 0x14014DD00 (IoCleanupIrp.c)
 *     IoClearFsTrackOffsetState @ 0x1401FAFF0 (IoClearFsTrackOffsetState.c)
 *     IopPerfCompleteRequest @ 0x1401FB4C4 (IopPerfCompleteRequest.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x140117EC8 (IopIrpHasExtensionType.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeIrpExtension(__int64 a1, int a2, __int64 a3)
{
  char v3; // al
  __int64 v4; // r9
  char v5; // r10

  v3 = *(_BYTE *)(a1 + 71);
  v4 = *(_QWORD *)(a1 + 200);
  v5 = a3;
  if ( v3 < 0 )
  {
    *(_QWORD *)(a1 + 200) = 0LL;
    *(_BYTE *)(a1 + 71) = v3 & 0x7F;
  }
  else if ( v4 )
  {
    if ( a2 == -1 )
    {
      if ( (unsigned __int8)IopIrpHasExtensionType(a1, 5LL, a3, v4) )
        *(_QWORD *)(v4 + 40) = 0LL;
      *(_WORD *)(v4 + 2) = 0;
    }
    else
    {
      *(_WORD *)(v4 + 2) &= ~(1 << a2);
      if ( a2 == 5 )
        *(_QWORD *)(v4 + 40) = 0LL;
    }
    if ( !*(_WORD *)(v4 + 2) && (*(_BYTE *)(a1 + 71) & 0x40) != 0 )
    {
      if ( v5 )
      {
        ExFreePoolWithTag((PVOID)v4, 0x58707249u);
        *(_BYTE *)(a1 + 71) &= ~0x40u;
        *(_QWORD *)(a1 + 200) = 0LL;
      }
    }
  }
}
