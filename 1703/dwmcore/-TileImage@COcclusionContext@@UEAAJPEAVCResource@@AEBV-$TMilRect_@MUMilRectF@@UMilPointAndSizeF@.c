/*
 * XREFs of ?TileImage@COcclusionContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x18009B8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::TileImage(__int64 a1, __int64 a2)
{
  unsigned int v4; // edx
  __int64 v5; // rcx
  unsigned int v6; // eax
  int v7; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // [rsp+30h] [rbp-48h]
  __int128 v12; // [rsp+38h] [rbp-40h] BYREF
  __int128 v13; // [rsp+48h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-20h]

  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 61LL) )
  {
    v4 = v11;
    *(_QWORD *)&v12 = *(_QWORD *)(a1 + 720);
    LOBYTE(v13) = 1;
    v5 = *(unsigned int *)(a1 + 1080);
    *((_QWORD *)&v12 + 1) = (a2 - 16) & -(__int64)(a2 != 0);
    v6 = v5 + 1;
    if ( (int)v5 + 1 >= (unsigned int)v5 )
      v4 = v5 + 1;
    if ( v6 < (unsigned int)v5 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6 < (unsigned int)v5 ? 0x80070216 : 0, 0xB5u);
    }
    else if ( v4 <= *(_DWORD *)(a1 + 1076) )
    {
      v9 = *(_QWORD *)(a1 + 1056);
      v10 = 5 * v5;
      *(_OWORD *)(v9 + 8 * v10) = v12;
      *(_OWORD *)(v9 + 8 * v10 + 16) = v13;
      *(_QWORD *)(v9 + 8 * v10 + 32) = v14;
      *(_DWORD *)(a1 + 1080) = v4;
    }
    else
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 1056, 0x28u, 1, &v12);
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC0u);
    }
  }
  return 0LL;
}
