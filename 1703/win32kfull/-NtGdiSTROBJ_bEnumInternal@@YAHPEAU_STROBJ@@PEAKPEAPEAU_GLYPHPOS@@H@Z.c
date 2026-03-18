/*
 * XREFs of ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C0290574
 * Callers:
 *     NtGdiSTROBJ_bEnum @ 0x1C0293AB0 (NtGdiSTROBJ_bEnum.c)
 *     NtGdiSTROBJ_bEnumPositionsOnly @ 0x1C0293AC0 (NtGdiSTROBJ_bEnumPositionsOnly.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0096D7C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C0097304 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0097368 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     STROBJ_bEnum @ 0x1C00DF3C0 (STROBJ_bEnum.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     STROBJ_bEnumPositionsOnly @ 0x1C029AFB0 (STROBJ_bEnumPositionsOnly.c)
 */

__int64 __fastcall NtGdiSTROBJ_bEnumInternal(struct _STROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3, int a4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v10; // rbx
  STROBJ *v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rdi
  struct _GLYPHPOS *v15; // rax
  struct _GLYPHPOS *v16; // r14
  GLYPHDEF **p_pgdf; // rax
  __int64 v18; // rcx
  ULONG pc; // [rsp+20h] [rbp-48h] BYREF
  PGLYPHPOS ppgpos; // [rsp+28h] [rbp-40h] BYREF
  struct _GLYPHPOS *v22; // [rsp+30h] [rbp-38h]
  struct UMPDOBJ *v23; // [rsp+38h] [rbp-30h]
  struct UMPDOBJ *v24; // [rsp+40h] [rbp-28h]

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  v23 = ThreadCurrentObj;
  v24 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0xFFFFFFFFLL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  v11 = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)ThreadCurrentObj, (__int64)a1);
  if ( !v11
    || (!a4 ? (v12 = STROBJ_bEnum(v11, &pc, &ppgpos)) : (v12 = STROBJ_bEnumPositionsOnly(v11, &pc, &ppgpos)),
        (v13 = v12, v12 == -1)
     || (v14 = pc, pc > 0x1A0AAA)
     || (v15 = (struct _GLYPHPOS *)UMPDOBJ::_AllocUserMem(v10, 24 * pc, 0), v16 = v15, (v22 = v15) == 0LL)) )
  {
    if ( v10 )
      --*((_DWORD *)v10 + 108);
    return 0xFFFFFFFFLL;
  }
  memmove(v15, ppgpos, 24 * v14);
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (struct _GLYPHPOS **)W32UserProbeAddress;
  *a3 = v22;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (unsigned int *)W32UserProbeAddress;
  *a2 = v14;
  if ( (_DWORD)v14 )
  {
    p_pgdf = &v16->pgdf;
    v18 = (unsigned int)v14;
    do
    {
      *p_pgdf = 0LL;
      p_pgdf += 3;
      --v18;
    }
    while ( v18 );
  }
  if ( v10 )
    --*((_DWORD *)v10 + 108);
  return v13;
}
