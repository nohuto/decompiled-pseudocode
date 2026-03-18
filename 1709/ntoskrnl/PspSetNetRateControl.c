/*
 * XREFs of PspSetNetRateControl @ 0x14071835C
 * Callers:
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PspUnlockJob @ 0x1405102A0 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x140510B94 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x140510BC0 (PspLockJobConditionally.c)
 *     PspLockRootJobExclusive @ 0x140510C18 (PspLockRootJobExclusive.c)
 *     PspNetRateControlDispatch @ 0x140717A94 (PspNetRateControlDispatch.c)
 *     PspSetJobRateControl @ 0x140718160 (PspSetJobRateControl.c)
 *     EtwTraceJobSetQuery @ 0x140745C30 (EtwTraceJobSetQuery.c)
 */

__int64 __fastcall PspSetNetRateControl(void *Src, size_t Size, _DWORD *Object)
{
  char v4; // r12
  int v5; // ebx
  int v6; // r14d
  int v7; // r15d
  int v8; // esi
  struct _KTHREAD *CurrentThread; // r13
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v17[5]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v18; // [rsp+60h] [rbp-68h] BYREF
  int v19; // [rsp+68h] [rbp-60h]
  unsigned __int8 v20; // [rsp+6Ch] [rbp-5Ch]
  __int64 v21; // [rsp+70h] [rbp-58h] BYREF
  __int64 v22; // [rsp+78h] [rbp-50h]
  __int64 v23; // [rsp+80h] [rbp-48h]

  v4 = 0;
  memmove(&v18, Src, (unsigned int)Size);
  if ( (v19 & 0xFFFFFFF8) == 0 )
  {
    v6 = v19 & 1;
    if ( (v19 & 1) == 0 || ((v19 & 4) == 0 || v20 <= 0x40u) && (v19 & 6) != 0 )
    {
      memset(v17, 0, sizeof(v17));
      v17[3] = Object + 306;
      LODWORD(v17[1]) = 0;
      v7 = v19 & 2;
      if ( (v19 & 2) != 0 )
      {
        LODWORD(v17[4]) |= 0x10u;
        v17[2] = v18;
      }
      v8 = v19 & 4;
      if ( (v19 & 4) != 0 )
      {
        LODWORD(v17[4]) |= 8u;
        BYTE4(v17[4]) = v20;
      }
      CurrentThread = KeGetCurrentThread();
      PspLockRootJobExclusive((__int64)Object, (__int64)CurrentThread, &v16);
      PspLockJobConditionally((__int64)Object, &v16);
      v10 = Object[326];
      v11 = v10 & 0x2000000;
      v12 = v10 & 0x4000000;
      if ( (_DWORD)v12 )
        v17[0] = *(_QWORD *)(*((_QWORD *)Object + 162) + 56LL);
      if ( (_BYTE)v6 )
      {
        if ( v11 )
        {
          if ( (_DWORD)v12 )
            LODWORD(v17[4]) |= 2u;
        }
        else
        {
          LODWORD(v17[4]) |= 1u;
        }
      }
      else if ( (_DWORD)v12 )
      {
        LODWORD(v17[4]) |= 4u;
      }
      if ( (v17[4] & 1) != 0 )
      {
        v5 = PspSetJobRateControl((__int64)Object, v12, v19);
        if ( v5 < 0 )
          goto LABEL_37;
        v4 = 1;
        v13 = PspNetRateControlDispatch((__int64)v17);
      }
      else
      {
        if ( (v17[4] & 7) != 0 )
        {
          v5 = PspNetRateControlDispatch((__int64)v17);
          if ( v5 < 0 )
            goto LABEL_37;
        }
        v13 = PspSetJobRateControl((__int64)Object, v12, v19);
      }
      v5 = v13;
      if ( v13 < 0 )
        goto LABEL_38;
      if ( v6 )
      {
        if ( v7 )
        {
          *(_DWORD *)(*((_QWORD *)Object + 162) + 48LL) |= 1u;
          *(_QWORD *)(*((_QWORD *)Object + 162) + 40LL) = v17[2];
        }
        if ( v8 )
        {
          *(_DWORD *)(*((_QWORD *)Object + 162) + 48LL) |= 2u;
          *(_BYTE *)(*((_QWORD *)Object + 162) + 64LL) = BYTE4(v17[4]);
        }
        *(_QWORD *)(*((_QWORD *)Object + 162) + 56LL) = v17[0];
        v14 = *((_QWORD *)Object + 162);
        LODWORD(v21) = *(_DWORD *)(v14 + 48);
        v22 = *(_QWORD *)(v14 + 40);
        LOBYTE(v23) = *(_BYTE *)(v14 + 64);
      }
      else
      {
        v21 = 0LL;
        v22 = 0LL;
        v23 = 0LL;
      }
      if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
        EtwTraceJobSetQuery((_DWORD)Object, 32, (unsigned int)&v21, 0, v13, 1829);
LABEL_37:
      if ( v5 >= 0 )
      {
LABEL_40:
        PspUnlockJobConditionally((__int64)Object, &v16);
        PspUnlockJob(v16, (__int64)CurrentThread);
        return (unsigned int)v5;
      }
LABEL_38:
      if ( v4 )
        PspSetJobRateControl((__int64)Object, v12, 0);
      goto LABEL_40;
    }
  }
  return (unsigned int)-1073741811;
}
