/*
 * XREFs of ?GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationArray@@@Z @ 0x18000BAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CImmersiveAppArray_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18002DB64 (-CImmersiveAppArray_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::GetRunningApplicationsFromPackageId(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        struct IImmersiveApplicationArray **a3)
{
  const struct _GUID *v6; // rcx
  int v7; // eax
  __int64 (__fastcall ***v8)(void *, GUID *, struct IImmersiveApplicationArray **); // rcx
  void *v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  __int64 v12; // r12
  void *v13; // rcx
  unsigned int v15; // [rsp+90h] [rbp+50h]
  void *v16; // [rsp+98h] [rbp+58h] BYREF

  *a3 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v16 = 0LL;
  v7 = CImmersiveAppArray_CreateInstance(v6, &v16);
  v15 = v7;
  if ( v7 >= 0 )
  {
    v8 = (__int64 (__fastcall ***)(void *, GUID *, struct IImmersiveApplicationArray **))v16;
    v9 = v16;
    if ( v16 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 8LL))(v16);
      v8 = (__int64 (__fastcall ***)(void *, GUID *, struct IImmersiveApplicationArray **))v16;
      v7 = v15;
    }
    v10 = *((_QWORD *)this + 59);
    v11 = 0LL;
    if ( v10 )
    {
      do
      {
        v12 = *(_QWORD *)(*((_QWORD *)this + 58) + 8 * v11);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, const unsigned __int16 *, _QWORD))(*(_QWORD *)v12 + 320LL))(
               v12,
               a2,
               0LL) )
        {
          v7 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v9 + 64LL))(v9, v12);
          v15 = v7;
        }
        else
        {
          v7 = v15;
        }
        if ( v7 < 0 )
          break;
        ++v11;
      }
      while ( v11 < v10 );
      v8 = (__int64 (__fastcall ***)(void *, GUID *, struct IImmersiveApplicationArray **))v16;
    }
    if ( v9 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
      v8 = (__int64 (__fastcall ***)(void *, GUID *, struct IImmersiveApplicationArray **))v16;
      v7 = v15;
    }
    if ( v7 >= 0 )
      v15 = (**v8)(v8, &GUID_c6ed6dac_8fac_4598_a74c_69020137149c, a3);
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v15;
}
