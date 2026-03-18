/*
 * XREFs of ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01C16AC
 * Callers:
 *     ?NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z @ 0x1C01C1770 (-NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C01C1FF0 (FlushWEFCOMPOSITEDDCEBounds.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C0065820 (xxxInternalInvalidate.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InvalidateWEFCOMPOSITEDWindow(struct tagWND *a1, __m128i *a2)
{
  __m128i v2; // xmm0
  int v3; // edx
  int v5; // r8d
  unsigned int v6; // ebx
  HRGN RectRgnIndirect; // rdi
  _BYTE v9[8]; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v10[4]; // [rsp+28h] [rbp-18h] BYREF

  v2 = *a2;
  v3 = *((_DWORD *)a1 + 32);
  v5 = *((_DWORD *)a1 + 33);
  v6 = 0;
  v10[2] = v3 + v2.m128i_i32[2];
  v10[3] = v5 + v2.m128i_i32[3];
  v10[1] = v5 + v2.m128i_i32[1];
  v10[0] = v3 + _mm_cvtsi128_si32(v2);
  RectRgnIndirect = (HRGN)GreCreateRectRgnIndirect(v10);
  if ( RectRgnIndirect )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v9);
    xxxInternalInvalidate(a1, RectRgnIndirect, 1157LL);
    if ( !v9[0] )
    {
      --gdwInAtomicOperation;
      UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v9);
    }
    GreDeleteObject(RectRgnIndirect);
    return 1;
  }
  return v6;
}
