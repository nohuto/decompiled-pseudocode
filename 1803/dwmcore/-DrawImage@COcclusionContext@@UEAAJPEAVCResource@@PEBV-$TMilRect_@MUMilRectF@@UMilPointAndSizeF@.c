/*
 * XREFs of ?DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0HF@@@@Z @ 0x1800A97F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800A930C (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawImage(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        const struct D2D_RECT_F *a3,
        __int64 a4)
{
  unsigned int v6; // ebx
  int v9; // eax
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int128 v16; // [rsp+30h] [rbp-58h] BYREF
  __int128 v17; // [rsp+40h] [rbp-48h]
  __int64 v18; // [rsp+50h] [rbp-38h]

  v6 = 0;
  if ( ((unsigned __int8 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*a2)[6])(a2, 15LL) )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(a1 + 808);
    LOBYTE(v17) = 1;
    v11 = *(unsigned int *)(a1 + 1176);
    *((_QWORD *)&v16 + 1) = (unsigned __int64)(a2 - 2) & -(__int64)(a2 != 0LL);
    v12 = v11 + 1;
    if ( (int)v11 + 1 < (unsigned int)v11 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)v11 + 1 < (unsigned int)v11 ? 0x80070216 : 0, 0xB5u);
    }
    else if ( v12 > *(_DWORD *)(a1 + 1172) )
    {
      v15 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 1152, 0x28u, 1, &v16);
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xC0u);
    }
    else
    {
      v13 = 5 * v11;
      v14 = *(_QWORD *)(a1 + 1152);
      *(_OWORD *)(v14 + 8 * v13) = v16;
      *(_OWORD *)(v14 + 8 * v13 + 16) = v17;
      *(_QWORD *)(v14 + 8 * v13 + 32) = v18;
      *(_DWORD *)(a1 + 1176) = v12;
    }
  }
  if ( !a4 )
  {
    v9 = COcclusionContext::DrawImage(a1, a2, a3, 0);
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x474u);
  }
  return v6;
}
