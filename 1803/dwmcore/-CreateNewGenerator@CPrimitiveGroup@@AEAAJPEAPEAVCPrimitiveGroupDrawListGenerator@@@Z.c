/*
 * XREFs of ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1800979B0
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x180097C3C (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x18006FEF4 (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800BE9D0 (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewGenerator(
        CPrimitiveGroup *this,
        struct CPrimitiveGroupDrawListGenerator **a2)
{
  struct ID2D1PrivateCompositorBuffer *v2; // rsi
  struct CSharedSection *v4; // r8
  unsigned int v6; // edx
  __int64 v7; // r14
  void *v8; // rcx
  int v9; // eax
  CD2DSharedBuffer *v10; // r15
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v13; // eax
  __int64 *v14; // r13
  unsigned int v15; // r8d
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v20; // eax
  __int64 *v21; // rsi
  int v22; // r8d
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // rcx
  unsigned int v26; // ecx
  unsigned int i; // r9d
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int128 v39; // [rsp+30h] [rbp-30h] BYREF
  __int128 v40; // [rsp+40h] [rbp-20h] BYREF
  __int128 v41; // [rsp+50h] [rbp-10h] BYREF
  struct ID2D1PrivateCompositorBuffer *v42; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v43; // [rsp+A8h] [rbp+48h] BYREF
  struct ID2D1PrivateCompositorBuffer *v44; // [rsp+B0h] [rbp+50h] BYREF

  v2 = 0LL;
  *a2 = 0LL;
  v4 = (struct CSharedSection *)*((_QWORD *)this + 53);
  v6 = *((_DWORD *)this + 128);
  v7 = 0LL;
  v8 = (void *)*((_QWORD *)this + 63);
  v44 = 0LL;
  v43 = 0LL;
  v42 = 0LL;
  v9 = CD2DSharedBuffer::CreateFromSharedSection(v8, v6, v4, &v44);
  v10 = v44;
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x2B4u);
    goto LABEL_17;
  }
  v12 = CD2DSharedBuffer::CreateFromSharedSection(
          *((void **)this + 65),
          *((_DWORD *)this + 132),
          *((struct CSharedSection **)this + 53),
          &v42);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x2BAu);
    goto LABEL_32;
  }
  v13 = *((_DWORD *)this + 48);
  v14 = (__int64 *)((char *)this + 296);
  v15 = *((_DWORD *)this + 110);
  v16 = *((_DWORD *)this + 111);
  v17 = *((_DWORD *)this + 64);
  if ( v15 >= v13 )
    v15 = *((_DWORD *)this + 48);
  v18 = v13 - v15;
  *((_DWORD *)this + 110) = v15;
  if ( v16 >= v18 )
    v16 = v18;
  v19 = *((_DWORD *)this + 112);
  *((_DWORD *)this + 111) = v16;
  if ( v19 >= v17 )
    v19 = v17;
  *((_DWORD *)this + 112) = v19;
  v20 = DynArrayImpl<0>::Grow((__int64)this + 296, 8u, v16 + v15, 1, 0LL);
  v11 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x2C1u);
    goto LABEL_32;
  }
  v21 = (__int64 *)((char *)this + 360);
  v22 = *((_DWORD *)this + 112);
  *((_DWORD *)this + 80) = *((_DWORD *)this + 110) + *((_DWORD *)this + 111);
  v23 = DynArrayImpl<0>::Grow((__int64)this + 360, 8u, v22, 1, 0LL);
  v11 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x2C4u);
LABEL_32:
    v2 = v42;
    goto LABEL_17;
  }
  v24 = 0LL;
  for ( *((_DWORD *)this + 96) = *((_DWORD *)this + 112);
        (unsigned int)v24 < *((_DWORD *)this + 110);
        v24 = (unsigned int)(v24 + 1) )
  {
    v25 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v24);
    *(_QWORD *)(*v14 + 8 * v24) = (v25 + 64) & -(__int64)(v25 != 0);
  }
  v26 = *((_DWORD *)this + 111);
  for ( i = 0; i < v26; v26 = *((_DWORD *)this + 111) )
  {
    v36 = i + *((_DWORD *)this + 110);
    v37 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v36);
    ++i;
    *(_QWORD *)(*v14 + 8 * v36) = (v37 + 64) & -(__int64)(v37 != 0);
  }
  v28 = *((unsigned int *)this + 112);
  v29 = 0LL;
  if ( (_DWORD)v28 )
  {
    do
    {
      v38 = *(_QWORD *)(*((_QWORD *)this + 29) + 8 * v29);
      *(_QWORD *)(*v21 + 8 * v29) = (v38 - 8) & -(__int64)(v38 != 0);
      v29 = (unsigned int)(v29 + 1);
      v28 = *((unsigned int *)this + 112);
    }
    while ( (unsigned int)v29 < (unsigned int)v28 );
    v26 = *((_DWORD *)this + 111);
  }
  v30 = *v14;
  *(_QWORD *)&v39 = v28;
  v31 = *v21;
  v2 = v42;
  *((_QWORD *)&v39 + 1) = v31;
  v32 = v26;
  v33 = *((unsigned int *)this + 110);
  *(_QWORD *)&v40 = v32;
  *(_QWORD *)&v41 = v33;
  *((_QWORD *)&v41 + 1) = v30;
  *((_QWORD *)&v40 + 1) = v30 + 8 * v33;
  v34 = CPrimitiveGroupDrawListGenerator::Create(v10, v42, &v41, &v40, &v39, &v43);
  v11 = v34;
  if ( v34 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x2F3u);
    v7 = v43;
  }
  else
  {
    *a2 = (struct CPrimitiveGroupDrawListGenerator *)v43;
  }
LABEL_17:
  if ( v10 )
    (*(void (__fastcall **)(CD2DSharedBuffer *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v2 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  return v11;
}
