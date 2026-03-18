/*
 * XREFs of ?ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z @ 0x1C0270240
 * Callers:
 *     ?UMPDDrvStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0287710 (-UMPDDrvStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUS.c)
 *     ?UMPDDrvStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02879F0 (-UMPDDrvStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@P.c)
 * Callees:
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00B98AC (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00B99CC (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 */

__int64 __fastcall UMPDOBJ::ThunkLINEATTRS(UMPDOBJ *this, struct _LINEATTRS **a2, __int64 a3, __int64 a4)
{
  char *v6; // rcx
  int v8; // esi
  unsigned int v9; // esi
  __int64 v10; // r9
  char *KernelPtr; // rax
  void *v12; // [rsp+38h] [rbp+10h] BYREF

  v6 = (char *)*a2;
  if ( !*a2 )
    return 1LL;
  v8 = *((_DWORD *)v6 + 5);
  v12 = (void *)*((_QWORD *)v6 + 3);
  v9 = 4 * v8;
  if ( (unsigned int)UMPDOBJ::ThunkMemBlock(this, (const void **)a2, 0x28u, a4)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(this, (const void **)&v12, v9, v10) )
  {
    KernelPtr = UMPDOBJ::GetKernelPtr(this, (char *)*a2);
    *((_QWORD *)KernelPtr + 3) = v12;
    return 1LL;
  }
  return 0LL;
}
