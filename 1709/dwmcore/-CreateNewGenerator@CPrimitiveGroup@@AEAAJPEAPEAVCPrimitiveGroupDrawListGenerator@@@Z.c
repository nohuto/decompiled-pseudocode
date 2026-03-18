/*
 * XREFs of ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180026FB4
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x18002721C (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180046460 (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1AEBV?$span@PEAVIImageSource@@@gsl@@2AEBV?$span@PEAVCPrimitiveColor@@@4@PEAPEAV1@@Z @ 0x180046718 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1AEBV-$span@PEA.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180068650 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewGenerator(
        CPrimitiveGroup *this,
        struct CPrimitiveGroupDrawListGenerator **a2)
{
  struct ID2D1PrivateCompositorBuffer *v2; // rsi
  struct CSharedSection *v4; // r8
  unsigned int v6; // edx
  struct CPrimitiveGroupDrawListGenerator *v7; // r14
  void *v8; // rcx
  int v9; // eax
  struct ID2D1PrivateCompositorBuffer *v10; // r15
  unsigned int v11; // edi
  int v12; // eax
  __int64 *v13; // r13
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // r8d
  unsigned int v19; // eax
  int v20; // eax
  __int64 *v21; // rsi
  int v22; // r8d
  int v23; // eax
  unsigned int v24; // r9d
  __int64 v25; // r8
  __int64 v26; // rcx
  unsigned int i; // r9d
  unsigned int j; // r9d
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  _QWORD v40[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v41[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v42[2]; // [rsp+60h] [rbp-10h] BYREF
  struct ID2D1PrivateCompositorBuffer *v43; // [rsp+B0h] [rbp+40h] BYREF
  struct CPrimitiveGroupDrawListGenerator *v44; // [rsp+B8h] [rbp+48h] BYREF
  struct ID2D1PrivateCompositorBuffer *v45; // [rsp+C0h] [rbp+50h] BYREF

  v2 = 0LL;
  *a2 = 0LL;
  v4 = (struct CSharedSection *)*((_QWORD *)this + 53);
  v6 = *((_DWORD *)this + 128);
  v7 = 0LL;
  v8 = (void *)*((_QWORD *)this + 63);
  v45 = 0LL;
  v44 = 0LL;
  v43 = 0LL;
  v9 = CD2DSharedBuffer::CreateFromSharedSection(v8, v6, v4, &v45);
  v10 = v45;
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x2A2u);
    goto LABEL_17;
  }
  v12 = CD2DSharedBuffer::CreateFromSharedSection(
          *((void **)this + 65),
          *((_DWORD *)this + 132),
          *((struct CSharedSection **)this + 53),
          &v43);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x2A8u);
    goto LABEL_32;
  }
  v13 = (__int64 *)((char *)this + 296);
  v14 = *((_DWORD *)this + 48);
  v15 = *((_DWORD *)this + 64);
  v16 = v14;
  if ( *((_DWORD *)this + 110) < v14 )
    v16 = *((_DWORD *)this + 110);
  v17 = *((_DWORD *)this + 111);
  v18 = v14 - v16;
  *((_DWORD *)this + 110) = v16;
  if ( v17 < v18 )
    v18 = v17;
  v19 = *((_DWORD *)this + 112);
  *((_DWORD *)this + 111) = v18;
  if ( v19 < v15 )
    v15 = v19;
  *((_DWORD *)this + 112) = v15;
  v20 = DynArrayImpl<0>::Grow((int)this + 296, 8, v16 + v18, 1, 0LL);
  v11 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x2AFu);
    goto LABEL_32;
  }
  v21 = (__int64 *)((char *)this + 360);
  v22 = *((_DWORD *)this + 112);
  *((_DWORD *)this + 80) = *((_DWORD *)this + 110) + *((_DWORD *)this + 111);
  v23 = DynArrayImpl<0>::Grow((int)this + 360, 8, v22, 1, 0LL);
  v11 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x2B2u);
LABEL_32:
    v2 = v43;
    goto LABEL_17;
  }
  v24 = 0;
  for ( *((_DWORD *)this + 96) = *((_DWORD *)this + 112);
        v24 < *((_DWORD *)this + 110);
        *(_QWORD *)(*v13 + 8 * v25) = (v26 + 64) & -(__int64)(v26 != 0) )
  {
    v25 = v24;
    v26 = *(_QWORD *)(*((_QWORD *)this + 21) + 8LL * v24++);
  }
  for ( i = 0; i < *((_DWORD *)this + 111); *(_QWORD *)(*v13 + 8 * v36) = (v37 + 64) & -(__int64)(v37 != 0) )
  {
    v36 = i + *((_DWORD *)this + 110);
    v37 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v36);
    ++i;
  }
  for ( j = 0; j < *((_DWORD *)this + 112); *(_QWORD *)(*v21 + 8 * v38) = (v39 - 8) & -(__int64)(v39 != 0) )
  {
    v38 = j;
    v39 = *(_QWORD *)(*((_QWORD *)this + 29) + 8LL * j++);
  }
  v29 = *v21;
  v30 = *v13;
  v31 = *((unsigned int *)this + 110);
  v2 = v43;
  v40[0] = v29;
  v32 = *((unsigned int *)this + 112);
  v42[1] = v31;
  v40[1] = v32;
  v41[0] = v30 + 8 * v31;
  v41[1] = *((unsigned int *)this + 111);
  v33 = *((_QWORD *)this + 2);
  v42[0] = v30;
  v34 = CPrimitiveGroupDrawListGenerator::Create(*(_QWORD *)(v33 + 360), v10, v43, v42, v41, v40, &v44);
  v11 = v34;
  if ( v34 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x2E2u);
    v7 = v44;
  }
  else
  {
    *a2 = v44;
  }
LABEL_17:
  if ( v10 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v2 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v7 )
    (*(void (__fastcall **)(struct CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v7 + 8LL))(v7);
  return v11;
}
