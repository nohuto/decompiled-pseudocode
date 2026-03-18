/*
 * XREFs of ?CopyPixels@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1801D13D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x18000A4A4 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorKeyBitmap::CopyPixels(
        __int64 *a1,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  __int64 v5; // rax
  __int64 (__fastcall *v9)(__int64 *, _DWORD *, __int64 *); // rax
  signed int v10; // eax
  unsigned int v11; // ebx
  enum DXGI_FORMAT v12; // esi
  signed int v13; // eax
  signed int v14; // eax
  signed int v15; // eax
  signed int v16; // eax
  __int64 v18; // [rsp+50h] [rbp-21h] BYREF
  unsigned int v19; // [rsp+58h] [rbp-19h] BYREF
  unsigned int v20; // [rsp+5Ch] [rbp-15h] BYREF
  int v21; // [rsp+60h] [rbp-11h] BYREF
  int v22; // [rsp+64h] [rbp-Dh] BYREF
  unsigned __int8 *Src; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v24[16]; // [rsp+70h] [rbp-1h] BYREF

  v5 = *a1;
  v18 = 0LL;
  v22 = 0;
  v9 = *(__int64 (__fastcall **)(__int64 *, _DWORD *, __int64 *))(v5 + 64);
  v21 = 0;
  v20 = 0;
  Src = 0LL;
  v19 = 0;
  v10 = v9(a1, a2, &v18);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xB6u);
  }
  else
  {
    v12 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v18 + 24LL))(v18, v24);
    v13 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v18 + 32LL))(v18, &v22, &v21);
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0xB9u);
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 40LL))(v18, &v20);
      v11 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0xBAu);
      }
      else
      {
        v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v18 + 48LL))(
                v18,
                &v19,
                &Src);
        v11 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0xBCu);
        }
        else
        {
          v16 = CBitmap::CopyPixelsHelper(v12, a2[2] - *a2, a2[3] - a2[1], v20, v19, Src, a3, a4, a5);
          v11 = v16;
          if ( v16 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0xC7u);
        }
      }
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>(v18);
  return v11;
}
