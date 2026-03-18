/*
 * XREFs of EtwpPsProvTraceThread @ 0x14074711C
 * Callers:
 *     EtwTraceThread @ 0x14074619C (EtwTraceThread.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     PsGetCurrentThreadTeb @ 0x1401247E0 (PsGetCurrentThreadTeb.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpPsProvTraceThread(__int64 a1, __int64 a2, char a3)
{
  _DWORD *CurrentThreadTeb; // rdx
  unsigned __int64 v7; // r9
  __int16 v8; // cx
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  __int16 v12; // dx
  int v13; // eax
  __int64 v14; // rdx
  ULONG v15; // r9d
  signed __int32 v17[8]; // [rsp+0h] [rbp-168h] BYREF
  int v18; // [rsp+30h] [rbp-138h] BYREF
  int v19; // [rsp+34h] [rbp-134h] BYREF
  int v20; // [rsp+38h] [rbp-130h] BYREF
  __int64 v21; // [rsp+40h] [rbp-128h] BYREF
  __int64 v22; // [rsp+48h] [rbp-120h] BYREF
  __int64 v23; // [rsp+50h] [rbp-118h] BYREF
  PCEVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-110h]
  int v25; // [rsp+60h] [rbp-108h]
  int v26; // [rsp+64h] [rbp-104h]
  _KPROCESS *Process; // [rsp+68h] [rbp-100h]
  __int64 v28; // [rsp+70h] [rbp-F8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-F0h]
  struct _KTHREAD *v30; // [rsp+80h] [rbp-E8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-D8h] BYREF
  int *v32; // [rsp+A0h] [rbp-C8h]
  int v33; // [rsp+A8h] [rbp-C0h]
  int v34; // [rsp+ACh] [rbp-BCh]
  __int64 v35; // [rsp+B0h] [rbp-B8h]
  int v36; // [rsp+B8h] [rbp-B0h]
  int v37; // [rsp+BCh] [rbp-ACh]
  __int64 v38; // [rsp+C0h] [rbp-A8h]
  int v39; // [rsp+C8h] [rbp-A0h]
  int v40; // [rsp+CCh] [rbp-9Ch]
  __int64 *v41; // [rsp+D0h] [rbp-98h]
  int v42; // [rsp+D8h] [rbp-90h]
  int v43; // [rsp+DCh] [rbp-8Ch]
  __int64 *v44; // [rsp+E0h] [rbp-88h]
  int v45; // [rsp+E8h] [rbp-80h]
  int v46; // [rsp+ECh] [rbp-7Ch]
  __int64 *v47; // [rsp+F0h] [rbp-78h]
  int v48; // [rsp+F8h] [rbp-70h]
  int v49; // [rsp+FCh] [rbp-6Ch]
  __int64 *v50; // [rsp+100h] [rbp-68h]
  int v51; // [rsp+108h] [rbp-60h]
  int v52; // [rsp+10Ch] [rbp-5Ch]
  __int64 v53; // [rsp+110h] [rbp-58h]
  int v54; // [rsp+118h] [rbp-50h]
  int v55; // [rsp+11Ch] [rbp-4Ch]
  int *v56; // [rsp+120h] [rbp-48h]
  int v57; // [rsp+128h] [rbp-40h]
  int v58; // [rsp+12Ch] [rbp-3Ch]
  __int64 *v59; // [rsp+130h] [rbp-38h]
  int v60; // [rsp+138h] [rbp-30h]
  int v61; // [rsp+13Ch] [rbp-2Ch]

  v21 = 0LL;
  v22 = 0LL;
  v18 = 0;
  if ( a3 )
  {
    EventDescriptor = &ThreadStart;
    CurrentThreadTeb = PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->Process;
      v7 = Process[1].ActiveProcessors.Bitmap[7];
      if ( v7 && ((v8 = *(_WORD *)(v7 + 8), v8 == 332) || v8 == 452) )
      {
        v9 = CurrentThreadTeb[3032];
      }
      else
      {
        v9 = CurrentThreadTeb[1480];
        v25 = v9;
      }
      v18 = v9;
    }
  }
  else
  {
    EventDescriptor = (PCEVENT_DESCRIPTOR)&ThreadStop;
    v10 = *(_QWORD *)(a1 + 240);
    if ( v10 )
    {
      v30 = KeGetCurrentThread();
      Process = v30->Process;
      v11 = Process[1].ActiveProcessors.Bitmap[7];
      if ( v11 && ((v12 = *(_WORD *)(v11 + 8), v12 == 332) || v12 == 452) )
      {
        v13 = *(_DWORD *)(v10 + 12128);
      }
      else
      {
        v13 = *(_DWORD *)(v10 + 5920);
        v26 = v13;
      }
      v18 = v13;
    }
  }
  v19 = *(_DWORD *)(a1 + 1592);
  UserData.Ptr = (ULONGLONG)&v19;
  UserData.Size = 4;
  UserData.Reserved = 0;
  v20 = *(_DWORD *)(a1 + 1600);
  v32 = &v20;
  v33 = 4;
  v34 = 0;
  v35 = a1 + 56;
  v36 = 8;
  v37 = 0;
  v38 = a1 + 48;
  v39 = 8;
  v40 = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      v21 = *(_QWORD *)(a2 + 16);
      v22 = *(_QWORD *)(a2 + 24);
    }
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 240);
    if ( v14 )
    {
      v21 = *(_QWORD *)(v14 + 8);
      v22 = *(_QWORD *)(v14 + 16);
    }
  }
  v41 = &v21;
  v42 = 8;
  v43 = 0;
  v44 = &v22;
  v45 = 8;
  v46 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x400) == 0 && (*(_DWORD *)(a1 + 1752) & 8) == 0 )
    _InterlockedOr(v17, 0);
  v47 = &v23;
  v48 = 8;
  v49 = 0;
  v23 = *(_QWORD *)(a1 + 1680);
  v50 = &v23;
  v51 = 8;
  v52 = 0;
  v53 = a1 + 240;
  v54 = 8;
  v55 = 0;
  v56 = &v18;
  v57 = 4;
  v58 = 0;
  v15 = 10;
  if ( !a3 )
  {
    v28 = *(_QWORD *)(a1 + 72);
    v59 = &v28;
    v60 = 8;
    v61 = 0;
    v15 = 11;
  }
  return EtwWrite(EtwpPsProvRegHandle, EventDescriptor, 0LL, v15, &UserData);
}
