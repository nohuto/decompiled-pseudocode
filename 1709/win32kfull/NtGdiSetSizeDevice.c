/*
 * XREFs of NtGdiSetSizeDevice @ 0x1C010E5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiSetSizeDevice(HDC a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v8, a1);
      v6 = v8[0];
      if ( v8[0] )
      {
        v3 = 1;
        *(_DWORD *)(*(_QWORD *)(v8[0] + 80LL) + 372LL) = a2;
        *(_DWORD *)(*(_QWORD *)(v6 + 80) + 376LL) = a3;
        XDCOBJ::vUnlockFast((XDCOBJ *)v8);
      }
    }
  }
  return v3;
}
