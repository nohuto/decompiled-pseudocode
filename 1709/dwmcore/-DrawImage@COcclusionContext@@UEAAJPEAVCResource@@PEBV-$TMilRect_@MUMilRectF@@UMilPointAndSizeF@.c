/*
 * XREFs of ?DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0GJ@@@@Z @ 0x18005DBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005D6C4 (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawImage(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        float *a3,
        __int64 a4)
{
  unsigned int v6; // ebx
  int v9; // eax
  unsigned int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // [rsp+30h] [rbp-68h]
  __int128 v18; // [rsp+38h] [rbp-60h] BYREF
  __int128 v19; // [rsp+48h] [rbp-50h]
  __int64 v20; // [rsp+58h] [rbp-40h]

  v6 = 0;
  if ( ((unsigned __int8 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*a2)[6])(a2, 15LL) )
  {
    *(_QWORD *)&v18 = *(_QWORD *)(a1 + 808);
    LOBYTE(v19) = 1;
    v11 = v17;
    *((_QWORD *)&v18 + 1) = (unsigned __int64)(a2 - 2) & -(__int64)(a2 != 0LL);
    v12 = *(unsigned int *)(a1 + 1176);
    v13 = v12 + 1;
    if ( (int)v12 + 1 >= (unsigned int)v12 )
      v11 = v12 + 1;
    if ( v13 < (unsigned int)v12 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13 < (unsigned int)v12 ? 0x80070216 : 0, 0xB5u);
    }
    else if ( v11 <= *(_DWORD *)(a1 + 1172) )
    {
      v15 = *(_QWORD *)(a1 + 1152);
      v16 = 5 * v12;
      *(_OWORD *)(v15 + 8 * v16) = v18;
      *(_OWORD *)(v15 + 8 * v16 + 16) = v19;
      *(_QWORD *)(v15 + 8 * v16 + 32) = v20;
      *(_DWORD *)(a1 + 1176) = v11;
    }
    else
    {
      v14 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 1152, 40LL, 1LL, &v18);
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xC0u);
    }
  }
  if ( !a4 )
  {
    v9 = COcclusionContext::DrawImage(a1, a2, a3, 0);
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x46Au);
  }
  return v6;
}
