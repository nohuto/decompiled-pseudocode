/*
 * XREFs of NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C00B8180
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     BRUSHOBJ_ulGetBrushColor @ 0x1C00B8280 (BRUSHOBJ_ulGetBrushColor.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C00BA4E4 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiBRUSHOBJ_ulGetBrushColor(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v7; // rbx
  ULONG BrushColor; // esi
  __int64 v9; // r8
  ULONG64 v10; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  BrushColor = 0;
  v9 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(ThreadCurrentObj, a1);
  if ( v9 )
  {
    v10 = a1;
    if ( a1 >= MmUserProbeAddress )
      v10 = MmUserProbeAddress;
    if ( (*(_QWORD *)(v10 + 16) & 8) != 0 && (*(_DWORD *)(v9 + 128) & 0x10) != 0 )
      *(_DWORD *)(v9 + 16) |= 8u;
    BrushColor = BRUSHOBJ_ulGetBrushColor((BRUSHOBJ *)v9);
    *(_DWORD *)(a1 + 16) &= ~8u;
  }
  if ( v7 )
    --*((_DWORD *)v7 + 108);
  return BrushColor;
}
