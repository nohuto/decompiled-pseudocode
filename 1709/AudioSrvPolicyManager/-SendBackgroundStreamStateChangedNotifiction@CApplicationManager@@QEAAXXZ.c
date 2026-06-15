/*
 * XREFs of ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x180016900
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001EBD0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18001F110 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000B358 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x18000C854 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x18000DAE4 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x180026990 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::SendBackgroundStreamStateChangedNotifiction(CApplicationManager *this)
{
  CApplicationManager *v1; // rdi
  GUID *v2; // rsi
  int v3; // r14d
  SIZE_T v4; // rbx
  HANDLE ProcessHeap; // rax
  GUID *v6; // rax
  _QWORD *v7; // rdi
  GUID *v8; // r15
  __int64 v9; // rbx
  GUID v10; // xmm6
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  GUID v13; // xmm0
  HANDLE v14; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-21h] BYREF
  char v16; // [rsp+48h] [rbp-19h]
  LPCRITICAL_SECTION v17; // [rsp+50h] [rbp-11h] BYREF
  char v18; // [rsp+58h] [rbp-9h]
  __int64 v19; // [rsp+68h] [rbp+7h]
  GUID v20; // [rsp+70h] [rbp+Fh]
  GUID v21; // [rsp+80h] [rbp+1Fh]

  v19 = -2LL;
  v1 = g_ApplicationManager;
  v2 = 0LL;
  v17 = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  v18 = 0;
  ATL::CCritSecLock::Lock(&v17);
  if ( *((_QWORD *)v1 + 11) )
  {
    v3 = 0;
    v4 = 20LL * *((_QWORD *)v1 + 11);
    if ( !is_mul_ok(*((_QWORD *)v1 + 11), 0x14uLL) )
      v4 = -1LL;
    ProcessHeap = GetProcessHeap();
    v6 = (GUID *)HeapAlloc(ProcessHeap, 0, v4);
    v2 = v6;
    if ( v6 )
    {
      v7 = (_QWORD *)*((_QWORD *)v1 + 9);
      if ( v7 )
      {
        v8 = v6;
        do
        {
          v9 = v7[2];
          v7 = (_QWORD *)*v7;
          if ( v9 )
            _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
          if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)v9) )
          {
            v10 = GUID_00000000_0000_0000_0000_000000000000;
            v20 = GUID_00000000_0000_0000_0000_000000000000;
            lpCriticalSection = (LPCRITICAL_SECTION)(v9 + 32);
            v16 = 0;
            ATL::CCritSecLock::Lock(&lpCriticalSection);
            v11 = *(_QWORD **)(v9 + 72);
            if ( v11 )
            {
              while ( 1 )
              {
                v12 = v11[2];
                v11 = (_QWORD *)*v11;
                if ( !*(_DWORD *)(v12 + 464) )
                {
                  v13 = *(GUID *)(v12 + 548);
                  v21 = v13;
                  if ( *(_OWORD *)&GUID_00000000_0000_0000_0000_000000000000 != *(_OWORD *)&v13 )
                    break;
                }
                if ( !v11 )
                  goto LABEL_16;
              }
              v10 = v13;
              v20 = v13;
            }
LABEL_16:
            if ( v16 )
            {
              LeaveCriticalSection(lpCriticalSection);
              v16 = 0;
            }
            *v8 = v10;
            LOBYTE(v8[1].Data1) = (unsigned int)CApplication::GetTotalActiveRenderStreamCount((CApplication *)v9) != 0;
            ++v3;
            v8 = (GUID *)((char *)v8 + 20);
          }
          if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
          }
        }
        while ( v7 );
        if ( v3 )
          RtlPublishWnfStateData(WNF_BMP_BG_PLAYSTATE_CHANGED, 0LL, v2, (unsigned int)(20 * v3), 0LL);
      }
    }
  }
  v14 = GetProcessHeap();
  HeapFree(v14, 0, v2);
  if ( v18 )
    LeaveCriticalSection(v17);
}
