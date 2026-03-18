/*
 * XREFs of ?FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProperties@@@Z @ 0x1800B63D8
 * Callers:
 *     ?BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18002686C (-BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPE.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180043ED0 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180046690 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveColor::FindOrCreatePrimitiveProperties(
        CPrimitiveColor *this,
        unsigned __int64 a2,
        struct CD2DPrimitiveProperties **a3)
{
  signed int v4; // ebx
  char v5; // r14
  struct CD2DPrimitiveProperties *v6; // rcx
  __int64 v7; // r9
  struct CD2DPrimitiveProperties **v8; // r15
  unsigned __int64 v9; // r10
  int v10; // eax
  __int64 v11; // rdi
  CD2DContext *v12; // rbx
  struct CD2DPrimitiveProperties *v13; // r10
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // eax
  signed int v20; // eax
  signed int v21; // eax
  DWORD v22; // r9d
  __int64 v23; // rcx
  unsigned int v24; // [rsp+20h] [rbp-10h]
  struct CD2DPrimitiveProperties *v25; // [rsp+60h] [rbp+30h] BYREF
  CPrimitiveColor *v26; // [rsp+78h] [rbp+48h] BYREF

  v4 = 0;
  v25 = 0LL;
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
        goto LABEL_2;
    }
    v6 = a3[v7];
  }
LABEL_2:
  v25 = v6;
  if ( v6 )
    goto LABEL_17;
  v10 = (*(__int64 (__fastcall **)(unsigned __int64, struct CD2DPrimitiveProperties **, struct CD2DPrimitiveProperties **, __int64))(*(_QWORD *)v9 + 232LL))(
          v9,
          &v25,
          a3,
          v7);
  v4 = v10;
  if ( v10 < 0 )
  {
    v24 = 117;
    v22 = v10;
  }
  else
  {
    v11 = *((_QWORD *)v25 + 13);
    v12 = *(CD2DContext **)(*((_QWORD *)v25 + 3) + 24LL);
    CD2DContext::EnsureBeginDraw(v12);
    (*(void (__fastcall **)(_QWORD *, __int64, char *))(**((_QWORD **)v12 + 23) + 48LL))(
      *((_QWORD **)v12 + 23),
      v11,
      (char *)this + 112);
    v13 = v25;
    v14 = (unsigned int)v25;
    v26 = this;
    v15 = *((unsigned int *)v25 + 20);
    v16 = v15 + 1;
    if ( (int)v15 + 1 >= (unsigned int)v15 )
      v14 = v15 + 1;
    v4 = v16 < (unsigned int)v15 ? 0x80070216 : 0;
    if ( v16 < (unsigned int)v15 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0xB5u);
    }
    else if ( v14 > *((_DWORD *)v25 + 19) )
    {
      v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v25 + 56, 8u, 1, &v26);
      v4 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v25 + 7) + 8 * v15) = v26;
      *((_DWORD *)v13 + 20) = v14;
    }
    if ( v4 < 0 )
    {
      v24 = 123;
    }
    else
    {
      v17 = *((unsigned int *)this + 22);
      v5 = 1;
      a2 = (unsigned int)v25;
      v18 = v17 + 1;
      if ( (int)v17 + 1 >= (unsigned int)v17 )
        a2 = v18;
      v4 = v18 < (unsigned int)v17 ? 0x80070216 : 0;
      if ( v18 < (unsigned int)v17 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0xB5u);
      }
      else if ( (unsigned int)a2 > *((_DWORD *)this + 21) )
      {
        v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 64, 8u, 1, &v25);
        v4 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v17) = v25;
        *((_DWORD *)this + 22) = a2;
      }
      if ( v4 >= 0 )
      {
        v6 = v25;
LABEL_17:
        (*(void (__fastcall **)(struct CD2DPrimitiveProperties *, unsigned __int64, struct CD2DPrimitiveProperties **, __int64))(*(_QWORD *)v6 + 8LL))(
          v6,
          a2,
          a3,
          v7);
        *v8 = v25;
        return (unsigned int)v4;
      }
      v24 = 127;
    }
    v22 = v4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, v24);
  v23 = (__int64)v25;
  if ( v25 )
  {
    if ( v5 )
    {
      CD2DResource::RemoveResourceNotifier((struct CD2DPrimitiveProperties *)((char *)v25 + 16), this);
      v23 = (__int64)v25;
    }
    ReleaseInterfaceNoNULL<CManipulationManager>(v23);
  }
  return (unsigned int)v4;
}
