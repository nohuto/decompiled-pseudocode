/*
 * XREFs of ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C0044878
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00449B0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C00442A4 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     PATHOBJ_bEnum @ 0x1C009F7D0 (PATHOBJ_bEnum.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall RGNMEMOBJ::bFastFillWrapper(RGNMEMOBJ *this, struct EPATHOBJ *a2)
{
  unsigned int v4; // esi
  ULONG v5; // r8d
  POINTFIX *pptfx; // r9
  ULONG count; // edi
  __int64 v8; // rcx
  BOOL v10; // eax
  unsigned int v11; // ecx
  BOOL v12; // r12d
  ULONG v13; // r14d
  PATHDATA ppd; // [rsp+20h] [rbp-E0h] BYREF
  struct _POINTFIX v15[40]; // [rsp+30h] [rbp-D0h] BYREF

  *(_DWORD *)a2 &= ~8u;
  v4 = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 1) + 80LL) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 32LL);
  if ( PATHOBJ_bEnum((PATHOBJ *)a2, &ppd) )
  {
    if ( (ppd.flags & 2) == 0 && *((_DWORD *)a2 + 1) <= 0x28u )
    {
      count = ppd.count;
      if ( ppd.count > 0x28 )
        count = 40;
      memmove(v15, ppd.pptfx, 8LL * count);
      while ( 1 )
      {
        v10 = PATHOBJ_bEnum((PATHOBJ *)a2, &ppd);
        v11 = -1;
        v12 = v10;
        v13 = ppd.count + count;
        if ( ppd.count + count >= count )
          v11 = ppd.count + count;
        if ( (ppd.flags & 1) != 0 || v11 > 0x28 || v13 < count )
          break;
        memmove(&v15[count], ppd.pptfx, 8LL * ppd.count);
        count = v13;
        if ( !v12 )
        {
          pptfx = v15;
          v5 = v13;
          goto LABEL_7;
        }
      }
    }
  }
  else
  {
    v5 = ppd.count;
    if ( ppd.count <= 1 )
    {
      v4 = 1;
    }
    else
    {
      pptfx = ppd.pptfx;
LABEL_7:
      v4 = RGNMEMOBJ::bFastFill(this, a2, v5, pptfx);
    }
  }
  v8 = *((_QWORD *)a2 + 1);
  *(_DWORD *)a2 &= ~8u;
  *(_QWORD *)(v8 + 80) = *(_QWORD *)(v8 + 32);
  return v4;
}
