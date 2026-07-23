/*
 * XREFs of AlpcpReceiveMessage @ 0x1404C9B10
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x1404C9870 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     AlpcpAvailableBufferSize @ 0x140489898 (AlpcpAvailableBufferSize.c)
 *     AlpcpExposeAttributes @ 0x1404CA290 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x1404CAA80 (AlpcpReceiveMessagePort.c)
 *     AlpcpReadMessageData @ 0x1404CBF1C (AlpcpReadMessageData.c)
 *     AlpcpCancelMessage @ 0x1404DE89C (AlpcpCancelMessage.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1404DFD5C (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpReceiveDirectMessagePort @ 0x140558B14 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x140577628 (AlpcpExposeCapturedContextAttribute.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140747B64 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x140748138 (AlpcpGetDataFromUserVaSafe.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpReceiveMessage(__int64 a1, unsigned __int64 a2, _QWORD *a3, unsigned int *a4, _QWORD *a5)
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
  unsigned int v19; // r15d
  unsigned int v20; // eax
  ULONG v21; // r9d
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  bool v26; // zf
  unsigned int v27; // ecx
  int v28; // ecx
  int v29; // eax
  int v30; // ecx
  int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // eax
  unsigned int v36; // r14d
  __int16 v37; // dx
  ULONG_PTR v38; // rdi
  unsigned __int16 v39; // ax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int16 v42; // ax
  __int16 v43; // ax
  __int16 v44; // cx
  unsigned __int64 v45; // rdx
  size_t v46; // rax
  char *v47; // r9
  size_t v48; // rsi
  const void *v49; // rdx
  char *v50; // rcx
  __int64 v51; // r9
  __int64 v52; // rdx
  ULONG_PTR v53; // rsi
  char v54; // cl
  signed __int64 BugCheckParameter4; // rcx
  __int64 v56; // r14
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  _SLIST_HEADER *v60; // rcx
  void *v61; // rcx
  unsigned int v63; // [rsp+30h] [rbp-98h]
  unsigned int v64; // [rsp+34h] [rbp-94h]
  int v65; // [rsp+38h] [rbp-90h]
  int v66; // [rsp+3Ch] [rbp-8Ch]
  unsigned int v67; // [rsp+40h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-80h] BYREF
  int v69[2]; // [rsp+50h] [rbp-78h]
  int v70; // [rsp+58h] [rbp-70h]
  unsigned __int64 v71; // [rsp+60h] [rbp-68h]
  struct _KTHREAD *v72; // [rsp+68h] [rbp-60h]
  _QWORD v73[2]; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v74[32]; // [rsp+80h] [rbp-48h] BYREF
  int v75; // [rsp+D0h] [rbp+8h]
  __int64 v76; // [rsp+D0h] [rbp+8h]
  size_t v77; // [rsp+D0h] [rbp+8h]
  _QWORD *v78; // [rsp+E0h] [rbp+18h]

  v78 = a3;
  v75 = a1;
  v7 = a1;
  CurrentThread = KeGetCurrentThread();
  v72 = CurrentThread;
  v9 = *(_DWORD *)(a1 + 48);
  v67 = v9;
  *(_QWORD *)v69 = *(_QWORD *)a1;
  v73[1] = *(_QWORD *)v69;
  v10 = (unsigned __int8)CurrentThread->gap0[10];
  v70 = v10;
  v73[0] = 0LL;
  v71 = -1LL;
  v66 = 0;
  v65 = 0;
  if ( (_BYTE)v10 )
  {
    v11 = 0x7FFFFFFF0000LL;
    if ( a5 )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a5;
      v73[0] = *(_QWORD *)v12;
      a5 = v73;
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
        v66 = *(_DWORD *)(a2 + 16);
        v17 = *(_DWORD *)(a2 + 20);
      }
      else
      {
        v66 = *(_DWORD *)(a2 + 24);
        v17 = *(_DWORD *)(a2 + 32);
      }
      v65 = v17;
    }
    if ( a4 )
    {
      v18 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v18 = (__int64)a4;
      v19 = *(_DWORD *)v18;
      v20 = *(_DWORD *)v18 & 0x80000000;
      v26 = v13 == 0x80000000;
      v21 = 8;
      if ( v26 )
      {
        v22 = 20;
        if ( !v20 )
          v22 = 8;
        v23 = v22 + 16;
        if ( (v19 & 0x40000000) == 0 )
          v23 = v22;
        v24 = v23 + 20;
        if ( (v19 & 0x20000000) == 0 )
          v24 = v23;
        v25 = v24 + 16;
        if ( (v19 & 0x10000000) == 0 )
          v25 = v24;
        v26 = (v19 & 0x8000000) == 0;
        v27 = v25 + 24;
        v21 = 4;
      }
      else
      {
        v28 = 32;
        if ( !v20 )
          v28 = 8;
        v29 = v28 + 32;
        if ( (v19 & 0x40000000) == 0 )
          v29 = v28;
        v30 = v29 + 32;
        if ( (v19 & 0x20000000) == 0 )
          v30 = v29;
        v31 = v30 + 24;
        if ( (v19 & 0x10000000) == 0 )
          v31 = v30;
        v25 = v31 + 24;
        if ( (v19 & 0x8000000) == 0 )
          v25 = v31;
        v26 = (v19 & 0x4000000) == 0;
        v27 = v25 + 8;
      }
      if ( v26 )
        v27 = v25;
      v32 = v27 + 8;
      if ( (v19 & 0x2000000) == 0 )
        v32 = v27;
      if ( (unsigned __int64)(v32 - 1) > 0xFFE )
      {
        ProbeForWrite(a4, (unsigned int)v32, v21);
        a3 = v78;
        v7 = v75;
        v64 = v19;
      }
      else
      {
        if ( ((v21 - 1) & (unsigned int)a4) != 0 )
          ExRaiseDatatypeMisalignment();
        v33 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
          v33 = (__int64)a4;
        *(_BYTE *)v33 = *(_BYTE *)v33;
        *(_BYTE *)(v33 + (unsigned int)v32 - 1) = *(_BYTE *)(v33 + (unsigned int)v32 - 1);
        v64 = v19;
      }
    }
    else
    {
      v19 = 0;
      v64 = 0;
    }
    if ( a3 )
    {
      v34 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v34 = (__int64)a3;
      v71 = *(_QWORD *)v34;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v11 = (__int64)a3;
      *(_QWORD *)v11 = *(_QWORD *)v11;
      v19 = v64;
    }
    LOBYTE(v10) = v70;
  }
  else
  {
    v16 = v9 & 0x1000000;
    if ( (v9 & 0x1000000) != 0 )
    {
      v66 = *(_DWORD *)(a2 + 24);
      v65 = *(_DWORD *)(a2 + 32);
    }
    if ( a4 )
      v19 = *a4;
    else
      v19 = 0;
    if ( a3 )
      v71 = *a3;
    if ( (CurrentThread->MiscFlags & 0x400) != 0 )
      LOBYTE(v10) = 1;
  }
  if ( v16 )
    v35 = AlpcpReceiveDirectMessagePort(v7, v66, v65, (unsigned int)&BugCheckParameter2, v19);
  else
    v35 = AlpcpReceiveMessagePort(v7, (unsigned __int8)v10, (_DWORD)a5, (unsigned int)&BugCheckParameter2, v19);
  v63 = v35;
  v36 = v35;
  if ( !v35 )
  {
    v37 = 40;
    if ( (v67 & 0xC0000000) == 0x80000000 )
      v37 = 24;
    v38 = BugCheckParameter2;
    v39 = v37 + *(_WORD *)(BugCheckParameter2 + 240);
    if ( v78 && (v76 = v39, v39 > v71) )
    {
      v36 = AlpcpReturnMessageOnInsufficientBuffer(*(_QWORD *)v69, BugCheckParameter2, v74);
      v63 = v36;
      if ( v36 == -1073741789 )
      {
        *v78 = v76;
        AlpcpExposeCapturedContextAttribute(v67, v74, v19, a4);
      }
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 200) = v72;
      if ( (v67 & 0xC0000000) == 0x80000000 )
      {
        v42 = *(_WORD *)(v38 + 240);
        *(_WORD *)a2 = v42;
        *(_WORD *)(a2 + 2) = v42 + 24;
        v43 = *(_WORD *)(v38 + 246);
        if ( v43 )
          *(_WORD *)(a2 + 6) = v43 - 16;
        else
          *(_WORD *)(a2 + 6) = 0;
        v44 = *(_WORD *)(v38 + 244) | 0x1000;
        *(_WORD *)(a2 + 4) = v44;
        *(_DWORD *)(a2 + 8) = *(_DWORD *)(v38 + 248);
        *(_DWORD *)(a2 + 12) = *(_DWORD *)(v38 + 256);
        *(_DWORD *)(a2 + 16) = *(_DWORD *)(v38 + 264);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v38 + 272);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v38 + 272);
        if ( (*(_DWORD *)(*(_QWORD *)v69 + 256LL) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) = v44 & 0xC00F;
        v45 = a2 + 24;
        if ( *(_QWORD *)(v38 + 176) )
          AlpcpGetDataFromUserVaSafe(v38, v45);
        else
          AlpcpReadMessageData(v38, v45);
      }
      else
      {
        *(_OWORD *)a2 = *(_OWORD *)(v38 + 240);
        *(_OWORD *)(a2 + 16) = *(_OWORD *)(v38 + 256);
        *(_QWORD *)(a2 + 32) = *(_QWORD *)(v38 + 272);
        if ( (*(_DWORD *)(*(_QWORD *)v69 + 256LL) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) &= 0xC00Fu;
        v72 = (struct _KTHREAD *)(a2 + 40);
        if ( *(_QWORD *)(v38 + 176) )
        {
          AlpcpGetDataFromUserVaSafe(v38, a2 + 40);
        }
        else
        {
          v46 = AlpcpAvailableBufferSize(v38);
          v77 = v46;
          v48 = *(unsigned __int16 *)(v38 + 240);
          v49 = (const void *)(v38 + 280);
          v50 = v47;
          if ( v48 > v46 )
          {
            memmove(v47, v49, v46);
            v48 -= v77;
            v50 = (char *)v72 + v77;
            v49 = *(const void **)(v38 + 224);
          }
          memmove(v50, v49, v48);
        }
      }
      if ( a4 )
        AlpcpExposeAttributes(v69[0], v67, v38, v19, a4);
    }
    v51 = *(_QWORD *)v69;
    if ( v36 != -1073741789 && *(_QWORD *)(v38 + 64) == *(_QWORD *)v69 )
    {
      *(_QWORD *)(v38 + 64) = 0LL;
      *(_QWORD *)(v38 + 56) = 0LL;
    }
    if ( ((v36 + 0x80000000) & 0x80000000) != 0 || v36 == -1073741789 )
    {
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v38, v40, v41, v51);
      v52 = 0LL;
      v53 = v38 - 48;
      v54 = *(_BYTE *)(v38 - 48 + 16);
      if ( (v54 & 1) != 0 )
      {
        v52 = (unsigned int)(0x10000 - *(__int16 *)(v53 + 18));
        *(_BYTE *)(v53 + 16) = v54 & 0xFE;
        *(_WORD *)(v53 + 18) = 0;
      }
      if ( (int)v52 > 0 )
      {
        v52 = (unsigned int)-(int)v52;
        BugCheckParameter4 = (int)v52 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v53 + 24), (int)v52);
        if ( BugCheckParameter4 <= 0 )
        {
          if ( BugCheckParameter4 )
            KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
          v56 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v53 + 17)];
          (*(void (__fastcall **)(ULONG_PTR, __int64, __int64, __int64))(v56 + 24))(BugCheckParameter2, v52, v41, v51);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v38 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v38 - 16), v57, v58, v59);
          KeAbPostRelease(v38 - 16);
          if ( (*(int (__fastcall **)(ULONG_PTR))(v56 + 40))(BugCheckParameter2) >= 0 )
          {
            if ( (*(_BYTE *)(v53 + 16) & 2) != 0 )
            {
              v60 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v56 + 8);
              ++*((_DWORD *)&v60[1].HeaderX64 + 3);
              if ( LOWORD(v60->Alignment) < LOWORD(v60[1].Alignment) )
              {
                RtlpInterlockedPushEntrySList(v60, (PSLIST_ENTRY)(v38 - 48));
              }
              else
              {
                ++LODWORD(v60[2].Alignment);
                ((void (__fastcall *)(ULONG_PTR))v60[3].Region)(v38 - 48);
              }
            }
            else
            {
              v61 = (void *)(v38 - 48);
              if ( *(_QWORD *)(v56 + 48) )
                (*((void (__fastcall **)(void *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v56 + 8)
                                                                  + 7))(v61);
              else
                ExFreePoolWithTag(v61, *(_DWORD *)(v56 + 4));
            }
          }
          v38 = 0LL;
        }
        v36 = v63;
      }
      if ( v38 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v53 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v53 + 32), v52, v41, v51);
        KeAbPostRelease(v53 + 32);
        return v63;
      }
    }
    else
    {
      *(_QWORD *)(v38 + 200) = 0LL;
      AlpcpCancelMessage(v51, v38, 0x10000LL);
    }
  }
  return v36;
}
