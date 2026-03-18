/*
 * XREFs of ?ProcessUpdate@CVisualCapture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALCAPTURE@@@Z @ 0x180026E48
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualCapture::ProcessUpdate(CVisualCapture *this, struct CResourceTable *a2, __m128i *a3)
{
  __int32 v5; // esi
  __int64 v6; // rdx
  __int64 Resource; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  struct CResource *v10; // rdx
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // eax
  int v16; // r9d
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
    Resource = CResourceTable::GetResource(a2, v6, 31LL);
    *((_QWORD *)this + 43) = Resource;
    if ( !Resource )
    {
      v17 = 2424;
      goto LABEL_15;
    }
  }
  else
  {
    *((_QWORD *)this + 43) = 0LL;
  }
  if ( v19.m128i_i32[3] )
  {
    v8 = CResourceTable::GetResource(a2, v19.m128i_u32[3], 31LL);
    *((_QWORD *)this + 44) = v8;
    if ( !v8 )
    {
      v17 = 2444;
      goto LABEL_15;
    }
  }
  else
  {
    *((_QWORD *)this + 44) = 0LL;
  }
  if ( (_DWORD)v20 )
  {
    v9 = CResourceTable::GetResource(a2, (unsigned int)v20, 97LL);
    *((_QWORD *)this + 45) = v9;
    if ( v9 )
      goto LABEL_7;
    v17 = 2464;
LABEL_15:
    v16 = -2003303421;
    v12 = -2003303421;
LABEL_23:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v17);
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x9C6u);
  }
  else
  {
    v13 = CResource::RegisterNotifier(this, *((struct CResource **)this + 44));
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x9C7u);
    }
    else
    {
      v14 = CResource::RegisterNotifier(this, *((struct CResource **)this + 45));
      v12 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x9C8u);
    }
  }
  if ( v12 < 0 )
  {
    v17 = 2476;
    v16 = v12;
    goto LABEL_23;
  }
LABEL_12:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v12;
}
