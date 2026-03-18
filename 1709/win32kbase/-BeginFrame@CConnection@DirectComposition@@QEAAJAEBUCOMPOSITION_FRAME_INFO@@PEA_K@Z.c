/*
 * XREFs of ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C003424C
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1C0037150 (NtDCompositionBeginFrame.c)
 * Callees:
 *     ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_JPEAVCEvent@2@PEAW4DeferReason@12@@Z @ 0x1C0034BA4 (-ShouldDefer@CBatch@DirectComposition@@QEAA_N_JPEAVCEvent@2@PEAW4DeferReason@12@@Z.c)
 *     ??0CCompositionFrame@DirectComposition@@IEAA@AEBUCOMPOSITION_FRAME_INFO@@@Z @ 0x1C00350BC (--0CCompositionFrame@DirectComposition@@IEAA@AEBUCOMPOSITION_FRAME_INFO@@@Z.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C0035174 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C0036214 (-ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     McTemplateK0qpqxxq @ 0x1C00E33B0 (McTemplateK0qpqxxq.c)
 */

__int64 __fastcall DirectComposition::CConnection::BeginFrame(
        DirectComposition::CConnection *this,
        const struct COMPOSITION_FRAME_INFO *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r14
  bool v6; // zf
  struct _ERESOURCE *v7; // rbx
  BOOL v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  DirectComposition::CCompositionFrame *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  signed int v14; // esi
  CTokenManager *v15; // rbx
  PSLIST_ENTRY v16; // rcx
  PSLIST_ENTRY v17; // rbx
  _QWORD *v18; // r15
  _QWORD *v19; // rcx
  PSLIST_ENTRY *v20; // r12
  PSLIST_ENTRY v21; // rsi
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rax
  char *v25; // rcx
  CTokenManager *v26; // rcx
  struct _SLIST_ENTRY *v28; // r14
  int v29; // edx
  int v30; // r8d
  __int64 v31; // rax
  struct _SLIST_ENTRY *Next; // r8
  _QWORD *p_Next; // rdx
  struct _SLIST_ENTRY *v34; // rax
  PSLIST_ENTRY *v35; // rdx
  struct _SLIST_ENTRY *v36; // rax
  __int64 v37; // [rsp+50h] [rbp-58h]
  int v38; // [rsp+B0h] [rbp+8h] BYREF
  int v39; // [rsp+B8h] [rbp+10h] BYREF
  unsigned __int64 *v40; // [rsp+C0h] [rbp+18h]
  struct _SLIST_ENTRY *v41; // [rsp+C8h] [rbp+20h] BYREF

  v40 = a3;
  v3 = a3;
  v6 = PsGetCurrentProcess() == (_QWORD)g_pepDwm;
  *v3 = 0LL;
  v7 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  v8 = v6;
  DirectComposition::CConnection::s_capabilityInfo = *(_OWORD *)((char *)a2 + 28);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v7, 1u);
  if ( v8 && !DirectComposition::CConnection::s_pDwmRenderThread )
    DirectComposition::CConnection::s_pDwmRenderThread = KeGetCurrentThread();
  if ( *((_DWORD *)this + 37) )
  {
    if ( (int)IsWin32AllocPoolImplSupported() < 0 )
      v11 = 0LL;
    else
      v11 = (DirectComposition::CCompositionFrame *)Win32AllocPoolImpl(33LL, 176LL, 1717781316LL);
    if ( v11 )
      v12 = DirectComposition::CCompositionFrame::CCompositionFrame(v11, a2);
    else
      v12 = 0LL;
    v13 = 0LL;
    if ( v12 )
      v13 = v12;
    v14 = v12 == 0 ? 0xC0000017 : 0;
    if ( v12 )
    {
      v15 = g_pTokenManager;
      if ( g_pTokenManager )
      {
        ExAcquirePushLockExclusiveEx((char *)g_pTokenManager + 64, 0LL);
        *((_QWORD *)v15 + 9) = KeGetCurrentThread();
      }
      *((_QWORD *)this + 20) = *(_QWORD *)a2;
      v37 = *(_QWORD *)(v13 + 72);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 2, 0) )
      {
        v14 = -1073740024;
      }
      else
      {
        v16 = ExpInterlockedFlushSList((PSLIST_HEADER)this + 6);
        v17 = 0LL;
        if ( v16 )
        {
          do
          {
            v31 = *((_QWORD *)&v16[1].Next + 1);
            Next = v16->Next;
            if ( v31 )
            {
              p_Next = *(_QWORD **)(v31 + 24);
              *(_QWORD *)(v31 + 24) = 0LL;
              v16->Next = (struct _SLIST_ENTRY *)*((_QWORD *)&v16[1].Next + 1);
              *((_QWORD *)&v16[1].Next + 1) = 0LL;
            }
            else
            {
              p_Next = &v16->Next;
            }
            *p_Next = v17;
            v17 = v16;
            v16 = Next;
          }
          while ( Next );
        }
        v18 = (_QWORD *)((char *)this + 136);
        v41 = v17;
        v19 = (_QWORD *)*((_QWORD *)this + 17);
        if ( v19 )
        {
          do
          {
            v35 = (PSLIST_ENTRY *)v19;
            *(_BYTE *)(v19[1] + 49LL) = 0;
            v19 = (_QWORD *)*v19;
          }
          while ( v19 );
          v36 = (struct _SLIST_ENTRY *)*v18;
          *v18 = 0LL;
          *v35 = v17;
          v17 = v36;
          v41 = v36;
        }
        v20 = &v41;
        v21 = v17;
        if ( v17 )
        {
          do
          {
            v28 = v21[6].Next;
            if ( v28
              && BYTE1(v28[2].Next)
              && ((__int64)v21[2].Next & 0x10) != 0
              && (!DirectComposition::CBatch::ShouldDefer(
                     (DirectComposition::CBatch *)v21,
                     *((_QWORD *)this + 20),
                     0LL,
                     (enum DirectComposition::CBatch::DeferReason *)&v38)
               || v38 == 6) )
            {
              _InterlockedDecrement((volatile signed __int32 *)&v28[2].Next + 1);
              LOBYTE(v21[2].Next) &= ~0x10u;
            }
            v21 = v21->Next;
          }
          while ( v21 );
          do
          {
            if ( DirectComposition::CBatch::ShouldDefer(
                   (DirectComposition::CBatch *)v17,
                   *((_QWORD *)this + 20),
                   *((struct DirectComposition::CEvent **)this + 10),
                   (enum DirectComposition::CBatch::DeferReason *)&v39) )
            {
              if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
                McTemplateK0qpqxxq(
                  *((_QWORD *)&v17->Next + 1),
                  v29,
                  v30,
                  *(_DWORD *)(*((_QWORD *)&v17->Next + 1) + 28LL),
                  (char)v17,
                  (char)v17[1].Next,
                  (char)v17[4].Next,
                  *((_QWORD *)this + 20),
                  v39);
              *(_BYTE *)(*((_QWORD *)&v17->Next + 1) + 49LL) = 1;
              v34 = v17->Next;
              *((_QWORD *)&v17[3].Next + 1) = 0LL;
              *v20 = v34;
              *v18 = v17;
              v18 = &v17->Next;
              v17->Next = 0LL;
            }
            else
            {
              if ( ((__int64)v17[2].Next & 8) != 0 )
                *(_BYTE *)(*((_QWORD *)&v17->Next + 1) + 241LL) = 1;
              *((_QWORD *)&v17[3].Next + 1) = v37;
              v20 = &v17->Next;
            }
            v17 = *v20;
          }
          while ( *v20 );
          v17 = v41;
          v3 = v40;
        }
        *((_QWORD *)this + 21) = *((_QWORD *)a2 + 1);
        v14 = 0;
        *((_DWORD *)this + 44) = *((_DWORD *)a2 + 5);
        *((_DWORD *)this + 45) = *((_DWORD *)a2 + 6);
        if ( v17 )
          *(_QWORD *)(v13 + 88) = v17;
        if ( g_pTokenManager )
          CTokenManager::ReleaseToFrameInternal(
            (CTokenManager *)v19,
            (struct DirectComposition::CCompositionFrame *)v13);
        ExAcquirePushLockExclusiveEx((char *)this + 200, 0LL);
        *((_BYTE *)this + 208) = 1;
        _InterlockedIncrement((volatile signed __int32 *)v13);
        v22 = (_QWORD *)((char *)this + 184);
        v23 = *((_QWORD *)this + 23);
        v24 = (_QWORD *)(v13 + 8);
        if ( *(DirectComposition::CConnection **)(v23 + 8) != (DirectComposition::CConnection *)((char *)this + 184) )
          __fastfail(3u);
        *v24 = v23;
        *(_QWORD *)(v13 + 16) = v22;
        *(_QWORD *)(v23 + 8) = v24;
        *v22 = v24;
        v25 = (char *)this + 200;
        if ( *((_BYTE *)this + 208) )
          ExReleasePushLockExclusiveEx(v25, 0LL);
        else
          ExReleasePushLockSharedEx(v25, 0LL);
      }
      v26 = g_pTokenManager;
      if ( g_pTokenManager )
      {
        *((_QWORD *)g_pTokenManager + 9) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v26 + 64, 0LL);
      }
      if ( v14 < 0 )
        DirectComposition::CCompositionFrame::Discard((DirectComposition::CCompositionFrame *)v13);
      else
        *v3 = *(_QWORD *)(v13 + 72);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13, 0xFFFFFFFF) == 1 )
      {
        if ( *(_DWORD *)(v13 + 80) != 3 )
          DirectComposition::CCompositionFrame::Discard((DirectComposition::CCompositionFrame *)v13);
        Win32FreePool(v13, v9, v10);
      }
    }
  }
  else
  {
    v14 = -1073741300;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  return (unsigned int)v14;
}
