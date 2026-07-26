/*
 * XREFs of ?NdisPDCreateQueue@@YAJPEAUPD_CLIENT_HANDLE__@@KEPEAU_KEVENT@@1PEAPEAUPD_QUEUE_HANDLE__@@@Z @ 0x1C00EBDA0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     WPP_SF_qddqq @ 0x1C0075C30 (WPP_SF_qddqq.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDCreateQueue(
        struct PD_CLIENT_HANDLE__ *a1,
        __int64 a2,
        char a3,
        struct _KEVENT *a4,
        struct _KEVENT *a5,
        struct PD_QUEUE_HANDLE__ **a6)
{
  unsigned int v8; // esi
  SIZE_T v10; // rdx
  unsigned __int64 v11; // rcx
  signed int v12; // edi
  unsigned int v13; // eax
  size_t v14; // r15
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // rbx
  struct PD_CLIENT_HANDLE__ **v17; // rcx
  KLockHolder v19; // [rsp+40h] [rbp-48h] BYREF

  v8 = a2;
  if ( (unsigned __int8)byte_1C0092624 >= 4u )
    WPP_SF_qddqq((__int64)a5, a2, (__int64)a1, a2);
  *a6 = 0LL;
  if ( v8 > 0x7FFFFFFF || ((v8 + 1) & v8) != 0 )
  {
    v12 = -1073741811;
  }
  else
  {
    v10 = 0xFFFFFFFFLL;
    v11 = 8LL * (v8 + 1);
    if ( v11 > 0xFFFFFFFF )
    {
      LODWORD(v11) = -1;
      v12 = -1073741675;
    }
    else
    {
      v12 = 0;
    }
    if ( v12 >= 0 )
    {
      v13 = v11 + 192;
      if ( (int)v11 + 192 >= (unsigned int)v11 )
        v10 = v13;
      v12 = v13 < (unsigned int)v11 ? 0xC0000095 : 0;
      if ( v13 >= (unsigned int)v11 )
      {
        v14 = (unsigned int)v10;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x7141444Eu);
        v16 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v14);
          v19.m_State = Unlocked;
          v16[4] = a5;
          v19.m_Lock = (KPushLockBase *)qword_1C00926D0;
          *((_DWORD *)v16 + 13) = v8;
          *((_BYTE *)v16 + 24) = a3;
          v16[5] = a4;
          v16[2] = a1;
          v19.m_Region.m_Entered = 0;
          KLockHolder::AcquireExclusive(&v19);
          v17 = (struct PD_CLIENT_HANDLE__ **)*((_QWORD *)a1 + 9);
          if ( *v17 != (struct PD_CLIENT_HANDLE__ *)((char *)a1 + 64) )
            __fastfail(3u);
          v16[1] = v17;
          *v16 = (char *)a1 + 64;
          *v17 = (struct PD_CLIENT_HANDLE__ *)v16;
          *((_QWORD *)a1 + 9) = v16;
          KLockHolder::~KLockHolder(&v19);
          *a6 = (struct PD_QUEUE_HANDLE__ *)v16;
        }
        else
        {
          v12 = -1073741670;
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C0092624 >= 4u )
    WPP_SF_qqd(0x5Fu, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, a1, *a6, v12);
  return (unsigned int)v12;
}
