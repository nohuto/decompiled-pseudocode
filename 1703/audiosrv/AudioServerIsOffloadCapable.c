/*
 * XREFs of AudioServerIsOffloadCapable @ 0x1800322F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ @ 0x180079B7C (-IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ.c)
 */

__int64 __fastcall AudioServerIsOffloadCapable(__int64 a1, const unsigned __int16 *a2, unsigned int a3, _DWORD *a4)
{
  int AliasedEndpointCharacteristics; // ebx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  struct CEndpointCharacteristics *v10; // [rsp+28h] [rbp-10h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  if ( !g_PolicyManager )
    goto LABEL_5;
  AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
                                     g_PolicyManager,
                                     a1,
                                     &v9);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_7;
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 136LL))(v9, a3, 0LL) )
  {
LABEL_5:
    AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(a2, 0, &v10);
    if ( AliasedEndpointCharacteristics >= 0 )
      *a4 = CEndpointCharacteristics::IsOffloadCapable(v10);
  }
  else
  {
    *a4 = 0;
  }
LABEL_7:
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v9 = 0LL;
  }
  if ( AliasedEndpointCharacteristics < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerIsOffloadCapable", 0x10C4u, AliasedEndpointCharacteristics);
  if ( v10 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)AliasedEndpointCharacteristics;
}
