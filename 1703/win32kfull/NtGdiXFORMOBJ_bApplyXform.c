/*
 * XREFs of NtGdiXFORMOBJ_bApplyXform @ 0x1C0293DA0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0096D7C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C00980FC (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C0134C50 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C0134C9C (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     XFORMOBJ_bApplyXform @ 0x1C029B110 (XFORMOBJ_bApplyXform.c)
 */

__int64 __fastcall NtGdiXFORMOBJ_bApplyXform(__int64 a1, ULONG a2, ULONG a3, char *a4, char *a5)
{
  unsigned int v5; // ebp
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v12; // rdi
  char *p_pvIn; // r14
  char *pvOut; // rbx
  char *v15; // rax
  XFORMOBJ *pxo; // [rsp+38h] [rbp-90h]
  char pvIn; // [rsp+40h] [rbp-88h] BYREF
  char v19; // [rsp+60h] [rbp-68h] BYREF

  v5 = 0;
  if ( a3 > 0x4E2000 )
    return 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v12 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 108);
    pxo = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)ThreadCurrentObj, a1);
    if ( !pxo || !a4 || !a5 || !a3 )
    {
LABEL_21:
      --*((_DWORD *)v12 + 108);
      return v5;
    }
    if ( a3 > 4 )
    {
      p_pvIn = (char *)PALLOCMEM2(8 * a3, 1886221639LL, 0);
      v15 = (char *)PALLOCMEM2(8 * a3, 1886221639LL, 0);
      pvOut = v15;
      if ( !p_pvIn || !v15 )
      {
LABEL_16:
        if ( a3 > 4 )
        {
          if ( p_pvIn )
            Win32FreePool(p_pvIn);
          if ( pvOut )
            Win32FreePool(pvOut);
        }
        goto LABEL_21;
      }
    }
    else
    {
      p_pvIn = &pvIn;
      pvOut = &v19;
    }
    if ( (unsigned int)bSafeReadBits(p_pvIn, a4, 8 * a3)
      && XFORMOBJ_bApplyXform(pxo, a2, a3, p_pvIn, pvOut)
      && (unsigned int)bSafeCopyBits(a5, pvOut, 8 * a3) )
    {
      v5 = 1;
    }
    goto LABEL_16;
  }
  return v5;
}
