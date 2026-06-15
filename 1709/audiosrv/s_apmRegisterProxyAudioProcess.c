/*
 * XREFs of s_apmRegisterProxyAudioProcess @ 0x1800A1F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_apmRegisterProxyAudioProcess(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  void (*v4)(void); // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (unsigned int)IsApmRegisterProxyAudioProcessSupported() )
  {
    if ( g_PolicyManager )
    {
      v3 = *(_QWORD *)g_PolicyManager;
      v6 = 0LL;
      v2 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v3 + 32))(
             g_PolicyManager,
             a1,
             &v6);
      if ( v2 >= 0 )
      {
        v2 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64))(*(_QWORD *)g_PolicyManager + 312LL))(
               g_PolicyManager,
               v6);
        if ( v6 )
        {
          v4 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
          goto LABEL_8;
        }
      }
      else if ( v6 )
      {
        v4 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
LABEL_8:
        v4();
      }
    }
    return (unsigned int)v2;
  }
  return 2147500033LL;
}
