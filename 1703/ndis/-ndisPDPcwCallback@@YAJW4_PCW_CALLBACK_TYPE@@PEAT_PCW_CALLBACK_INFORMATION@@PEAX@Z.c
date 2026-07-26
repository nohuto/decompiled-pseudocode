/*
 * XREFs of ?ndisPDPcwCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C0074A60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 *     ?NdisPDPIQueryCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@PEAT_NDIS_PD_COUNTER_VALUE@@@Z @ 0x1C00ECE60 (-NdisPDPIQueryCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@PEAT_NDIS_PD_COUNTER_VALUE@@@Z.c)
 */

__int64 __fastcall ndisPDPcwCallback(unsigned int a1, union _PCW_CALLBACK_INFORMATION *a2, void *a3)
{
  int v3; // r13d
  NTSTATUS v4; // r15d
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rsi
  _QWORD *v9; // r12
  _QWORD *v10; // rdi
  union _PCW_CALLBACK_INFORMATION *v11; // rsi
  __int64 *i; // rbx
  unsigned int InstanceId; // eax
  struct _PCW_DATA Data; // [rsp+38h] [rbp-29h] BYREF
  unsigned int v15; // [rsp+48h] [rbp-19h]
  _QWORD *v16; // [rsp+50h] [rbp-11h]
  union _PCW_CALLBACK_INFORMATION *v17; // [rsp+58h] [rbp-9h]
  KLockHolder v18; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v19[24]; // [rsp+78h] [rbp+17h] BYREF

  v15 = a1;
  v17 = a2;
  Data.Data = 0LL;
  v3 = (int)a3;
  Data.Size = 0;
  v4 = 0;
  if ( a1 <= 1 )
    return 0LL;
  v18.m_State = Unlocked;
  v18.m_Region.m_Entered = 0;
  v18.m_Lock = (KPushLockBase *)qword_1C00926D0;
  KLockHolder::AcquireExclusive(&v18);
  v6 = qword_1C00926D0;
  v7 = qword_1C00926D0 + 8;
  v8 = *(_QWORD **)(qword_1C00926D0 + 8);
  while ( 1 )
  {
    v16 = v8;
    if ( v8 == (_QWORD *)v7 )
      break;
    v9 = v8 + 2;
    v10 = (_QWORD *)v8[2];
    if ( v10 != v8 + 2 )
    {
      v11 = v17;
      do
      {
        for ( i = (__int64 *)v10[12]; i != v10 + 12; i = (__int64 *)*i )
        {
          if ( *((_DWORD *)i + 14) == v3 )
          {
            if ( v15 == 2 )
            {
              v4 = PcwAddInstance(
                     v11->EnumerateInstances.Buffer,
                     (PCUNICODE_STRING)i + 6,
                     *((_DWORD *)i + 17),
                     1u,
                     &Data);
              if ( v4 < 0 )
                break;
            }
            else
            {
              InstanceId = v11->EnumerateInstances.InstanceId;
              if ( InstanceId == -1 || InstanceId == *((_DWORD *)i + 17) )
              {
                NdisPDPIQueryCounter((struct NDIS_PD_COUNTER_HANDLE__ *)i, (union _NDIS_PD_COUNTER_VALUE *)v19);
                Data.Data = v19;
                if ( v3 == 1 )
                {
                  Data.Size = 24;
                }
                else if ( (unsigned int)(v3 - 2) < 2 )
                {
                  Data.Size = 16;
                }
                else
                {
                  Data.Size = 0;
                }
                v4 = PcwAddInstance(
                       v11->EnumerateInstances.Buffer,
                       (PCUNICODE_STRING)i + 6,
                       *((_DWORD *)i + 17),
                       1u,
                       &Data);
                break;
              }
            }
          }
        }
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != v9 );
      v6 = qword_1C00926D0;
      v8 = v16;
    }
    v8 = (_QWORD *)*v8;
    v7 = v6 + 8;
  }
  KLockHolder::~KLockHolder(&v18);
  return (unsigned int)v4;
}
