/*
 * XREFs of ?DrawMesh2D@COcclusionContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x180147FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawMesh2D(
        COcclusionContext *this,
        struct CGeometry2D *a2,
        struct CImageSource *a3)
{
  __int64 v5; // rcx
  unsigned int v6; // edx
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  signed int v10; // eax
  unsigned int v12; // [rsp+30h] [rbp-48h]
  __int128 v13; // [rsp+38h] [rbp-40h] BYREF
  __int128 v14; // [rsp+48h] [rbp-30h]
  __int64 v15; // [rsp+58h] [rbp-20h]

  if ( (*(unsigned __int8 (__fastcall **)(char *, __int64))(*((_QWORD *)a3 + 2) + 48LL))((char *)a3 + 16, 15LL) )
  {
    v5 = *((unsigned int *)this + 294);
    v6 = v12;
    *(_QWORD *)&v13 = *((_QWORD *)this + 101);
    *((_QWORD *)&v13 + 1) = a3;
    v7 = v5 + 1;
    LOBYTE(v14) = 1;
    if ( (int)v5 + 1 >= (unsigned int)v5 )
      v6 = v5 + 1;
    if ( v7 < (unsigned int)v5 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7 < (unsigned int)v5 ? 0x80070216 : 0, 0xB5u);
    }
    else if ( v6 > *((_DWORD *)this + 293) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 1152, 0x28u, 1, &v13);
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      v8 = *((_QWORD *)this + 144);
      v9 = 5 * v5;
      *(_OWORD *)(v8 + 8 * v9) = v13;
      *(_OWORD *)(v8 + 8 * v9 + 16) = v14;
      *(_QWORD *)(v8 + 8 * v9 + 32) = v15;
      *((_DWORD *)this + 294) = v6;
    }
  }
  return 0LL;
}
