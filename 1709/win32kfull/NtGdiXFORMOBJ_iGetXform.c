/*
 * XREFs of NtGdiXFORMOBJ_iGetXform @ 0x1C00B82B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     XFORMOBJ_iGetXform @ 0x1C00B8450 (XFORMOBJ_iGetXform.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C00BA46C (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiXFORMOBJ_iGetXform(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG64 v4; // rsi
  ULONG Xform; // r14d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v9; // rbx
  XFORMOBJ *v10; // rax
  __int128 v12; // [rsp+28h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]

  v4 = a2;
  Xform = -1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v9 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0xFFFFFFFFLL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  v10 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>(ThreadCurrentObj, a1);
  if ( v10 )
  {
    Xform = XFORMOBJ_iGetXform(v10, (XFORML *)((unsigned __int64)&v12 & -(__int64)(v4 != 0)));
    if ( Xform != -1 )
    {
      if ( v4 )
      {
        if ( v4 >= MmUserProbeAddress )
          v4 = MmUserProbeAddress;
        *(_OWORD *)v4 = v12;
        *(_QWORD *)(v4 + 16) = v13;
      }
    }
  }
  if ( v9 )
    --*((_DWORD *)v9 + 108);
  return Xform;
}
