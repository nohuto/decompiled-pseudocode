/*
 * XREFs of ?NdisPDCreateQueue@@YAJPEAUPD_CLIENT_HANDLE__@@KEPEAU_KEVENT@@1PEAPEAUPD_QUEUE_HANDLE__@@@Z @ 0x1C00F7F50
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     WPP_SF_qddqq @ 0x1C0077F60 (WPP_SF_qddqq.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDCreateQueue(
        struct PD_CLIENT_HANDLE__ *a1,
        __int64 a2,
        char a3,
        struct _KEVENT *a4,
        struct _KEVENT *a5,
        _QWORD *Size)
{
  unsigned int v8; // esi
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // edi
  unsigned int v16; // eax
  _DWORD *PoolWithTag; // rax
  _DWORD *v18; // rbx
  struct PD_CLIENT_HANDLE__ **v19; // rcx
  KLockHolder v21; // [rsp+40h] [rbp-48h] BYREF
  size_t Sizea; // [rsp+B8h] [rbp+30h]

  v8 = a2;
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
    WPP_SF_qddqq((__int64)a1, a2, (__int64)a1, a2);
  *Size = 0LL;
  if ( v8 > 0x7FFFFFFF || (v11 = v8 + 1, ((unsigned int)v11 & v8) != 0) )
  {
    v15 = -1073741811;
  }
  else
  {
    v12 = 8 * v11;
    v13 = -1;
    v14 = -1;
    if ( v12 <= 0xFFFFFFFF )
      v14 = v12;
    v15 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v12 <= 0xFFFFFFFF )
    {
      v16 = v14 + 192;
      if ( v14 + 192 >= v14 )
        v13 = v14 + 192;
      v15 = v16 < v14 ? 0xC0000095 : 0;
      if ( v16 >= v14 )
      {
        Sizea = v13;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x7141444Eu);
        v18 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, Sizea);
          v21.m_State = Unlocked;
          v21.m_Lock = (KPushLockBase *)qword_1C00996C8;
          v18[13] = v8;
          *((_BYTE *)v18 + 24) = a3;
          *((_QWORD *)v18 + 4) = a5;
          *((_QWORD *)v18 + 5) = a4;
          *((_QWORD *)v18 + 2) = a1;
          v21.m_Region.m_Entered = 0;
          KLockHolder::AcquireExclusive(&v21);
          v19 = (struct PD_CLIENT_HANDLE__ **)*((_QWORD *)a1 + 9);
          if ( *v19 != (struct PD_CLIENT_HANDLE__ *)((char *)a1 + 64) )
            __fastfail(3u);
          *((_QWORD *)v18 + 1) = v19;
          *(_QWORD *)v18 = (char *)a1 + 64;
          *v19 = (struct PD_CLIENT_HANDLE__ *)v18;
          *((_QWORD *)a1 + 9) = v18;
          KLockHolder::~KLockHolder(&v21);
          *Size = v18;
        }
        else
        {
          v15 = -1073741670;
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
    WPP_SF_qqd(0x5Fu, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, a1, *Size, v15);
  return v15;
}
