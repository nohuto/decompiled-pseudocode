/*
 * XREFs of ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C000EC80
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipToken::Retire(CFlipToken *this, const struct DXGI_FRAME_STATISTICS *a2)
{
  __int64 v3; // r15
  char v4; // bl
  __int64 v5; // r14
  unsigned int v6; // ebp
  struct DXGGLOBAL *Global; // rax
  bool v8; // zf
  int v9; // ebx
  BOOL v10; // edi
  void (__fastcall *v11)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64); // rsi
  unsigned int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 *i; // rax
  __int64 v16; // rcx
  __int128 v17; // [rsp+50h] [rbp-58h]
  __int128 v18; // [rsp+60h] [rbp-48h]
  __int64 v19; // [rsp+B0h] [rbp+8h]

  v18 = *(_OWORD *)a2;
  v17 = *((_OWORD *)a2 + 1);
  v3 = *((_QWORD *)this + 4);
  v4 = *((_BYTE *)this + 559);
  v5 = *((_QWORD *)this + 5);
  v6 = *((_DWORD *)this + 26);
  *((_DWORD *)this + 6) = 5;
  v19 = *(_QWORD *)(v3 + 16);
  Global = DXGGLOBAL::GetGlobal();
  v8 = v4 == 0;
  v9 = *((unsigned __int8 *)this + 556);
  v10 = v8;
  v11 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64))(*((_QWORD *)Global + 219)
                                                                                                 + 80LL);
  v12 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  v11(v3, v6, v12, *((_QWORD *)this + 12), 5, v9, v10, v19, v5);
  v13 = *((_QWORD *)this + 4);
  v14 = *((_QWORD *)this + 5);
  LODWORD(v18) = *((_DWORD *)this + 27);
  if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v13 + 40)) >= 0 )
  {
    if ( *(_DWORD *)(v13 + 112) )
    {
      for ( i = *(__int64 **)(v13 + 96); i != (__int64 *)(v13 + 96); i = (__int64 *)*i )
      {
        if ( *(i - 1) == v14 )
        {
          *((_DWORD *)i + 39) = 0;
          *((_DWORD *)i + 48) = 0;
          *((_OWORD *)i + 10) = v18;
          *((_BYTE *)i + 17) = 1;
          *((_OWORD *)i + 11) = v17;
          break;
        }
      }
    }
    v16 = v13 + 48;
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v13 + 56) )
    {
      *(_QWORD *)(v13 + 56) = 0LL;
      ExReleasePushLockExclusiveEx(v16, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v16, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
