/*
 * XREFs of ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180156240
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800AB7E0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18009A190 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x1800BD7E0 (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z @ 0x180155FD0 (-AddMultipleAndSet@-$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z.c)
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@IPEAPEAV1@@Z @ 0x1801999D4 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@IPEAPEAV1@@Z.c)
 */

__int64 __fastcall CLightStack::RetrieveCurrentLightBufferForContextNoRef(
        CLightStack *this,
        struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct CHwLightCollectionBuffer **a4)
{
  int v4; // ebx
  struct CHwLightCollectionBuffer **v5; // r13
  struct CDrawingContext *v8; // r11
  _BYTE *v9; // r8
  const struct LightInfo *v10; // rcx
  __int64 v11; // r15
  unsigned int v12; // edx
  unsigned int v13; // r13d
  __int64 v14; // rdx
  char v15; // r9
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // r8d
  int v19; // eax
  _QWORD *v20; // r9
  unsigned int v21; // eax
  int v22; // eax
  int v23; // eax
  void *v27[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+50h] [rbp-B0h]
  unsigned int v29; // [rsp+54h] [rbp-ACh]
  unsigned int v30; // [rsp+58h] [rbp-A8h]
  _BYTE v31[32]; // [rsp+60h] [rbp-A0h] BYREF
  struct LightInfo *v32[2]; // [rsp+80h] [rbp-80h] BYREF
  int v33; // [rsp+90h] [rbp-70h]
  unsigned int v34[2]; // [rsp+94h] [rbp-6Ch]
  _BYTE v35[704]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v36[10]; // [rsp+360h] [rbp+260h] BYREF
  int v37; // [rsp+400h] [rbp+300h]
  int v38; // [rsp+444h] [rbp+344h]

  v4 = 0;
  *a4 = 0LL;
  v5 = a4;
  if ( *((_BYTE *)this + 64) && *((_DWORD *)this + 6) )
  {
    if ( !CMILMatrix::IsEqualTo<0>((float *)this + 20, (float *)a3) )
    {
      ReleaseInterface<CHwLightCollectionBuffer>((__int64 *)this + 9);
      v8 = a2;
    }
    if ( *((_QWORD *)this + 9) )
      goto LABEL_35;
    v30 = 0;
    v27[1] = v31;
    v28 = 3;
    v9 = v31;
    v29 = 3;
    v10 = (const struct LightInfo *)v35;
    v33 = 3;
    *(_QWORD *)v34 = 3LL;
    v11 = 0LL;
    v12 = 0;
    v27[0] = v31;
    v32[0] = (struct LightInfo *)v35;
    v32[1] = (struct LightInfo *)v35;
    if ( *((_DWORD *)this + 6) )
    {
      v13 = (unsigned int)a2;
      while ( 1 )
      {
        v14 = 0LL;
        v15 = 1;
        if ( v30 )
        {
          while ( *(_QWORD *)&v9[8 * v14] != *(_QWORD *)(*(_QWORD *)this + 8 * v11) )
          {
            v14 = (unsigned int)(v14 + 1);
            if ( (unsigned int)v14 >= v30 )
              goto LABEL_13;
          }
          v15 = 0;
        }
LABEL_13:
        if ( v15 )
        {
          v16 = *(_QWORD *)this;
          v37 = 0;
          v38 = 0;
          v17 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, const struct CMILMatrix *, _OWORD *))(**(_QWORD **)(v16 + 8 * v11) + 152LL))(
                  *(_QWORD *)(v16 + 8 * v11),
                  v8,
                  a3,
                  v36);
          v4 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x74u);
            goto LABEL_31;
          }
          v19 = DynArray<LightInfo,0>::AddMultipleAndSet((__int64)v32, v36, v18);
          v4 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x76u);
            goto LABEL_31;
          }
          v20 = (_QWORD *)(*(_QWORD *)this + 8 * v11);
          v21 = v30 + 1;
          if ( v30 + 1 >= v30 )
            v13 = v30 + 1;
          v4 = v21 < v30 ? 0x80070216 : 0;
          if ( v21 < v30 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xB5u);
          }
          else if ( v13 > v29 )
          {
            v22 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v27, 8u, 1, v20);
            v4 = v22;
            if ( v22 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xC0u);
          }
          else
          {
            *((_QWORD *)v27[0] + v30) = *v20;
            v30 = v13;
          }
          if ( v4 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x77u);
            goto LABEL_31;
          }
          v9 = v27[0];
        }
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= *((_DWORD *)this + 6) )
          break;
        v8 = a2;
      }
      v12 = v34[1];
      v10 = v32[0];
      v5 = a4;
    }
    v23 = CHwLightCollectionBuffer::Create(v10, v12, (struct CHwLightCollectionBuffer **)this + 9);
    v4 = v23;
    if ( v23 >= 0 )
    {
      *((_OWORD *)this + 5) = *(_OWORD *)a3;
      *((_OWORD *)this + 6) = *((_OWORD *)a3 + 1);
      *((_OWORD *)this + 7) = *((_OWORD *)a3 + 2);
      *((_OWORD *)this + 8) = *((_OWORD *)a3 + 3);
      *((_DWORD *)this + 36) = *((_DWORD *)a3 + 16);
      DynArrayImpl<1>::~DynArrayImpl<1>((void **)v32);
      DynArrayImpl<1>::~DynArrayImpl<1>(v27);
LABEL_35:
      *v5 = (struct CHwLightCollectionBuffer *)*((_QWORD *)this + 9);
      return (unsigned int)v4;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x7Fu);
LABEL_31:
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)v32);
    DynArrayImpl<1>::~DynArrayImpl<1>(v27);
  }
  return (unsigned int)v4;
}
