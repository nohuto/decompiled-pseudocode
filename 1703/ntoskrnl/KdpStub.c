/*
 * XREFs of KdpStub @ 0x14000822C
 * Callers:
 *     KdTrap @ 0x1400081F8 (KdTrap.c)
 * Callees:
 *     KdEnableDebugger @ 0x1401FB920 (KdEnableDebugger.c)
 *     KdpTrap @ 0x14078CF94 (KdpTrap.c)
 */

char __fastcall KdpStub(int a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  int v6; // edi
  int v7; // ebx
  __int64 v10; // r8
  int v11; // edx

  v6 = a4;
  v7 = a3;
  if ( *(_DWORD *)a3 == -2147483645
    && *(_DWORD *)(a3 + 24)
    && ((v10 = *(_QWORD *)(a3 + 32), (unsigned __int64)(v10 - 3) <= 2) || v10 == 1) )
  {
    ++*(_QWORD *)(a4 + 248);
    return 1;
  }
  else if ( !KdPitchDebugger
         && KdAutoEnableOnEvent
         && KdPreviouslyEnabled
         && !(_BYTE)KdDebuggerEnabled
         && KdEnableDebugger() >= 0
         && (_BYTE)KdDebuggerEnabled )
  {
    return KdpTrap(a1, v11, v7, v6, a5, a6);
  }
  else
  {
    return 0;
  }
}
