/*
 * XREFs of NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C028D330
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C00BA4E4 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C0249194 (-BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 */

PVOID __fastcall NtGdiBRUSHOBJ_pvGetRbrush(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v7; // rbx
  struct _BRUSHOBJ *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  PVOID result; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  if ( ThreadCurrentObj
    && (++*((_DWORD *)ThreadCurrentObj + 108),
        (v8 = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, a1)) != 0LL) )
  {
    result = BRUSHOBJ_pvGetRbrushUMPD(v8, v9, v10, v11);
  }
  else
  {
    result = 0LL;
  }
  if ( v7 )
    --*((_DWORD *)v7 + 108);
  return result;
}
