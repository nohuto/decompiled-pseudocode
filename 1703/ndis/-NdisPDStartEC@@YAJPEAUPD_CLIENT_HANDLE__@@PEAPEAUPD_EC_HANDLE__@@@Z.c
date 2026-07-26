/*
 * XREFs of ?NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z @ 0x1C00ED750
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqqL @ 0x1C004457C (WPP_SF_qqqL.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GNDIS_PD_EC@@QEAAPEAXI@Z @ 0x1C00EB104 (--_GNDIS_PD_EC@@QEAAPEAXI@Z.c)
 *     ?ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z @ 0x1C00EE6A0 (-ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall NdisPDStartEC(struct PD_CLIENT_HANDLE__ *a1, struct PD_EC_HANDLE__ **a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  int ECInstanceName; // edi
  unsigned int CurrentThreadId; // eax
  struct _KTHREAD *CurrentThread; // rcx
  struct PD_CLIENT_HANDLE__ **v9; // rcx
  KLockHolder v11; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C0092624 >= 4u )
    WPP_SF_qq(0x5Au, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, a1, KeGetCurrentThread());
  *a2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xA0uLL, 0x6541444Eu);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    *((_DWORD *)PoolWithTag + 34) = 0;
    PoolWithTag[18] = 0LL;
    PoolWithTag[19] = 0LL;
    PoolWithTag[1] = 0LL;
    *PoolWithTag = 0LL;
    *((_DWORD *)PoolWithTag + 10) = 0;
    PoolWithTag[6] = 0LL;
    memset(PoolWithTag + 7, 0, 0x40uLL);
    v5[16] = v5 + 15;
    v5[15] = v5 + 15;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v5[2] = a1;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    *((_DWORD *)v5 + 8) = CurrentThreadId;
    ECInstanceName = ndisPcwGetECInstanceName(*((void **)a1 + 10), CurrentThreadId, (struct _UNICODE_STRING *)(v5 + 5));
    if ( ECInstanceName < 0 )
    {
      NDIS_PD_EC::`scalar deleting destructor'((char *)v5);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v5[3] = CurrentThread;
      ObfReferenceObject(CurrentThread);
      v11.m_Lock = (KPushLockBase *)qword_1C00926D0;
      v11.m_State = Unlocked;
      v11.m_Region.m_Entered = 0;
      KLockHolder::AcquireExclusive(&v11);
      v9 = (struct PD_CLIENT_HANDLE__ **)*((_QWORD *)a1 + 7);
      if ( *v9 != (struct PD_CLIENT_HANDLE__ *)((char *)a1 + 48) )
        __fastfail(3u);
      v5[1] = v9;
      *v5 = (char *)a1 + 48;
      *v9 = (struct PD_CLIENT_HANDLE__ *)v5;
      *((_QWORD *)a1 + 7) = v5;
      KLockHolder::~KLockHolder(&v11);
      *a2 = (struct PD_EC_HANDLE__ *)v5;
      ECInstanceName = 0;
    }
  }
  else
  {
    ECInstanceName = -1073741670;
  }
  if ( (unsigned __int8)byte_1C0092624 >= 4u )
    WPP_SF_qqqL(0x5Bu, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, a1, KeGetCurrentThread(), *a2, ECInstanceName);
  return (unsigned int)ECInstanceName;
}
