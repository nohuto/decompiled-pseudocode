/*
 * XREFs of ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18000BCEC
 * Callers:
 *     ?GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18000CBB8 (-GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18000BB5C (-BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPE.c)
 *     ?BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1Bitmap@@@Z @ 0x18000BC5C (-BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1B.c)
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18001E1D4 (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18004BD30 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CreateLegacyCommandList@CD2DContext@@MEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x1800AD0A0 (-CreateLegacyCommandList@CD2DContext@@MEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  __int64 (__fastcall *v27)(CD2DContext *__hidden, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, unsigned __int64, struct ID2D1Bitmap **, unsigned __int64, struct ID2D1PrivateCompositorPrimitiveProperties **, unsigned __int64, struct CD2DCommandList **); // rax
  int v28; // eax
  struct CD2DCommandList *v29; // r10
  unsigned int v30; // edx
  __int64 v31; // rcx
  unsigned int v32; // eax
  __int64 v33; // rcx
  char v34; // si
  unsigned int v35; // edx
  unsigned int v36; // eax
  struct CD2DCommandList *v37; // rax
  __int64 i; // rsi
  __int64 j; // rsi
  struct ID2D1Bitmap **v41; // rax
  struct ID2DContext *v42; // r8
  int v43; // eax
  struct ID2D1PrivateCompositorPrimitiveProperties **v44; // rax
  struct ID2DContextOwner *v45; // rdx
  int v46; // eax
  __int64 k; // rsi
  int v48; // eax
  int v49; // eax
  unsigned int v50; // [rsp+20h] [rbp-60h]
  struct CD2DCommandList *v51; // [rsp+60h] [rbp-20h] BYREF
  struct ID2D1PrivateCompositorBuffer *v52; // [rsp+68h] [rbp-18h] BYREF
  struct ID2D1PrivateCompositorBuffer *v53; // [rsp+70h] [rbp-10h] BYREF
  char *v54; // [rsp+78h] [rbp-8h] BYREF

  *a4 = 0LL;
  v7 = 0LL;
  v51 = 0LL;
  v8 = (struct CSharedSection *)*((_QWORD *)this + 37);
  v9 = 0LL;
  v10 = *((_DWORD *)this + 96);
  v11 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v12 = CD2DSharedBuffer::CreateFromSharedSection(*((void **)this + 47), v10, v8, &v52);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x33Eu);
    goto LABEL_70;
  }
  v14 = CD2DSharedBuffer::CreateFromSharedSection(
          *((void **)this + 49),
          *((_DWORD *)this + 100),
          *((struct CSharedSection **)this + 37),
          &v53);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x344u);
    goto LABEL_70;
  }
  v15 = *((_DWORD *)this + 78);
  v16 = *((unsigned int *)this + 48);
  if ( v15 < (unsigned int)v16 )
    v16 = v15;
  *((_DWORD *)this + 78) = v16;
  if ( (_DWORD)v16 )
  {
    v17 = (struct ID2D1Bitmap **)operator new(saturated_mul(v16, 8uLL));
    v7 = v17;
    if ( !v17 )
    {
      v13 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x34Bu);
      goto LABEL_37;
    }
    memset_0(v17, 0, 8LL * *((unsigned int *)this + 78));
    v19 = CPrimitiveGroup::BuildD2DBitmapList(this, a2, v18, 0, *((_DWORD *)this + 78), v7);
    v13 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x352u);
LABEL_70:
      v34 = 0;
      goto LABEL_30;
    }
  }
  v20 = *((_DWORD *)this + 79);
  v21 = (unsigned int)(*((_DWORD *)this + 48) - *((_DWORD *)this + 78));
  if ( v20 < (unsigned int)v21 )
    v21 = v20;
  *((_DWORD *)this + 79) = v21;
  if ( (_DWORD)v21 )
  {
    v41 = (struct ID2D1Bitmap **)operator new(saturated_mul(v21, 8uLL));
    v9 = v41;
    if ( !v41 )
    {
      v50 = 858;
      goto LABEL_56;
    }
    memset_0(v41, 0, 8LL * *((unsigned int *)this + 79));
    v43 = CPrimitiveGroup::BuildD2DBitmapList(this, a2, v42, *((_DWORD *)this + 78), *((_DWORD *)this + 79), v9);
    v13 = v43;
    if ( v43 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x361u);
      v34 = 0;
LABEL_30:
      if ( v13 < 0 && v34 )
        CD2DResource::RemoveResourceNotifier(
          (struct CD2DCommandList *)((char *)v51 + 16),
          (CPrimitiveGroup *)((char *)this + 56));
      goto LABEL_31;
    }
  }
  v22 = *((_DWORD *)this + 80);
  v23 = *((unsigned int *)this + 64);
  if ( v22 < (unsigned int)v23 )
    v23 = v22;
  *((_DWORD *)this + 80) = v23;
  if ( !(_DWORD)v23 )
    goto LABEL_14;
  v44 = (struct ID2D1PrivateCompositorPrimitiveProperties **)operator new(saturated_mul(v23, 8uLL));
  v11 = v44;
  if ( v44 )
  {
    memset_0(v44, 0, 8LL * *((unsigned int *)this + 80));
    v46 = CPrimitiveGroup::BuildD2DColorPropertiesList(this, v45, a3, *((_DWORD *)this + 80), v11);
    v13 = v46;
    if ( v46 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x36Fu);
LABEL_58:
      v34 = 0;
      goto LABEL_30;
    }
LABEL_14:
    v24 = *((unsigned int *)this + 80);
    v25 = *((unsigned int *)this + 79);
    v26 = *((unsigned int *)this + 78);
    v27 = *(__int64 (__fastcall **)(CD2DContext *__hidden, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, unsigned __int64, struct ID2D1Bitmap **, unsigned __int64, struct ID2D1PrivateCompositorPrimitiveProperties **, unsigned __int64, struct CD2DCommandList **))(*(_QWORD *)a3 + 264LL);
    if ( v27 == CD2DContext::CreateLegacyCommandList )
      v28 = CD2DContext::CreateLegacyCommandList(a3, v52, v53, v7, v26, v9, v25, v11, v24, &v51);
    else
      v28 = v27(a3, v52, v53, v7, v26, v9, v25, v11, v24, &v51);
    v13 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x37Cu);
    }
    else
    {
      v29 = v51;
      v30 = (unsigned int)a4;
      v54 = (char *)this + 56;
      v31 = *((unsigned int *)v51 + 20);
      v32 = v31 + 1;
      if ( (int)v31 + 1 >= (unsigned int)v31 )
        v30 = v31 + 1;
      v13 = v32 < (unsigned int)v31 ? 0x80070216 : 0;
      if ( v32 < (unsigned int)v31 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xB5u);
      }
      else if ( v30 > *((_DWORD *)v51 + 19) )
      {
        v48 = DynArrayImpl<0>::AddMultipleAndSet((char *)v51 + 56, 8LL, 1LL, &v54);
        v13 = v48;
        if ( v48 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v51 + 7) + 8 * v31) = v54;
        *((_DWORD *)v29 + 20) = v30;
      }
      if ( v13 >= 0 )
      {
        v33 = *((unsigned int *)this + 34);
        v34 = 1;
        v35 = (unsigned int)a4;
        v36 = v33 + 1;
        if ( (int)v33 + 1 >= (unsigned int)v33 )
          v35 = v33 + 1;
        v13 = v36 < (unsigned int)v33 ? 0x80070216 : 0;
        if ( v36 < (unsigned int)v33 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xB5u);
        }
        else if ( v35 > *((_DWORD *)this + 33) )
        {
          v49 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 112, 8LL, 1LL, &v51);
          v13 = v49;
          if ( v49 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v33) = v51;
          *((_DWORD *)this + 34) = v35;
        }
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x381u);
        }
        else
        {
          v37 = v51;
          v51 = 0LL;
          *a4 = v37;
        }
        goto LABEL_30;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x37Eu);
    }
    goto LABEL_58;
  }
  v50 = 873;
LABEL_56:
  v13 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v50);
LABEL_31:
  if ( v7 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 78); i = (unsigned int)(i + 1) )
      ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v7[i]);
    WPF::ProcessHeapImpl::Free(v7);
  }
  if ( v9 )
  {
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 79); j = (unsigned int)(j + 1) )
      ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v9[j]);
    WPF::ProcessHeapImpl::Free(v9);
  }
  if ( v11 )
  {
    for ( k = 0LL; (unsigned int)k < *((_DWORD *)this + 80); k = (unsigned int)(k + 1) )
      ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v11[k]);
    WPF::ProcessHeapImpl::Free(v11);
  }
LABEL_37:
  if ( v51 )
    (*(void (__fastcall **)(struct CD2DCommandList *))(*(_QWORD *)v51 + 16LL))(v51);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v52);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v53);
  return (unsigned int)v13;
}
