/*
 * XREFs of ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00984A8
 * Callers:
 *     bDeleteBrush @ 0x1C0058800 (bDeleteBrush.c)
 * Callees:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C002CB3C (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     HmgShareLockCheck @ 0x1C0031F10 (HmgShareLockCheck.c)
 *     bDeleteSurface @ 0x1C003F890 (bDeleteSurface.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall BRUSH::vDeleteIcmDIBs(BRUSH *this)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  SURFACE *v3; // rax
  __int64 v4; // rbx

  v1 = *((_QWORD *)this + 12);
  KeAcquireGuardedMutex(ghfmMemory);
  if ( v1 )
  {
    do
    {
      v2 = *(_QWORD *)(v1 + 16);
      v3 = (SURFACE *)HmgShareLockCheck(*(_QWORD *)(v1 + 8), 5);
      v4 = (__int64)v3;
      if ( v3 )
      {
        SURFACE::vDec_cRef(v3);
        HmgDecrementShareReferenceCount(v4);
        bDeleteSurface(*(_QWORD *)(v1 + 8));
      }
      Win32FreePool(v1);
      v1 = v2;
    }
    while ( v2 );
  }
  KeReleaseGuardedMutex(ghfmMemory);
}
