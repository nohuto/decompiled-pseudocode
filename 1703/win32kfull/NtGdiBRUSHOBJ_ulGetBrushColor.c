/*
 * XREFs of NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C009B400
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0096D7C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C0098174 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     BRUSHOBJ_ulGetBrushColor @ 0x1C009B500 (BRUSHOBJ_ulGetBrushColor.c)
 */

__int64 __fastcall NtGdiBRUSHOBJ_ulGetBrushColor(unsigned __int64 a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v4; // rbx
  ULONG BrushColor; // esi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  BrushColor = 0;
  v6 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v6 )
  {
    v7 = a1;
    if ( a1 >= W32UserProbeAddress )
      v7 = W32UserProbeAddress;
    if ( (*(_QWORD *)(v7 + 16) & 8) != 0 && (*(_DWORD *)(v6 + 128) & 0x10) != 0 )
      *(_DWORD *)(v6 + 16) |= 8u;
    BrushColor = BRUSHOBJ_ulGetBrushColor((BRUSHOBJ *)v6);
    *(_DWORD *)(a1 + 16) &= ~8u;
  }
  if ( v4 )
    --*((_DWORD *)v4 + 108);
  return BrushColor;
}
