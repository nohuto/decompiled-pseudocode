/*
 * XREFs of ?ProcessUpdate@CVisualCapture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALCAPTURE@@@Z @ 0x180079084
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualCapture::ProcessUpdate(CVisualCapture *this, struct CResourceTable *a2, __m128i *a3)
{
  __int32 v5; // esi
  __int64 v6; // rdx
  __int64 Resource; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  struct CResource *v10; // rdx
  signed int v11; // eax
  int v12; // edi
  signed int v13; // eax
  signed int v14; // eax
  DWORD v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-48h]
  __m128i v18; // [rsp+30h] [rbp-38h]
  __m128i v19; // [rsp+40h] [rbp-28h]
  __int64 v20; // [rsp+50h] [rbp-18h]

  v18 = *a3;
  v5 = a3[1].m128i_i32[2];
  v20 = a3[1].m128i_i64[0];
  v19 = *a3;
  (*(void (__fastcall **)(CVisualCapture *))(*(_QWORD *)this + 56LL))(this);
  v6 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v18, 8));
  if ( (_DWORD)v6 )
  {
    Resource = CResourceTable::GetResource(a2, v6, 134LL);
    *((_QWORD *)this + 43) = Resource;
    if ( !Resource )
    {
      v17 = 3205;
      goto LABEL_15;
    }
  }
  else
  {
    *((_QWORD *)this + 43) = 0LL;
  }
  if ( v19.m128i_i32[3] )
  {
    v8 = CResourceTable::GetResource(a2, v19.m128i_u32[3], 134LL);
    *((_QWORD *)this + 44) = v8;
    if ( !v8 )
    {
      v17 = 3223;
      goto LABEL_15;
    }
  }
  else
  {
    *((_QWORD *)this + 44) = 0LL;
  }
  if ( (_DWORD)v20 )
  {
    v9 = CResourceTable::GetResource(a2, (unsigned int)v20, 35LL);
    *((_QWORD *)this + 45) = v9;
    if ( v9 )
      goto LABEL_7;
    v17 = 3241;
LABEL_15:
    v16 = -2003303421;
    v12 = -2003303421;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, v17);
    (*(void (__fastcall **)(CVisualCapture *))(*(_QWORD *)this + 56LL))(this);
    goto LABEL_12;
  }
  *((_QWORD *)this + 45) = 0LL;
LABEL_7:
  v10 = (struct CResource *)*((_QWORD *)this + 43);
  *((_DWORD *)this + 92) = HIDWORD(v20);
  *((_DWORD *)this + 93) = v5;
  v11 = CResource::RegisterNotifier(this, v10);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0xCC7u);
  }
  else
  {
    v13 = CResource::RegisterNotifier(this, *((struct CResource **)this + 44));
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0xCC8u);
    }
    else
    {
      v14 = CResource::RegisterNotifier(this, *((struct CResource **)this + 45));
      v12 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0xCC9u);
    }
  }
  if ( v12 < 0 )
  {
    v17 = 3253;
    v16 = v12;
    goto LABEL_23;
  }
LABEL_12:
  (*(void (__fastcall **)(CVisualCapture *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return (unsigned int)v12;
}
