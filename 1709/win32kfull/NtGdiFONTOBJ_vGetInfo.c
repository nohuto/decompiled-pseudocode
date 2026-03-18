/*
 * XREFs of NtGdiFONTOBJ_vGetInfo @ 0x1C028F990
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C00B9A64 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C0139BB0 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     FONTOBJ_vGetInfo @ 0x1C026FEB0 (FONTOBJ_vGetInfo.c)
 */

__int64 __fastcall NtGdiFONTOBJ_vGetInfo(__int64 a1, __int64 a2, char *a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v9; // rbx
  unsigned __int64 v11; // rax
  FONTOBJ *v12; // r15
  FONTINFO *v13; // rax
  FONTINFO *v14; // r14
  __int64 v15; // rdx

  v5 = (unsigned int)a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v9 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 3221225485LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  v11 = UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  v12 = (FONTOBJ *)v11;
  if ( v11 )
  {
    if ( (_DWORD)v5 )
    {
      if ( a3 )
      {
        if ( (unsigned int)v5 <= 0x2710000 )
        {
          v13 = (FONTINFO *)PALLOCMEM2((unsigned int)v5, 1886221639LL, 0);
          v14 = v13;
          if ( v13 )
          {
            memset(v13, 0, v5);
            FONTOBJ_vGetInfo(v12, v5, v13);
            bSafeCopyBits(a3, v14, v5);
            Win32FreePool(v14, v15);
          }
        }
      }
    }
  }
  if ( v9 )
    --*((_DWORD *)v9 + 108);
  return 0LL;
}
