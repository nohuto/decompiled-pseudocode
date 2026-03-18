/*
 * XREFs of ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x18004CDCC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180075C28 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessSetDirtyRect(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVEGROUP_SETDIRTYRECT *a3,
        _DWORD *a4,
        unsigned int a5)
{
  __m128 v5; // xmm3
  _DWORD *v6; // r10
  unsigned int v7; // edx
  char v11; // si
  int v12; // r14d
  __m128 v13; // xmm0
  int v14; // ecx
  __m128 v15; // xmm1
  __m128 v16; // xmm0
  __int32 v17; // r12d
  int v18; // ecx
  __m128 v19; // xmm0
  __int32 v20; // r11d
  signed __int32 v21; // r9d
  __int32 v22; // r8d
  int v23; // eax
  unsigned __int32 v25; // [rsp+38h] [rbp-51h]
  _DWORD *v26; // [rsp+48h] [rbp-41h] BYREF
  _DWORD v27[18]; // [rsp+50h] [rbp-39h] BYREF

  v27[0] = 0;
  v6 = v27;
  v7 = *((_DWORD *)a3 + 2);
  v26 = v27;
  v11 = 1;
  if ( v7 && a5 == 16LL * v7 )
  {
    v12 = 0;
    while ( *(float *)&a4[4 * v12] >= -16777216.0
         && *(float *)&a4[4 * v12 + 1] >= -16777216.0
         && *(float *)&a4[4 * v12 + 2] <= 16777216.0
         && *(float *)&a4[4 * v12 + 3] <= 16777216.0 )
    {
      v13 = (__m128)(unsigned int)a4[4 * v12];
      v14 = (int)v13.m128_f32[0];
      v15.m128_f32[0] = (float)(int)v13.m128_f32[0];
      v15.m128_f32[0] = _mm_cmplt_ss(v13, v15).m128_f32[0];
      v16 = (__m128)(unsigned int)a4[4 * v12 + 1];
      v17 = v14 + v15.m128_i32[0];
      v18 = (int)v16.m128_f32[0];
      v15.m128_f32[0] = (float)(int)v16.m128_f32[0];
      v19 = _mm_cmplt_ss(v16, v15);
      v15.m128_i32[0] = a4[4 * v12 + 2];
      v20 = v18 + v19.m128_i32[0];
      v19.m128_f32[0] = (float)(int)v15.m128_f32[0];
      v25 = _mm_cmplt_ss(v19, v15).m128_u32[0];
      v19.m128_i32[0] = a4[4 * v12 + 3];
      v21 = (int)v15.m128_f32[0] - v25;
      v5.m128_f32[0] = (float)(int)v19.m128_f32[0];
      v5 = _mm_cmplt_ss(v5, v19);
      v22 = (int)v19.m128_f32[0] - v5.m128_i32[0];
      if ( v17 >= v21 || v20 >= v22 )
      {
        *v6 = 0;
      }
      else
      {
        *v6 = 2;
        v6[1] = v17;
        v6[2] = v21;
        v6[3] = v20;
        v6[4] = 16;
        v6[7] = v17;
        v6[8] = v21;
        v6[5] = v22;
        v6[6] = 16;
      }
      v23 = FastRegion::CRegion::Union((CPrimitiveGroup *)((char *)this + 456), (const struct CRegion *)&v26);
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x1FFu);
        break;
      }
      if ( (unsigned int)++v12 >= *((_DWORD *)a3 + 2) )
      {
        CResource::NotifyOnChanged(this, 1LL, (__int64)this);
        v11 = 0;
        break;
      }
      v6 = v26;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x1EFu);
  }
  **((_DWORD **)this + 57) = 0;
  if ( v11 )
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v26);
  return 0LL;
}
