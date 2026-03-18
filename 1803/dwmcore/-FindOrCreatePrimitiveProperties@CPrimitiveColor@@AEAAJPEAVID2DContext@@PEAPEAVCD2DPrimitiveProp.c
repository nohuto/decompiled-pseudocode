/*
 * XREFs of ?FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProperties@@@Z @ 0x18019E090
 * Callers:
 *     ?BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18019E56C (-BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPE.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800705D0 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180096E20 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveColor::FindOrCreatePrimitiveProperties(
        CPrimitiveColor *this,
        unsigned __int64 a2,
        struct CD2DPrimitiveProperties **a3)
{
  int v4; // ebx
  char v5; // r14
  struct CD2DPrimitiveProperties *v6; // rcx
  __int64 v7; // r9
  struct CD2DPrimitiveProperties **v8; // r15
  unsigned __int64 v9; // r10
  __int64 v10; // rdi
  CD2DContext *v11; // rbx
  struct CD2DPrimitiveProperties *v12; // r10
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // eax
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rcx
  struct CD2DPrimitiveProperties *v21; // [rsp+60h] [rbp+30h] BYREF
  CPrimitiveColor *v22; // [rsp+78h] [rbp+48h] BYREF

  v4 = 0;
  v21 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = a3;
  v9 = a2;
  if ( *((_DWORD *)this + 22) )
  {
    a3 = (struct CD2DPrimitiveProperties **)*((_QWORD *)this + 8);
    while ( 1 )
    {
      a2 = (unsigned __int64)a3[v7];
      if ( v9 == *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL) )
        break;
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *((_DWORD *)this + 22) )
        goto LABEL_7;
    }
    v6 = a3[v7];
  }
LABEL_7:
  v21 = v6;
  if ( v6 )
    goto LABEL_24;
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, struct CD2DPrimitiveProperties **, struct CD2DPrimitiveProperties **, __int64))(*(_QWORD *)v9 + 240LL))(
         v9,
         &v21,
         a3,
         v7);
  if ( v4 < 0 )
  {
    v18 = 117;
  }
  else
  {
    v10 = *((_QWORD *)v21 + 13);
    v11 = *(CD2DContext **)(*((_QWORD *)v21 + 3) + 24LL);
    CD2DContext::EnsureBeginDraw(v11);
    (*(void (__fastcall **)(_QWORD *, __int64, char *))(**((_QWORD **)v11 + 23) + 48LL))(
      *((_QWORD **)v11 + 23),
      v10,
      (char *)this + 112);
    v12 = v21;
    v22 = this;
    v13 = *((_DWORD *)v21 + 20);
    v14 = v13 + 1;
    v4 = v13 + 1 < v13 ? 0x80070216 : 0;
    if ( v13 + 1 < v13 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
    }
    else if ( v14 > *((_DWORD *)v21 + 19) )
    {
      v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v21 + 56, 8u, 1, &v22);
      v4 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v21 + 7) + 8LL * v13) = v22;
      *((_DWORD *)v12 + 20) = v14;
    }
    if ( v4 < 0 )
    {
      v18 = 123;
    }
    else
    {
      v16 = *((_DWORD *)this + 22);
      v5 = 1;
      a2 = v16 + 1;
      v4 = (unsigned int)a2 < v16 ? 0x80070216 : 0;
      if ( (unsigned int)a2 < v16 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
      }
      else if ( (unsigned int)a2 > *((_DWORD *)this + 21) )
      {
        v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 64, 8u, 1, &v21);
        v4 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * v16) = v21;
        *((_DWORD *)this + 22) = a2;
      }
      if ( v4 >= 0 )
      {
        v6 = v21;
LABEL_24:
        (*(void (__fastcall **)(struct CD2DPrimitiveProperties *, unsigned __int64, struct CD2DPrimitiveProperties **, __int64))(*(_QWORD *)v6 + 8LL))(
          v6,
          a2,
          a3,
          v7);
        *v8 = v21;
        return (unsigned int)v4;
      }
      v18 = 127;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v18);
  v19 = (__int64)v21;
  if ( v21 )
  {
    if ( v5 )
    {
      CD2DResource::RemoveResourceNotifier((struct CD2DPrimitiveProperties *)((char *)v21 + 16), this);
      v19 = (__int64)v21;
    }
    ReleaseInterfaceNoNULL<IWICBitmap>(v19);
  }
  return (unsigned int)v4;
}
