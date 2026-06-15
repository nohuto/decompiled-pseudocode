/*
 * XREFs of s_pbmRegisterAppManagerNotification @ 0x180031700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmRegisterAppManagerNotification(__int64 a1)
{
  int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (unsigned int)IsPbmRegisterAppManagerNotificationSupported() )
  {
    return (unsigned int)PbmRegisterAppManagerNotification(a1);
  }
  else if ( g_PolicyManager )
  {
    v4 = *(_QWORD *)g_PolicyManager;
    v5 = 0LL;
    v2 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v4 + 32))(
           g_PolicyManager,
           a1,
           &v5);
    if ( v2 >= 0 )
      v2 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64))(*(_QWORD *)g_PolicyManager + 184LL))(
             g_PolicyManager,
             v5);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v2;
}
