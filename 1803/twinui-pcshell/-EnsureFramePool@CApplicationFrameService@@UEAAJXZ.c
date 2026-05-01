/*
 * XREFs of ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x180082820
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CApplicationFrameWrapper@@QEAA@XZ @ 0x180016A70 (--0CApplicationFrameWrapper@@QEAA@XZ.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18008146C (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180094544 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180097C44 (--1-$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F7AFC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     WPP_SF_d @ 0x180112280 (WPP_SF_d.c)
 *     ?IsPPIFullFrameUI@@YA_NXZ @ 0x18012A188 (-IsPPIFullFrameUI@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationFrameService::EnsureFramePool(signed __int64 this)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  signed int v4; // esi
  __int64 v5; // rbx
  DWORD v6; // eax
  __int64 v7; // rdi
  __int64 v8; // r14
  CApplicationFrameWrapper *v9; // rax
  CApplicationFrameWrapper *v10; // rdi
  unsigned __int64 v11; // r15
  __int64 v12; // rcx
  volatile int *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  signed __int64 v19; // rax
  unsigned int v20; // ecx
  signed __int64 v21; // rtt
  int v22; // eax
  __int64 v23; // rdx
  CApplicationFrameWrapper **v24; // rdx
  CApplicationFrameWrapper *v25; // rcx
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  volatile int *v28; // rdx
  volatile signed __int64 *v29; // r10
  signed __int64 v30; // rax
  unsigned int v31; // ecx
  signed __int64 v32; // rtt
  __int64 v33; // rcx
  CApplicationFrameWrapper *v35; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v36[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v37; // [rsp+90h] [rbp+40h] BYREF
  __int64 v38; // [rsp+98h] [rbp+48h] BYREF
  CApplicationFrameWrapper *v39; // [rsp+A0h] [rbp+50h]
  __int64 v40; // [rsp+A8h] [rbp+58h] BYREF

  v36[1] = -2LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = (unsigned int)++*(_DWORD *)(this + 56);
  v3 = *(_QWORD *)(this + 72);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0;
  if ( v3 >= v2 )
    return (unsigned int)v4;
  v37 = 0LL;
  v4 = CApplicationFrameService::_EnsureFrameManager(this - 40, 1, &v37);
  if ( v4 >= 0 )
  {
    v38 = 0LL;
    v5 = v37;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 24LL))(v37, &v38);
    if ( v4 < 0 )
    {
LABEL_76:
      v33 = v38;
      if ( v38 )
      {
        v38 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      if ( v4 >= 0 && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10LL,
          &WPP_83de7465695a32324b737df03af0c385_Traceguids,
          *(unsigned int *)(this + 56));
      goto LABEL_83;
    }
    v6 = `IsPPIEdition'::`2'::s_dwProductType;
    if ( !`IsPPIEdition'::`2'::s_dwProductType )
    {
      GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
      v6 = 0;
      `IsPPIEdition'::`2'::s_dwProductType = 0;
    }
    if ( v6 == 119 && IsPPIFullFrameUI() )
    {
      v40 = 0LL;
      v7 = v38;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 144LL))(v7, &v40) >= 0 )
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v40 + 104LL))(v40, 255LL, 24LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
    }
    v8 = v38;
    v39 = 0LL;
    v9 = (CApplicationFrameWrapper *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
    v35 = v9;
    if ( v9 )
    {
      v10 = CApplicationFrameWrapper::CApplicationFrameWrapper(v9);
      v36[0] = v10;
      v35 = 0LL;
      v11 = this & -(__int64)(this != 40);
      v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, (__int64)v10 + 88);
      if ( v4 < 0 )
        goto LABEL_49;
      v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 120LL))(v8, (__int64)v10 + 96);
      if ( v4 < 0 )
        goto LABEL_49;
      v12 = *((_QWORD *)v10 + 17);
      if ( v12 )
      {
        *((_QWORD *)v10 + 17) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 144LL))(v8, (__int64)v10 + 136);
      if ( v4 < 0 )
      {
LABEL_49:
        Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(v36);
        Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v35);
      }
      else
      {
        if ( *((_QWORD *)v10 + 15) != v8 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
          v14 = *((_QWORD *)v10 + 15);
          *((_QWORD *)v10 + 15) = v8;
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        if ( *((_QWORD *)v10 + 16) != v5 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
          v15 = *((_QWORD *)v10 + 16);
          *((_QWORD *)v10 + 16) = v5;
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        v16 = *((_QWORD *)v10 + 18);
        if ( v16 != v11 )
        {
          if ( v11 )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 8LL))(v11);
            v16 = *((_QWORD *)v10 + 18);
          }
          *((_QWORD *)v10 + 18) = v11;
          if ( v16 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        if ( v10 )
        {
          v17 = *((_QWORD *)v10 + 9);
          while ( v17 >= 0 )
          {
            if ( (_DWORD)v17 != 0x7FFFFFFF )
            {
              v18 = v17;
              v17 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 9, v17 + 1, v17);
              if ( v18 != v17 )
                continue;
            }
            goto LABEL_36;
          }
          Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v17 + 16));
LABEL_36:
          v5 = v37;
        }
        v39 = v10;
        if ( v10 )
        {
          v19 = *((_QWORD *)v10 + 9);
          while ( v19 >= 0 )
          {
            if ( (_DWORD)v19 == 0x7FFFFFFF )
              goto LABEL_47;
            v20 = v19 - 1;
            v21 = v19;
            v19 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 9, v19 - 1, v19);
            if ( v21 == v19 )
              goto LABEL_44;
          }
          v20 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v19 + 16), v13);
LABEL_44:
          if ( !v20 )
          {
            (*(void (__fastcall **)(CApplicationFrameWrapper *, __int64))(*(_QWORD *)v10 + 48LL))(v10, 1LL);
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
          }
LABEL_47:
          v5 = v37;
        }
        v4 = 0;
      }
      if ( v4 >= 0 )
      {
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        v22 = SHIsSameObject(*(struct IUnknown **)(this + 136), *((struct IUnknown **)v39 + 16));
        v4 = v22 == 0 ? 0x80070057 : 0;
        if ( v22 )
        {
          v4 = 0;
          v23 = *(_QWORD *)(this + 72);
          if ( v23 != *(_QWORD *)(this + 88)
            || (v4 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                       this + 64,
                       v23 + 1),
                v4 >= 0) )
          {
            v24 = (CApplicationFrameWrapper **)(*(_QWORD *)(this + 64) + 8 * (*(_QWORD *)(this + 72))++);
            if ( v24 )
            {
              v25 = v39;
              *v24 = v39;
              if ( v25 )
              {
                v26 = *((_QWORD *)v25 + 9);
                while ( v26 >= 0 )
                {
                  if ( (_DWORD)v26 != 0x7FFFFFFF )
                  {
                    v27 = v26;
                    v26 = _InterlockedCompareExchange64((volatile signed __int64 *)v25 + 9, v26 + 1, v26);
                    if ( v27 != v26 )
                      continue;
                  }
                  goto LABEL_62;
                }
                Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v26 + 16));
LABEL_62:
                v5 = v37;
              }
            }
          }
        }
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( v4 >= 0 )
          goto LABEL_65;
      }
    }
    else
    {
      Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v35);
      v4 = -2147024882;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, v38);
LABEL_65:
    v29 = (volatile signed __int64 *)v39;
    if ( v39 )
    {
      v39 = 0LL;
      v30 = *((_QWORD *)v29 + 9);
      while ( v30 >= 0 )
      {
        if ( (_DWORD)v30 == 0x7FFFFFFF )
          goto LABEL_75;
        v31 = v30 - 1;
        v32 = v30;
        v30 = _InterlockedCompareExchange64(v29 + 9, v30 - 1, v30);
        if ( v32 == v30 )
          goto LABEL_72;
      }
      v31 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v30 + 16), v28);
LABEL_72:
      if ( !v31 )
      {
        (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v29 + 48))(v29, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
LABEL_75:
      v5 = v37;
    }
    goto LABEL_76;
  }
  v5 = v37;
LABEL_83:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v4;
}
