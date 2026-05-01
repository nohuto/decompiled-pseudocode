/*
 * XREFs of ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x1800158D0
 * Callers:
 *     PsmMemoryLimitNotification2 @ 0x18002EE00 (PsmMemoryLimitNotification2.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003E450 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F5A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003F5B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x18004CBD4 (--_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z.c)
 */

void __fastcall ModernResourceEnforcer::MemoryLimitNotification(
        ModernResourceEnforcer *this,
        union _RM_SID *a2,
        int a3,
        const unsigned __int16 *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned __int64 v7; // rbx
  union _RM_SID *v9; // r12
  char *v10; // rax
  char *v11; // rsi
  ModernResourceEnforcer *v12; // r15
  const unsigned __int16 *v13; // r9
  unsigned __int16 *v14; // r13
  char *v15; // rax
  char *v16; // rcx
  unsigned __int64 v17; // rax
  char *v18; // r15
  unsigned int v19; // edx
  void **v20; // rax
  char v21; // r12
  size_t v22; // rbx
  char *v23; // rbx
  unsigned __int16 *v24; // rcx
  char *v25; // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  int v28; // eax
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  ModernResourceEnforcer **v31; // rcx
  __int64 (__fastcall *v32)(ModernResourceEnforcer *); // rax
  const unsigned __int16 *v33; // rax
  int v34; // [rsp+30h] [rbp-79h] BYREF
  int v35; // [rsp+34h] [rbp-75h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-71h] BYREF
  void *v37[2]; // [rsp+48h] [rbp-61h] BYREF
  char *v38; // [rsp+58h] [rbp-51h]
  void *Block[2]; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-39h] BYREF
  void *v41; // [rsp+80h] [rbp-29h]
  int v42; // [rsp+88h] [rbp-21h]
  int v43; // [rsp+8Ch] [rbp-1Dh]
  int *v44; // [rsp+90h] [rbp-19h]
  __int64 v45; // [rsp+98h] [rbp-11h]
  unsigned __int64 *v46; // [rsp+A0h] [rbp-9h]
  __int64 v47; // [rsp+A8h] [rbp-1h]

  v35 = a3;
  v7 = 0LL;
  *(_QWORD *)&EventDescriptor.Id = a2;
  v34 = 0;
  v9 = a2;
  v10 = (char *)operator new(0x98uLL);
  v11 = v10;
  if ( !v10 )
  {
    v34 = -1073741801;
    goto LABEL_32;
  }
  *((_QWORD *)v10 + 1) = v10 + 24;
  v12 = (ModernResourceEnforcer *)(v10 + 136);
  *((_QWORD *)v10 + 2) = v10 + 24;
  *((_WORD *)v10 + 12) = 0;
  *((_QWORD *)v10 + 14) = 0LL;
  *((_QWORD *)v10 + 15) = 0LL;
  *((_DWORD *)v10 + 32) = 0;
  *((_QWORD *)v10 + 17) = 0LL;
  *((_QWORD *)v10 + 18) = 0LL;
  *(_DWORD *)v10 = 1;
  if ( a4 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a4[v7] );
  }
  v13 = (const unsigned __int16 *)*((_QWORD *)v10 + 1);
  v14 = (unsigned __int16 *)(v10 + 24);
  v15 = v10 + 38;
  if ( v13 == (const unsigned __int16 *)(v11 + 24) )
    v16 = v11 + 38;
  else
    v16 = *(char **)v14;
  if ( v7 <= (v16 - (char *)v13) >> 1 )
  {
    if ( v13 != a4 )
    {
      memmove(*((void **)v11 + 1), a4, 2 * v7);
      v13 = (const unsigned __int16 *)*((_QWORD *)v11 + 1);
    }
    v33 = &v13[v7];
    *((_QWORD *)v11 + 2) = v33;
    *v33 = 0;
  }
  else
  {
    if ( v13 != v14 )
      v15 = *(char **)v14;
    v17 = 2 * ((v15 - (char *)v13) >> 1) + 1;
    if ( v17 < v7 )
      v17 = v7;
    if ( v17 > 0x3FFFFFFFFFFFFFFELL )
      v17 = 0x3FFFFFFFFFFFFFFELL;
    if ( v7 > v17 )
    {
      v20 = Block;
      Block[0] = 0LL;
      v18 = 0LL;
      Block[1] = 0LL;
      v19 = 0;
      v21 = 2;
    }
    else
    {
      v37[1] = (void *)(v17 + 1);
      if ( v17 + 1 > 0x7FFFFFFFFFFFFFFFLL )
      {
        v19 = 0;
        v18 = 0LL;
        v37[0] = 0LL;
      }
      else
      {
        v18 = (char *)operator new(2 * (v17 + 1), (const struct std::nothrow_t *)&std::nothrow);
        v37[0] = v18;
        v19 = 0;
      }
      v20 = v37;
      v21 = 1;
    }
    v38 = (char *)v20[1];
    *v20 = 0LL;
    if ( (v21 & 2) != 0 )
    {
      v21 &= ~2u;
      if ( Block[0] )
        operator delete(Block[0]);
    }
    if ( (v21 & 1) != 0 && v37[0] )
      operator delete(v37[0]);
    if ( !v18 )
    {
      v34 = -1073741801;
      ModernResourceEnforcer::ModernResourceEnforcerWorkItem::`scalar deleting destructor'(
        (ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)v11,
        v19);
      goto LABEL_32;
    }
    v22 = 2 * v7;
    memcpy_0(v18, a4, v22);
    v23 = &v18[v22];
    *(_WORD *)v23 = 0;
    v24 = (unsigned __int16 *)*((_QWORD *)v11 + 1);
    if ( v24 != v14 )
      operator delete(v24);
    v9 = *(union _RM_SID **)&EventDescriptor.Id;
    v25 = v38 - 1;
    *((_QWORD *)v11 + 1) = v18;
    *((_QWORD *)v11 + 2) = v23;
    *(_QWORD *)v14 = &v18[2 * (_QWORD)v25];
    v12 = (ModernResourceEnforcer *)(v11 + 136);
  }
  v26 = *(_OWORD *)v9;
  v27 = *((_OWORD *)v9 + 1);
  *((_DWORD *)v11 + 28) = a5;
  v28 = *((_DWORD *)v9 + 16);
  *(_OWORD *)(v11 + 40) = v26;
  v29 = *((_OWORD *)v9 + 2);
  *(_OWORD *)(v11 + 56) = v27;
  v30 = *((_OWORD *)v9 + 3);
  *(_OWORD *)(v11 + 72) = v29;
  *(_OWORD *)(v11 + 88) = v30;
  *((_DWORD *)v11 + 26) = v28;
  *((_DWORD *)v11 + 27) = v35;
  *((_QWORD *)v11 + 15) = a6;
  *((_DWORD *)v11 + 32) = 1;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 248));
  v31 = (ModernResourceEnforcer **)*((_QWORD *)this + 38);
  if ( *v31 != (ModernResourceEnforcer *)((char *)this + 296) )
    __fastfail(3u);
  *(_QWORD *)v12 = (char *)this + 296;
  *((_QWORD *)v12 + 1) = v31;
  *v31 = v12;
  *((_QWORD *)this + 38) = v12;
  if ( (*((_BYTE *)this + 360) & 1) == 0 )
  {
    v32 = *(__int64 (__fastcall **)(ModernResourceEnforcer *))(*(_QWORD *)this + 8LL);
    if ( v32 == ModernResourceEnforcer::AddRef )
      _InterlockedIncrement((volatile signed __int32 *)this + 60);
    else
      v32(this);
    TpPostWork(*((_QWORD *)this + 36));
    *((_DWORD *)this + 90) |= 1u;
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 248));
LABEL_32:
  if ( hProvider > 5u && (qword_1800920C0 & 1) != 0 && (qword_1800920C8 & 1) == qword_1800920C8 )
  {
    v45 = 4LL;
    v44 = &v34;
    v46 = &a6;
    v47 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1800920B8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18007BEB7 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800920B8;
    v41 = &unk_18007BEC2;
    UserData.Reserved = 2;
    v42 = 42;
    v43 = 1;
    EventWriteTransfer(qword_1800920D0, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
}
