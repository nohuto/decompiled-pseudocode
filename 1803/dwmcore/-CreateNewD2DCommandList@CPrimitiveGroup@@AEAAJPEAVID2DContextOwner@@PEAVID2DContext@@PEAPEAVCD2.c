/*
 * XREFs of ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18019E840
 * Callers:
 *     ?GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18019F008 (-GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800705D0 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800BE9D0 (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1Bitmap@@@Z @ 0x18019E4C8 (-BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1B.c)
 *     ?BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18019E56C (-BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPE.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewD2DCommandList(
        CPrimitiveGroup *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        struct CD2DCommandList **a4)
{
  struct CSharedSection *v4; // r8
  unsigned int v5; // edi
  int v7; // edx
  void *v9; // rcx
  struct ID2D1Bitmap **v10; // r12
  struct ID2D1Bitmap **v11; // r13
  struct ID2D1PrivateCompositorPrimitiveProperties **v12; // r15
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax
  struct ID2D1Bitmap **v18; // rax
  struct ID2DContext *v19; // r8
  int v20; // eax
  unsigned __int64 v21; // rcx
  unsigned int v22; // eax
  struct ID2D1Bitmap **v23; // rax
  struct ID2DContext *v24; // r8
  int v25; // eax
  unsigned __int64 v26; // rcx
  unsigned int v27; // eax
  struct ID2D1PrivateCompositorPrimitiveProperties **v28; // rax
  struct ID2DContext *v29; // r14
  struct ID2DContextOwner *v30; // rdx
  int v31; // eax
  int v32; // eax
  __int64 v33; // r10
  unsigned int v34; // eax
  unsigned int v35; // edx
  int v36; // eax
  unsigned int v37; // eax
  char v38; // r14
  unsigned int v39; // edx
  int v40; // eax
  struct CD2DCommandList *v41; // rax
  unsigned int i; // r14d
  unsigned int j; // r14d
  unsigned int v45; // [rsp+20h] [rbp-60h]
  __int64 v46; // [rsp+60h] [rbp-20h] BYREF
  struct ID2D1PrivateCompositorBuffer *v47; // [rsp+68h] [rbp-18h] BYREF
  struct ID2D1PrivateCompositorBuffer *v48; // [rsp+70h] [rbp-10h] BYREF
  char *v49; // [rsp+78h] [rbp-8h] BYREF

  v4 = (struct CSharedSection *)*((_QWORD *)this + 53);
  v5 = 0;
  *a4 = 0LL;
  v7 = *((_DWORD *)this + 128);
  v46 = 0LL;
  v9 = (void *)*((_QWORD *)this + 63);
  v10 = 0LL;
  v47 = 0LL;
  v11 = 0LL;
  v48 = 0LL;
  v12 = 0LL;
  v13 = CD2DSharedBuffer::CreateFromSharedSection(v9, v7, v4, &v47);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x333u);
    goto LABEL_47;
  }
  v15 = CD2DSharedBuffer::CreateFromSharedSection(
          *((void **)this + 65),
          *((_DWORD *)this + 132),
          *((struct CSharedSection **)this + 53),
          &v48);
  v14 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x339u);
    goto LABEL_47;
  }
  v16 = *((unsigned int *)this + 110);
  v17 = *((_DWORD *)this + 48);
  if ( (unsigned int)v16 >= v17 )
    v16 = v17;
  *((_DWORD *)this + 110) = v16;
  if ( (_DWORD)v16 )
  {
    v18 = (struct ID2D1Bitmap **)operator new(saturated_mul(v16, 8uLL));
    v10 = v18;
    if ( !v18 )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x340u);
      goto LABEL_63;
    }
    memset_0(v18, 0, 8LL * *((unsigned int *)this + 110));
    v20 = CPrimitiveGroup::BuildD2DBitmapList(this, a2, v19, 0, *((_DWORD *)this + 110), v10);
    v14 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x347u);
      goto LABEL_47;
    }
  }
  v21 = *((unsigned int *)this + 111);
  v22 = *((_DWORD *)this + 48) - *((_DWORD *)this + 110);
  if ( (unsigned int)v21 >= v22 )
    v21 = v22;
  *((_DWORD *)this + 111) = v21;
  if ( !(_DWORD)v21 )
  {
LABEL_18:
    v26 = *((unsigned int *)this + 112);
    v27 = *((_DWORD *)this + 64);
    if ( (unsigned int)v26 >= v27 )
      v26 = v27;
    *((_DWORD *)this + 112) = v26;
    if ( (_DWORD)v26 )
    {
      v28 = (struct ID2D1PrivateCompositorPrimitiveProperties **)operator new(saturated_mul(v26, 8uLL));
      v12 = v28;
      if ( !v28 )
      {
        v45 = 862;
        goto LABEL_15;
      }
      memset_0(v28, 0, 8LL * *((unsigned int *)this + 112));
      v29 = a3;
      v31 = CPrimitiveGroup::BuildD2DColorPropertiesList(this, v30, a3, *((_DWORD *)this + 112), v12);
      v14 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x364u);
        goto LABEL_47;
      }
    }
    else
    {
      v29 = a3;
    }
    v32 = (*(__int64 (__fastcall **)(struct ID2DContext *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, _QWORD, struct ID2D1Bitmap **, _QWORD, struct ID2D1PrivateCompositorPrimitiveProperties **, _QWORD, __int64 *))(*(_QWORD *)v29 + 232LL))(
            v29,
            v47,
            v48,
            v10,
            *((unsigned int *)this + 110),
            v11,
            *((unsigned int *)this + 111),
            v12,
            *((unsigned int *)this + 112),
            &v46);
    v14 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x371u);
    }
    else
    {
      v33 = v46;
      v49 = (char *)this + 56;
      v34 = *(_DWORD *)(v46 + 80);
      v35 = v34 + 1;
      v14 = v34 + 1 < v34 ? 0x80070216 : 0;
      if ( v34 + 1 < v34 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xB5u);
      }
      else if ( v35 > *(_DWORD *)(v46 + 76) )
      {
        v36 = DynArrayImpl<0>::AddMultipleAndSet(v46 + 56, 8u, 1, &v49);
        v14 = v36;
        if ( v36 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v46 + 56) + 8LL * v34) = v49;
        *(_DWORD *)(v33 + 80) = v35;
      }
      if ( v14 >= 0 )
      {
        v37 = *((_DWORD *)this + 34);
        v38 = 1;
        v39 = v37 + 1;
        v14 = v37 + 1 < v37 ? 0x80070216 : 0;
        if ( v37 + 1 < v37 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xB5u);
        }
        else if ( v39 > *((_DWORD *)this + 33) )
        {
          v40 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 112, 8u, 1, &v46);
          v14 = v40;
          if ( v40 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * v37) = v46;
          *((_DWORD *)this + 34) = v39;
        }
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x376u);
        }
        else
        {
          v41 = (struct CD2DCommandList *)v46;
          v46 = 0LL;
          *a4 = v41;
        }
        goto LABEL_48;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x373u);
    }
LABEL_47:
    v38 = 0;
LABEL_48:
    if ( v14 < 0 && v38 )
      CD2DResource::RemoveResourceNotifier((CD2DResource *)(v46 + 16), (CPrimitiveGroup *)((char *)this + 56));
    goto LABEL_51;
  }
  v23 = (struct ID2D1Bitmap **)operator new(saturated_mul(v21, 8uLL));
  v11 = v23;
  if ( v23 )
  {
    memset_0(v23, 0, 8LL * *((unsigned int *)this + 111));
    v25 = CPrimitiveGroup::BuildD2DBitmapList(this, a2, v24, *((_DWORD *)this + 110), *((_DWORD *)this + 111), v11);
    v14 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x356u);
      goto LABEL_47;
    }
    goto LABEL_18;
  }
  v45 = 847;
LABEL_15:
  v14 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v45);
LABEL_51:
  if ( v10 )
  {
    for ( i = 0; i < *((_DWORD *)this + 110); ++i )
      ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v10[i]);
    operator delete(v10);
  }
  if ( v11 )
  {
    for ( j = 0; j < *((_DWORD *)this + 111); ++j )
      ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v11[j]);
    operator delete(v11);
  }
  if ( v12 )
  {
    if ( *((_DWORD *)this + 112) )
    {
      do
        ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v12[v5++]);
      while ( v5 < *((_DWORD *)this + 112) );
    }
    operator delete(v12);
  }
LABEL_63:
  ReleaseInterfaceNoNULL<IWICBitmap>(v46);
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v47);
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v48);
  return (unsigned int)v14;
}
