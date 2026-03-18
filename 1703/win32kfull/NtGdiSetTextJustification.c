/*
 * XREFs of NtGdiSetTextJustification @ 0x1C0298850
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiSetTextJustification(HDC a1, int a2, int a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  v5 = v8[0];
  v6 = 0;
  if ( v8[0] )
  {
    v6 = 1;
    *(_DWORD *)(*(_QWORD *)(v8[0] + 80LL) + 168LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v5 + 80) + 172LL) = a3;
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v8);
  return v6;
}
