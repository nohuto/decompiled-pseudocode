/*
 * XREFs of NtGdiSetVirtualResolution @ 0x1C010B340
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiSetVirtualResolution(HDC a1, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // ebx
  int v9; // edi
  __int64 v10; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  if ( a2 )
  {
    if ( !a3 )
      return v5;
    if ( !a4 )
      return v5;
    v9 = a5;
    if ( !a5 )
      return v5;
  }
  else
  {
    if ( a3 )
      return v5;
    if ( a4 )
      return v5;
    v9 = a5;
    if ( a5 )
      return v5;
  }
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  v10 = v12[0];
  if ( v12[0] )
  {
    v5 = 1;
    *(_DWORD *)(*(_QWORD *)(v12[0] + 80LL) + 356LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v10 + 80) + 360LL) = a3;
    *(_DWORD *)(*(_QWORD *)(v10 + 80) + 364LL) = a4;
    *(_DWORD *)(*(_QWORD *)(v10 + 80) + 368LL) = v9;
    XDCOBJ::vUnlockFast((XDCOBJ *)v12);
  }
  return v5;
}
