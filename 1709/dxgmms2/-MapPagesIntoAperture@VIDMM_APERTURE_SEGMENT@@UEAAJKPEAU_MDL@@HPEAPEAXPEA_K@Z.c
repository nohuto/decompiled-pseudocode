/*
 * XREFs of ?MapPagesIntoAperture@VIDMM_APERTURE_SEGMENT@@UEAAJKPEAU_MDL@@HPEAPEAXPEA_K@Z @ 0x1C00A78D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0050454 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::MapPagesIntoAperture(
        VIDMM_LINEAR_POOL **this,
        unsigned int a2,
        struct _MDL *a3,
        __int64 a4,
        void **a5,
        union _LARGE_INTEGER *a6)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  int v10; // ebx
  union _LARGE_INTEGER v11; // [rsp+60h] [rbp-18h] BYREF

  v7 = (unsigned __int64)a2 << 12;
  v8 = a2;
  if ( v7 > 0xFFFFFFFF )
    return 3221225621LL;
  v10 = VIDMM_LINEAR_POOL::Allocate(this[19], (unsigned int)v7, 0, 1, 0LL, 0LL, 0, 0, 0LL, &v11, a5);
  if ( v10 >= 0 )
  {
    *a6 = v11;
    (*((void (__fastcall **)(VIDMM_LINEAR_POOL **, _QWORD, __int64))*this + 27))(this, 0LL, v8);
  }
  return (unsigned int)v10;
}
