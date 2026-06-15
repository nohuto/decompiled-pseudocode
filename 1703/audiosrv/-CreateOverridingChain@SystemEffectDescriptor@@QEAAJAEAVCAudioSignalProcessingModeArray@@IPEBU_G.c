/*
 * XREFs of ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800443E0
 * Callers:
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x180042494 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18004421C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 * Callees:
 *     ?CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@2@Z @ 0x180010250 (-CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV-$CSi.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x1800108F0 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180033760 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this @ 0x1800405E0 (std--_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std--allocator_int__bool__ea_1800405E0.c)
 *     ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180041770 (-CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GU.c)
 *     ?SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z @ 0x1800447C4 (-SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800459E8 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     ?MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180045A40 (-MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV-$function@$$A6AJPEAVSystemEffectDescriptor.c)
 *     std::_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Move @ 0x180045BE0 (std--_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std--allocator_int__long__ea_180045BE0.c)
 *     ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x180046088 (-RemoveAt@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAt@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHH@Z @ 0x1800C11B8 (-RemoveAt@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualH.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall SystemEffectDescriptor::CreateOverridingChain(
        SystemEffectDescriptor *this,
        struct CAudioSignalProcessingModeArray *a2,
        unsigned int a3,
        _OWORD *a4,
        int a5,
        int a6,
        _QWORD *a7)
{
  __int64 v7; // r14
  int v12; // edi
  int v13; // esi
  int v14; // eax
  _QWORD *v15; // rcx
  __int64 v16; // r9
  int v17; // edx
  int v18; // r10d
  _QWORD *v19; // r8
  __int64 v20; // rax
  int v21; // edx
  int v22; // r9d
  __int64 v23; // r8
  __int64 v24; // rdx
  void *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // r9d
  int v29; // r14d
  __int64 (__fastcall ***v30)(_QWORD, _BYTE *); // rcx
  _QWORD *v31; // rcx
  void (__fastcall *v33)(_QWORD *, char); // rax
  __int64 (__fastcall *v34)(_QWORD, _BYTE *); // rax
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  _QWORD *v39; // rcx
  void (__fastcall *v40)(_QWORD *, char); // rax
  std::_Ref_count_base *v41; // rcx
  __int64 v42; // rdx
  _QWORD *v43; // rcx
  void (__fastcall *v44)(_QWORD *, char); // rax
  std::_Ref_count_base *v45; // rcx
  __int64 v46; // rdx
  _QWORD *v47; // rcx
  void (__fastcall *v48)(_QWORD *, char); // rax
  __int64 v49; // rdx
  __int64 v50; // rbx
  int v51; // [rsp+28h] [rbp-E0h]
  int v52; // [rsp+28h] [rbp-E0h]
  void *Block; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v54; // [rsp+40h] [rbp-C8h]
  void *v55; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v56; // [rsp+50h] [rbp-B8h]
  void *v57; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A8h]
  void *v59; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v60; // [rsp+70h] [rbp-98h]
  __int128 v61; // [rsp+78h] [rbp-90h] BYREF
  std::_Ref_count_base *v62[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v63; // [rsp+98h] [rbp-70h]
  _BYTE v64[56]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v65; // [rsp+D8h] [rbp-30h]
  _BYTE v66[72]; // [rsp+E0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v63 = -2LL;
  v12 = 0;
  v13 = 0;
  if ( *((int *)this + 10) > 0 )
  {
    v7 = 0LL;
    do
    {
      v14 = *((_DWORD *)a2 + 2);
      if ( v14 > 0 )
      {
        do
        {
          if ( v12 < 0 || v12 >= v14 )
          {
            RaiseException(0xC000008C, 1u, 0, 0LL);
            JUMPOUT(0x180061726LL);
          }
          v15 = (_QWORD *)(*(_QWORD *)a2 + 16LL * v12);
          if ( v7 < 0 || v13 >= *((_DWORD *)this + 10) )
          {
            RaiseException(0xC000008C, 1u, 0, 0LL);
            JUMPOUT(0x180061710LL);
          }
          v16 = *(_QWORD *)(v7 + *((_QWORD *)this + 4));
          v17 = 0;
          v18 = *(_DWORD *)(v16 + 8);
          if ( v18 > 0 )
          {
            while ( 1 )
            {
              v19 = (_QWORD *)(*(_QWORD *)v16 + 16LL * v17);
              v20 = *v19 - *v15;
              if ( *v19 == *v15 )
                v20 = v19[1] - v15[1];
              if ( !v20 )
                break;
              if ( ++v17 >= v18 )
                goto LABEL_13;
            }
            if ( v17 != -1 )
              ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(v16);
          }
LABEL_13:
          ++v12;
          v14 = *((_DWORD *)a2 + 2);
        }
        while ( v12 < v14 );
      }
      ++v13;
      v7 += 16LL;
      v12 = 0;
    }
    while ( v13 < *((_DWORD *)this + 10) );
  }
LABEL_15:
  v21 = 0;
  v22 = *((_DWORD *)this + 10);
  if ( v22 > 0 )
  {
    v23 = 0LL;
    while ( v23 >= 0 && v21 < v22 )
    {
      if ( !*(_DWORD *)(*(_QWORD *)(v23 + *((_QWORD *)this + 4)) + 8LL) )
      {
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAt((char *)this + 32);
        goto LABEL_15;
      }
      ++v21;
      v23 += 16LL;
      if ( v21 >= v22 )
        goto LABEL_21;
    }
    RaiseException(0xC000008C, 1u, 0, 0LL);
    goto LABEL_64;
  }
LABEL_21:
  v59 = 0LL;
  v60 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  SystemEffectDescriptor::SeparateStreamingModes(
    this,
    a2,
    (struct CAudioSignalProcessingModeArray *)&v59,
    (struct CAudioSignalProcessingModeArray *)&v57);
  v55 = 0LL;
  v56 = 0LL;
  Block = 0LL;
  v54 = 0LL;
  SystemEffectDescriptor::CreateOverrideChainLists((__int64)this, a3, a4, a5, (__int64)&v55, (__int64)&Block);
  v25 = Block;
  if ( (int)v60 <= 0 )
    goto LABEL_22;
  *(_OWORD *)v62 = 0LL;
  LODWORD(v7) = SystemEffectChainDescriptor::CreateEffectChain((__int64)&v59, v54, Block, 0, 0LL, v62);
  if ( (int)v7 >= 0 )
  {
    if ( a7[7] )
    {
      v36 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
              v66,
              a7);
      v37 = SystemEffectChainDescriptor::MarkAsUnresolved(v62[0], v36);
      v29 = v37;
      if ( v37 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x154,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v37,
          v51);
        v41 = v62[1];
        if ( !v62[1] )
        {
LABEL_74:
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&Block);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v55);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v57);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v59);
          v43 = (_QWORD *)a7[7];
          if ( v43 )
          {
            LOBYTE(v42) = v43 != a7;
            v44 = *(void (__fastcall **)(_QWORD *, char))(*v43 + 32LL);
            if ( v44 == std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this )
              std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this(
                v43,
                v42);
            else
              v44(v43, v42);
            a7[7] = 0LL;
          }
          return (unsigned int)v29;
        }
LABEL_73:
        std::_Ref_count_base::_Decref(v41);
        goto LABEL_74;
      }
    }
    if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                          (__int64)this + 32,
                          (__int64 *)v62) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x155,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL,
        v51);
      v45 = v62[1];
      if ( v62[1] )
LABEL_81:
        std::_Ref_count_base::_Decref(v45);
LABEL_82:
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&Block);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v55);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v57);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v59);
      v47 = (_QWORD *)a7[7];
      if ( v47 )
      {
        LOBYTE(v46) = v47 != a7;
        v48 = *(void (__fastcall **)(_QWORD *, char))(*v47 + 32LL);
        if ( v48 == std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this )
          std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this(
            v47,
            v46);
        else
          v48(v47, v46);
        a7[7] = 0LL;
      }
      return 2147942414LL;
    }
    if ( v62[1] )
      std::_Ref_count_base::_Decref(v62[1]);
LABEL_22:
    if ( (int)v58 <= 0 )
    {
LABEL_32:
      if ( v25 )
        free(v25);
      if ( v55 )
        free(v55);
      if ( v57 )
        free(v57);
      if ( v59 )
        free(v59);
      v31 = (_QWORD *)a7[7];
      if ( v31 )
      {
        LOBYTE(v24) = v31 != a7;
        v33 = *(void (__fastcall **)(_QWORD *, char))(*v31 + 32LL);
        if ( v33 == std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this )
          std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this(
            v31,
            v24);
        else
          v33(v31, v24);
        a7[7] = 0LL;
      }
      return 0LL;
    }
    v61 = 0LL;
    if ( a6 == 1 && (v26 = *((_QWORD *)this + 2)) != 0 )
    {
      v27 = *(_QWORD *)(v26 + 56);
      v28 = *(_DWORD *)(v26 + 64);
    }
    else
    {
      v27 = 0LL;
      v28 = 0;
    }
    v29 = SystemEffectChainDescriptor::CreateEffectChain((__int64)&v57, v56, v55, v28, v27, &v61);
    if ( v29 < 0 )
    {
      v49 = 352LL;
LABEL_89:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v49,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v29,
        v52);
      v41 = (std::_Ref_count_base *)*((_QWORD *)&v61 + 1);
      if ( !*((_QWORD *)&v61 + 1) )
        goto LABEL_74;
      goto LABEL_73;
    }
    v30 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))a7[7];
    if ( v30 )
    {
      v65 = 0LL;
      v34 = **v30;
      v35 = (char *)v34 == (char *)std::_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Move
          ? std::_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Move(
              v30,
              v64)
          : v34(v30, v64);
      v65 = v35;
      v29 = SystemEffectChainDescriptor::MarkAsUnresolved(v61, v64);
      if ( v29 < 0 )
      {
        v49 = 353LL;
        goto LABEL_89;
      }
    }
    if ( (unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                         (__int64)this + 32,
                         (__int64 *)&v61) )
    {
      if ( *((_QWORD *)&v61 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v61 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v50 = *((_QWORD *)&v61 + 1);
          (***((void (__fastcall ****)(_QWORD))&v61 + 1))(*((_QWORD *)&v61 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v61 + 1) + 8LL))(*((_QWORD *)&v61 + 1));
        }
        v25 = Block;
      }
      goto LABEL_32;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x162,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      v52);
    v45 = (std::_Ref_count_base *)*((_QWORD *)&v61 + 1);
    if ( *((_QWORD *)&v61 + 1) )
      goto LABEL_81;
    goto LABEL_82;
  }
LABEL_64:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x153,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)(unsigned int)v7,
    v51);
  if ( v62[1] )
    std::_Ref_count_base::_Decref(v62[1]);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&Block);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v55);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v57);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v59);
  v39 = (_QWORD *)a7[7];
  if ( v39 )
  {
    LOBYTE(v38) = v39 != a7;
    v40 = *(void (__fastcall **)(_QWORD *, char))(*v39 + 32LL);
    if ( v40 == std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this )
      std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this(
        v39,
        v38);
    else
      v40(v39, v38);
    a7[7] = 0LL;
  }
  return (unsigned int)v7;
}
