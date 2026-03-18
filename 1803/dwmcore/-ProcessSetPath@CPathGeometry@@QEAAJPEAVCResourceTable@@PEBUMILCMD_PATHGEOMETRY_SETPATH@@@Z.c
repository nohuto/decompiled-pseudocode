/*
 * XREFs of ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x18019DE48
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x18002BC88 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180088FE0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x18019DF7C (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180208A78 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 */

__int64 __fastcall CPathGeometry::ProcessSetPath(
        CPathGeometry *this,
        struct CResourceTable *a2,
        const struct MILCMD_PATHGEOMETRY_SETPATH *a3)
{
  unsigned int v5; // ebx
  __int64 Resource; // rax
  __int64 v7; // rcx
  CSharedSection *v8; // rsi
  CD3DDeviceManager *v9; // rcx
  void *v10; // rsi
  int D2DFactoryNoRef; // eax
  const struct CPathData *v12; // rax
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF
  struct CD2DFactory *v15; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x83u);
  v7 = *((_QWORD *)this + 17);
  v8 = (CSharedSection *)Resource;
  if ( v7 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v8 )
  {
    v10 = CSharedSection::ResolveAllocation(v8, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
    if ( v10 )
    {
      D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v9, &v15);
      v5 = D2DFactoryNoRef;
      if ( D2DFactoryNoRef < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DFactoryNoRef, 0x1Fu);
      }
      else
      {
        v12 = (const struct CPathData *)HeapAlloc(WPF::g_processHeap, 0, 0x58uLL);
        if ( v12 )
        {
          v14[0] = *((unsigned int *)a3 + 4);
          v14[1] = v10;
          v12 = (const struct CPathData *)CPathData::CPathData(v12, *((_QWORD *)v15 + 3), v14);
        }
        if ( v12 )
        {
          CPathGeometry::SetPath(this, v12);
        }
        else
        {
          v5 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x25u);
        }
      }
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Cu);
    }
  }
  return v5;
}
