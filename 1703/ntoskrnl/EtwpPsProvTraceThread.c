/*
 * XREFs of EtwpPsProvTraceThread @ 0x140594F9C
 * Callers:
 *     EtwTraceThread @ 0x1404B07F4 (EtwTraceThread.c)
 * Callees:
 *     PsQueryThreadStartAddress @ 0x14006B8C4 (PsQueryThreadStartAddress.c)
 *     PsGetCurrentThreadTeb @ 0x14006B910 (PsGetCurrentThreadTeb.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpPsProvTraceThread(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  int v8; // eax
  __int16 v9; // r9
  __int16 v10; // r9
  __int64 v11; // rcx
  ULONG v12; // r9d
  _DWORD *CurrentThreadTeb; // r8
  unsigned __int64 v15; // rdx
  int v16; // eax
  __int16 v17; // r9
  __int16 v18; // r9
  int v19; // [rsp+30h] [rbp-128h] BYREF
  int v20; // [rsp+34h] [rbp-124h] BYREF
  int v21; // [rsp+38h] [rbp-120h] BYREF
  __int64 v22; // [rsp+40h] [rbp-118h]
  __int64 v23; // [rsp+48h] [rbp-110h] BYREF
  __int64 v24; // [rsp+50h] [rbp-108h] BYREF
  __int64 v25; // [rsp+58h] [rbp-100h] BYREF
  PCEVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-F8h]
  __int64 v27; // [rsp+68h] [rbp-F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-E8h] BYREF
  int *v29; // [rsp+80h] [rbp-D8h]
  int v30; // [rsp+88h] [rbp-D0h]
  int v31; // [rsp+8Ch] [rbp-CCh]
  __int64 v32; // [rsp+90h] [rbp-C8h]
  int v33; // [rsp+98h] [rbp-C0h]
  int v34; // [rsp+9Ch] [rbp-BCh]
  __int64 v35; // [rsp+A0h] [rbp-B8h]
  int v36; // [rsp+A8h] [rbp-B0h]
  int v37; // [rsp+ACh] [rbp-ACh]
  __int64 *v38; // [rsp+B0h] [rbp-A8h]
  int v39; // [rsp+B8h] [rbp-A0h]
  int v40; // [rsp+BCh] [rbp-9Ch]
  __int64 *v41; // [rsp+C0h] [rbp-98h]
  int v42; // [rsp+C8h] [rbp-90h]
  int v43; // [rsp+CCh] [rbp-8Ch]
  __int64 *v44; // [rsp+D0h] [rbp-88h]
  int v45; // [rsp+D8h] [rbp-80h]
  int v46; // [rsp+DCh] [rbp-7Ch]
  __int64 *v47; // [rsp+E0h] [rbp-78h]
  int v48; // [rsp+E8h] [rbp-70h]
  int v49; // [rsp+ECh] [rbp-6Ch]
  __int64 v50; // [rsp+F0h] [rbp-68h]
  int v51; // [rsp+F8h] [rbp-60h]
  int v52; // [rsp+FCh] [rbp-5Ch]
  int *v53; // [rsp+100h] [rbp-58h]
  int v54; // [rsp+108h] [rbp-50h]
  int v55; // [rsp+10Ch] [rbp-4Ch]
  __int64 *v56; // [rsp+110h] [rbp-48h]
  int v57; // [rsp+118h] [rbp-40h]
  int v58; // [rsp+11Ch] [rbp-3Ch]

  v22 = a1;
  v23 = 0LL;
  v24 = 0LL;
  v19 = 0;
  if ( a3 )
  {
    EventDescriptor = &ThreadStart;
    CurrentThreadTeb = PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      v15 = KeGetCurrentThread()->Process[1].ActiveProcessors.Bitmap[7];
      if ( v15
        && ((v17 = *(_WORD *)(v15 + 8), v17 == 332) || v17 == 452)
        && ((v18 = *(_WORD *)(v15 + 8), v18 == 332) || v18 == 452) )
      {
        v16 = CurrentThreadTeb[3032];
      }
      else
      {
        v16 = CurrentThreadTeb[1480];
      }
      v19 = v16;
    }
  }
  else
  {
    EventDescriptor = (PCEVENT_DESCRIPTOR)&ThreadStop;
    v6 = *(_QWORD *)(a1 + 240);
    if ( v6 )
    {
      v7 = KeGetCurrentThread()->Process[1].ActiveProcessors.Bitmap[7];
      if ( v7
        && ((v9 = *(_WORD *)(v7 + 8), v9 == 332) || v9 == 452)
        && ((v10 = *(_WORD *)(v7 + 8), v10 == 332) || v10 == 452) )
      {
        v8 = *(_DWORD *)(v6 + 12128);
      }
      else
      {
        v8 = *(_DWORD *)(v6 + 5920);
      }
      v19 = v8;
    }
  }
  v20 = *(_DWORD *)(a1 + 1592);
  UserData.Ptr = (ULONGLONG)&v20;
  UserData.Size = 4;
  UserData.Reserved = 0;
  v21 = *(_DWORD *)(a1 + 1600);
  v29 = &v21;
  v30 = 4;
  v31 = 0;
  v32 = a1 + 56;
  v33 = 8;
  v34 = 0;
  v35 = a1 + 48;
  v36 = 8;
  v37 = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      v23 = *(_QWORD *)(a2 + 16);
      v24 = *(_QWORD *)(a2 + 24);
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 240);
    if ( v11 )
    {
      v23 = *(_QWORD *)(v11 + 8);
      v24 = *(_QWORD *)(v11 + 16);
    }
  }
  v38 = &v23;
  v39 = 8;
  v40 = 0;
  v41 = &v24;
  v42 = 8;
  v43 = 0;
  PsQueryThreadStartAddress(a1, 1);
  v44 = &v25;
  v45 = 8;
  v46 = 0;
  v25 = *(_QWORD *)(a1 + 1680);
  v47 = &v25;
  v48 = 8;
  v49 = 0;
  v50 = a1 + 240;
  v51 = 8;
  v52 = 0;
  v53 = &v19;
  v54 = 4;
  v55 = 0;
  v12 = 10;
  if ( !a3 )
  {
    v27 = *(_QWORD *)(a1 + 72);
    v56 = &v27;
    v57 = 8;
    v58 = 0;
    v12 = 11;
  }
  return EtwWrite(EtwpPsProvRegHandle, EventDescriptor, 0LL, v12, &UserData);
}
