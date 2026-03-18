/*
 * XREFs of ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x1802091A8
 * Callers:
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x1802095E0 (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18020C830 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerPositionAnimation@@@Z @ 0x180208BB0 (--4-$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionT.c)
 *     ?PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z @ 0x180209418 (-PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z.c)
 *     ?_Atomic_compare_exchange_strong_8@std@@YAHPEC_KPEA_K_KW4memory_order@1@3@Z @ 0x180209764 (-_Atomic_compare_exchange_strong_8@std@@YAHPEC_KPEA_K_KW4memory_order@1@3@Z.c)
 */

__int64 __fastcall CPathData::GetD2DGeometry(CPathData *this, struct ID2D1Factory *a2, struct ID2D1Geometry **a3)
{
  __int64 v3; // r14
  __int64 *v4; // rsi
  __int64 v5; // rax
  unsigned int v6; // ebx
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  struct ID2D1Geometry *v14; // rax
  struct ID2D1Geometry *v16; // [rsp+60h] [rbp+30h] BYREF
  struct ID2D1GeometrySink *v17; // [rsp+68h] [rbp+38h] BYREF
  __int64 v18; // [rsp+78h] [rbp+48h] BYREF

  v17 = a2;
  v3 = *((_QWORD *)this + 6);
  v4 = (__int64 *)((char *)this + 72);
  v5 = *((_QWORD *)this + 9);
  v6 = 0;
  v16 = 0LL;
  if ( !v5 || v3 != *((_QWORD *)this + 6) )
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
    v9 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)v3 + 80LL))(v3, &v16);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x67u);
    }
    else
    {
      v10 = (__int64)v16;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
      v11 = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v10 + 136LL))(v10, &v17);
      v6 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x68u);
      }
      else
      {
        v12 = CPathData::PushIntoSink(this, v17);
        v6 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x6Au);
        }
        else
        {
          v13 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v17 + 72LL))(v17);
          v6 = v13;
          if ( v13 >= 0 )
          {
            if ( v3 == *((_QWORD *)this + 6) )
            {
              v18 = 0LL;
              if ( (unsigned int)std::_Atomic_compare_exchange_strong_8(v4, &v18, v16) )
                (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 8LL))(*((_QWORD *)this + 9));
              else
                Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=((__int64 *)&v16, *v4);
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
            goto LABEL_13;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x6Cu);
        }
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
    goto LABEL_19;
  }
  Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=((__int64 *)&v16, *v4);
LABEL_13:
  v14 = v16;
  v16 = 0LL;
  *a3 = v14;
LABEL_19:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  return v6;
}
