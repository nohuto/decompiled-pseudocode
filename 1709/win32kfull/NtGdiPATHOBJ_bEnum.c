/*
 * XREFs of NtGdiPATHOBJ_bEnum @ 0x1C028FBA0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00B9754 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C028CAB8 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiPATHOBJ_bEnum(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PATHDATA *v4; // r14
  unsigned int v6; // edi
  POINTFIX *v7; // rsi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v10; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  POINTFIX *v14; // rax
  PATHDATA ppd; // [rsp+20h] [rbp-38h] BYREF

  v4 = (PATHDATA *)a2;
  *(_QWORD *)&ppd.flags = 0LL;
  ppd.pptfx = 0LL;
  v6 = 0;
  v7 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  v12 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v12 )
  {
    if ( (*((_DWORD *)v10 + 103) & 0x100) == 0 || *(_QWORD *)(v12 + 8) )
    {
      v6 = PATHOBJ_bEnum((PATHOBJ *)v12, &ppd);
    }
    else if ( gfUMPDDebug )
    {
      DbgPrint("windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnum:ppath == NULL.\n", 3866);
    }
    if ( ppd.count > 0x4E2000 )
    {
      --*((_DWORD *)v10 + 108);
      return 0LL;
    }
    v14 = (POINTFIX *)UMPDOBJ::_AllocUserMem(v10, 8 * ppd.count, 0LL, v13);
    v7 = v14;
    if ( v14 )
    {
      memmove(v14, ppd.pptfx, 8LL * ppd.count);
      ppd.pptfx = v7;
    }
    else
    {
      v6 = 0;
    }
  }
  if ( !v7 )
  {
    *(_QWORD *)&ppd.flags = 0LL;
    ppd.pptfx = 0LL;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (PATHDATA *)MmUserProbeAddress;
  *v4 = ppd;
  if ( v10 )
    --*((_DWORD *)v10 + 108);
  return v6;
}
