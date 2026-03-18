/*
 * XREFs of ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C0015008
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0015374 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ApiSetEditionChangeForegroundQueueForMouseInput @ 0x1C0004B8C (ApiSetEditionChangeForegroundQueueForMouseInput.c)
 *     CoreMsgSend @ 0x1C0011904 (CoreMsgSend.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NXZ @ 0x1C001724C (-DoesBelongToForeground@CInputDest@@QEBA_NXZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C001831C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0018360 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ApiSetEditionPostEventMessage @ 0x1C00905D8 (ApiSetEditionPostEventMessage.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0093DF8 (_anonymous_namespace_--ValidateUIPI.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

bool __fastcall CMouseProcessor::UpdateForegroundForInput(
        CMouseProcessor *this,
        struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3,
        int a4)
{
  bool v4; // di
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rcx
  __int64 *v13; // rdi
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  _OWORD *v21; // rbx
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  _QWORD v25[8]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v26[12]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+170h] [rbp+70h] BYREF

  v4 = 1;
  if ( *((_DWORD *)a3 + 4) == 1 && gFireViewHitTestConnectionHandle )
  {
    memset(v25, 0, 0x28uLL);
    v25[0] = *((_QWORD *)a2 + 12);
    v9 = *(_QWORD *)a3;
    LODWORD(v25[2]) = 4;
    v10 = *(_QWORD *)(v9 + 8);
    v25[3] = *((_QWORD *)this + 5);
    LODWORD(v27) = (__int16)a4;
    HIDWORD(v27) = SHIWORD(a4);
    v25[1] = v10;
    v25[4] = v27;
    CoreMsgSend(gFireViewHitTestConnectionHandle, 0, v25, (const GUID *)0x28);
  }
  if ( !CInputDest::DoesBelongToForeground(a2) )
  {
    if ( *((_DWORD *)a3 + 4) == 1 )
    {
      if ( gpqForeground
        && (*((_DWORD *)a2 + 23) != 2 ? (v12 = 0LL) : (v12 = *((_QWORD *)a2 + 10)),
            v12 && grpdeskRitInput && v12 == *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 1) + 16LL)) )
      {
        v14 = *((_OWORD *)a2 + 1);
        v26[0] = *(_OWORD *)a2;
        v15 = *((_OWORD *)a2 + 2);
        v26[1] = v14;
        v16 = *((_OWORD *)a2 + 3);
        v26[2] = v15;
        v17 = *((_OWORD *)a2 + 4);
        v26[3] = v16;
        v18 = *((_OWORD *)a2 + 5);
        v26[4] = v17;
        v19 = *((_OWORD *)a2 + 6);
        v26[5] = v18;
        v26[6] = v19;
        v20 = *((_OWORD *)a2 + 7);
        v21 = (_OWORD *)((char *)a2 + 128);
        v26[7] = v20;
        v22 = v21[1];
        v26[8] = *v21;
        v23 = v21[2];
        v26[9] = v22;
        v24 = v21[3];
        v26[10] = v23;
        v26[11] = v24;
        ApiSetEditionPostEventMessage((unsigned int)v26, 2, 0, 0, 0LL);
      }
      else
      {
        if ( *(_DWORD *)(*(_QWORD *)a3 + 84LL) == 1 )
        {
          v13 = 0LL;
        }
        else
        {
          v13 = &v27;
          v27 = *(_QWORD *)(*(_QWORD *)a3 + 108LL);
        }
        CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v25, a2);
        v4 = (unsigned int)ApiSetEditionChangeForegroundQueueForMouseInput((__int64)a2, (__int64)v13) != 0;
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v25);
      }
    }
    else if ( *(_DWORD *)(*(_QWORD *)a3 + 84LL) != 1
           && !(unsigned __int8)anonymous_namespace_::ValidateUIPI(
                                  *(_QWORD *)(*(_QWORD *)a3 + 108LL),
                                  a2,
                                  (char *)this + 8) )
    {
      return 0;
    }
  }
  return v4;
}
