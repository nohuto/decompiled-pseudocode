/*
 * XREFs of ?UnusableNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180195D50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

void __fastcall CD3DDeviceManager::UnusableNotification(CD3DDeviceManager *this, struct CMILPoolResource *a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rdx
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int64 v11; // xmm4_8
  __int64 v12; // rcx
  __int64 v13; // rax
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v4 = *((_DWORD *)this + 60);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *((_QWORD *)this + 16);
    while ( *(_QWORD *)(v6 + 40 * v5) != (((unsigned __int64)a2 - 488) & -(__int64)(a2 != 0LL)) )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v4 )
        goto LABEL_8;
    }
    v7 = v4 - 1;
    *((_DWORD *)this + 60) = v7;
    if ( (_DWORD)v5 != (_DWORD)v7 )
    {
      v8 = 5 * v5;
      v9 = *(_OWORD *)(v6 + 8 * v8);
      v10 = *(_OWORD *)(v6 + 8 * v8 + 16);
      v11 = *(_QWORD *)(v6 + 8 * v8 + 32);
      *(_OWORD *)(v6 + 8 * v8) = *(_OWORD *)(v6 + 40 * v7);
      *(_OWORD *)(v6 + 8 * v8 + 16) = *(_OWORD *)(v6 + 40 * v7 + 16);
      *(_QWORD *)(v6 + 8 * v8 + 32) = *(_QWORD *)(v6 + 40 * v7 + 32);
      v12 = 5LL * *((unsigned int *)this + 60);
      v13 = *((_QWORD *)this + 16);
      *(_OWORD *)(v13 + 8 * v12) = v9;
      *(_OWORD *)(v13 + 8 * v12 + 16) = v10;
      *(_QWORD *)(v13 + 8 * v12 + 32) = v11;
    }
  }
LABEL_8:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14);
}
