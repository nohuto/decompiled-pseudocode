/*
 * XREFs of ?NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x1C00F75E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqqL @ 0x1C0043FB4 (WPP_SF_qqqL.c)
 *     WPP_SF_qdddD @ 0x1C0077EF4 (WPP_SF_qdddD.c)
 *     WPP_SF_qdqd @ 0x1C007809C (WPP_SF_qdqd_ea_1C007809C.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x1C00F7324 (--_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z.c)
 *     ?ndisPDInitializePDBuffers@@YAXPEAPEAU_PD_BUFFER@@KT_LARGE_INTEGER@@PEAEKKG@Z @ 0x1C00FA70C (-ndisPDInitializePDBuffers@@YAXPEAPEAU_PD_BUFFER@@KT_LARGE_INTEGER@@PEAEKKG@Z.c)
 */

__int64 __fastcall NdisPDAllocateBufferSet(
        struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *a1,
        unsigned int a2,
        unsigned __int16 a3,
        unsigned int *a4,
        unsigned int a5,
        struct PD_BUFFER_SET_HANDLE__ **a6)
{
  unsigned int v6; // r14d
  _QWORD *v10; // rsi
  unsigned int v11; // r8d
  __int64 v12; // rdx
  unsigned int v13; // r12d
  unsigned int v14; // r13d
  __int64 v16; // rcx
  int v17; // edi
  int *v18; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v21; // rbx
  PVOID v22; // rax
  unsigned __int8 *v23; // r9
  union _LARGE_INTEGER v24; // r8
  struct _PD_BUFFER **v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rcx
  struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **v28; // rcx
  unsigned int v29[2]; // [rsp+28h] [rbp-90h]
  _QWORD *v30; // [rsp+40h] [rbp-78h]
  _QWORD *v31; // [rsp+48h] [rbp-70h] BYREF
  KLockHolder v32; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v33; // [rsp+C0h] [rbp+8h]
  unsigned int v34; // [rsp+C8h] [rbp+10h]
  unsigned __int16 v35; // [rsp+D0h] [rbp+18h]
  struct PD_BUFFER_SET_HANDLE__ **v37; // [rsp+E8h] [rbp+30h]

  v6 = *a4;
  HIDWORD(v12) = 0;
  v34 = (a2 + 63) & 0xFFFFFFC0;
  v10 = 0LL;
  v35 = (a3 + 63) & 0xFFC0;
  v11 = v35 + v34 + 128;
  v31 = 0LL;
  LODWORD(v12) = 0x200000 % v11;
  v13 = 0;
  v14 = 0x200000 / v11;
  v33 = 0x200000 / v11;
  v30 = &v31;
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
    WPP_SF_qdddD(a3, v12, (__int64)a1, a2, a3, v6, a5);
  *a6 = 0LL;
  v16 = *((_QWORD *)a1 + 3);
  if ( (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)v16 == (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)((char *)a1 + 24) )
  {
    v17 = -1073741808;
LABEL_5:
    v18 = (int *)a4;
    goto LABEL_6;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(v16 + 32) + 5528LL);
  v37 = *(struct PD_BUFFER_SET_HANDLE__ ***)(v16 + 72);
  if ( a2 > 0x7FFFFFFF || !v6 || a3 > 0xFFC0u )
  {
    v17 = -1073741811;
LABEL_25:
    while ( v10 )
    {
      v26 = v10 + 8;
      v27 = v10;
      v10 = (_QWORD *)v10[8];
      *v26 = 0LL;
      NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(v27);
    }
    goto LABEL_5;
  }
  do
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6D41444Eu);
    v21 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[2] = 0LL;
      *((_DWORD *)PoolWithTag + 6) = 0;
      PoolWithTag[5] = 0LL;
      *((_DWORD *)PoolWithTag + 12) = 0;
      *((_DWORD *)PoolWithTag + 13) = 0;
      PoolWithTag[7] = 0LL;
      PoolWithTag[8] = 0LL;
      *((_DWORD *)PoolWithTag + 18) = 0x80000000;
      PoolWithTag[1] = 0LL;
      *PoolWithTag = 0LL;
      PoolWithTag[4] = 0LL;
    }
    else
    {
      v21 = 0LL;
    }
    if ( !v21 )
      goto LABEL_24;
    v22 = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v14, 0x6D41444Eu);
    v21[7] = v22;
    if ( !v22 )
    {
      NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(v21);
LABEL_24:
      v17 = -1073741670;
      goto LABEL_25;
    }
    *((_DWORD *)v21 + 12) = v14;
    v17 = ((__int64 (__fastcall *)(struct PD_BUFFER_SET_HANDLE__ *, _QWORD, _QWORD, __int64))v37[11])(
            v37[4],
            0LL,
            a5,
            0x200000LL);
    if ( v17 < 0 )
    {
      NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(v21);
      goto LABEL_25;
    }
    v23 = (unsigned __int8 *)v21[5];
    v14 = v33;
    v24 = (union _LARGE_INTEGER)v21[4];
    v25 = (struct _PD_BUFFER **)v21[7];
    v21[2] = v37;
    *((_DWORD *)v21 + 18) = a5;
    *((_DWORD *)v21 + 6) = 0x200000;
    ndisPDInitializePDBuffers(v25, v33, v24, v23, (_DWORD)v21 + 32, v34, v35);
    v13 += v33;
    *v30 = v21;
    v30 = v21 + 8;
    v10 = v31;
    if ( (unsigned __int8)byte_1C0099624 >= 4u )
    {
      v29[0] = v33;
      WPP_SF_qqqL(0x50u, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, a1, v31, v21, *(_QWORD *)v29);
    }
  }
  while ( v13 < v6 );
  v17 = 0;
  v18 = (int *)a4;
  v32.m_State = Unlocked;
  v32.m_Lock = (KPushLockBase *)qword_1C00996C8;
  v32.m_Region.m_Entered = 0;
  *a4 = v13;
  *a6 = (struct PD_BUFFER_SET_HANDLE__ *)v10;
  KLockHolder::AcquireExclusive(&v32);
  v28 = (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **)*((_QWORD *)a1 + 6);
  if ( *v28 != (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)((char *)a1 + 40) )
    __fastfail(3u);
  v10[1] = v28;
  *v10 = (char *)a1 + 40;
  *v28 = (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)v10;
  *((_QWORD *)a1 + 6) = v10;
  KLockHolder::~KLockHolder(&v32);
LABEL_6:
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
    WPP_SF_qdqd(v16, v12, (__int64)a1, *v18);
  return (unsigned int)v17;
}
