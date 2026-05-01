/*
 * XREFs of ?LogRundownEvent@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x18005AD8C
 * Callers:
 *     RmpTracingControlCallback @ 0x180034100 (RmpTracingControlCallback.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceSet::LogRundownEvent(ExecutionModel::ResourceSet *this)
{
  __int64 v1; // r14
  unsigned int v3; // ebx
  PVOID ProcessHeap; // rcx
  _QWORD *Heap; // rdi
  int v6; // r11d
  __int64 v7; // rax
  const WCHAR *v8; // rdx
  __int64 v9; // r9
  int v10; // r10d
  int v11; // r11d
  char v12; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v13; // [rsp+32h] [rbp-CEh] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+78h] [rbp-88h]
  int v21; // [rsp+7Ch] [rbp-84h]
  char *v22; // [rsp+80h] [rbp-80h]
  int v23; // [rsp+88h] [rbp-78h]
  int v24; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A8h] [rbp-58h]
  int v28; // [rsp+ACh] [rbp-54h]
  int *v29; // [rsp+B0h] [rbp-50h]
  int v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+BCh] [rbp-44h]
  int *v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+CCh] [rbp-34h]
  char *v35; // [rsp+D0h] [rbp-30h]
  int v36; // [rsp+D8h] [rbp-28h]
  int v37; // [rsp+DCh] [rbp-24h]
  char *v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+ECh] [rbp-14h]
  char *v41; // [rsp+F0h] [rbp-10h]
  int v42; // [rsp+F8h] [rbp-8h]
  int v43; // [rsp+FCh] [rbp-4h]
  __int16 *v44; // [rsp+100h] [rbp+0h]
  int v45; // [rsp+108h] [rbp+8h]
  int v46; // [rsp+10Ch] [rbp+Ch]
  _QWORD *v47; // [rsp+110h] [rbp+10h]
  int v48; // [rsp+118h] [rbp+18h]
  int v49; // [rsp+11Ch] [rbp+1Ch]

  v1 = *((_QWORD *)this + 179);
  v3 = *(_DWORD *)(v1 + 88);
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( v3 > 0xFFFF )
    v3 = 0xFFFF;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 8LL * v3);
  if ( Heap )
  {
    if ( v3 )
    {
      _mm_lfence();
      do
      {
        *Heap = *(_QWORD *)(**(_QWORD **)(v1 + 80) + 32LL);
        ++v3;
      }
      while ( v3 );
    }
  }
  else
  {
    LOWORD(v3) = 0;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v7 = *((_QWORD *)this + 235);
    v8 = (const WCHAR *)*((_QWORD *)this + 4);
    v21 = 0;
    v24 = 0;
    v16 = v7;
    v19 = &v16;
    v12 = *((_BYTE *)this + 1400);
    v22 = &v12;
    v20 = v6 + 4;
    v23 = 1;
    TlgCreateWsz(&pDesc, v8);
    v9 = *((_QWORD *)this + 18);
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v26 = &v17;
    v14 = *((_DWORD *)this + 352);
    v29 = &v14;
    v15 = *((_DWORD *)this + 364);
    v32 = &v15;
    v35 = (char *)this + 1496;
    v38 = (char *)this + 224;
    v41 = (char *)this + 248;
    v44 = &v13;
    v49 = 0;
    v48 = 8 * (unsigned __int16)v3;
    v17 = v9;
    v27 = v10;
    v30 = v11;
    v33 = v11;
    v36 = v11 - 2;
    v39 = v10;
    v42 = v10;
    v13 = v3;
    v45 = v11 - 2;
    v47 = Heap;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007F0DA, 0LL, 0LL, 0xDu, &pData);
  }
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
}
