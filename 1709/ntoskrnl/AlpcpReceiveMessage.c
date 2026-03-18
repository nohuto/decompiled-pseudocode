/*
 * XREFs of AlpcpReceiveMessage @ 0x14049E3C0
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x14049E130 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     AlpcpAvailableBufferSize @ 0x14043CC74 (AlpcpAvailableBufferSize.c)
 *     AlpcpCancelMessage @ 0x140462B18 (AlpcpCancelMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14049EAE0 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x14049F2C0 (AlpcpExposeAttributes.c)
 *     AlpcpReadMessageData @ 0x1404A25E0 (AlpcpReadMessageData.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     AlpcpReceiveDirectMessagePort @ 0x14056F0C0 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x140570190 (AlpcpExposeCapturedContextAttribute.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1405815A0 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1406DCE44 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406DD418 (AlpcpGetDataFromUserVaSafe.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpReceiveMessage(__int64 a1, unsigned __int64 a2, _QWORD *a3, int *a4, _QWORD *a5)
{
  int v7; // r11d
  struct _KTHREAD *CurrentThread; // r9
  unsigned int v9; // r10d
  int v10; // ecx
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // r9d
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // r14d
  int v17; // eax
  __int64 v18; // rax
  int v19; // r15d
  ULONG v20; // r9d
  ULONG v21; // eax
  ULONG v22; // ecx
  ULONG v23; // eax
  bool v24; // zf
  unsigned int v25; // ecx
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // eax
  unsigned int v34; // r14d
  __int16 v35; // dx
  ULONG_PTR v36; // rdi
  unsigned __int16 v37; // ax
  __int16 v38; // ax
  __int16 v39; // ax
  unsigned __int64 v40; // rdx
  size_t v41; // rax
  char *v42; // r9
  size_t v43; // rsi
  const void *v44; // rdx
  char *v45; // rcx
  int v46; // esi
  ULONG_PTR v47; // rdi
  char v48; // cl
  signed __int64 BugCheckParameter4; // rcx
  __int64 v50; // rbx
  int (__fastcall *v51)(ULONG_PTR); // rax
  void (__fastcall **v52)(ULONG_PTR); // rcx
  unsigned int v54; // [rsp+30h] [rbp-98h]
  int v55; // [rsp+34h] [rbp-94h]
  int v56; // [rsp+38h] [rbp-90h]
  int v57; // [rsp+3Ch] [rbp-8Ch]
  unsigned int v58; // [rsp+40h] [rbp-88h]
  __int64 v59; // [rsp+48h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-78h] BYREF
  int v61; // [rsp+58h] [rbp-70h]
  unsigned __int64 v62; // [rsp+60h] [rbp-68h]
  struct _KTHREAD *v63; // [rsp+68h] [rbp-60h]
  _QWORD v64[2]; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v65[32]; // [rsp+80h] [rbp-48h] BYREF
  int v66; // [rsp+D0h] [rbp+8h]
  __int64 v67; // [rsp+D0h] [rbp+8h]
  size_t v68; // [rsp+D0h] [rbp+8h]
  _QWORD *v69; // [rsp+E0h] [rbp+18h]

  v69 = a3;
  v66 = a1;
  v7 = a1;
  CurrentThread = KeGetCurrentThread();
  v63 = CurrentThread;
  v9 = *(_DWORD *)(a1 + 48);
  v58 = v9;
  v59 = *(_QWORD *)a1;
  v64[1] = *(_QWORD *)a1;
  v10 = (unsigned __int8)CurrentThread->gap0[10];
  v61 = v10;
  v64[0] = 0LL;
  v62 = -1LL;
  v57 = 0;
  v56 = 0;
  if ( (_BYTE)v10 )
  {
    v11 = 0x7FFFFFFF0000LL;
    if ( a5 )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a5;
      v64[0] = *(_QWORD *)v12;
      a5 = v64;
    }
    v13 = v9 & 0xC0000000;
    if ( (v9 & 0xC0000000) == 0x80000000 )
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = 0x7FFFFFFF0000LL;
      if ( a2 < 0x7FFFFFFF0000LL )
        v14 = a2;
      *(_BYTE *)v14 = *(_BYTE *)v14;
      *(_BYTE *)(v14 + 23) = *(_BYTE *)(v14 + 23);
    }
    else
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = 0x7FFFFFFF0000LL;
      if ( a2 < 0x7FFFFFFF0000LL )
        v15 = a2;
      *(_BYTE *)v15 = *(_BYTE *)v15;
      *(_BYTE *)(v15 + 39) = *(_BYTE *)(v15 + 39);
    }
    v16 = v9 & 0x1000000;
    if ( (v9 & 0x1000000) != 0 )
    {
      if ( v13 == 0x80000000 )
      {
        v57 = *(_DWORD *)(a2 + 16);
        v17 = *(_DWORD *)(a2 + 20);
      }
      else
      {
        v57 = *(_DWORD *)(a2 + 24);
        v17 = *(_DWORD *)(a2 + 32);
      }
      v56 = v17;
    }
    if ( a4 )
    {
      v18 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v18 = (__int64)a4;
      v19 = *(_DWORD *)v18;
      v24 = v13 == 0x80000000;
      v20 = 8;
      if ( v24 )
      {
        if ( v19 < 0 )
          v20 = 20;
        v21 = v20 + 16;
        if ( (v19 & 0x40000000) == 0 )
          v21 = v20;
        v22 = v21 + 20;
        if ( (v19 & 0x20000000) == 0 )
          v22 = v21;
        v23 = v22 + 16;
        if ( (v19 & 0x10000000) == 0 )
          v23 = v22;
        v24 = (v19 & 0x8000000) == 0;
        v25 = v23 + 24;
        v20 = 4;
      }
      else
      {
        v26 = 8;
        if ( v19 < 0 )
          v26 = 32;
        v27 = v26 + 32;
        if ( (v19 & 0x40000000) == 0 )
          v27 = v26;
        v28 = v27 + 32;
        if ( (v19 & 0x20000000) == 0 )
          v28 = v27;
        v29 = v28 + 24;
        if ( (v19 & 0x10000000) == 0 )
          v29 = v28;
        v23 = v29 + 24;
        if ( (v19 & 0x8000000) == 0 )
          v23 = v29;
        v24 = (v19 & 0x4000000) == 0;
        v25 = v23 + 8;
      }
      if ( v24 )
        v25 = v23;
      v30 = v25 + 8;
      if ( (v19 & 0x2000000) == 0 )
        v30 = v25;
      if ( (unsigned __int64)(v30 - 1) > 0xFFE )
      {
        ProbeForWrite(a4, (unsigned int)v30, v20);
        a3 = v69;
        v7 = v66;
      }
      else
      {
        if ( ((v20 - 1) & (unsigned int)a4) != 0 )
          ExRaiseDatatypeMisalignment();
        v31 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
          v31 = (__int64)a4;
        *(_BYTE *)v31 = *(_BYTE *)v31;
        *(_BYTE *)(v31 + (unsigned int)v30 - 1) = *(_BYTE *)(v31 + (unsigned int)v30 - 1);
      }
      v55 = v19;
    }
    else
    {
      v19 = 0;
      v55 = 0;
    }
    if ( a3 )
    {
      v32 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v32 = (__int64)a3;
      v62 = *(_QWORD *)v32;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v11 = (__int64)a3;
      *(_QWORD *)v11 = *(_QWORD *)v11;
      v19 = v55;
    }
    LOBYTE(v10) = v61;
  }
  else
  {
    v16 = v9 & 0x1000000;
    if ( (v9 & 0x1000000) != 0 )
    {
      v57 = *(_DWORD *)(a2 + 24);
      v56 = *(_DWORD *)(a2 + 32);
    }
    if ( a4 )
      v19 = *a4;
    else
      v19 = 0;
    if ( a3 )
      v62 = *a3;
    if ( (CurrentThread->MiscFlags & 0x400) != 0 )
      LOBYTE(v10) = 1;
  }
  if ( v16 )
    v33 = AlpcpReceiveDirectMessagePort(v7, v57, v56, (unsigned int)&BugCheckParameter2, v19);
  else
    v33 = AlpcpReceiveMessagePort(v7, (unsigned __int8)v10, (_DWORD)a5, (unsigned int)&BugCheckParameter2, v19);
  v54 = v33;
  v34 = v33;
  if ( !v33 )
  {
    v35 = 40;
    if ( (v58 & 0xC0000000) == 0x80000000 )
      v35 = 24;
    v36 = BugCheckParameter2;
    v37 = v35 + *(_WORD *)(BugCheckParameter2 + 240);
    if ( v69 && (v67 = v37, v37 > v62) )
    {
      v34 = AlpcpReturnMessageOnInsufficientBuffer(v59, BugCheckParameter2, v65);
      v54 = v34;
      if ( v34 == -1073741789 )
      {
        *v69 = v67;
        AlpcpExposeCapturedContextAttribute(v58, v65, (unsigned int)v19, a4);
      }
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 200) = v63;
      if ( (v58 & 0xC0000000) == 0x80000000 )
      {
        v38 = *(_WORD *)(v36 + 240);
        *(_WORD *)a2 = v38;
        *(_WORD *)(a2 + 2) = v38 + 24;
        v39 = *(_WORD *)(v36 + 246);
        if ( v39 )
          *(_WORD *)(a2 + 6) = v39 - 16;
        else
          *(_WORD *)(a2 + 6) = 0;
        *(_WORD *)(a2 + 4) = *(_WORD *)(v36 + 244) | 0x1000;
        *(_DWORD *)(a2 + 8) = *(_DWORD *)(v36 + 248);
        *(_DWORD *)(a2 + 12) = *(_DWORD *)(v36 + 256);
        *(_DWORD *)(a2 + 16) = *(_DWORD *)(v36 + 264);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v36 + 272);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v36 + 272);
        if ( (*(_DWORD *)(v59 + 256) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) &= 0xC00Fu;
        v40 = a2 + 24;
        if ( *(_QWORD *)(v36 + 176) )
          AlpcpGetDataFromUserVaSafe(v36, v40);
        else
          AlpcpReadMessageData(v36, v40);
      }
      else
      {
        *(_OWORD *)a2 = *(_OWORD *)(v36 + 240);
        *(_OWORD *)(a2 + 16) = *(_OWORD *)(v36 + 256);
        *(_QWORD *)(a2 + 32) = *(_QWORD *)(v36 + 272);
        if ( (*(_DWORD *)(v59 + 256) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) &= 0xC00Fu;
        v63 = (struct _KTHREAD *)(a2 + 40);
        if ( *(_QWORD *)(v36 + 176) )
        {
          AlpcpGetDataFromUserVaSafe(v36, a2 + 40);
        }
        else
        {
          v41 = AlpcpAvailableBufferSize(v36);
          v68 = v41;
          v43 = *(unsigned __int16 *)(v36 + 240);
          v44 = (const void *)(v36 + 280);
          v45 = v42;
          if ( v43 > v41 )
          {
            memmove(v42, v44, v41);
            v43 -= v68;
            v45 = (char *)v63 + v68;
            v44 = *(const void **)(v36 + 224);
          }
          memmove(v45, v44, v43);
        }
      }
      if ( a4 )
        AlpcpExposeAttributes(v59, v58, v36, v19, a4);
    }
    if ( v34 != -1073741789 && *(_QWORD *)(v36 + 64) == v59 )
    {
      *(_QWORD *)(v36 + 64) = 0LL;
      *(_QWORD *)(v36 + 56) = 0LL;
    }
    if ( ((v34 + 0x80000000) & 0x80000000) != 0 || v34 == -1073741789 )
    {
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v36);
      v46 = 0;
      v47 = v36 - 48;
      v48 = *(_BYTE *)(v47 + 16);
      if ( (v48 & 1) != 0 )
      {
        v46 = 0x10000 - *(__int16 *)(v47 + 18);
        *(_BYTE *)(v47 + 16) = v48 & 0xFE;
        *(_WORD *)(v47 + 18) = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v47 + 32));
      KeAbPostRelease(v47 + 32);
      if ( v46 > 0 )
      {
        BugCheckParameter4 = -v46 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 24), -v46);
        if ( BugCheckParameter4 <= 0 )
        {
          if ( BugCheckParameter4 )
            KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
          v50 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v47 + 17)];
          v51 = *(int (__fastcall **)(ULONG_PTR))(v50 + 32);
          if ( !v51 || v51(BugCheckParameter2) >= 0 )
          {
            if ( (*(_BYTE *)(v47 + 16) & 2) != 0 )
            {
              v52 = &AlpcpLookasides[16 * (unsigned __int64)*(unsigned int *)(v50 + 8)];
              ++*((_DWORD *)v52 + 7);
              if ( *(_WORD *)v52 < *((_WORD *)v52 + 8) )
              {
                RtlpInterlockedPushEntrySList((PSLIST_HEADER)v52, (PSLIST_ENTRY)v47);
              }
              else
              {
                ++*((_DWORD *)v52 + 8);
                v52[7](v47);
              }
            }
            else if ( *(_QWORD *)(v50 + 40) )
            {
              AlpcpLookasides[16 * (unsigned __int64)*(unsigned int *)(v50 + 8) + 7](v47);
            }
            else
            {
              ExFreePoolWithTag((PVOID)v47, *(_DWORD *)(v50 + 4));
            }
          }
        }
      }
      return v54;
    }
    else
    {
      *(_QWORD *)(v36 + 200) = 0LL;
      AlpcpCancelMessage(v59, v36, 0x10000);
    }
  }
  return v34;
}
