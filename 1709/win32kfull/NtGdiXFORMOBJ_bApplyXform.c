/*
 * XREFs of NtGdiXFORMOBJ_bApplyXform @ 0x1C02904E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C00BA46C (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C0139BB0 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C0139BFC (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     XFORMOBJ_bApplyXform @ 0x1C0297870 (XFORMOBJ_bApplyXform.c)
 */

__int64 __fastcall NtGdiXFORMOBJ_bApplyXform(__int64 a1, __int64 a2, __int64 a3, char *a4, char *a5)
{
  unsigned int v5; // r14d
  ULONG v7; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v12; // rdi
  XFORMOBJ *v13; // r12
  char *p_pvIn; // rbp
  char *pvOut; // rbx
  char *v16; // rax
  __int64 v17; // rdx
  ULONG iMode; // [rsp+30h] [rbp-98h]
  char pvIn; // [rsp+40h] [rbp-88h] BYREF
  char v20; // [rsp+60h] [rbp-68h] BYREF

  v5 = 0;
  iMode = a2;
  v7 = a3;
  if ( (unsigned int)a3 > 0x4E2000 )
    return 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v12 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 108);
    v13 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)ThreadCurrentObj, a1);
    if ( !v13 || !a4 || !a5 || !v7 )
    {
LABEL_21:
      if ( v12 )
        --*((_DWORD *)v12 + 108);
      return v5;
    }
    if ( v7 > 4 )
    {
      p_pvIn = (char *)PALLOCMEM2(8 * v7, 1886221639LL, 0);
      v16 = (char *)PALLOCMEM2(8 * v7, 1886221639LL, 0);
      pvOut = v16;
      if ( !p_pvIn || !v16 )
      {
LABEL_16:
        if ( v7 > 4 )
        {
          if ( p_pvIn )
            Win32FreePool(p_pvIn, v17);
          if ( pvOut )
            Win32FreePool(pvOut, v17);
        }
        goto LABEL_21;
      }
    }
    else
    {
      p_pvIn = &pvIn;
      pvOut = &v20;
    }
    if ( (unsigned int)bSafeReadBits(p_pvIn, a4, 8 * v7)
      && XFORMOBJ_bApplyXform(v13, iMode, v7, p_pvIn, pvOut)
      && (unsigned int)bSafeCopyBits(a5, pvOut, 8 * v7) )
    {
      v5 = 1;
    }
    goto LABEL_16;
  }
  return v5;
}
