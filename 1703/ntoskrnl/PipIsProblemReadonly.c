/*
 * XREFs of PipIsProblemReadonly @ 0x140696214
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14013220C (PnpRemoveLockedDeviceNode.c)
 *     PiProcessClearDeviceProblem @ 0x1406A6AB4 (PiProcessClearDeviceProblem.c)
 *     PiProcessSetDeviceProblem @ 0x1406A6D98 (PiProcessSetDeviceProblem.c)
 *     PiEventQueryRemoveNoFdo @ 0x1406AA2D0 (PiEventQueryRemoveNoFdo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PipIsProblemReadonly(__int64 a1, int a2)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 1:
    case 10:
    case 14:
    case 18:
    case 19:
    case 21:
    case 22:
    case 28:
    case 31:
    case 32:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 43:
    case 44:
    case 48:
    case 51:
    case 52:
    case 53:
      result = 0LL;
      break;
    case 3:
      result = (*(_DWORD *)(a1 + 396) >> 17) & 1;
      break;
    default:
      result = 1LL;
      break;
  }
  return result;
}
