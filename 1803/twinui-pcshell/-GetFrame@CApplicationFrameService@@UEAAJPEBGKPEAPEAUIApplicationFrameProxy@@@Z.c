/*
 * XREFs of ?GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z @ 0x180082440
 * Callers:
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800157F0 (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18001CD10 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z @ 0x1800F4118 (-_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z.c)
 *     ??$?0VCApplicationFrameWrapper@@@?$ComPtr@UIApplicationFrameProxy@@@WRL@Microsoft@@QEAA@AEBV?$ComPtr@VCApplicationFrameWrapper@@@12@PEAPEAX@Z @ 0x1800F79C4 (--$-0VCApplicationFrameWrapper@@@-$ComPtr@UIApplicationFrameProxy@@@WRL@Microsoft@@QEAA@AEBV-$Co.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F7AFC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::GetFrame(
        CApplicationFrameService *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct IApplicationFrameProxy **a4)
{
  unsigned __int64 v5; // r12
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  int v11; // ebx
  struct IApplicationFrameProxy *v12; // rcx
  __int64 v13; // r15
  int v14; // edi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  char *v17; // rcx
  char *v18; // rbp
  __int16 v19; // ax
  char *v20; // rax
  __int64 v21; // rbx
  bool v22; // zf
  struct IApplicationFrameProxy *v23; // rbx
  __int64 *v24; // r14
  int v25; // ebp
  __int64 v26; // rdx
  __int64 *v27; // r8
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  volatile signed __int64 **v30; // rax
  volatile signed __int64 *v31; // r10
  signed __int64 v32; // rax
  unsigned int v33; // ecx
  signed __int64 v34; // rtt
  __int64 v35; // rax
  struct IApplicationFrameProxy *v36; // rax
  __int64 v37; // rdi
  __int64 v38[7]; // [rsp+30h] [rbp-38h] BYREF
  struct IApplicationFrameProxy *v39; // [rsp+88h] [rbp+20h]

  v38[1] = -2LL;
  v5 = a3;
  *a4 = 0LL;
  v8 = *((_QWORD *)this + 9);
  if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
  {
    v9 = 0LL;
    if ( v8 )
    {
      while ( CompareStringOrdinal(*(LPCWCH *)(*(_QWORD *)(*((_QWORD *)this + 8) + 8 * v9) + 152LL), -1, a2, -1, 1) != 2
           || *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 8 * v9) + 176LL) != (_DWORD)v5 )
      {
        if ( ++v9 >= *((_QWORD *)this + 9) )
          return 2147943568LL;
      }
      Microsoft::WRL::ComPtr<IApplicationFrameProxy>::ComPtr<IApplicationFrameProxy>(v38);
      v11 = CApplicationFrameService::_TransferFromPoolToActive((CApplicationFrameService *)((char *)this - 40), v9);
      if ( v11 >= 0 )
      {
        v12 = (struct IApplicationFrameProxy *)v38[0];
        v38[0] = 0LL;
        *a4 = v12;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v38);
      return (unsigned int)v11;
    }
    return 2147943568LL;
  }
  if ( !v8 )
    return 2147943568LL;
  v13 = **((_QWORD **)this + 8);
  v14 = 0;
  if ( !a2 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v13 + 152);
LABEL_27:
    *(_DWORD *)(v13 + 176) = v5;
    SetPropW(*(HWND *)(v13 + 88), L"LastSetGlomIdForReconstitution", (HANDLE)v5);
    goto LABEL_28;
  }
  v15 = -1LL;
  do
    ++v15;
  while ( a2[v15] );
  v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
          v13 + 152,
          v15);
  if ( v14 >= 0 )
  {
    v16 = v15 + 1;
    v17 = *(char **)(v13 + 152);
    if ( v15 > 0x7FFFFFFE )
    {
      if ( v15 != -1LL )
        *(_WORD *)v17 = 0;
      *(_QWORD *)(v13 + 160) = v15;
    }
    else
    {
      v18 = (char *)((char *)a2 - v17);
      do
      {
        if ( v16 == 1 )
          break;
        v19 = *(_WORD *)&v18[(_QWORD)v17];
        if ( !v19 )
          break;
        *(_WORD *)v17 = v19;
        v17 += 2;
        --v16;
      }
      while ( v16 );
      v20 = v17 - 2;
      if ( v16 )
        v20 = v17;
      *(_WORD *)v20 = 0;
      *(_QWORD *)(v13 + 160) = v15;
    }
    goto LABEL_27;
  }
LABEL_28:
  if ( v14 < 0 )
    return (unsigned int)v14;
  v21 = **((_QWORD **)this + 8);
  if ( v21 )
  {
    v22 = v21 == -8;
    v23 = (struct IApplicationFrameProxy *)(v21 + 8);
    v39 = v23;
    if ( !v22 )
      (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v23 + 8LL))(v23);
  }
  else
  {
    v23 = 0LL;
    v39 = 0LL;
  }
  v24 = (__int64 *)*((_QWORD *)this + 8);
  v25 = 0;
  v26 = *((_QWORD *)this + 13);
  if ( v26 != *((_QWORD *)this + 15)
    || (v25 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (char *)this + 96,
                v26 + 1),
        v25 >= 0) )
  {
    v27 = (__int64 *)(*((_QWORD *)this + 12) + 8 * (*((_QWORD *)this + 13))++);
    if ( v27 )
    {
      v26 = *v24;
      *v27 = *v24;
      if ( v26 )
      {
        v28 = *(_QWORD *)(v26 + 72);
        while ( v28 >= 0 )
        {
          if ( (_DWORD)v28 != 0x7FFFFFFF )
          {
            v29 = v28;
            v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v26 + 72), v28 + 1, v28);
            if ( v29 != v28 )
              continue;
          }
          goto LABEL_43;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v28 + 16));
LABEL_43:
        v23 = v39;
      }
    }
    if ( *((_QWORD *)this + 9) )
    {
      v30 = (volatile signed __int64 **)*((_QWORD *)this + 8);
      v31 = *v30;
      if ( *v30 )
      {
        *v30 = 0LL;
        v32 = *((_QWORD *)v31 + 9);
        while ( v32 >= 0 )
        {
          if ( (_DWORD)v32 == 0x7FFFFFFF )
            goto LABEL_55;
          v33 = v32 - 1;
          v34 = v32;
          v32 = _InterlockedCompareExchange64(v31 + 9, v32 - 1, v32);
          if ( v34 == v32 )
            goto LABEL_52;
        }
        v33 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
                (Microsoft::WRL::Details *)(2 * v32 + 16),
                (volatile int *)v26);
LABEL_52:
        if ( !v33 )
        {
          (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v31 + 48))(v31, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
LABEL_55:
        v23 = v39;
      }
      v35 = *((_QWORD *)this + 9);
      if ( v35 != 1 )
      {
        memmove(*((void **)this + 8), (const void *)(*((_QWORD *)this + 8) + 8LL), 8 * (v35 - 1));
        v35 = *((_QWORD *)this + 9);
      }
      *((_QWORD *)this + 9) = v35 - 1;
    }
  }
  if ( v25 < 0 )
  {
    v37 = **((_QWORD **)this + 8);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v37 + 152);
    *(_DWORD *)(v37 + 176) = 0;
    RemovePropW(*(HWND *)(v37 + 88), L"LastSetGlomIdForReconstitution");
  }
  else
  {
    v36 = v23;
    v23 = 0LL;
    *a4 = v36;
  }
  if ( v23 )
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v23 + 16LL))(v23);
  return (unsigned int)v25;
}
