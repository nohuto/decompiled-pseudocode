/*
 * XREFs of ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111@Z @ 0x1C0011E58
 * Callers:
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0011D98 (VidSchiPropagatePresentHistoryToken.c)
 * Callees:
 *     McTemplateK0ppqqx @ 0x1C002616C (McTemplateK0ppqqx.c)
 */

void __fastcall DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
        PKSPIN_LOCK SpinLock,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        char a3,
        char a4,
        bool a5,
        bool a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppqqx((_DWORD)SpinLock, (_DWORD)a2, a3, (_DWORD)SpinLock, (char)a2);
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  if ( *((_DWORD *)SpinLock + 2) >= 0x800u )
  {
    v15 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v15 + 24) = 2871LL;
    WdLogEvent5_WdAssertion(v15);
  }
  SpinLock[*((unsigned int *)SpinLock + 2) + 10] = (KSPIN_LOCK)a2;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) = a3 | *((_BYTE *)SpinLock
                                                                        + *((unsigned int *)SpinLock + 2)
                                                                        + 16464) & 0xFE;
  v13 = *((unsigned int *)SpinLock + 2);
  *((_BYTE *)SpinLock + v13 + 16464) = (2 * a4) | *((_BYTE *)SpinLock + v13 + 16464) & 0xFD;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) = (4 * a5) | *((_BYTE *)SpinLock
                                                                              + *((unsigned int *)SpinLock + 2)
                                                                              + 16464) & 0xFB;
  v12 = *((unsigned int *)SpinLock + 2);
  LOBYTE(v13) = (8 * a6) | *((_BYTE *)SpinLock + v12 + 16464) & 0xF7;
  *((_BYTE *)SpinLock + v12 + 16464) = v13;
  v14 = ((unsigned __int16)*((_DWORD *)SpinLock + 2) + 1) & 0x7FF;
  *((_DWORD *)SpinLock + 2) = v14;
  if ( v14 == *((_DWORD *)SpinLock + 3) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v16 + 24) = 2886LL;
    WdLogEvent5_WdAssertion(v16);
  }
  KeSetEvent((PRKEVENT)SpinLock[9], 0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
