/*
 * XREFs of AudioServerIsOffloadCapable @ 0x18008FFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ @ 0x180020E38 (-IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall AudioServerIsOffloadCapable(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  int v7; // ebx
  void (*v8)(void); // rax
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  CEndpointCharacteristics *v11; // [rsp+38h] [rbp-10h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  if ( !g_PolicyManager )
    goto LABEL_5;
  v7 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &v10);
  if ( v7 < 0 )
    goto LABEL_7;
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 144LL))(v10, a3, 0LL) )
  {
LABEL_5:
    v7 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
           g_pEndpointCharacteristicsCache,
           a2,
           0LL,
           &v11);
    if ( v7 >= 0 )
      *a4 = CEndpointCharacteristics::IsOffloadCapable(v11);
  }
  else
  {
    *a4 = 0;
  }
LABEL_7:
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v10 = 0LL;
  }
  if ( v7 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerIsOffloadCapable", 4283, v7);
  if ( v11 )
  {
    v8 = *(void (**)(void))(*(_QWORD *)v11 + 16LL);
    if ( (char *)v8 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((volatile signed __int32 *)v11);
    else
      v8();
  }
  return (unsigned int)v7;
}
