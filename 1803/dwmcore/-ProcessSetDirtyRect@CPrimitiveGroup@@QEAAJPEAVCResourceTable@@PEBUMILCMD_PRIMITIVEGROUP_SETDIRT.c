/*
 * XREFs of ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x180098250
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180080104 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessSetDirtyRect(
        int **this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVEGROUP_SETDIRTYRECT *a3,
        char *a4,
        unsigned int a5)
{
  __m128 v5; // xmm3
  _DWORD *v6; // rdx
  unsigned int v8; // r8d
  char v11; // di
  int v12; // esi
  float *v13; // r8
  __m128 v14; // xmm0
  __m128 v15; // xmm4
  __m128 v16; // xmm1
  signed __int32 v17; // r11d
  __m128 v18; // xmm0
  __int32 v19; // r10d
  signed __int32 v20; // r9d
  __int32 v21; // r8d
  int v22; // eax
  __int64 (__fastcall *v23)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *); // rax
  unsigned __int32 v25; // [rsp+38h] [rbp-51h]
  _DWORD *v26; // [rsp+48h] [rbp-41h] BYREF
  _DWORD v27[18]; // [rsp+50h] [rbp-39h] BYREF

  v27[0] = 0;
  v6 = v27;
  v26 = v27;
  v8 = *((_DWORD *)a3 + 2);
  v11 = 1;
  if ( v8 && a5 == 16LL * v8 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = (float *)&a4[16 * v12];
      v14 = (__m128)*(unsigned int *)v13;
      if ( v14.m128_f32[0] < -16777216.0 )
        break;
      v15 = (__m128)*((unsigned int *)v13 + 1);
      if ( v15.m128_f32[0] < -16777216.0 || v13[2] > 16777216.0 || v13[3] > 16777216.0 )
        break;
      v16.m128_f32[0] = (float)(int)v14.m128_f32[0];
      v17 = (int)v14.m128_f32[0] + _mm_cmplt_ss(v14, v16).m128_u32[0];
      v16.m128_f32[0] = (float)(int)v15.m128_f32[0];
      v18 = _mm_cmplt_ss(v15, v16);
      v16.m128_f32[0] = v13[2];
      v19 = (int)v15.m128_f32[0] + v18.m128_i32[0];
      v18.m128_f32[0] = (float)(int)v16.m128_f32[0];
      v25 = _mm_cmplt_ss(v18, v16).m128_u32[0];
      v18.m128_f32[0] = v13[3];
      v20 = (int)v16.m128_f32[0] - v25;
      v5.m128_f32[0] = (float)(int)v18.m128_f32[0];
      v5 = _mm_cmplt_ss(v5, v18);
      v21 = (int)v18.m128_f32[0] - v5.m128_i32[0];
      if ( v17 >= v20 || v19 >= v21 )
      {
        *v6 = 0;
      }
      else
      {
        *v6 = 2;
        v6[1] = v17;
        v6[2] = v20;
        v6[3] = v19;
        v6[4] = 16;
        v6[7] = v17;
        v6[8] = v20;
        v6[5] = v21;
        v6[6] = 16;
      }
      v22 = FastRegion::CRegion::Union(this + 73, &v26);
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x1ECu);
        break;
      }
      if ( (unsigned int)++v12 >= *((_DWORD *)a3 + 2) )
      {
        v23 = (__int64 (__fastcall *)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *))*((_QWORD *)*this + 8);
        if ( v23 == CResource::NotifyOnChanged )
          CResource::NotifyOnChanged(
            (CVisual *)this,
            (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))1,
            (CCompositionSurfaceBitmap *)this);
        else
          v23(
            (CVisual *)this,
            (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))1,
            (CCompositionSurfaceBitmap *)this);
        v11 = 0;
        break;
      }
      v6 = v26;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1DCu);
  }
  *this[73] = 0;
  if ( v11 )
    (*((void (__fastcall **)(int **, _QWORD, _QWORD))*this + 8))(this, 0LL, 0LL);
  FastRegion::CRegion::FreeMemory((void **)&v26);
  return 0LL;
}
