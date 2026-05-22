/*
 * XREFs of ?SetValueForKey@?$DynamicSizeMap@U_GUID@@V?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@$00@@QEAAJAEBU_GUID@@AEBV?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@@Z @ 0x18001EF28
 * Callers:
 *     ?RegisterSystemCompositor@DWMInputRouter@@UEAAJU_GUID@@V?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@@Z @ 0x18001C0F0 (-RegisterSystemCompositor@DWMInputRouter@@UEAAJU_GUID@@V-$function@$$A6AJPEAUIHitTestRequest@@PE.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??4?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001FD2C (--4-$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsof.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800CB418 (--_V@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CB420 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800CB554 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DynamicSizeMap<_GUID,std::function<long (IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *)>,1>::SetValueForKey(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // r11
  __int64 v5; // rdi
  void *v6; // rbx
  unsigned int v7; // r13d
  char v8; // r10
  char v9; // bl
  int v10; // r9d
  __int64 v11; // rdx
  unsigned int v12; // r9d
  __int64 v13; // r8
  char *v14; // r14
  unsigned int v15; // r15d
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  bool v18; // cf
  unsigned __int64 v19; // rax
  unsigned __int64 *v20; // rax
  void (__fastcall *v21)(_QWORD *, __int64); // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rcx

  v3 = a3;
  v5 = a1;
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  if ( *a2 == *(_QWORD *)(a1 + 16) && a2[1] == *(_QWORD *)(a1 + 24) )
  {
    v9 = 87;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_6;
    v10 = 153;
LABEL_5:
    McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, v10, v9);
LABEL_6:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v11 = 0LL;
  v12 = *(_DWORD *)(a1 + 8);
  if ( !v12 )
    goto LABEL_21;
  v13 = *(_QWORD *)a1;
  do
  {
    a1 = 80 * v11;
    if ( *(_QWORD *)(80 * v11 + v13) == *a2 && *(_QWORD *)(a1 + v13 + 8) == a2[1] )
    {
      std::function<long (IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *)>::operator=(
        v13 + 16 + a1,
        v3);
      return (unsigned int)v6;
    }
    if ( !v8 && *(_QWORD *)(a1 + v13) == *(_QWORD *)(v5 + 16) && *(_QWORD *)(a1 + v13 + 8) == *(_QWORD *)(v5 + 24) )
    {
      v7 = v11;
      v8 = 1;
    }
    v11 = (unsigned int)(v11 + 1);
  }
  while ( (unsigned int)v11 < v12 );
  if ( v8 )
  {
LABEL_40:
    v24 = 80LL * v7;
    *(_OWORD *)(v24 + *(_QWORD *)v5) = *(_OWORD *)a2;
    std::function<long (IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *)>::operator=(
      *(_QWORD *)v5 + 16LL + v24,
      v3);
    ++*(_DWORD *)(v5 + 12);
    LODWORD(v6) = 0;
    return (unsigned int)v6;
  }
LABEL_21:
  if ( *(_DWORD *)(v5 + 12) == v12 )
  {
    v7 = v12;
    v14 = *(char **)v5;
    v15 = 2 * v12;
    v16 = 2 * v12;
    v17 = 80 * v16;
    if ( !is_mul_ok(v16, 0x50uLL) )
      v17 = -1LL;
    v18 = __CFADD__(v17, 8LL);
    v19 = v17 + 8;
    if ( v18 )
      v19 = -1LL;
    v20 = (unsigned __int64 *)operator new[](v19);
    v21 = DynamicSizeMap<_GUID,std::function<long (IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *)>,1>::MapEntry::~MapEntry;
    if ( v20 )
    {
      *v20 = v16;
      v6 = v20 + 1;
      `eh vector constructor iterator'(
        v20 + 1,
        0x50uLL,
        (unsigned int)v16,
        (void (*)(void *))DynamicSizeMap<_GUID,std::function<long (IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *)>,1>::MapEntry::MapEntry,
        (void (*)(void *))DynamicSizeMap<_GUID,std::function<long (IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *)>,1>::MapEntry::~MapEntry);
    }
    *(_QWORD *)v5 = v6;
    if ( !v6 )
    {
      v9 = 14;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_6;
      McTemplateU0qqq((__int64)v21, &MinInput_Warning_CheckResult, 0, 387, 14);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_6;
      v10 = 185;
      goto LABEL_5;
    }
    memcpy_0(v6, v14, 80LL * *(unsigned int *)(v5 + 8));
    if ( *(_DWORD *)(v5 + 8) < v15 )
    {
      v22 = 80LL * *(unsigned int *)(v5 + 8);
      v23 = v15 - *(_DWORD *)(v5 + 8);
      do
      {
        *(_OWORD *)(v22 + *(_QWORD *)v5) = *(_OWORD *)(v5 + 16);
        v22 += 80LL;
        --v23;
      }
      while ( v23 );
    }
    *(_DWORD *)(v5 + 8) = v15;
    if ( v14 )
    {
      `eh vector destructor iterator'(
        v14,
        0x50uLL,
        *((_QWORD *)v14 - 1),
        (void (*)(void *))DynamicSizeMap<_GUID,std::function<long (IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *)>,1>::MapEntry::~MapEntry);
      operator delete[](v14 - 8, 80LL * *((_QWORD *)v14 - 1) + 8);
    }
    v3 = a3;
    goto LABEL_40;
  }
  LODWORD(v6) = -2147467259;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, 180, 5);
  return (unsigned int)v6;
}
