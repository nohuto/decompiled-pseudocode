/*
 * XREFs of PnpQueryRemoveLockedDeviceNode @ 0x14055EA44
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x14055D620 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400DE270 (RtlAppendUnicodeStringToString.c)
 *     PipSetDevNodeState @ 0x1400E0004 (PipSetDevNodeState.c)
 *     PipClearDevNodeUserFlags @ 0x140552DC0 (PipClearDevNodeUserFlags.c)
 *     IopRemoveDevice @ 0x14055E2F8 (IopRemoveDevice.c)
 *     PipSetDevNodeUserFlags @ 0x14055E900 (PipSetDevNodeUserFlags.c)
 *     PiIrpQueryRemoveDevice @ 0x14055E96C (PiIrpQueryRemoveDevice.c)
 */

__int64 __fastcall PnpQueryRemoveLockedDeviceNode(__int64 a1, int a2, _DWORD *a3, UNICODE_STRING *a4)
{
  struct _DEVICE_OBJECT *v8; // r14
  int v9; // eax
  unsigned int v10; // edi
  __int64 result; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  switch ( *(_DWORD *)(a1 + 300) )
  {
    case 0x303:
    case 0x304:
    case 0x306:
    case 0x307:
    case 0x308:
      PipSetDevNodeUserFlags(a1, 512);
      v8 = *(struct _DEVICE_OBJECT **)(a1 + 32);
      v12 = 0LL;
      v9 = PiIrpQueryRemoveDevice(v8, &v12);
      v10 = v9;
      if ( v9 < 0 )
      {
        if ( a2 == 54 && v9 == -1073740537 )
        {
          PipSetDevNodeState(a1, 784);
          *(_DWORD *)(a1 + 704) |= 2u;
        }
        else
        {
          IopRemoveDevice(v8, 3);
          *a3 = 6;
          RtlCopyUnicodeString(a4, (PCUNICODE_STRING)(a1 + 40));
          if ( v12 && a4->MaximumLength - a4->Length >= *(unsigned __int16 *)(v12 + 56) + 4 )
            RtlAppendUnicodeStringToString(a4, (PCUNICODE_STRING)(v12 + 56));
        }
      }
      else
      {
        PipSetDevNodeState(a1, 784);
        if ( a2 == 54 && (*(_DWORD *)(a1 + 704) & 2) != 0 )
          v10 = -1073740537;
      }
      PipClearDevNodeUserFlags(a1, 512);
      result = v10;
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}
