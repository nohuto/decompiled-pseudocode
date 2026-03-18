/*
 * XREFs of PipDmgRequestRestartOnBlockedDevice @ 0x1406C3200
 * Callers:
 *     PipDmgConsoleUnlockCallback @ 0x1406C3110 (PipDmgConsoleUnlockCallback.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400FF444 (PnpRequestDeviceAction.c)
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall PipDmgRequestRestartOnBlockedDevice(_QWORD *Object)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  _WORD *v5; // rcx
  __int64 v6; // rcx
  unsigned __int16 *v7; // rdi
  _WORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx

  if ( !Object )
    goto LABEL_18;
  v2 = *(_QWORD *)(Object[39] + 40LL);
  if ( !v2 || (*(_DWORD *)(v2 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((int)Object, *((unsigned __int16 *)Object + 1));
    v4 = Object[1];
    if ( v4 )
    {
      IoAddTriageDumpDataBlock(v4, *(__int16 *)(v4 + 2));
      v5 = (_WORD *)(Object[1] + 56LL);
      if ( *v5 )
      {
        IoAddTriageDumpDataBlock((int)v5, 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(Object[1] + 64LL), *(unsigned __int16 *)(Object[1] + 56LL));
      }
    }
    v6 = *(_QWORD *)(Object[39] + 40LL);
    if ( v6 )
    {
      v7 = (unsigned __int16 *)(v6 + 40);
      IoAddTriageDumpDataBlock(v6, 728);
      if ( *v7 )
      {
        IoAddTriageDumpDataBlock((int)v7, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v7 + 1), *v7);
      }
      v8 = (_WORD *)(*(_QWORD *)(Object[39] + 40LL) + 56LL);
      if ( *v8 )
      {
        IoAddTriageDumpDataBlock((int)v8, 2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(Object[39] + 40LL) + 56LL));
      }
      v9 = *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 16LL);
      if ( v9 && *(_WORD *)(v9 + 56) )
      {
        IoAddTriageDumpDataBlock(v9 + 56, 2);
        v10 = *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v10 + 64), *(unsigned __int16 *)(v10 + 56));
      }
    }
LABEL_18:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)Object, 0LL, 0LL);
  }
  result = PnpRequestDeviceAction(Object, 25, 1, 0LL, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
    return PnpRequestDeviceAction(Object, 16, 0, 0LL, 0LL, 0LL, 0LL);
  return result;
}
