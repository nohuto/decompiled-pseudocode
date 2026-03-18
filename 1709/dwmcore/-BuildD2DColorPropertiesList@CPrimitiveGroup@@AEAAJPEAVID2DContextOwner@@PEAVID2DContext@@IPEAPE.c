/*
 * XREFs of ?BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18002686C
 * Callers:
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x180026B94 (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProperties@@@Z @ 0x1800B63D8 (-FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProp.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::BuildD2DColorPropertiesList(
        CPrimitiveGroup *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        unsigned int a4,
        struct ID2D1PrivateCompositorPrimitiveProperties **a5)
{
  int v5; // ebx
  unsigned int v6; // ebp
  CPrimitiveGroup *v9; // rax
  struct ID2D1PrivateCompositorPrimitiveProperties **v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // eax
  struct CD2DPrimitiveProperties *v15; // r15
  struct CD2DPrimitiveProperties *v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+88h] [rbp+10h] BYREF

  v5 = 0;
  v6 = 0;
  v19 = 0LL;
  v9 = this;
  if ( a4 )
  {
    v10 = a5;
    v11 = 0LL;
    while ( 1 )
    {
      v12 = *((_QWORD *)v9 + 29);
      v17 = 0LL;
      v13 = 0LL;
      v19 = 0LL;
      v14 = CPrimitiveColor::FindOrCreatePrimitiveProperties(
              (CPrimitiveColor *)((*(_QWORD *)(v11 * 8 + v12) - 8LL) & -(__int64)(*(_QWORD *)(v11 * 8 + v12) != 0LL)),
              a3,
              &v17);
      v15 = v17;
      v5 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xB7u);
      }
      else
      {
        v19 = *((_QWORD *)v17 + 13);
        v13 = v19;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      }
      ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v15);
      if ( v5 < 0 )
        break;
      v19 = 0LL;
      ++v6;
      v9 = this;
      v10[v11++] = (struct ID2D1PrivateCompositorPrimitiveProperties *)v13;
      if ( v6 >= a4 )
        goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x439u);
  }
LABEL_7:
  ReleaseInterface<IBitmapLock>(&v19);
  return (unsigned int)v5;
}
