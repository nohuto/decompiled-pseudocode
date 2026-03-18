/*
 * XREFs of ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C0135F94
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0038520 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C0036EF4 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NXZ @ 0x1C0036F08 (-DoesBelongToForeground@CInputDest@@QEBA_NXZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0066B5C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0066BA0 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ApiSetEditionPostEventMessage @ 0x1C006A6E0 (ApiSetEditionPostEventMessage.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C006AB90 (_anonymous_namespace_--ValidateUIPI.c)
 *     ApiSetEditionChangeForegroundQueueForMouseInput @ 0x1C006E648 (ApiSetEditionChangeForegroundQueueForMouseInput.c)
 */

bool __fastcall CMouseProcessor::UpdateForegroundForInput(
        CMouseProcessor *this,
        struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3,
        __int64 a4)
{
  bool v7; // di
  struct tagWND *UserWindow; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rcx
  int v19; // ebx
  __int64 *v20; // rdx
  _BYTE v22[64]; // [rsp+30h] [rbp-108h] BYREF
  _OWORD v23[11]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+158h] [rbp+20h] BYREF

  v24 = a4;
  v7 = 1;
  if ( !CInputDest::DoesBelongToForeground(a2) )
  {
    if ( *((_DWORD *)a3 + 4) == 1 )
    {
      if ( gpqForeground
        && (UserWindow = CInputDest::GetUserWindow(a2)) != 0LL
        && grpdeskRitInput
        && UserWindow == *(struct tagWND **)(*((_QWORD *)grpdeskRitInput + 1) + 24LL) )
      {
        v9 = *((_OWORD *)a2 + 1);
        v23[0] = *(_OWORD *)a2;
        v10 = *((_OWORD *)a2 + 2);
        v23[1] = v9;
        v11 = *((_OWORD *)a2 + 3);
        v23[2] = v10;
        v12 = *((_OWORD *)a2 + 4);
        v23[3] = v11;
        v13 = *((_OWORD *)a2 + 5);
        v23[4] = v12;
        v14 = *((_OWORD *)a2 + 6);
        v23[5] = v13;
        v15 = *((_OWORD *)a2 + 8);
        v23[6] = v14;
        v23[7] = *((_OWORD *)a2 + 7);
        v16 = *((_OWORD *)a2 + 9);
        v23[8] = v15;
        v17 = *((_OWORD *)a2 + 10);
        v23[9] = v16;
        v23[10] = v17;
        ApiSetEditionPostEventMessage(v23, 2u, 0, 0LL, 0LL);
      }
      else
      {
        v18 = *(_QWORD *)a3;
        v24 = *(_QWORD *)(*(_QWORD *)a3 + 108LL);
        v19 = *(_DWORD *)(v18 + 84);
        CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v22, a2);
        v20 = &v24;
        if ( v19 == 1 )
          v20 = 0LL;
        v7 = (unsigned int)ApiSetEditionChangeForegroundQueueForMouseInput((__int64)a2, (__int64)v20) != 0;
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v22);
      }
    }
    else if ( *(_DWORD *)(*(_QWORD *)a3 + 84LL) != 1 )
    {
      return anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*(_QWORD *)a3 + 108LL), a2, (__int64 *)this + 1) != 0;
    }
  }
  return v7;
}
