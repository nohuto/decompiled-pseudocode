/*
 * XREFs of PnpQueryRemoveLockedDeviceNode @ 0x140727C3C
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x1405C9A7C (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     PipSetDevNodeState @ 0x140146914 (PipSetDevNodeState.c)
 *     IopRemoveDevice @ 0x1405C8B00 (IopRemoveDevice.c)
 *     PipClearDevNodeUserFlags @ 0x1405D48DC (PipClearDevNodeUserFlags.c)
 *     PipSetDevNodeUserFlags @ 0x14060509C (PipSetDevNodeUserFlags.c)
 *     PiIrpQueryRemoveDevice @ 0x14073A3B0 (PiIrpQueryRemoveDevice.c)
 */

__int64 __fastcall PnpQueryRemoveLockedDeviceNode(__int64 a1, int a2, _DWORD *a3, UNICODE_STRING *a4)
{
  struct _DEVICE_OBJECT *v8; // r14
  int v9; // eax
  unsigned int v10; // edi
  __int64 result; // rax

  switch ( *(_DWORD *)(a1 + 300) )
  {
    case 0x303:
    case 0x304:
    case 0x306:
    case 0x307:
    case 0x308:
      PipSetDevNodeUserFlags(a1, 512);
      v8 = *(struct _DEVICE_OBJECT **)(a1 + 32);
      v9 = PiIrpQueryRemoveDevice(v8);
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
