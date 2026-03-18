/*
 * XREFs of ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C000EF30
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0011BB4 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipToken::InFrame(CFlipToken *this, struct CCompositionFrame *a2, bool *a3)
{
  unsigned int v3; // r13d
  int v4; // edi
  struct CCompositionFrame *v6; // rbp
  __int64 v8; // r15
  char v9; // bp
  unsigned int v10; // eax
  __int64 v11; // rcx
  bool v12; // zf
  int v13; // r15d
  __int64 v14; // r14
  __int64 v15; // r12
  unsigned int v16; // r13d
  int v17; // edi
  void (__fastcall *v18)(__int64, _QWORD, _QWORD, _QWORD, int, int, int, struct CCompositionFrame *, __int64); // rsi
  unsigned int v19; // eax
  __int64 v20; // r15
  __int64 v21; // r8
  _QWORD *v22; // rsi
  _QWORD *v23; // rcx
  _QWORD *v24; // rsi
  __int64 v25; // rcx
  int v26; // r14d
  __int64 v27; // rbp
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r14
  __int64 v31; // rsi
  __int64 v32; // r15
  __int64 v33; // rbp
  _QWORD *v34; // rax
  _QWORD *v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rbp
  __int64 v38; // rbx
  __int64 v39; // rsi
  _QWORD *v40; // rax
  _QWORD *v41; // rbx
  __int64 v42; // rcx
  _QWORD *v44; // rax
  void (__fastcall ***v45)(_QWORD, __int64); // rcx
  _QWORD *v46; // r8
  _QWORD *v47; // rdx
  __int64 v48; // rax
  char v49; // [rsp+90h] [rbp+8h] BYREF
  struct CCompositionFrame *v50; // [rsp+98h] [rbp+10h]

  v50 = a2;
  v3 = *((_DWORD *)a2 + 12);
  v4 = 0;
  *a3 = 0;
  v6 = a2;
  if ( *((_DWORD *)this + 6) != 2 )
    goto LABEL_14;
  v8 = *((_QWORD *)this + 4);
  v9 = 1;
  if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v8 + 40))(v8 + 40) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v8 + 48, 0LL);
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v8 + 40))(v8 + 40) )
    {
      v10 = *(_DWORD *)(v8 + 116);
      v9 = 0;
      if ( !v10 || v3 > v10 || v10 - v3 > 4 )
        v9 = 1;
      v11 = v8 + 48;
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v8 + 56) )
      {
        *(_QWORD *)(v8 + 56) = 0LL;
        ExReleasePushLockExclusiveEx(v11, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v11, 0LL);
      }
      KeLeaveCriticalRegion();
      goto LABEL_10;
    }
    CPushLock::ReleaseLock((CPushLock *)(v8 + 40));
  }
  v4 = -1073741816;
LABEL_10:
  if ( v4 >= 0 && (v9 || !*((_DWORD *)this + 28)) )
    *a3 = 1;
  v6 = v50;
LABEL_14:
  if ( v4 >= 0 && *a3 )
  {
    v12 = *((_BYTE *)this + 559) == 0;
    *((_DWORD *)this + 6) = 3;
    v13 = v12;
    v14 = *((_QWORD *)this + 4);
    v15 = *((_QWORD *)this + 5);
    v16 = *((_DWORD *)this + 26);
    v50 = *(struct CCompositionFrame **)(v14 + 16);
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v48 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v48 + 24) = 1970LL;
      WdLogEvent5_WdAssertion(v48);
    }
    v17 = *((unsigned __int8 *)this + 556);
    v18 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int, int, struct CCompositionFrame *, __int64))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 219) + 80LL);
    v19 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
    v18(v14, v16, v19, *((_QWORD *)this + 12), 3, v17, v13, v50, v15);
    v20 = *((_QWORD *)this + 4);
    v49 = 0;
    v4 = CPushLock::AcquireLockExclusive((CPushLock *)(v20 + 40));
    if ( v4 >= 0 )
    {
      v21 = *((_QWORD *)this + 5);
      v22 = 0LL;
      v49 = 0;
      v4 = -1073741275;
      if ( *(_DWORD *)(v20 + 112) )
      {
        v23 = *(_QWORD **)(v20 + 96);
        if ( v23 != (_QWORD *)(v20 + 96) )
        {
          while ( *(v23 - 1) != v21 )
          {
            v23 = (_QWORD *)*v23;
            if ( v23 == (_QWORD *)(v20 + 96) )
              goto LABEL_25;
          }
          v22 = v23 - 3;
          v4 = 0;
        }
      }
LABEL_25:
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD *, CFlipToken *, char *))(*v22 + 112LL))(v22, this, &v49);
        if ( v4 >= 0 )
        {
          if ( v49 )
          {
            v24 = (_QWORD *)v22[3];
            while ( v24 != (_QWORD *)(v20 + 96) )
            {
              v44 = (_QWORD *)*v24;
              v45 = (void (__fastcall ***)(_QWORD, __int64))(v24 - 3);
              v46 = v24;
              v24 = v44;
              if ( (_QWORD *)v44[1] != v46 || (v47 = (_QWORD *)v46[1], (_QWORD *)*v47 != v46) )
                __fastfail(3u);
              *v47 = v44;
              v44[1] = v47;
              --*(_DWORD *)(v20 + 112);
              if ( v45 )
                (**v45)(v45, 1LL);
            }
          }
        }
      }
      v25 = v20 + 48;
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v20 + 56) )
      {
        *(_QWORD *)(v20 + 56) = 0LL;
        ExReleasePushLockExclusiveEx(v25, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v25, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    if ( v4 >= 0 )
    {
      *((_BYTE *)this + 88) = v49;
      v26 = (*(__int64 (__fastcall **)(CFlipToken *, _QWORD))(*(_QWORD *)this + 128LL))(
              this,
              *((unsigned int *)v6 + 12));
      if ( v26 )
      {
        v27 = *((_QWORD *)this + 4);
        if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v27 + 40)) >= 0 )
        {
          *(_DWORD *)(v27 + 116) = v26;
          v28 = v27 + 48;
          if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v27 + 56) )
          {
            *(_QWORD *)(v27 + 56) = 0LL;
            ExReleasePushLockExclusiveEx(v28, 0LL);
          }
          else
          {
            ExReleasePushLockSharedEx(v28, 0LL);
          }
          KeLeaveCriticalRegion();
        }
      }
      if ( !*((_BYTE *)this + 48) )
      {
        v29 = *((_QWORD *)this + 12);
        if ( v29 > 1 )
        {
          v30 = v29 - 1;
          v31 = *((_QWORD *)this + 4);
          v32 = *((_QWORD *)this + 5);
          v33 = v31 + 40;
          if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v31 + 40)) >= 0 )
          {
            if ( *(_DWORD *)(v31 + 112) )
            {
              v34 = *(_QWORD **)(v31 + 96);
              v35 = (_QWORD *)(v31 + 96);
              if ( v34 != v35 )
              {
                while ( *(v34 - 1) != v32 )
                {
                  v34 = (_QWORD *)*v34;
                  if ( v34 == v35 )
                    goto LABEL_45;
                }
                (*(void (__fastcall **)(_QWORD *, unsigned __int64, _QWORD))(*(v34 - 3) + 96LL))(v34 - 3, v30, 0LL);
              }
            }
LABEL_45:
            v36 = v33 + 8;
            if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v33 + 16) )
            {
              *(_QWORD *)(v33 + 16) = 0LL;
              ExReleasePushLockExclusiveEx(v36, 0LL);
            }
            else
            {
              ExReleasePushLockSharedEx(v36, 0LL);
            }
            KeLeaveCriticalRegion();
          }
        }
      }
      v12 = *((_BYTE *)this + 89) == 0;
      *((_QWORD *)this + 12) = 0LL;
      if ( v12 )
      {
        v37 = *((_QWORD *)this + 5);
        *((_BYTE *)this + 89) = 1;
        v38 = *((_QWORD *)this + 4);
        v39 = v38 + 40;
        if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v38 + 40)) >= 0 )
        {
          if ( *(_DWORD *)(v38 + 112) )
          {
            v40 = *(_QWORD **)(v38 + 96);
            v41 = (_QWORD *)(v38 + 96);
            if ( v40 != v41 )
            {
              while ( *(v40 - 1) != v37 )
              {
                v40 = (_QWORD *)*v40;
                if ( v40 == v41 )
                  goto LABEL_54;
              }
              (*(void (__fastcall **)(_QWORD *))(*(v40 - 3) + 104LL))(v40 - 3);
            }
          }
LABEL_54:
          v42 = v39 + 8;
          if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v39 + 16) )
          {
            *(_QWORD *)(v39 + 16) = 0LL;
            ExReleasePushLockExclusiveEx(v42, 0LL);
          }
          else
          {
            ExReleasePushLockSharedEx(v42, 0LL);
          }
          KeLeaveCriticalRegion();
        }
      }
    }
  }
  else
  {
    ++*((_DWORD *)this + 7);
  }
  return (unsigned int)v4;
}
