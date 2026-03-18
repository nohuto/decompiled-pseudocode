/*
 * XREFs of ?ProcessUpdate@CVisualCapture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALCAPTURE@@@Z @ 0x18000D06C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?RegisterNotifiers@CVisualCapture@@QEAAJPEAVCResourceTable@@@Z @ 0x18000CA74 (-RegisterNotifiers@CVisualCapture@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualCapture::ProcessUpdate(CVisualCapture *this, struct CResourceTable *a2, __m128i *a3)
{
  __m128i v5; // xmm6
  __int64 v6; // rdx
  __int64 Resource; // rax
  __int64 v8; // rax
  struct CResourceTable *v9; // rdx
  __int64 v10; // rax
  int v11; // edi
  unsigned int v13; // eax
  __m128i v14; // [rsp+30h] [rbp-38h]
  __m128i v15; // [rsp+40h] [rbp-28h]

  v5 = *a3;
  v15 = a3[1];
  v14 = *a3;
  (*(void (__fastcall **)(CVisualCapture *))(*(_QWORD *)this + 56LL))(this);
  v6 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v5, 8));
  if ( (_DWORD)v6 )
  {
    Resource = CResourceTable::GetResource(a2, v6, 151LL);
    *((_QWORD *)this + 50) = Resource;
    if ( !Resource )
    {
      v11 = -2003303421;
      v13 = 3230;
      goto LABEL_16;
    }
  }
  else
  {
    *((_QWORD *)this + 50) = 0LL;
  }
  if ( v14.m128i_i32[3] )
  {
    v8 = CResourceTable::GetResource(a2, v14.m128i_u32[3], 151LL);
    *((_QWORD *)this + 51) = v8;
    if ( !v8 )
    {
      v11 = -2003303421;
      v13 = 3248;
      goto LABEL_16;
    }
  }
  else
  {
    *((_QWORD *)this + 51) = 0LL;
  }
  v9 = (struct CResourceTable *)v15.m128i_u32[0];
  if ( v15.m128i_i32[0] )
  {
    v10 = CResourceTable::GetResource(a2, v15.m128i_u32[0], 37LL);
    *((_QWORD *)this + 52) = v10;
    if ( v10 )
      goto LABEL_7;
    v11 = -2003303421;
    v13 = 3266;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v13);
    (*(void (__fastcall **)(CVisualCapture *))(*(_QWORD *)this + 56LL))(this);
    goto LABEL_8;
  }
  *((_QWORD *)this + 52) = 0LL;
LABEL_7:
  *((_QWORD *)this + 53) = *(__int64 *)((char *)v15.m128i_i64 + 4);
  *((_DWORD *)this + 108) = v15.m128i_i32[3];
  v11 = CVisualCapture::RegisterNotifiers((struct CResource **)this, v9);
  if ( v11 < 0 )
  {
    v13 = 3279;
    goto LABEL_16;
  }
LABEL_8:
  (*(void (__fastcall **)(CVisualCapture *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return (unsigned int)v11;
}
