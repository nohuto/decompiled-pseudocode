/*
 * XREFs of ?InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z @ 0x180184FE4
 * Callers:
 *     ?AdvanceInertiaToTimeDefault@CMotion@@MEAAMXZ @ 0x180184C70 (-AdvanceInertiaToTimeDefault@CMotion@@MEAAMXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18001A3C8 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CMotion::InitializeDefaultBoundaryInertiaModifier(
        CMotion *this,
        float a2,
        float a3,
        float a4,
        float a5)
{
  int v6; // eax
  float v7; // xmm0_4
  int v8; // eax
  __int64 (__fastcall ***v9)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  v6 = *((float *)this + 16) >= a2;
  if ( a2 >= *((float *)this + 9) )
    v6 += 2;
  v7 = a5;
  *((_DWORD *)this + 18) = v6;
  v8 = *((_DWORD *)this + 3);
  *((float *)this + 45) = a4;
  *((float *)this + 42) = a2;
  *((float *)this + 43) = a3;
  *((float *)this + 44) = v7;
  *((_DWORD *)this + 38) = v8;
  *((_BYTE *)this + 148) = 0;
  *((_DWORD *)this + 48) = 1114636288;
  v9 = (__int64 (__fastcall ***)(_QWORD))((char *)this + 80);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v9);
  v9 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = (char *)this + 80;
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v9);
}
