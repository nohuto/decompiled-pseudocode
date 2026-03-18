/*
 * XREFs of ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x180026B94
 * Callers:
 *     ?GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x180025F10 (-GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18002686C (-BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPE.c)
 *     ?BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1Bitmap@@@Z @ 0x18002696C (-BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1B.c)
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180046460 (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180046690 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewD2DCommandList(
        CPrimitiveGroup *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        struct CD2DCommandList **a4)
{
  struct ID2D1Bitmap **v7; // r15
  struct CSharedSection *v8; // r8
  struct ID2D1Bitmap **v9; // r12
  unsigned int v10; // edx
  struct ID2D1PrivateCompositorPrimitiveProperties **v11; // r14
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // eax
  unsigned __int64 v16; // rcx
  struct ID2D1Bitmap **v17; // rax
  struct ID2DContext *v18; // r8
  int v19; // eax
  unsigned int v20; // eax
  unsigned __int64 v21; // rcx
  unsigned int v22; // eax
  unsigned __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // r10
  unsigned int v26; // edx
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // rcx
  char v30; // si
  unsigned int v31; // edx
  unsigned int v32; // eax
  struct CD2DCommandList *v33; // rax
  __int64 i; // rsi
  __int64 j; // rsi
  struct ID2D1Bitmap **v37; // rax
  struct ID2DContext *v38; // r8
  int v39; // eax
  struct ID2D1PrivateCompositorPrimitiveProperties **v40; // rax
  struct ID2DContextOwner *v41; // rdx
  __int64 k; // rsi
  int v43; // eax
  int v44; // r9d
  int v45; // eax
  unsigned int v46; // [rsp+20h] [rbp-60h]
  unsigned int v47; // [rsp+20h] [rbp-60h]
  __int64 v48; // [rsp+60h] [rbp-20h] BYREF
  struct ID2D1PrivateCompositorBuffer *v49; // [rsp+68h] [rbp-18h] BYREF
  struct ID2D1PrivateCompositorBuffer *v50; // [rsp+70h] [rbp-10h] BYREF
  char *v51; // [rsp+78h] [rbp-8h] BYREF

  *a4 = 0LL;
  v7 = 0LL;
  v48 = 0LL;
  v8 = (struct CSharedSection *)*((_QWORD *)this + 53);
  v9 = 0LL;
  v10 = *((_DWORD *)this + 128);
  v11 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v12 = CD2DSharedBuffer::CreateFromSharedSection(*((void **)this + 63), v10, v8, &v49);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x323u);
    goto LABEL_68;
  }
  v14 = CD2DSharedBuffer::CreateFromSharedSection(
          *((void **)this + 65),
          *((_DWORD *)this + 132),
          *((struct CSharedSection **)this + 53),
          &v50);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x329u);
    goto LABEL_68;
  }
  v15 = *((_DWORD *)this + 110);
  v16 = *((unsigned int *)this + 48);
  if ( v15 < (unsigned int)v16 )
    v16 = v15;
  *((_DWORD *)this + 110) = v16;
  if ( (_DWORD)v16 )
  {
    v17 = (struct ID2D1Bitmap **)operator new(saturated_mul(v16, 8uLL));
    v7 = v17;
    if ( !v17 )
    {
      v13 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x330u);
      goto LABEL_35;
    }
    memset_0(v17, 0, 8LL * *((unsigned int *)this + 110));
    v19 = CPrimitiveGroup::BuildD2DBitmapList(this, a2, v18, 0, *((_DWORD *)this + 110), v7);
    v13 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x337u);
LABEL_68:
      v30 = 0;
      goto LABEL_28;
    }
  }
  v20 = *((_DWORD *)this + 111);
  v21 = (unsigned int)(*((_DWORD *)this + 48) - *((_DWORD *)this + 110));
  if ( v20 < (unsigned int)v21 )
    v21 = v20;
  *((_DWORD *)this + 111) = v21;
  if ( (_DWORD)v21 )
  {
    v37 = (struct ID2D1Bitmap **)operator new(saturated_mul(v21, 8uLL));
    v9 = v37;
    if ( !v37 )
    {
      v46 = 831;
      goto LABEL_56;
    }
    memset_0(v37, 0, 8LL * *((unsigned int *)this + 111));
    v39 = CPrimitiveGroup::BuildD2DBitmapList(this, a2, v38, *((_DWORD *)this + 110), *((_DWORD *)this + 111), v9);
    v13 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x346u);
      v30 = 0;
LABEL_28:
      if ( v13 < 0 && v30 )
        CD2DResource::RemoveResourceNotifier((CD2DResource *)(v48 + 16), (CPrimitiveGroup *)((char *)this + 56));
      goto LABEL_29;
    }
  }
  v22 = *((_DWORD *)this + 112);
  v23 = *((unsigned int *)this + 64);
  if ( v22 < (unsigned int)v23 )
    v23 = v22;
  *((_DWORD *)this + 112) = v23;
  if ( !(_DWORD)v23 )
    goto LABEL_14;
  v40 = (struct ID2D1PrivateCompositorPrimitiveProperties **)operator new(saturated_mul(v23, 8uLL));
  v11 = v40;
  if ( v40 )
  {
    memset_0(v40, 0, 8LL * *((unsigned int *)this + 112));
    v24 = CPrimitiveGroup::BuildD2DColorPropertiesList(this, v41, a3, *((_DWORD *)this + 112), v11);
    v13 = v24;
    if ( v24 < 0 )
    {
      v47 = 852;
      goto LABEL_58;
    }
LABEL_14:
    v24 = (*(__int64 (__fastcall **)(struct ID2DContext *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, _QWORD, struct ID2D1Bitmap **, _QWORD, struct ID2D1PrivateCompositorPrimitiveProperties **, _QWORD, __int64 *))(*(_QWORD *)a3 + 224LL))(
            a3,
            v49,
            v50,
            v7,
            *((unsigned int *)this + 110),
            v9,
            *((unsigned int *)this + 111),
            v11,
            *((unsigned int *)this + 112),
            &v48);
    v13 = v24;
    if ( v24 >= 0 )
    {
      v25 = v48;
      v26 = (unsigned int)a4;
      v51 = (char *)this + 56;
      v27 = *(unsigned int *)(v48 + 80);
      v28 = v27 + 1;
      if ( (int)v27 + 1 >= (unsigned int)v27 )
        v26 = v27 + 1;
      v13 = v28 < (unsigned int)v27 ? 0x80070216 : 0;
      if ( v28 < (unsigned int)v27 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xB5u);
      }
      else if ( v26 > *(_DWORD *)(v48 + 76) )
      {
        v43 = DynArrayImpl<0>::AddMultipleAndSet(v48 + 56, 8LL, 1LL, &v51);
        v13 = v43;
        if ( v43 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v48 + 56) + 8 * v27) = v51;
        *(_DWORD *)(v25 + 80) = v26;
      }
      if ( v13 >= 0 )
      {
        v29 = *((unsigned int *)this + 34);
        v30 = 1;
        v31 = (unsigned int)a4;
        v32 = v29 + 1;
        if ( (int)v29 + 1 >= (unsigned int)v29 )
          v31 = v29 + 1;
        v13 = v32 < (unsigned int)v29 ? 0x80070216 : 0;
        if ( v32 < (unsigned int)v29 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xB5u);
        }
        else if ( v31 > *((_DWORD *)this + 33) )
        {
          v45 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 112, 8LL, 1LL, &v48);
          v13 = v45;
          if ( v45 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v29) = v48;
          *((_DWORD *)this + 34) = v31;
        }
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x366u);
        }
        else
        {
          v33 = (struct CD2DCommandList *)v48;
          v48 = 0LL;
          *a4 = v33;
        }
        goto LABEL_28;
      }
      v47 = 867;
      v44 = v13;
      goto LABEL_60;
    }
    v47 = 865;
LABEL_58:
    v44 = v24;
LABEL_60:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, v47);
    v30 = 0;
    goto LABEL_28;
  }
  v46 = 846;
LABEL_56:
  v13 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v46);
LABEL_29:
  if ( v7 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 110); i = (unsigned int)(i + 1) )
      ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v7[i]);
    WPF::ProcessHeapImpl::Free(v7);
  }
  if ( v9 )
  {
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 111); j = (unsigned int)(j + 1) )
      ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v9[j]);
    WPF::ProcessHeapImpl::Free(v9);
  }
  if ( v11 )
  {
    for ( k = 0LL; (unsigned int)k < *((_DWORD *)this + 112); k = (unsigned int)(k + 1) )
      ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v11[k]);
    WPF::ProcessHeapImpl::Free(v11);
  }
LABEL_35:
  if ( v48 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v49);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v50);
  return (unsigned int)v13;
}
