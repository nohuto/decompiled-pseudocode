/*
 * XREFs of ?FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProperties@@@Z @ 0x18002459C
 * Callers:
 *     ?BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18000BB5C (-BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPE.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18004BD30 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800AC7C4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveColor::FindOrCreatePrimitiveProperties(
        CPrimitiveColor *this,
        struct ID2DContext *a2,
        struct CD2DPrimitiveProperties **a3)
{
  int v3; // ebx
  char v4; // r14
  _QWORD *v5; // r9
  __int64 v6; // r10
  int v10; // eax
  __int64 v11; // rdi
  CD2DContext *v12; // rbx
  _QWORD *v13; // r10
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rcx
  __int64 v24; // rdx
  int v25; // eax
  int v26; // eax
  unsigned int v27; // [rsp+20h] [rbp-10h]
  _QWORD *v28; // [rsp+60h] [rbp+30h] BYREF
  CPrimitiveColor *v29; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v4 = 0;
  v28 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( *((_DWORD *)this + 22) )
  {
    v24 = *((_QWORD *)this + 8);
    while ( a2 != *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(v24 + 8 * v6) + 24LL) + 24LL) )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *((_DWORD *)this + 22) )
        goto LABEL_2;
    }
    v5 = *(_QWORD **)(v24 + 8 * v6);
  }
LABEL_2:
  v28 = v5;
  if ( v5 )
  {
    v21 = *v5;
    v22 = v5;
    goto LABEL_23;
  }
  v10 = (*(__int64 (__fastcall **)(struct ID2DContext *, _QWORD **))(*(_QWORD *)a2 + 272LL))(a2, &v28);
  v3 = v10;
  if ( v10 >= 0 )
  {
    v11 = v28[13];
    v12 = *(CD2DContext **)(v28[3] + 24LL);
    CD2DContext::EnsureBeginDraw(v12);
    (*(void (__fastcall **)(_QWORD *, __int64, char *))(**((_QWORD **)v12 + 23) + 48LL))(
      *((_QWORD **)v12 + 23),
      v11,
      (char *)this + 112);
    v13 = v28;
    v14 = (unsigned int)v28;
    v29 = this;
    v15 = *((unsigned int *)v28 + 20);
    v16 = v15 + 1;
    if ( (int)v15 + 1 >= (unsigned int)v15 )
      v14 = v15 + 1;
    v3 = v16 < (unsigned int)v15 ? 0x80070216 : 0;
    if ( v16 < (unsigned int)v15 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v14 > *((_DWORD *)v28 + 19) )
    {
      v25 = DynArrayImpl<0>::AddMultipleAndSet(v28 + 7, 8LL, 1LL, &v29);
      v3 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC0u);
    }
    else
    {
      *(_QWORD *)(v28[7] + 8 * v15) = v29;
      *((_DWORD *)v13 + 20) = v14;
    }
    if ( v3 < 0 )
    {
      v27 = 123;
      goto LABEL_17;
    }
    v17 = *((unsigned int *)this + 22);
    v4 = 1;
    v18 = (unsigned int)v28;
    v19 = v17 + 1;
    if ( (int)v17 + 1 >= (unsigned int)v17 )
      v18 = v17 + 1;
    v3 = v19 < (unsigned int)v17 ? 0x80070216 : 0;
    if ( v19 < (unsigned int)v17 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v18 > *((_DWORD *)this + 21) )
    {
      v26 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 64, 8LL, 1LL, &v28);
      v3 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v17) = v28;
      *((_DWORD *)this + 22) = v18;
    }
    if ( v3 < 0 )
    {
      v27 = 127;
LABEL_17:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, v27);
      goto LABEL_18;
    }
    v22 = v28;
    v21 = *v28;
LABEL_23:
    (*(void (__fastcall **)(_QWORD *))(v21 + 8))(v22);
    *a3 = (struct CD2DPrimitiveProperties *)v28;
    return (unsigned int)v3;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x75u);
LABEL_18:
  v20 = (__int64)v28;
  if ( v28 )
  {
    if ( v4 )
    {
      CD2DResource::RemoveResourceNotifier((CD2DResource *)(v28 + 2), this);
      v20 = (__int64)v28;
    }
    ReleaseInterfaceNoNULL<CD2DPencil>(v20);
  }
  return (unsigned int)v3;
}
