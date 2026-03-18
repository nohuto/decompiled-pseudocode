/*
 * XREFs of _ForceFocusBasedMouseWheelRouting @ 0x1C01E3490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ForceFocusBasedMouseWheelRouting(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax
  int v4; // edx

  v2 = a1;
  result = PsGetCurrentProcessWin32Process(a1, a2);
  v4 = 0;
  if ( result )
  {
    LOBYTE(v4) = v2 != 0;
    *(_DWORD *)(result + 768) = *(_DWORD *)(result + 768) & 0xFFFF7FFF | (v4 << 15);
    return 1LL;
  }
  return result;
}
