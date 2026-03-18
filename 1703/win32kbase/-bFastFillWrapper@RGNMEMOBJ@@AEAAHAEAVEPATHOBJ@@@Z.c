/*
 * XREFs of ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C003B888
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C003B9A0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C003B294 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     PATHOBJ_bEnum @ 0x1C0097A80 (PATHOBJ_bEnum.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall RGNMEMOBJ::bFastFillWrapper(RGNMEMOBJ *this, struct EPATHOBJ *a2)
{
  unsigned int v4; // edi
  ULONG v5; // r8d
  POINTFIX *pptfx; // r9
  ULONG count; // esi
  __int64 v8; // rcx
  BOOL v10; // r12d
  ULONG v11; // r14d
  unsigned int v12; // ecx
  int v13; // edx
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
        v11 = ppd.count + count;
        if ( ppd.count + count < count )
        {
          v12 = -1;
          v13 = -2147024362;
        }
        else
        {
          v12 = ppd.count + count;
          v13 = 0;
        }
        if ( (ppd.flags & 1) != 0 || v12 > 0x28 || v13 < 0 )
          break;
        memmove(&v15[count], ppd.pptfx, 8LL * ppd.count);
        count = v11;
        if ( !v10 )
        {
          pptfx = v15;
          v5 = v11;
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
