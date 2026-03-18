/*
 * XREFs of ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18000C104
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@QEAAJXZ @ 0x18000C334 (-EnsureDrawListGenerator@CPrimitiveGroup@@QEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageSource@@020PEAPEAVCResource@@0PEAPEAV1@@Z @ 0x180009990 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageS.c)
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18001E1D4 (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z @ 0x1800C4A14 (--$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewGenerator(
        CPrimitiveGroup *this,
        struct CPrimitiveGroupDrawListGenerator **a2)
{
  struct CPrimitiveGroupDrawListGenerator *v2; // r14
  struct IImageSource **v5; // r12
  struct IImageSource **v6; // r15
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx
  struct IImageSource **v12; // rax
  __int64 i; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  struct ID2D1PrivateCompositorBuffer *v20; // r8
  int v21; // eax
  __int64 k; // rsi
  struct IImageSource **v24; // rax
  int v25; // esi
  __int64 j; // rdi
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 m; // rsi
  struct CResource **v32; // [rsp+38h] [rbp-50h]
  struct CPrimitiveGroupDrawListGenerator *v33; // [rsp+90h] [rbp+8h] BYREF
  struct ID2D1PrivateCompositorBuffer *v34; // [rsp+98h] [rbp+10h] BYREF
  struct ID2D1PrivateCompositorBuffer *v35; // [rsp+A0h] [rbp+18h] BYREF

  v2 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v5 = 0LL;
  v33 = 0LL;
  *a2 = 0LL;
  v6 = 0LL;
  v7 = CD2DSharedBuffer::CreateFromSharedSection(
         *((void **)this + 47),
         *((_DWORD *)this + 96),
         *((struct CSharedSection **)this + 37),
         &v34);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x299u);
  }
  else
  {
    v9 = CD2DSharedBuffer::CreateFromSharedSection(
           *((void **)this + 49),
           *((_DWORD *)this + 100),
           *((struct CSharedSection **)this + 37),
           &v35);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x29Fu);
      goto LABEL_21;
    }
    v10 = *((_DWORD *)this + 78);
    v11 = *((unsigned int *)this + 48);
    if ( v10 < (unsigned int)v11 )
      v11 = v10;
    *((_DWORD *)this + 78) = v11;
    if ( (_DWORD)v11 )
    {
      v12 = (struct IImageSource **)operator new(saturated_mul(v11, 8uLL));
      v5 = v12;
      if ( !v12 )
      {
        v8 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2A6u);
        goto LABEL_21;
      }
      memset_0(v12, 0, 8LL * *((unsigned int *)this + 78));
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 78); i = (unsigned int)(i + 1) )
      {
        v14 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * i);
        v15 = (v14 + 64) & -(__int64)(v14 != 0);
        v5[i] = (struct IImageSource *)v15;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    v16 = *((_DWORD *)this + 48) - *((_DWORD *)this + 78);
    if ( *((_DWORD *)this + 79) < v16 )
      v16 = *((_DWORD *)this + 79);
    *((_DWORD *)this + 79) = v16;
    if ( !v16 )
      goto LABEL_12;
    v24 = (struct IImageSource **)operator new(saturated_mul(v16, 8uLL));
    v6 = v24;
    if ( v24 )
    {
      memset_0(v24, 0, 8LL * *((unsigned int *)this + 79));
      v25 = *((_DWORD *)this + 78);
      for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 79); j = (unsigned int)(j + 1) )
      {
        v27 = *(_QWORD *)(*((_QWORD *)this + 21) + 8LL * (unsigned int)(j + v25));
        v28 = v27 + 64;
        v29 = -v27;
        v30 = v28 & -(__int64)(v29 != 0);
        v6[j] = (struct IImageSource *)v30;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 8LL))(v30, v29);
      }
LABEL_12:
      v17 = *((_DWORD *)this + 64);
      v18 = *((unsigned int *)this + 78);
      if ( *((_DWORD *)this + 80) < v17 )
        v17 = *((_DWORD *)this + 80);
      v19 = *((_QWORD *)this + 2);
      v32 = (struct CResource **)*((_QWORD *)this + 29);
      v20 = v35;
      *((_DWORD *)this + 80) = v17;
      v21 = CPrimitiveGroupDrawListGenerator::Create(
              *(_QWORD *)(v19 + 400),
              v34,
              v20,
              v5,
              v18,
              v6,
              *((unsigned int *)this + 79),
              v32,
              v17,
              &v33);
      v8 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x2DCu);
        v2 = v33;
      }
      else
      {
        *a2 = v33;
      }
      goto LABEL_16;
    }
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2BDu);
  }
LABEL_16:
  if ( v5 )
  {
    for ( k = 0LL; (unsigned int)k < *((_DWORD *)this + 78); k = (unsigned int)(k + 1) )
      ReleaseInterfaceNoNULL<IImageSource>(v5[k]);
    WPF::ProcessHeapImpl::Free(v5);
  }
  if ( v6 )
  {
    for ( m = 0LL; (unsigned int)m < *((_DWORD *)this + 79); m = (unsigned int)(m + 1) )
      ReleaseInterfaceNoNULL<IImageSource>(v6[m]);
    WPF::ProcessHeapImpl::Free(v6);
  }
LABEL_21:
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v34);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v35);
  if ( v2 )
    (*(void (__fastcall **)(struct CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v2 + 8LL))(v2);
  return v8;
}
