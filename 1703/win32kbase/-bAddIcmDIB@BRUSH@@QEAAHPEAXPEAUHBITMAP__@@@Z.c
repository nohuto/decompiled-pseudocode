/*
 * XREFs of ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00E80E0
 * Callers:
 *     <none>
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     HmgShareLockCheck @ 0x1C0031F10 (HmgShareLockCheck.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00367D0 (HmgIncrementShareReferenceCount.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1C00E81B0 (-hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z.c)
 */

__int64 __fastcall BRUSH::bAddIcmDIB(BRUSH *this, void *a2, HBITMAP a3)
{
  unsigned int v6; // edi
  __int64 v8; // rbx
  _QWORD *v9; // rsi

  v6 = 0;
  if ( BRUSH::hFindIcmDIB(this, a2) )
    return 0LL;
  v8 = HmgShareLockCheck((unsigned int)a3, 5);
  if ( v8 )
  {
    v9 = PALLOCMEM2(0x18uLL, 1818518087LL, 0);
    if ( v9 )
    {
      HmgIncrementShareReferenceCount((struct _BASEOBJECT *)v8);
      ++*(_DWORD *)(v8 + 168);
      *v9 = a2;
      v9[1] = a3;
      v9[2] = *((_QWORD *)this + 12);
      KeAcquireGuardedMutex(ghfmMemory);
      *((_QWORD *)this + 12) = v9;
      KeReleaseGuardedMutex(ghfmMemory);
      v6 = 1;
    }
    HmgDecrementShareReferenceCount(v8);
  }
  return v6;
}
