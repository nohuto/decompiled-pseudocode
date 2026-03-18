/*
 * XREFs of ?UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180042270
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800C7D38 (-GetCurrentFrameId@@YA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x1801358F4 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 */

void __fastcall CD3DDeviceManager::UnusedNotification(CD3DDeviceManager *this, struct CMILPoolResource *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 CurrentFrameId; // rax
  struct CCrossThreadComposition *v7; // rcx
  __int64 v8; // r8
  char *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  LODWORD(v4) = *((_DWORD *)this + 38);
  if ( (_DWORD)v4 )
  {
    while ( 1 )
    {
      v4 = (unsigned int)(v4 - 1);
      v5 = *(_QWORD *)(*((_QWORD *)this + 16) + 40 * v4);
      if ( v5 == (((unsigned __int64)a2 - 488) & -(__int64)(a2 != 0LL)) )
        break;
      if ( !(_DWORD)v4 )
        goto LABEL_6;
    }
    if ( *(int *)(v5 + 872) < 0 )
    {
      CD3DDeviceManager::DeleteUnusedDevice(this, v4);
    }
    else
    {
      CurrentFrameId = GetCurrentFrameId();
      v7 = g_pComposition;
      *(_QWORD *)(v8 + 1112) = CurrentFrameId + 1;
      if ( v7 )
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 70) + 112LL))(*((_QWORD *)v7 + 70), 1000LL);
    }
  }
LABEL_6:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
}
