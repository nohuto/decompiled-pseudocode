/*
 * XREFs of ?DrawMesh2D@COcclusionContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x180170780
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawMesh2D(
        COcclusionContext *this,
        struct CGeometry2D *a2,
        struct CImageSource *a3)
{
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp-18h]

  if ( (*(unsigned __int8 (__fastcall **)(char *, __int64))(*((_QWORD *)a3 + 2) + 48LL))((char *)a3 + 16, 15LL) )
  {
    *(_QWORD *)&v11 = *((_QWORD *)this + 101);
    v5 = *((unsigned int *)this + 294);
    *((_QWORD *)&v11 + 1) = a3;
    LOBYTE(v12) = 1;
    v6 = v5 + 1;
    if ( (int)v5 + 1 < (unsigned int)v5 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)v5 + 1 < (unsigned int)v5 ? 0x80070216 : 0, 0xB5u);
    }
    else if ( v6 > *((_DWORD *)this + 293) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 1152, 0x28u, 1, &v11);
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      v7 = 5 * v5;
      v8 = *((_QWORD *)this + 144);
      *(_OWORD *)(v8 + 8 * v7) = v11;
      *(_OWORD *)(v8 + 8 * v7 + 16) = v12;
      *(_QWORD *)(v8 + 8 * v7 + 32) = v13;
      *((_DWORD *)this + 294) = v6;
    }
  }
  return 0LL;
}
