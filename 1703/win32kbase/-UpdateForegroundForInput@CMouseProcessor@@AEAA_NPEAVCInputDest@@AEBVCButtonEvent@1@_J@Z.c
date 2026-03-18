/*
 * XREFs of ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C00461DC
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00464F0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ApiSetEditionChangeForegroundQueueForMouseInput @ 0x1C0004EA8 (ApiSetEditionChangeForegroundQueueForMouseInput.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0047F6C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0083A88 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0083ACC (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ApiSetEditionPostEventMessage @ 0x1C0089DE8 (ApiSetEditionPostEventMessage.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C008BB10 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ApiSetEditionFireViewHitTestCallback @ 0x1C013AABC (ApiSetEditionFireViewHitTestCallback.c)
 */

bool __fastcall CMouseProcessor::UpdateForegroundForInput(
        CMouseProcessor *this,
        struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3,
        int a4)
{
  bool v8; // bl
  __int64 v9; // r10
  int v10; // edx
  __int64 Queue; // rax
  __int64 v13; // rcx
  __int64 *v14; // rbx
  int v15; // ecx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm0
  _OWORD *v23; // rdi
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 v27; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v28[64]; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v29[12]; // [rsp+88h] [rbp-80h] BYREF

  v8 = 1;
  if ( (int)IsEditionFireViewHitTestCallbackSupported() >= 0 )
  {
    if ( *((_DWORD *)a3 + 4) != 1 )
      return v8;
    LODWORD(v27) = (__int16)a4;
    HIDWORD(v27) = SHIWORD(a4);
    CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v28, a2);
    ApiSetEditionFireViewHitTestCallback(v15, *((_QWORD *)a2 + 12), *(_QWORD *)(*(_QWORD *)a3 + 8LL), 4);
    goto LABEL_15;
  }
  v9 = gpqForeground;
  v10 = 2;
  if ( gpqForeground )
  {
    Queue = CInputDest::GetQueue(a2, 2LL);
    if ( Queue == v9 )
      return v8;
  }
  if ( *((_DWORD *)a3 + 4) == 1 )
  {
    if ( v9 )
    {
      v13 = *((_DWORD *)a2 + 23) == v10 ? *((_QWORD *)a2 + 10) : 0LL;
      if ( v13 && grpdeskRitInput && v13 == *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 1) + 16LL) )
      {
        v16 = *((_OWORD *)a2 + 1);
        v29[0] = *(_OWORD *)a2;
        v17 = *((_OWORD *)a2 + 2);
        v29[1] = v16;
        v18 = *((_OWORD *)a2 + 3);
        v29[2] = v17;
        v19 = *((_OWORD *)a2 + 4);
        v29[3] = v18;
        v20 = *((_OWORD *)a2 + 5);
        v29[4] = v19;
        v21 = *((_OWORD *)a2 + 6);
        v29[5] = v20;
        v29[6] = v21;
        v22 = *((_OWORD *)a2 + 7);
        v23 = (_OWORD *)((char *)a2 + 128);
        v29[7] = v22;
        v24 = v23[1];
        v29[8] = *v23;
        v25 = v23[2];
        v29[9] = v24;
        v26 = v23[3];
        v29[10] = v25;
        v29[11] = v26;
        ApiSetEditionPostEventMessage((unsigned int)v29, v10, 0, 0, 0LL);
        return v8;
      }
    }
    if ( *(_DWORD *)(*(_QWORD *)a3 + 84LL) == 1 )
    {
      v14 = 0LL;
    }
    else
    {
      v14 = &v27;
      v27 = *(_QWORD *)(*(_QWORD *)a3 + 108LL);
    }
    CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v28, a2);
    v8 = (unsigned int)ApiSetEditionChangeForegroundQueueForMouseInput((__int64)a2, (__int64)v14) != 0;
LABEL_15:
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v28);
    return v8;
  }
  if ( *(_DWORD *)(*(_QWORD *)a3 + 84LL) != 1
    && !(unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*(_QWORD *)a3 + 108LL), a2, (char *)this + 8) )
  {
    return 0;
  }
  return v8;
}
