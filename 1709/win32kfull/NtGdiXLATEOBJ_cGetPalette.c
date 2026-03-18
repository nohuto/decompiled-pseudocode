/*
 * XREFs of NtGdiXLATEOBJ_cGetPalette @ 0x1C0290690
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C00BA55C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C0139BB0 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     XLATEOBJ_cGetPalette @ 0x1C0297A60 (XLATEOBJ_cGetPalette.c)
 */

__int64 __fastcall NtGdiXLATEOBJ_cGetPalette(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  ULONG v6; // ebp
  ULONG v7; // r13d
  ULONG Palette; // edi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v11; // rbx
  XLATEOBJ *v12; // r14
  ULONG *v13; // rax
  ULONG *v14; // rsi
  __int64 v15; // rdx

  v6 = a3;
  v7 = a2;
  Palette = 0;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v11 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 108);
    v12 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, a1);
    if ( v12 )
    {
      if ( a4 )
      {
        if ( v6 <= 0x9C4000 )
        {
          v13 = (ULONG *)PALLOCMEM2(4 * v6, 1886221639LL, 0);
          v14 = v13;
          if ( v13 )
          {
            Palette = XLATEOBJ_cGetPalette(v12, v7, v6, v13);
            if ( Palette )
              Palette &= -((unsigned int)bSafeCopyBits(a4, v14, 4 * v6) != 0);
            Win32FreePool(v14, v15);
          }
        }
      }
    }
    if ( v11 )
      --*((_DWORD *)v11 + 108);
  }
  return Palette;
}
