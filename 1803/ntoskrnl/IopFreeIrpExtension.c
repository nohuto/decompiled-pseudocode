/*
 * XREFs of IopFreeIrpExtension @ 0x1400A4884
 * Callers:
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     IopFreeIrp @ 0x140106E60 (IopFreeIrp.c)
 *     IoCleanupIrp @ 0x14015B0F0 (IoCleanupIrp.c)
 *     IoSetActivityIdIrp @ 0x140162500 (IoSetActivityIdIrp.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x1401A59B0 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x140237D90 (IoClearFsTrackOffsetState.c)
 *     IopPerfCompleteRequest @ 0x1402381FC (IopPerfCompleteRequest.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x1400A4C7C (IopIrpHasExtensionType.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeIrpExtension(__int64 a1, int a2, char a3)
{
  char v3; // al
  __int64 v4; // r9
  char v5; // r10
  int v7; // eax

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
      if ( (unsigned __int8)IopIrpHasExtensionType(a1, 5LL) )
        *(_QWORD *)(v4 + 40) = 0LL;
      *(_WORD *)(v4 + 2) = 0;
      LOWORD(v7) = 0;
    }
    else
    {
      v7 = *(unsigned __int16 *)(v4 + 2) & ~(1 << a2);
      *(_WORD *)(v4 + 2) = v7;
      if ( a2 == 5 )
        *(_QWORD *)(v4 + 40) = 0LL;
    }
    if ( !(_WORD)v7 && (*(_BYTE *)(a1 + 71) & 0x40) != 0 )
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
