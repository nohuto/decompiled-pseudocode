/*
 * XREFs of _ForceFocusBasedMouseWheelRouting @ 0x1C01EF4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ForceFocusBasedMouseWheelRouting(__int64 a1)
{
  int v1; // ebx
  __int64 result; // rax
  int v3; // edx

  v1 = a1;
  result = PsGetCurrentProcessWin32Process(a1);
  v3 = 0;
  if ( result )
  {
    LOBYTE(v3) = v1 != 0;
    *(_DWORD *)(result + 776) = *(_DWORD *)(result + 776) & 0xFFFF7FFF | (v3 << 15);
    return 1LL;
  }
  return result;
}
