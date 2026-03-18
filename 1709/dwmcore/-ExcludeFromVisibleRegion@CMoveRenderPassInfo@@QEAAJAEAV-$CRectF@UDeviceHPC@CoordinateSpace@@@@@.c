/*
 * XREFs of ?ExcludeFromVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18014E01C
 * Callers:
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x18017709C (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEBVCMILMatrix@@0PEAV2@PEA_N@Z @ 0x18014E3FC (-SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEBVCMILMatrix@@0PEAV2@PEA_N@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180193F5C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CMoveRenderPassInfo::ExcludeFromVisibleRegion(CMoveRenderPassInfo *this, float *a2, double a3)
{
  signed int v5; // ebx
  float v6; // xmm0_4
  int v7; // r9d
  float v8; // xmm0_4
  int v9; // r8d
  float v10; // xmm0_4
  int v11; // edx
  float v12; // xmm0_4
  unsigned __int32 v13; // ecx
  HRGN RectRgn; // rsi
  signed int v15; // eax
  int v16; // edx
  unsigned int v17; // ecx
  int v18; // r8d
  HRGN v19; // rax
  signed int v20; // eax
  int v21; // edx
  unsigned int v22; // ecx
  int v23; // r8d
  DWORD v24; // r9d
  signed int LastError; // eax
  int v26; // edx
  unsigned int v27; // ecx
  int v28; // r8d
  int LocalToWorldTransform; // eax
  unsigned int v31; // [rsp+20h] [rbp-30h]
  float v32; // [rsp+30h] [rbp-20h]
  float v33; // [rsp+30h] [rbp-20h]
  float v34; // [rsp+30h] [rbp-20h]
  float v35; // [rsp+30h] [rbp-20h]
  struct tagRECT rc; // [rsp+38h] [rbp-18h] BYREF

  v5 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 264LL))(*((_QWORD *)this + 9)) )
    return (unsigned int)v5;
  SetLastError(0);
  v6 = a2[3];
  if ( (LODWORD(v6) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v6 - v6;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    v7 = (int)v6 - LODWORD(a3);
  }
  else
  {
    v32 = v6 + 6291456.25;
    v7 = (int)(LODWORD(v32) << 10) >> 11;
  }
  v8 = a2[2];
  if ( (LODWORD(v8) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v8 - v8;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    v9 = (int)v8 - LODWORD(a3);
  }
  else
  {
    v33 = v8 + 6291456.25;
    v9 = (int)(LODWORD(v33) << 10) >> 11;
  }
  v10 = a2[1];
  if ( (LODWORD(v10) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v10 - v10;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    v11 = (int)v10 - LODWORD(a3);
  }
  else
  {
    v34 = v10 + 6291456.25;
    v11 = (int)(LODWORD(v34) << 10) >> 11;
  }
  v12 = *a2;
  if ( (*(_DWORD *)a2 & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v12 - v12;
    v13 = (int)v12 - _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    v35 = v12 + 6291456.25;
    v13 = (int)(LODWORD(v35) << 10) >> 11;
  }
  RectRgn = CreateRectRgn(v13, v11, v9, v7);
  if ( RectRgn )
  {
    if ( *((_QWORD *)this + 1)
      || (SetLastError(0), v19 = CreateRectRgn(0, 0, 0, 0), (*((_QWORD *)this + 1) = v19) != 0LL) )
    {
      SetLastError(0);
      if ( CombineRgn(*((HRGN *)this + 1), *((HRGN *)this + 1), RectRgn, 4) )
      {
        if ( GetRgnBox(*((HRGN *)this + 1), &rc) != 1 )
          goto LABEL_38;
        LocalToWorldTransform = CMoveRenderPassInfo::SetLastLocalToWorldTransform(this, 0LL, 0LL, 0LL, 0LL);
        v5 = LocalToWorldTransform;
        if ( LocalToWorldTransform >= 0 )
          goto LABEL_38;
        v31 = 218;
        v24 = LocalToWorldTransform;
LABEL_37:
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v24, v31);
LABEL_38:
        DeleteObject(RectRgn);
        return (unsigned int)v5;
      }
      LastError = GetLastError();
      v5 = LastError;
      if ( LastError > 0 )
        v5 = (unsigned __int16)LastError | 0x80070000;
      if ( v5 >= 0 )
        v5 = CheckGUIHandleQuota(v27, v26, v28);
      v31 = 206;
    }
    else
    {
      v20 = GetLastError();
      v5 = v20;
      if ( v20 > 0 )
        v5 = (unsigned __int16)v20 | 0x80070000;
      if ( v5 >= 0 )
        v5 = CheckGUIHandleQuota(v22, v21, v23);
      v31 = 200;
    }
    v24 = v5;
    goto LABEL_37;
  }
  v15 = GetLastError();
  v5 = v15;
  if ( v15 > 0 )
    v5 = (unsigned __int16)v15 | 0x80070000;
  if ( v5 >= 0 )
    v5 = CheckGUIHandleQuota(v17, v16, v18);
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0xC4u);
  return (unsigned int)v5;
}
