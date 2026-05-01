/*
 * XREFs of _lambda_9d6c54c6eac66a68e681dddf193e983c_::operator() @ 0x18009117C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d6c54c6eac66a68e681dddf193e983c___::Run @ 0x180091170 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9d6c54c6eac66a68e681dddf193e983c___--Run.c)
 * Callees:
 *     ?GetCount@AgileCallbackArray@AgileRegistrationList@@UEAAJPEAI@Z @ 0x18001E9E0 (-GetCount@AgileCallbackArray@AgileRegistrationList@@UEAAJPEAI@Z.c)
 *     ?GetAt@AgileCallbackArray@AgileRegistrationList@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18001EA70 (-GetAt@AgileCallbackArray@AgileRegistrationList@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 *     McTemplateU0qq @ 0x180060F5C (McTemplateU0qq.c)
 *     McTemplateU0q @ 0x1800610F8 (McTemplateU0q.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall lambda_9d6c54c6eac66a68e681dddf193e983c_::operator()(__int64 *a1)
{
  __int64 v1; // rax
  unsigned int *v2; // rbx
  AgileRegistrationList::AgileCallbackArray *v3; // rcx
  __int64 (__fastcall *v4)(AgileRegistrationList::AgileCallbackArray *, unsigned int *); // rax
  void *v5; // rcx
  unsigned int i; // edi
  AgileRegistrationList::AgileCallbackArray *v7; // rcx
  __int64 (__fastcall *v8)(AgileRegistrationList::AgileCallbackArray *, unsigned int, const struct _GUID *, void **); // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  void *v13; // [rsp+58h] [rbp+10h] BYREF

  v1 = *a1;
  v2 = *(unsigned int **)(*a1 + 8);
  v3 = (AgileRegistrationList::AgileCallbackArray *)*((_QWORD *)v2 + 1);
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(AgileRegistrationList::AgileCallbackArray *, unsigned int *))(*(_QWORD *)v3 + 24LL);
    LODWORD(v1) = v4 == AgileRegistrationList::AgileCallbackArray::GetCount
                ? AgileRegistrationList::AgileCallbackArray::GetCount(v3, &v12)
                : (unsigned int)v4(v3, &v12);
    if ( (int)v1 >= 0 )
    {
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        LODWORD(v1) = McTemplateU0qq((__int64)v5, &ImmersiveShell_AppManager_ZbandChange_Start, v2[1], *v2);
      for ( i = 0; i < v12; ++i )
      {
        v13 = 0LL;
        v7 = (AgileRegistrationList::AgileCallbackArray *)*((_QWORD *)v2 + 1);
        v8 = *(__int64 (__fastcall **)(AgileRegistrationList::AgileCallbackArray *, unsigned int, const struct _GUID *, void **))(*(_QWORD *)v7 + 32LL);
        if ( v8 == AgileRegistrationList::AgileCallbackArray::GetAt )
          LODWORD(v1) = AgileRegistrationList::AgileCallbackArray::GetAt(
                          v7,
                          i,
                          &GUID_0c40987c_7026_499e_adad_c164c0ffee84,
                          &v13);
        else
          LODWORD(v1) = v8(v7, i, &GUID_0c40987c_7026_499e_adad_c164c0ffee84, &v13);
        if ( (int)v1 >= 0 )
        {
          if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
            McTemplateU0q(v9, &ImmersiveShell_AppManager_ZbandChanged_Start, i);
          LODWORD(v1) = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)v13 + 24LL))(v13, v2[1], *v2);
          if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
            LODWORD(v1) = McTemplateU0qq(v10, &ImmersiveShell_AppManager_ZbandChanged_Stop, i, v1);
        }
        v5 = v13;
        if ( v13 )
        {
          v13 = 0LL;
          LODWORD(v1) = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
        }
      }
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        LODWORD(v1) = McTemplateU0qq((__int64)v5, (const EVENT_DESCRIPTOR *)"|", v2[1], *v2);
    }
  }
  return v1;
}
