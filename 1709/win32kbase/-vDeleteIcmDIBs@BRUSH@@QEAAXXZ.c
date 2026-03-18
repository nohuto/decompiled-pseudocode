/*
 * XREFs of ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00A2590
 * Callers:
 *     bDeleteBrush @ 0x1C0062D60 (bDeleteBrush.c)
 * Callees:
 *     bDeleteSurface @ 0x1C001F690 (bDeleteSurface.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     HmgShareLockCheck @ 0x1C004D5B0 (HmgShareLockCheck.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C00DB3A0 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 */

void __fastcall BRUSH::vDeleteIcmDIBs(BRUSH *this)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  SURFACE *v3; // rax
  struct OBJECT *v4; // rbx

  v1 = *((_QWORD *)this + 12);
  KeAcquireGuardedMutex(ghfmMemory);
  if ( v1 )
  {
    do
    {
      v2 = *(_QWORD *)(v1 + 16);
      v3 = (SURFACE *)HmgShareLockCheck(*(struct HOBJ__ **)(v1 + 8), 5);
      v4 = v3;
      if ( v3 )
      {
        SURFACE::vDec_cRef(v3);
        HmgDecrementShareReferenceCountEx(v4, 0LL);
        bDeleteSurface(*(struct HOBJ__ **)(v1 + 8));
      }
      Win32FreePool(v1);
      v1 = v2;
    }
    while ( v2 );
  }
  KeReleaseGuardedMutex(ghfmMemory);
}
