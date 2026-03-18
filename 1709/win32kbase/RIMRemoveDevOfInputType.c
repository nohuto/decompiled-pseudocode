/*
 * XREFs of RIMRemoveDevOfInputType @ 0x1C000C5D4
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C0008F10 (RIMRemoveInputOfType.c)
 * Callees:
 *     rimOnPnpRemoveComplete @ 0x1C000BEE8 (rimOnPnpRemoveComplete.c)
 *     RIMFreeSpecificDev @ 0x1C000C69C (RIMFreeSpecificDev.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C000C718 (rimResetPnpRemovePendingStateBits.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0018F24 (RimDeviceTypeToRimInputType.c)
 *     rimDoRimDevChange @ 0x1C001AEAC (rimDoRimDevChange.c)
 */

__int64 __fastcall RIMRemoveDevOfInputType(__int64 a1, int a2)
{
  __int64 *v3; // rbp
  __int64 *v5; // rdi
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rbx

  v3 = (__int64 *)(a1 + 552);
  while ( 1 )
  {
    v5 = v3;
    if ( !*v3 )
      break;
    while ( 1 )
    {
      if ( ((unsigned int)RimDeviceTypeToRimInputType(*v5, *(unsigned __int8 *)(*v5 + 48)) & a2) != 0 )
      {
        v7 = *(_DWORD *)(v6 + 184);
        if ( (v7 & 0x1000) == 0 )
          break;
      }
      v5 = (__int64 *)(v6 + 40);
      if ( !*(_QWORD *)(v6 + 40) )
        return 0LL;
    }
    *(_DWORD *)(v6 + 184) = v7 | 8;
    rimOnPnpRemoveComplete(a1, *v5);
    v8 = *v5;
    *v5 = *(_QWORD *)(*v5 + 40);
    *(_QWORD *)(v8 + 40) = 0LL;
    rimResetPnpRemovePendingStateBits(v8);
    rimDoRimDevChange(a1, v8, 3LL);
    RIMFreeSpecificDev(a1, v8);
  }
  return 0LL;
}
