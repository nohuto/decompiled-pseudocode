/*
 * XREFs of AlpcpReceiveMessage @ 0x140522600
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x140522360 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     AlpcpAvailableBufferSize @ 0x14041D174 (AlpcpAvailableBufferSize.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x14042F794 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpCancelMessage @ 0x14042FD5C (AlpcpCancelMessage.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1404705E8 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpReadMessageData @ 0x14047C750 (AlpcpReadMessageData.c)
 *     AlpcpReceiveMessagePort @ 0x140522CF0 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x140523560 (AlpcpExposeAttributes.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x14056AA6C (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1406B1264 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpReceiveMessage(__int64 *a1, unsigned __int64 a2, unsigned __int64 *a3, int *a4, __int64 *a5)
{
  unsigned __int64 *v5; // r10
  _QWORD *v7; // r11
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v9; // r8d
  int v10; // ecx
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // r8d
  unsigned int v17; // eax
  __int64 v18; // rax
  int v19; // edi
  ULONG v20; // r8d
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // eax
  unsigned int v26; // esi
  __int16 v27; // ax
  ULONG_PTR v28; // rdi
  unsigned __int16 v29; // ax
  unsigned __int64 v30; // r12
  __int64 v31; // r15
  __int16 v32; // ax
  __int16 v33; // ax
  char *v34; // rdx
  char *v35; // r15
  size_t v36; // rax
  size_t v37; // r12
  size_t v38; // r14
  const void *v39; // rdx
  char *v40; // rcx
  int v41; // r14d
  ULONG_PTR v42; // rdi
  char v43; // cl
  signed __int64 BugCheckParameter4; // rcx
  __int64 v45; // rbx
  int (__fastcall *v46)(ULONG_PTR); // rax
  _SLIST_HEADER *v47; // rcx
  unsigned int v49; // [rsp+30h] [rbp-98h]
  int v50; // [rsp+34h] [rbp-94h]
  unsigned int v51; // [rsp+38h] [rbp-90h]
  unsigned int v52; // [rsp+3Ch] [rbp-8Ch]
  __int64 v53; // [rsp+40h] [rbp-88h]
  unsigned int v54; // [rsp+48h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-78h] BYREF
  int v56; // [rsp+58h] [rbp-70h]
  int v57; // [rsp+5Ch] [rbp-6Ch]
  __int64 v58; // [rsp+60h] [rbp-68h]
  __int64 v59; // [rsp+68h] [rbp-60h] BYREF
  int v60; // [rsp+70h] [rbp-58h]
  struct _KTHREAD *v61; // [rsp+78h] [rbp-50h]
  __int64 v62; // [rsp+80h] [rbp-48h]

  v5 = a3;
  v7 = a1;
  CurrentThread = KeGetCurrentThread();
  v61 = CurrentThread;
  v9 = *((_DWORD *)a1 + 12);
  v54 = v9;
  v53 = *a1;
  v62 = *a1;
  v10 = (unsigned __int8)CurrentThread->gap0[10];
  v57 = v10;
  v59 = 0LL;
  v11 = -1LL;
  v58 = -1LL;
  v52 = 0;
  v51 = 0;
  if ( (_BYTE)v10 )
  {
    v12 = (__int64)a5;
    if ( a5 )
    {
      if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      v59 = *(_QWORD *)v12;
      a5 = &v59;
    }
    v13 = v9 & 0xC0000000;
    if ( (v9 & 0xC0000000) == 0x80000000 )
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = a2;
      if ( a2 >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v14 = *(_BYTE *)v14;
      *(_BYTE *)(v14 + 23) = *(_BYTE *)(v14 + 23);
    }
    else
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = a2;
      if ( a2 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v15 = *(_BYTE *)v15;
      *(_BYTE *)(v15 + 39) = *(_BYTE *)(v15 + 39);
    }
    v16 = v9 & 0x1000000;
    v56 = v16;
    if ( v16 )
    {
      if ( v13 == 0x80000000 )
      {
        v52 = *(_DWORD *)(a2 + 16);
        v17 = *(_DWORD *)(a2 + 20);
      }
      else
      {
        v52 = *(_DWORD *)(a2 + 24);
        v17 = *(_DWORD *)(a2 + 32);
      }
      v51 = v17;
    }
    if ( a4 )
    {
      v18 = (__int64)a4;
      if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
        v18 = 0x7FFFFFFF0000LL;
      v19 = *(_DWORD *)v18;
      v20 = 8;
      if ( v13 == 0x80000000 )
      {
        if ( v19 < 0 )
          v20 = 20;
        if ( (v19 & 0x40000000) != 0 )
          v20 += 16;
        if ( (v19 & 0x20000000) != 0 )
          v20 += 20;
        if ( (v19 & 0x10000000) != 0 )
          v20 += 16;
        if ( (v19 & 0x8000000) != 0 )
          v20 += 24;
        if ( (v19 & 0x2000000) != 0 )
          v20 += 8;
        v21 = v20;
        v20 = 4;
      }
      else
      {
        v21 = 8;
        if ( v19 < 0 )
          v21 = 32;
        if ( (v19 & 0x40000000) != 0 )
          v21 += 32;
        if ( (v19 & 0x20000000) != 0 )
          v21 += 32;
        if ( (v19 & 0x10000000) != 0 )
          v21 += 24;
        if ( (v19 & 0x8000000) != 0 )
          v21 += 24;
        if ( (v19 & 0x4000000) != 0 )
          v21 += 8;
        if ( (v19 & 0x2000000) != 0 )
          v21 += 8;
      }
      if ( (unsigned __int64)v21 - 1 > 0xFFE )
      {
        ProbeForWrite(a4, v21, v20);
        v5 = a3;
        v7 = a1;
      }
      else
      {
        if ( ((v20 - 1) & (unsigned int)a4) != 0 )
          ExRaiseDatatypeMisalignment();
        v22 = (__int64)a4;
        if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
          v22 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v22 = *(_BYTE *)v22;
        *(_BYTE *)(v22 + v21 - 1) = *(_BYTE *)(v22 + v21 - 1);
      }
      v50 = v19;
      v16 = v56;
    }
    else
    {
      v19 = 0;
      v50 = 0;
    }
    if ( v5 )
    {
      v23 = (__int64)v5;
      if ( (unsigned __int64)v5 >= 0x7FFFFFFF0000LL )
        v23 = 0x7FFFFFFF0000LL;
      v58 = *(_QWORD *)v23;
      v24 = (__int64)v5;
      if ( (unsigned __int64)v5 >= 0x7FFFFFFF0000LL )
        v24 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v24 = *(_QWORD *)v24;
      v19 = v50;
    }
    v11 = v58;
    LOBYTE(v10) = v57;
  }
  else
  {
    v16 = v9 & 0x1000000;
    if ( v16 )
    {
      v52 = *(_DWORD *)(a2 + 24);
      v51 = *(_DWORD *)(a2 + 32);
    }
    if ( a4 )
      v19 = *a4;
    else
      v19 = 0;
    if ( v5 )
    {
      v11 = *v5;
      v58 = *v5;
    }
    if ( (CurrentThread->MiscFlags & 0x400) != 0 )
      LOBYTE(v10) = 1;
  }
  if ( v16 )
    v25 = AlpcpReceiveDirectMessagePort(v7, v52, v51, &BugCheckParameter2, v19);
  else
    v25 = AlpcpReceiveMessagePort((_DWORD)v7, (unsigned __int8)v10, (_DWORD)a5, (unsigned int)&BugCheckParameter2, v19);
  v49 = v25;
  v26 = v25;
  if ( !v25 )
  {
    v27 = 40;
    if ( (v54 & 0xC0000000) == 0x80000000 )
      v27 = 24;
    v28 = BugCheckParameter2;
    v29 = *(_WORD *)(BugCheckParameter2 + 240) + v27;
    v60 = v29;
    if ( a3 && (v30 = v29, v29 > v11) )
    {
      v31 = v53;
      v26 = AlpcpReturnMessageOnInsufficientBuffer(v53, (_QWORD *)BugCheckParameter2);
      v49 = v26;
      if ( v26 == -1073741789 )
        *a3 = v30;
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 200) = v61;
      if ( (v54 & 0xC0000000) == 0x80000000 )
      {
        v32 = *(_WORD *)(v28 + 240);
        *(_WORD *)a2 = v32;
        *(_WORD *)(a2 + 2) = v32 + 24;
        v33 = *(_WORD *)(v28 + 246);
        if ( v33 )
          *(_WORD *)(a2 + 6) = v33 - 16;
        else
          *(_WORD *)(a2 + 6) = 0;
        *(_WORD *)(a2 + 4) = *(_WORD *)(v28 + 244) | 0x1000;
        *(_DWORD *)(a2 + 8) = *(_DWORD *)(v28 + 248);
        *(_DWORD *)(a2 + 12) = *(_DWORD *)(v28 + 256);
        *(_DWORD *)(a2 + 16) = *(_DWORD *)(v28 + 264);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v28 + 272);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v28 + 272);
        v31 = v53;
        if ( (*(_DWORD *)(v53 + 256) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) &= 0xC00Fu;
        v34 = (char *)(a2 + 24);
        if ( *(_QWORD *)(v28 + 176) )
          AlpcpGetDataFromUserVaSafe(v28, v34);
        else
          AlpcpReadMessageData(v28, v34);
      }
      else
      {
        *(_OWORD *)a2 = *(_OWORD *)(v28 + 240);
        *(_OWORD *)(a2 + 16) = *(_OWORD *)(v28 + 256);
        *(_QWORD *)(a2 + 32) = *(_QWORD *)(v28 + 272);
        if ( (*(_DWORD *)(v53 + 256) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) &= 0xC00Fu;
        v35 = (char *)(a2 + 40);
        if ( *(_QWORD *)(v28 + 176) )
        {
          AlpcpGetDataFromUserVaSafe(v28, a2 + 40);
        }
        else
        {
          v36 = AlpcpAvailableBufferSize(v28);
          v37 = v36;
          v38 = *(unsigned __int16 *)(v28 + 240);
          v39 = (const void *)(v28 + 280);
          v40 = v35;
          if ( v38 > v36 )
          {
            memmove(v35, v39, v36);
            v38 -= v37;
            v40 = &v35[v37];
            v39 = *(const void **)(v28 + 224);
          }
          memmove(v40, v39, v38);
        }
        v31 = v53;
      }
      if ( a4 )
        AlpcpExposeAttributes(v31, v54, v28, a4);
    }
    if ( v26 != -1073741789 && *(_QWORD *)(v28 + 64) == v31 )
    {
      *(_QWORD *)(v28 + 64) = 0LL;
      *(_QWORD *)(v28 + 56) = 0LL;
    }
    if ( ((v26 + 0x80000000) & 0x80000000) != 0 || v26 == -1073741789 )
    {
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v28);
      v41 = 0;
      v42 = v28 - 48;
      v43 = *(_BYTE *)(v42 + 16);
      if ( (v43 & 1) != 0 )
      {
        v41 = 0x10000 - *(__int16 *)(v42 + 18);
        *(_BYTE *)(v42 + 16) = v43 & 0xFE;
        *(_WORD *)(v42 + 18) = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v42 + 32));
      KeAbPostRelease(v42 + 32);
      if ( v41 > 0 )
      {
        BugCheckParameter4 = -v41 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + 24), -v41);
        if ( BugCheckParameter4 <= 0 )
        {
          if ( BugCheckParameter4 )
            KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
          v45 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v42 + 17)];
          v46 = *(int (__fastcall **)(ULONG_PTR))(v45 + 32);
          if ( !v46 || v46(BugCheckParameter2) >= 0 )
          {
            if ( (*(_BYTE *)(v42 + 16) & 2) != 0 )
            {
              v47 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v45 + 8);
              ++*((_DWORD *)&v47[1].HeaderX64 + 3);
              if ( LOWORD(v47->Alignment) < LOWORD(v47[1].Alignment) )
              {
                RtlpInterlockedPushEntrySList(v47, (PSLIST_ENTRY)v42);
              }
              else
              {
                ++LODWORD(v47[2].Alignment);
                ((void (__fastcall *)(ULONG_PTR))v47[3].Region)(v42);
              }
            }
            else if ( *(_QWORD *)(v45 + 40) )
            {
              (*((void (__fastcall **)(ULONG_PTR))&AlpcpLookasides
               + 16 * (unsigned __int64)*(unsigned int *)(v45 + 8)
               + 7))(v42);
            }
            else
            {
              ExFreePoolWithTag((PVOID)v42, *(_DWORD *)(v45 + 4));
            }
          }
        }
      }
      return v49;
    }
    else
    {
      *(_QWORD *)(v28 + 200) = 0LL;
      AlpcpCancelMessage(v31, v28, 0x10000);
    }
  }
  return v26;
}
