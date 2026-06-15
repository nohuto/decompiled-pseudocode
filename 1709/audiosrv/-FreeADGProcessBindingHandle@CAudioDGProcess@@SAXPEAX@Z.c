/*
 * XREFs of ?FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z @ 0x1800318BC
 * Callers:
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x18001D400 (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x18001DDD4 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x1800D9B80 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 */

void __fastcall CAudioDGProcess::FreeADGProcessBindingHandle(void *a1)
{
  unsigned int v1; // eax
  RPC_BINDING_HANDLE Binding; // [rsp+30h] [rbp+8h] BYREF

  Binding = a1;
  v1 = RpcBindingFree(&Binding);
  if ( v1
    && WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_c059856c368f347c07e9a39e19191005_Traceguids, v1);
  }
}
