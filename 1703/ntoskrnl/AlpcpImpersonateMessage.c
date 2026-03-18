/*
 * XREFs of AlpcpImpersonateMessage @ 0x14047D170
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x14047CFB0 (NtAlpcImpersonateClientOfPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PsImpersonateClient @ 0x14047E530 (PsImpersonateClient.c)
 *     AlpcpReferenceConnectedPort @ 0x14047ECE0 (AlpcpReferenceConnectedPort.c)
 *     SeCreateClientSecurityEx @ 0x14050AD10 (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurity @ 0x14050B3A0 (SeCreateClientSecurity.c)
 */

__int64 __fastcall AlpcpImpersonateMessage(__int64 a1, __int64 a2, int a3)
{
  int v3; // r14d
  void *v6; // rbp
  struct _SECURITY_CLIENT_CONTEXT *p_ClientContext; // rbx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  struct _KTHREAD *v11; // rcx
  struct _SECURITY_QUALITY_OF_SERVICE *v12; // rdx
  NTSTATUS ClientSecurity; // eax
  unsigned int v14; // edi
  BOOLEAN DirectAccessEffectiveOnly; // r9
  _DWORD *ClientToken; // rcx
  int v18; // eax
  struct _SECURITY_CLIENT_CONTEXT ClientContext; // [rsp+30h] [rbp-88h] BYREF

  v3 = 0;
  v6 = 0LL;
  p_ClientContext = 0LL;
  if ( (*(_BYTE *)(a2 + 40) & 7) != 3 )
    return (unsigned int)-1073741790;
  if ( (*(_WORD *)(a2 + 244) & 0x4000) != 0 )
    return (unsigned int)-1073741790;
  v8 = *(_QWORD *)(a2 + 16);
  if ( v8 != a1 && ((*(_BYTE *)(a1 + 416) & 6) != 6 || v8 != **(_QWORD **)(a1 + 16)) )
    return (unsigned int)-1073741790;
  v9 = *(_QWORD *)(a2 + 136);
  if ( !v9 )
  {
    v10 = AlpcpReferenceConnectedPort(a1);
    v6 = (void *)v10;
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 256) & 0x10000) == 0 )
      {
        v14 = -1073741790;
        goto LABEL_18;
      }
      if ( (*(_DWORD *)(v10 + 416) & 0x400) != 0 )
      {
        v11 = *(struct _KTHREAD **)(a2 + 32);
        if ( v11 )
        {
          v12 = (struct _SECURITY_QUALITY_OF_SERVICE *)(v10 + 260);
          if ( a3 )
            ClientSecurity = SeCreateClientSecurityEx(v11, v12, 0LL);
          else
            ClientSecurity = SeCreateClientSecurity(v11, v12, 0, &ClientContext);
          v14 = ClientSecurity;
          if ( ClientSecurity < 0 )
            goto LABEL_18;
          p_ClientContext = &ClientContext;
          v3 = 1;
          goto LABEL_15;
        }
        v14 = -1073741790;
LABEL_18:
        if ( v6 )
          ObfDereferenceObject(v6);
        if ( v3 )
        {
          ClientToken = p_ClientContext->ClientToken;
          if ( ClientToken[48] == 1 || ClientToken )
            ObfDereferenceObject(ClientToken);
        }
        return v14;
      }
      p_ClientContext = (struct _SECURITY_CLIENT_CONTEXT *)(v10 + 64);
LABEL_15:
      if ( p_ClientContext->DirectlyAccessClientToken )
        DirectAccessEffectiveOnly = p_ClientContext->DirectAccessEffectiveOnly;
      else
        DirectAccessEffectiveOnly = p_ClientContext->SecurityQos.EffectiveOnly;
      v14 = PsImpersonateClient(
              KeGetCurrentThread(),
              p_ClientContext->ClientToken,
              1u,
              DirectAccessEffectiveOnly,
              p_ClientContext->SecurityQos.ImpersonationLevel);
      goto LABEL_18;
    }
    return (unsigned int)-1073741790;
  }
  ExAcquirePushLockExclusiveEx(v9 - 16, 0LL);
  v18 = *(_DWORD *)(v9 + 104);
  if ( (v18 & 1) == 0 )
  {
    *(_DWORD *)(v9 + 104) = v18 | 2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v9 - 16));
    KeAbPostRelease(v9 - 16);
    p_ClientContext = (struct _SECURITY_CLIENT_CONTEXT *)(v9 + 32);
    goto LABEL_15;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v9 - 16));
  KeAbPostRelease(v9 - 16);
  return 3221225506LL;
}
