/*
 * XREFs of ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00ED7C0
 * Callers:
 *     <none>
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     HmgIncrementShareReferenceCount @ 0x1C004C880 (HmgIncrementShareReferenceCount.c)
 *     HmgShareLockCheck @ 0x1C004D5B0 (HmgShareLockCheck.c)
 *     ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1C00ED890 (-hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z.c)
 */

__int64 __fastcall BRUSH::bAddIcmDIB(BRUSH *this, void *a2, struct HOBJ__ *a3)
{
  unsigned int v6; // edi
  __int64 v8; // rbx
  _QWORD *v9; // rsi

  v6 = 0;
  if ( BRUSH::hFindIcmDIB(this, a2) )
    return 0LL;
  v8 = HmgShareLockCheck(a3, 5);
  if ( v8 )
  {
    v9 = PALLOCMEM2(0x18uLL, 1818518087LL, 0);
    if ( v9 )
    {
      HmgIncrementShareReferenceCount((struct OBJECT *)v8);
      ++*(_DWORD *)(v8 + 168);
      *v9 = a2;
      v9[1] = a3;
      v9[2] = *((_QWORD *)this + 12);
      KeAcquireGuardedMutex(ghfmMemory);
      *((_QWORD *)this + 12) = v9;
      KeReleaseGuardedMutex(ghfmMemory);
      v6 = 1;
    }
    HmgDecrementShareReferenceCountEx((struct OBJECT *)v8, 0LL);
  }
  return v6;
}
