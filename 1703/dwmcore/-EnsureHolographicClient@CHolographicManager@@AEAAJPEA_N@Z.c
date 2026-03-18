/*
 * XREFs of ?EnsureHolographicClient@CHolographicManager@@AEAAJPEA_N@Z @ 0x1801A5F0C
 * Callers:
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x1801A5C20 (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B5384 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x1801A7690 (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 *     ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x1801A8BB8 (-Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CHolographicManager::EnsureHolographicClient(CHolographicManager *this, bool *a2)
{
  unsigned int v2; // ebx
  CBitmapOfDeviceBitmaps *v3; // rsi
  struct CHolographicInteropTaskQueue *v4; // r14
  struct CHolographicInteropTaskQueue *v5; // rdi
  int v8; // eax
  int v9; // eax
  CBitmapOfDeviceBitmaps *v10; // rcx
  CBitmapOfDeviceBitmaps *v12; // [rsp+70h] [rbp+40h] BYREF
  struct CHolographicInteropTaskQueue *v13; // [rsp+78h] [rbp+48h] BYREF
  struct CHolographicInteropTaskQueue *v14; // [rsp+80h] [rbp+50h] BYREF

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  v12 = 0LL;
  v5 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  *a2 = 0;
  if ( !*((_QWORD *)this + 4) )
  {
    v8 = CHolographicInteropTaskQueue::Create(&v14);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1B7u);
      v5 = v14;
    }
    else
    {
      v5 = v14;
      v9 = CHolographicClient::Create(v14, &v13, &v12);
      v2 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1B8u);
        v3 = v12;
        v4 = v13;
      }
      else
      {
        v3 = v12;
        v10 = v12;
        *((_QWORD *)this + 4) = v12;
        CBitmapOfDeviceBitmaps::AddRef(v10);
        *((_QWORD *)this + 5) = v5;
        (**(void (__fastcall ***)(struct CHolographicInteropTaskQueue *))v5)(v5);
        v4 = v13;
        *((_QWORD *)this + 6) = v13;
        (**(void (__fastcall ***)(struct CHolographicInteropTaskQueue *))v4)(v4);
        *a2 = 1;
      }
    }
  }
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v4);
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v5);
  if ( v3 )
    CMILCOMBase::InternalRelease(v3);
  return v2;
}
