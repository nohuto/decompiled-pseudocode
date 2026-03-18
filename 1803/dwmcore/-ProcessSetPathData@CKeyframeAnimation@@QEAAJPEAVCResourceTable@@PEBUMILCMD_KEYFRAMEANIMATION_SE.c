/*
 * XREFs of ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x180197A20
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x18002BC88 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180088FE0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_back@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@@Z @ 0x180197550 (--$emplace_back@V-$ComPtr@VCPathData@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VCPathData@@@WRL@Micro.c)
 *     ?_Reallocate_exactly@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x180197EA0 (-_Reallocate_exactly@-$vector@V-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPat.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180208A78 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetPathData(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_KEYFRAMEANIMATION_SETPATHDATA *a3,
        _DWORD *a4,
        unsigned int a5)
{
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rbp
  __int64 v11; // r8
  _BOOL8 v12; // rcx
  int D2DFactoryNoRef; // eax
  unsigned int v14; // ebx
  unsigned int v15; // esi
  struct CD2DFactory *v16; // r13
  __int64 v17; // rax
  __int64 v18; // rbx
  CSharedSection *Resource; // rax
  void *v20; // r14
  LPVOID v21; // rax
  struct CD2DFactory *v22; // rbx
  int v23; // r9d
  unsigned int v25; // [rsp+20h] [rbp-58h]
  __int128 v26; // [rsp+30h] [rbp-48h]
  __int128 v27; // [rsp+40h] [rbp-38h] BYREF
  struct CD2DFactory *v28; // [rsp+90h] [rbp+18h] BYREF

  v8 = a5 / 0xCuLL;
  if ( !*((_DWORD *)a3 + 3)
    || a5 % 0xCuLL
    || !v8
    || (v9 = *((unsigned int *)a3 + 3),
        v10 = (_QWORD *)((char *)this + 392),
        v11 = *((_QWORD *)this + 50),
        v8 + ((v11 - *((_QWORD *)this + 49)) >> 3) > v9)
    || (v12 = *v10 == v11, (*((_DWORD *)a3 + 2) != 0) == v12) )
  {
    v25 = 645;
  }
  else
  {
    if ( *v10 == v11 && v9 > (__int64)(v10[2] - *v10) >> 3 )
      std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Reallocate_exactly(v10);
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef((CD3DDeviceManager *)v12, &v28);
    v14 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DFactoryNoRef, 0x291u);
      return v14;
    }
    v15 = 0;
    v16 = v28;
    v17 = 0LL;
    while ( 1 )
    {
      v18 = 3 * v17;
      Resource = (CSharedSection *)CResourceTable::GetResource((__int64)a2, a4[3 * v17], 0x83u);
      if ( !Resource )
        break;
      v20 = CSharedSection::ResolveAllocation(Resource, (unsigned int)a4[v18 + 1], (unsigned int)a4[v18 + 2]);
      if ( !v20 )
      {
        v23 = -2147024882;
        v25 = 675;
        goto LABEL_28;
      }
      v21 = HeapAlloc(WPF::g_processHeap, 0, 0x58uLL);
      if ( v21 )
      {
        *(_QWORD *)&v26 = (unsigned int)a4[v18 + 2];
        *((_QWORD *)&v26 + 1) = v20;
        v27 = v26;
        v22 = (struct CD2DFactory *)CPathData::CPathData(v21, *((_QWORD *)v16 + 3), &v27);
      }
      else
      {
        v22 = 0LL;
      }
      v28 = v22;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v28);
      if ( !v22 )
      {
        v23 = -2147024882;
        v25 = 681;
        goto LABEL_28;
      }
      std::vector<Microsoft::WRL::ComPtr<CPathData>>::emplace_back<Microsoft::WRL::ComPtr<CPathData>>(
        v10,
        (__int64 *)&v28);
      if ( v28 )
        (*(void (__fastcall **)(struct CD2DFactory *))(*(_QWORD *)v28 + 16LL))(v28);
      v17 = ++v15;
      if ( v15 >= v8 )
        return 0;
    }
    v25 = 669;
  }
  v23 = -2003303421;
LABEL_28:
  v14 = v23;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, v25);
  return v14;
}
