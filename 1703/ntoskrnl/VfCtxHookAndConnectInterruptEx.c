/*
 * XREFs of VfCtxHookAndConnectInterruptEx @ 0x14077F5B0
 * Callers:
 *     VerifierIoConnectInterruptEx @ 0x140767C20 (VerifierIoConnectInterruptEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ViCtxSetPrivateConnectParameters @ 0x14077FB08 (ViCtxSetPrivateConnectParameters.c)
 */

__int64 __fastcall VfCtxHookAndConnectInterruptEx(__int64 a1)
{
  int v2; // edi
  int v3; // eax
  PVOID v4; // rcx
  int v5; // eax
  int v6; // eax
  _DWORD v8[4]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v9; // [rsp+30h] [rbp-48h]
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  P = 0LL;
  if ( ViCtxInitializedIsrStateBlocks && (unsigned int)(*(_DWORD *)a1 - 1) <= 2 )
  {
    v2 = ViCtxSetPrivateConnectParameters(v8, a1, &P);
    if ( v2 >= 0 )
    {
      v3 = ((__int64 (__fastcall *)(_DWORD *))pXdvIoConnectInterruptEx)(v8);
      v4 = P;
      v2 = v3;
      if ( P )
      {
        v5 = v8[0];
        *(_DWORD *)a1 = v8[0];
        if ( v2 < 0 )
        {
          ExFreePoolWithTag(v4, 0);
        }
        else
        {
          v6 = v5 - 1;
          if ( !v6 || (unsigned int)(v6 - 1) <= 1 )
            *(_QWORD *)(a1 + 16) = v9;
        }
      }
    }
  }
  else
  {
    return (unsigned int)((__int64 (*)(void))pXdvIoConnectInterruptEx)();
  }
  return (unsigned int)v2;
}
