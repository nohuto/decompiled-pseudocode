/*
 * XREFs of ?DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DG@@@@Z @ 0x18009B9C0
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x180083B90 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007CD50 (-IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18009B4BC (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawImage(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, CGdiSpriteBitmap **),
        float *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  _BOOL8 (__fastcall *v9)(__int64, int); // rax
  bool v10; // al
  int v11; // eax
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // [rsp+30h] [rbp-68h]
  __int128 v20; // [rsp+38h] [rbp-60h] BYREF
  __int128 v21; // [rsp+48h] [rbp-50h]
  __int64 v22; // [rsp+58h] [rbp-40h]

  v4 = 0;
  v9 = (_BOOL8 (__fastcall *)(__int64, int))(*a2)[6];
  if ( v9 == CBitmapResource::IsOfType )
    v10 = CBitmapResource::IsOfType((__int64)a2, 61);
  else
    v10 = v9((__int64)a2, 61);
  if ( v10 )
  {
    *(_QWORD *)&v20 = *(_QWORD *)(a1 + 720);
    LOBYTE(v21) = 1;
    v13 = v19;
    *((_QWORD *)&v20 + 1) = (unsigned __int64)(a2 - 2) & -(__int64)(a2 != 0LL);
    v14 = *(unsigned int *)(a1 + 1080);
    v15 = v14 + 1;
    if ( (int)v14 + 1 >= (unsigned int)v14 )
      v13 = v14 + 1;
    if ( v15 < (unsigned int)v14 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15 < (unsigned int)v14 ? 0x80070216 : 0, 0xB5u);
    }
    else if ( v13 <= *(_DWORD *)(a1 + 1076) )
    {
      v17 = *(_QWORD *)(a1 + 1056);
      v18 = 5 * v14;
      *(_OWORD *)(v17 + 8 * v18) = v20;
      *(_OWORD *)(v17 + 8 * v18 + 16) = v21;
      *(_QWORD *)(v17 + 8 * v18 + 32) = v22;
      *(_DWORD *)(a1 + 1080) = v13;
    }
    else
    {
      v16 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 1056, 0x28u, 1, &v20);
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
    }
  }
  if ( !a4 )
  {
    v11 = COcclusionContext::DrawImage(a1, a2, a3, 0);
    v4 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x47Bu);
  }
  return v4;
}
