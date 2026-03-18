/*
 * XREFs of NtDCompositionRetireFrame @ 0x1C0037500
 * Callers:
 *     <none>
 * Callees:
 *     ?FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCCompositionFrame@2@@Z @ 0x1C0033018 (-FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCCompositionFrame@2@@Z.c)
 *     ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C0034168 (-RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z.c)
 *     ?DiscardPreviousFrames@CConnection@DirectComposition@@QEAAX_K@Z @ 0x1C00345CC (-DiscardPreviousFrames@CConnection@DirectComposition@@QEAAX_K@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0034974 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C0035144 (-Release@CCompositionFrame@DirectComposition@@QEBAJXZ.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0036330 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1C0037428 (-ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z.c)
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C00393CC (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C00394BC (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionRetireFrame(struct HDCOMPOSITIONCONNECTION__ *a1, unsigned __int64 *a2, __int128 *a3)
{
  unsigned __int64 v4; // r14
  __int128 v5; // xmm1
  signed int CompositionFrame; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  struct DirectComposition::CCompositionFrame *v9; // rsi
  _QWORD *i; // r15
  CLegacyTokenBuffer *v11; // rdi
  unsigned int v12; // edx
  CTokenManager *v14; // r15
  CLegacyTokenBuffer *v15; // rcx
  CLegacyTokenBuffer **v16; // rax
  __int64 v17; // rdx
  DirectComposition::CConnection *v18; // [rsp+20h] [rbp-68h] BYREF
  signed int v19; // [rsp+28h] [rbp-60h]
  unsigned __int64 v20; // [rsp+30h] [rbp-58h]
  struct DirectComposition::CCompositionFrame *v21; // [rsp+38h] [rbp-50h] BYREF
  __int128 v22; // [rsp+40h] [rbp-48h]
  __int128 v23; // [rsp+50h] [rbp-38h]

  v4 = 0LL;
  v20 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v4 = *a2;
    v20 = *a2;
    if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
      a3 = (__int128 *)MmUserProbeAddress;
    v5 = a3[1];
    v22 = *a3;
    v23 = v5;
    CompositionFrame = v4 == 0 ? 0xC000000D : 0;
    v19 = CompositionFrame;
  }
  else
  {
    CompositionFrame = -1073741811;
  }
  if ( CompositionFrame >= 0 )
  {
    v18 = 0LL;
    KeEnterCriticalRegion();
    CompositionFrame = DirectComposition::CConnection::ReferenceHandle(a1, &v18);
    if ( CompositionFrame < 0 )
    {
LABEL_19:
      KeLeaveCriticalRegion();
      return (unsigned int)CompositionFrame;
    }
    DirectComposition::CConnection::DiscardPreviousFrames(v18, v4);
    CompositionFrame = DirectComposition::CConnection::FindCompositionFrame(v18, v4, &v21);
    if ( CompositionFrame < 0 )
    {
LABEL_18:
      DirectComposition::CConnection::RemoveCompositionFrame(v18, v4);
      DirectComposition::CConnection::Release(v18, v12);
      goto LABEL_19;
    }
    v9 = v21;
    *((_DWORD *)v21 + 20) = 2;
    for ( i = (_QWORD *)*((_QWORD *)v9 + 18); i != (_QWORD *)((char *)v9 + 144); i = (_QWORD *)*i )
      _guard_dispatch_icall_fptr();
    v11 = (CLegacyTokenBuffer *)*((_QWORD *)v9 + 12);
    if ( !v11 )
    {
LABEL_17:
      *((_DWORD *)v9 + 26) = 0;
      DirectComposition::CCompositionFrame::Release(v9, v7, v8);
      goto LABEL_18;
    }
    v14 = g_pTokenManager;
    v15 = (CLegacyTokenBuffer *)*((_QWORD *)v9 + 12);
    if ( g_pTokenManager )
    {
      CLegacyTokenBuffer::Reset(v15);
      if ( *((_DWORD *)v14 + 30) <= 3u )
      {
        CTokenManager::AcquireTokenManagerLock(v14);
        v16 = (CLegacyTokenBuffer **)((char *)v14 + 104);
        v17 = *((_QWORD *)v14 + 13);
        if ( *(CTokenManager **)(v17 + 8) != (CTokenManager *)((char *)v14 + 104) )
          __fastfail(3u);
        *(_QWORD *)v11 = v17;
        *((_QWORD *)v11 + 1) = v16;
        *(_QWORD *)(v17 + 8) = v11;
        *v16 = v11;
        ++*((_DWORD *)v14 + 30);
        *((_QWORD *)v14 + 9) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v14 + 64, 0LL);
        goto LABEL_25;
      }
      v15 = v11;
    }
    CLegacyTokenBuffer::`scalar deleting destructor'(v15, v7);
LABEL_25:
    *((_QWORD *)v9 + 12) = 0LL;
    goto LABEL_17;
  }
  return (unsigned int)CompositionFrame;
}
