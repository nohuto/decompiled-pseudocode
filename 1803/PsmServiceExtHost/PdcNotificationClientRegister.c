/*
 * XREFs of PdcNotificationClientRegister @ 0x180038B08
 * Callers:
 *     ?HampSystemNotificationClientRegister@@YAJW4PDCCLIENTID@@PEAU_PDC_NOTIFICATIONCLIENT_REGISTRATION@@PEAXPEAPEAX@Z @ 0x180038A4C (-HampSystemNotificationClientRegister@@YAJW4PDCCLIENTID@@PEAU_PDC_NOTIFICATIONCLIENT_REGISTRATIO.c)
 * Callees:
 *     PdcPortOpen @ 0x180038C28 (PdcPortOpen.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall PdcNotificationClientRegister(int a1, __int128 *a2, void *a3, RTL_SRWLOCK **a4)
{
  RTL_SRWLOCK *Heap; // rax
  RTL_SRWLOCK *v9; // rdi
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  unsigned int v12; // ebx
  RTL_SRWLOCK *v13; // rcx
  __int64 (__fastcall *v15)(); // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741585;
  if ( *(_DWORD *)a2 == 1 )
  {
    if ( *((_QWORD *)a2 + 1) )
      goto LABEL_4;
    return (unsigned int)-1073741584;
  }
  if ( *(_DWORD *)a2 != 2 || !*((_QWORD *)a2 + 2) )
    return (unsigned int)-1073741584;
LABEL_4:
  Heap = (RTL_SRWLOCK *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x70uLL);
  v9 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x70uLL);
    v10 = *a2;
    v9[5].Ptr = a3;
    v11 = a2[1];
    LODWORD(v9->Ptr) = 1315136592;
    *(_OWORD *)&v9[6].Ptr = v10;
    LODWORD(v9[3].Ptr) = a1;
    *(_OWORD *)&v9[8].Ptr = v11;
    LOBYTE(v9[10].Ptr) = 1;
    v15 = PdcpNotificationClientCallback;
    v9[1].Ptr = 0LL;
    v9[2].Ptr = 0LL;
    InitializeSRWLock(v9 + 1);
    AcquireSRWLockExclusive(v9 + 1);
    LODWORD(v9[2].Ptr) = GetCurrentThreadId();
    v12 = PdcPortOpen(a1, 0, (_DWORD)v9, (unsigned int)&v15);
    v13 = v9 + 1;
    if ( v12 )
    {
      LODWORD(v9[2].Ptr) = 0;
      ReleaseSRWLockExclusive(v13);
    }
    else
    {
      *a4 = v9;
      LODWORD(v9[2].Ptr) = 0;
      ReleaseSRWLockExclusive(v13);
      v9 = 0LL;
    }
    if ( v9 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v12;
}
