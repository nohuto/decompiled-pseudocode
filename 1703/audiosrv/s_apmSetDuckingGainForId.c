/*
 * XREFs of s_apmSetDuckingGainForId @ 0x1800B0860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_apmSetDuckingGainForId(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  bool v5; // zf
  __int64 v6; // rax
  int (__fastcall *v7)(struct IAudioPolicyManager *, __int64, __int64 *); // rax
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v5 = (unsigned int)IsApmDuckingGainForIdSupported() == 0;
  v6 = *(_QWORD *)g_PolicyManager;
  if ( v5 )
  {
    return (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64))(v6 + 216))(
             g_PolicyManager,
             0LL,
             a2);
  }
  else
  {
    v7 = *(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v6 + 32);
    v11 = 0LL;
    if ( v7(g_PolicyManager, a1, &v11) >= 0 )
    {
      v8 = *(_QWORD *)g_PolicyManager;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11);
      (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64))(v8 + 216))(g_PolicyManager, v9, a2);
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v4;
}
