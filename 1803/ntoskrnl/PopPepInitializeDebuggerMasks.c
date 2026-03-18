/*
 * XREFs of PopPepInitializeDebuggerMasks @ 0x1402799FC
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x140279AF8 (PopPepInitializeVetoMasks.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x14027BD50 (PopDiagTraceDebuggerTransitionRequirements.c)
 */

void *__fastcall PopPepInitializeDebuggerMasks(__int64 a1, unsigned int a2)
{
  void *result; // rax
  ULONG_PTR v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // ecx
  _BYTE *v7; // rdx
  _BYTE *v8; // rax
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v10; // [rsp+28h] [rbp-40h]
  _BYTE *v11; // [rsp+30h] [rbp-38h]
  _BYTE v12[32]; // [rsp+38h] [rbp-30h] BYREF

  result = (void *)PpmPlatformStates;
  if ( *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v4 = *(_QWORD *)(a1 + 32);
    result = memset(v12, 0, sizeof(v12));
    v5 = *(_QWORD *)(v4 + 64);
    if ( v5 == PopFxProcessorPlugin )
    {
      v9 = *(_QWORD *)(v4 + 72);
      v11 = v12;
      v10 = a2;
      result = (void *)(*(__int64 (__fastcall **)(__int64, __int64 *))(v5 + 96))(35LL, &v9);
      if ( (_BYTE)result )
      {
        v6 = 0;
        if ( a2 )
        {
          v7 = v12;
          v8 = (_BYTE *)(PopPepPlatformState + 56);
          do
          {
            if ( *v7 )
            {
              if ( !v8[1] )
                PopFxBugCheck(0x61FuLL, v4, v6, 0LL);
              *v8 = 1;
              PopAutomaticDebuggerTransitions = 1;
            }
            ++v6;
            ++v7;
            v8 += 384;
          }
          while ( v6 < a2 );
        }
        return (void *)PopDiagTraceDebuggerTransitionRequirements(v4, v12, a2);
      }
    }
  }
  return result;
}
