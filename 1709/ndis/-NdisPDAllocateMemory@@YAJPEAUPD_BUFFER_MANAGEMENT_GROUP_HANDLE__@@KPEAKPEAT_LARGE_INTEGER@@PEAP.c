/*
 * XREFs of ?NdisPDAllocateMemory@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KPEAKPEAT_LARGE_INTEGER@@PEAPEAXPEAPEAUPD_MEMORY_HANDLE__@@@Z @ 0x1C00F4D40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qdqxqd @ 0x1C007794C (WPP_SF_qdqxqd.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x1C00F4734 (--_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall NdisPDAllocateMemory(
        struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *a1,
        unsigned int a2,
        unsigned int *a3,
        union _LARGE_INTEGER *a4,
        void **a5,
        struct PD_MEMORY_HANDLE__ **a6)
{
  _QWORD *v9; // rbx
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // rdi
  _QWORD *PoolWithTag; // rax
  struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  KLockHolder v20; // [rsp+40h] [rbp-48h] BYREF
  struct PD_MEMORY_HANDLE__ **v21; // [rsp+B8h] [rbp+30h]

  v9 = 0LL;
  if ( (unsigned __int8)byte_1C0098764 >= 4u )
    WPP_SF_qdD(0x56u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)a1, *a3, a2);
  *a6 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( a4 )
    a4->QuadPart = 0LL;
  v12 = *((_QWORD *)a1 + 3);
  if ( (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)v12 == (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)((char *)a1 + 24) )
  {
    v13 = -1073741808;
  }
  else
  {
    v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 32) + 5512LL) + 72LL);
    v21 = (struct PD_MEMORY_HANDLE__ **)v14;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6D41444Eu);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[2] = 0LL;
      *((_DWORD *)PoolWithTag + 6) = 0;
      PoolWithTag[5] = 0LL;
      PoolWithTag[6] = 0LL;
      PoolWithTag[7] = 0LL;
      PoolWithTag[8] = 0LL;
      *((_DWORD *)PoolWithTag + 18) = 0x80000000;
      PoolWithTag[1] = 0LL;
      *PoolWithTag = 0LL;
      PoolWithTag[4] = 0LL;
    }
    else
    {
      v9 = 0LL;
    }
    if ( v9 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD *, _QWORD *))(v14 + 88))(
              *(_QWORD *)(v14 + 32),
              0LL,
              a2,
              *a3,
              v9 + 4,
              v9 + 5);
      if ( v13 >= 0 )
      {
        v9[2] = v21;
        *((_DWORD *)v9 + 6) = *a3;
        v20.m_Lock = (KPushLockBase *)qword_1C00987F8;
        *((_DWORD *)v9 + 18) = a2;
        v20.m_State = Unlocked;
        v20.m_Region.m_Entered = 0;
        KLockHolder::AcquireExclusive(&v20);
        v16 = (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **)*((_QWORD *)a1 + 6);
        if ( *v16 != (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)((char *)a1 + 40) )
          __fastfail(3u);
        v9[1] = v16;
        *v9 = (char *)a1 + 40;
        *v16 = (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)v9;
        *((_QWORD *)a1 + 6) = v9;
        KLockHolder::~KLockHolder(&v20);
        if ( a4 )
          *a4 = (union _LARGE_INTEGER)v9[4];
        if ( a5 )
          *a5 = (void *)v9[5];
        *a6 = (struct PD_MEMORY_HANDLE__ *)v9;
        v13 = 0;
      }
    }
    else
    {
      v13 = -1073741670;
    }
  }
  if ( (unsigned __int8)byte_1C0098764 >= 4u )
  {
    if ( v13 < 0 )
      v17 = 0LL;
    else
      v17 = v9[4];
    if ( v13 < 0 )
      v18 = 0LL;
    else
      v18 = v9[5];
    WPP_SF_qdqxqd(v18, v17, (__int64)a1, *a3);
  }
  if ( v9 && v13 < 0 )
    NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(v9);
  return (unsigned int)v13;
}
