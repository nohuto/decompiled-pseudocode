/*
 * XREFs of ??$_FindFirstApplication@VCImmersiveAppFinderByAppIdAndGlomId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByAppIdAndGlomId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180019C80
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180012B3C (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByAppIdAndGlomId>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        ...)
{
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v14; // [rsp+80h] [rbp+40h] BYREF
  __int64 v15; // [rsp+90h] [rbp+50h] BYREF
  __int64 v16; // [rsp+98h] [rbp+58h] BYREF
  va_list va; // [rsp+98h] [rbp+58h]
  va_list va1; // [rsp+A0h] [rbp+60h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v16 = va_arg(va1, _QWORD);
  if ( a3 )
    *a3 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( *(_QWORD *)(a1 + 648) )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 640) + 8 * v7);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v9 = -1;
      v15 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v8)(
             v8,
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &v15) >= 0
        && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 160LL))(v15) == *(_DWORD *)(a2 + 8) )
      {
        v14 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v8)(
               v8,
               &GUID_8b14e88b_5663_4caf_b196_c31479262831,
               &v14) >= 0 )
        {
          (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 88LL))(
            v14,
            *(_QWORD *)a2,
            (__int64 *)va);
          v9 = ((_DWORD)v16 != 0) - 1;
        }
        v10 = v14;
        if ( v14 )
        {
          v14 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
      v11 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      if ( !v9 )
        break;
      if ( (unsigned __int64)++v7 >= *(_QWORD *)(a1 + 648) )
        goto LABEL_18;
    }
    v6 = v7;
    result = 0LL;
  }
  else
  {
LABEL_18:
    result = 2147647531LL;
  }
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v13 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)(a1 + 640) + 8 * v6);
      return (**v13)(v13, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, a3);
    }
  }
  return result;
}
