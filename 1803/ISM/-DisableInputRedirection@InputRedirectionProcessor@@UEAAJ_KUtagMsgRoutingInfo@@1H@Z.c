/*
 * XREFs of ?DisableInputRedirection@InputRedirectionProcessor@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z @ 0x1800B5270
 * Callers:
 *     <none>
 * Callees:
 *     ?CallCallbackWithResult@InputRedirectionProcessor@@AEAAJUtagMsgRoutingInfo@@J@Z @ 0x1800B53D8 (-CallCallbackWithResult@InputRedirectionProcessor@@AEAAJUtagMsgRoutingInfo@@J@Z.c)
 *     ?IsTargetForRoutingInfoAndHwnd@InputRedirectionTarget@@QEAA_NUtagMsgRoutingInfo@@_K@Z @ 0x1800B5B34 (-IsTargetForRoutingInfoAndHwnd@InputRedirectionTarget@@QEAA_NUtagMsgRoutingInfo@@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionProcessor::DisableInputRedirection(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int128 *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  _DWORD *v6; // rax
  unsigned int v7; // edi
  __int64 v9; // r9
  unsigned int v10; // r10d
  __int128 v13; // xmm1
  __int64 v15; // rsi
  _DWORD *v16; // rdx
  char v17; // cl
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int64 v20; // rax
  _QWORD *v21; // rcx
  __int128 v22; // [rsp+20h] [rbp-48h] BYREF
  __int128 v23; // [rsp+30h] [rbp-38h]
  __int64 v24; // [rsp+40h] [rbp-28h]

  v5 = 0;
  v6 = (_DWORD *)(a1 + 72);
  v7 = 0;
  v9 = a5;
  v10 = 0;
  while ( (a5 & *v6) == 0 )
  {
    ++v10;
    v6 += 4;
    if ( v10 >= 4 )
      goto LABEL_4;
  }
  v15 = 0LL;
  v16 = (_DWORD *)(a1 + 72);
  v17 = 0;
  v18 = 0LL;
  while ( (a5 & *v16) == 0 )
  {
    v18 = (unsigned int)(v18 + 1);
    v16 += 4;
    if ( (unsigned int)v18 >= 4 )
      goto LABEL_13;
  }
  v17 = 1;
  v15 = *(_QWORD *)(a1 + 16 * v18 + 80);
LABEL_13:
  v5 = v17 == 0 ? 0x80004005 : 0;
  if ( v17 )
  {
    if ( v15
      && (v19 = a3[1],
          v22 = *a3,
          v24 = *((_QWORD *)a3 + 4),
          v23 = v19,
          (unsigned __int8)InputRedirectionTarget::IsTargetForRoutingInfoAndHwnd(v15, &v22, a2)) )
    {
      v20 = 0LL;
      v21 = (_QWORD *)(a1 + 80);
      while ( *v21 != v15 )
      {
        v20 = (unsigned int)(v20 + 1);
        v21 += 2;
        if ( (unsigned int)v20 >= 4 )
          goto LABEL_24;
      }
      *(_DWORD *)(a1 + 16 * v20 + 72) = 0;
LABEL_24:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    else
    {
LABEL_4:
      v7 = -2147024891;
    }
    if ( *(_DWORD *)a4 )
    {
      v13 = a4[1];
      v22 = *a4;
      v24 = *((_QWORD *)a4 + 4);
      v23 = v13;
      return (unsigned int)InputRedirectionProcessor::CallCallbackWithResult(a1 - 8, &v22, v7, v9);
    }
    return v5;
  }
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  return v5;
}
