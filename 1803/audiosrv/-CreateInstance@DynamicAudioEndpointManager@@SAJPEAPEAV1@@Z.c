/*
 * XREFs of ?CreateInstance@DynamicAudioEndpointManager@@SAJPEAPEAV1@@Z @ 0x180059BFC
 * Callers:
 *     ?FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ @ 0x180059FF4 (-FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ?Initialize@DynamicAudioEndpointManager@@AEAAJXZ @ 0x180059C94 (-Initialize@DynamicAudioEndpointManager@@AEAAJXZ.c)
 *     ??0DynamicAudioEndpointManager@@IEAA@XZ @ 0x180059D60 (--0DynamicAudioEndpointManager@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DynamicAudioEndpointManager::CreateInstance(struct DynamicAudioEndpointManager **a1)
{
  DynamicAudioEndpointManager *v2; // rax
  DynamicAudioEndpointManager *v3; // rdi
  DynamicAudioEndpointManager *v4; // rbx
  int v5; // esi

  v2 = (DynamicAudioEndpointManager *)operator new(0x360uLL);
  if ( v2 )
    v3 = DynamicAudioEndpointManager::DynamicAudioEndpointManager(v2);
  else
    v3 = 0LL;
  v4 = v3;
  if ( a1 )
  {
    if ( v3 )
    {
      v5 = DynamicAudioEndpointManager::Initialize(v3);
      if ( v5 >= 0 )
      {
        v4 = 0LL;
        *a1 = v3;
      }
    }
    else
    {
      v5 = -2147024882;
    }
  }
  else
  {
    v5 = -2147467261;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v4 + 1) + 24LL))((__int64)v4 + 8, 1LL);
  return (unsigned int)v5;
}
