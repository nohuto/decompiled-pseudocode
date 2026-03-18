/*
 * XREFs of NtUserProcessConnect @ 0x1C00DF5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C00DF99C (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

NTSTATUS __fastcall NtUserProcessConnect(HANDLE Handle, volatile void *a2)
{
  _OWORD *v3; // rdi
  __int64 ProcessPeb; // r14
  __int64 v5; // r15
  size_t v6; // r12
  _OWORD *v7; // rbx
  int *p_Src; // rax
  __int64 v9; // rcx
  NTSTATUS result; // eax
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  struct _KPROCESS *v13; // rsi
  int inited; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  signed __int64 v19; // rdi
  _OWORD *v20; // rdi
  char *v21; // rax
  signed __int32 v22[8]; // [rsp+0h] [rbp-358h] BYREF
  char v23; // [rsp+30h] [rbp-328h]
  PVOID Object; // [rsp+38h] [rbp-320h] BYREF
  _OWORD *v25; // [rsp+40h] [rbp-318h]
  __int64 v26; // [rsp+48h] [rbp-310h]
  volatile void *Address; // [rsp+50h] [rbp-308h]
  volatile void *v28[2]; // [rsp+58h] [rbp-300h]
  volatile void *v29; // [rsp+78h] [rbp-2E0h]
  int Src; // [rsp+B0h] [rbp-2A8h] BYREF
  char v31; // [rsp+B8h] [rbp-2A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+2F0h] [rbp-68h] BYREF

  Address = a2;
  v3 = 0LL;
  ProcessPeb = 0LL;
  if ( gpepCSRSS != PsGetCurrentProcess(Handle) )
    return -1073741823;
  if ( (int)IsSysEntryApiExtSupported() < 0 )
    return -1073741637;
  v5 = 4LL;
  v6 = 576LL;
  v7 = Address;
  ProbeForWrite(Address, 0x240uLL, 4u);
  p_Src = &Src;
  v9 = 4LL;
  do
  {
    *(_OWORD *)p_Src = *v7;
    *((_OWORD *)p_Src + 1) = v7[1];
    *((_OWORD *)p_Src + 2) = v7[2];
    *((_OWORD *)p_Src + 3) = v7[3];
    *((_OWORD *)p_Src + 4) = v7[4];
    *((_OWORD *)p_Src + 5) = v7[5];
    *((_OWORD *)p_Src + 6) = v7[6];
    p_Src += 32;
    *((_OWORD *)p_Src - 1) = v7[7];
    v7 += 8;
    --v9;
  }
  while ( v9 );
  *(_OWORD *)p_Src = *v7;
  *((_OWORD *)p_Src + 1) = v7[1];
  *((_OWORD *)p_Src + 2) = v7[2];
  *((_OWORD *)p_Src + 3) = v7[3];
  if ( Src != (unsigned int)SysEntryGetDispatchTableValues() )
    return -1073741811;
  result = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  if ( result >= 0 )
  {
    CurrentProcess = (PVOID)PsGetCurrentProcess(v11);
    v13 = (struct _KPROCESS *)Object;
    if ( Object == CurrentProcess
      || !(unsigned int)PsIsProtectedProcess(Object)
      || (unsigned int)PsIsProtectedProcessLight(v13) )
    {
      v23 = 0;
    }
    else
    {
      v25 = 0LL;
      LODWORD(v28[0]) = 0;
      v28[1] = 0LL;
      inited = PsAcquireProcessExitSynchronization(v13);
      if ( inited < 0 )
      {
LABEL_15:
        ObfDereferenceObject(Object);
        return inited;
      }
      v23 = 1;
      ProcessPeb = PsGetProcessPeb(v13);
      v26 = ProcessPeb;
      KeStackAttachProcess(v13, &ApcState);
      _m_prefetchw((const void *)(ProcessPeb + 88));
      v19 = _InterlockedAnd64((volatile signed __int64 *)(ProcessPeb + 88), 0xFFFFFFFFFFFFFFFEuLL);
      v25 = (_OWORD *)v19;
      if ( (v19 & 1) == 0
        || (v20 = (_OWORD *)(v19 & 0xFFFFFFFFFFFFFFFEuLL),
            v25 = v20,
            ProbeForRead(v20, 0x10uLL, 4u),
            *(_OWORD *)v28 = *v20,
            LODWORD(v28[0]) != 568) )
      {
        inited = -1073741823;
LABEL_13:
        if ( v23 )
        {
          KeUnstackDetachProcess(&ApcState);
          PsReleaseProcessExitSynchronization(Object);
        }
        goto LABEL_15;
      }
      v3 = v28[1];
      v29 = v28[1];
      ProbeForWrite(v28[1], 0x238uLL, 4u);
    }
    EnterCrit(0LL, 1LL);
    inited = InitMapSharedSection((struct _EPROCESS *)Object, (struct _USERCONNECT *)&Src);
    UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
    if ( inited >= 0 )
    {
      if ( v23 )
      {
        v21 = &v31;
        do
        {
          *v3 = *(_OWORD *)v21;
          v3[1] = *((_OWORD *)v21 + 1);
          v3[2] = *((_OWORD *)v21 + 2);
          v3[3] = *((_OWORD *)v21 + 3);
          v3[4] = *((_OWORD *)v21 + 4);
          v3[5] = *((_OWORD *)v21 + 5);
          v3[6] = *((_OWORD *)v21 + 6);
          v3 += 8;
          *(v3 - 1) = *((_OWORD *)v21 + 7);
          v21 += 128;
          --v5;
        }
        while ( v5 );
        *v3 = *(_OWORD *)v21;
        v3[1] = *((_OWORD *)v21 + 1);
        v3[2] = *((_OWORD *)v21 + 2);
        *((_QWORD *)v3 + 6) = *((_QWORD *)v21 + 6);
        _InterlockedOr(v22, 0);
        *(_QWORD *)(ProcessPeb + 88) = 0LL;
        KeUnstackDetachProcess(&ApcState);
        PsReleaseProcessExitSynchronization(Object);
        v23 = 0;
        v6 = 8LL;
      }
      memmove((void *)Address, &Src, v6);
    }
    goto LABEL_13;
  }
  return result;
}
