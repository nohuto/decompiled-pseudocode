/*
 * XREFs of ?LogRundownEvent@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x18003BFCC
 * Callers:
 *     RmpTracingControlCallback @ 0x1800201F0 (RmpTracingControlCallback.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
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
  __int64 v9; // rcx
  int v10; // r10d
  int v11; // r11d
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v15; // [rsp+32h] [rbp-CEh] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v21; // [rsp+70h] [rbp-90h]
  int v22; // [rsp+78h] [rbp-88h]
  int v23; // [rsp+7Ch] [rbp-84h]
  char *v24; // [rsp+80h] [rbp-80h]
  int v25; // [rsp+88h] [rbp-78h]
  int v26; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v28; // [rsp+A0h] [rbp-60h]
  int v29; // [rsp+A8h] [rbp-58h]
  int v30; // [rsp+ACh] [rbp-54h]
  int *v31; // [rsp+B0h] [rbp-50h]
  int v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+BCh] [rbp-44h]
  int *v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+CCh] [rbp-34h]
  char *v37; // [rsp+D0h] [rbp-30h]
  int v38; // [rsp+D8h] [rbp-28h]
  int v39; // [rsp+DCh] [rbp-24h]
  char *v40; // [rsp+E0h] [rbp-20h]
  int v41; // [rsp+E8h] [rbp-18h]
  int v42; // [rsp+ECh] [rbp-14h]
  char *v43; // [rsp+F0h] [rbp-10h]
  int v44; // [rsp+F8h] [rbp-8h]
  int v45; // [rsp+FCh] [rbp-4h]
  __int16 *v46; // [rsp+100h] [rbp+0h]
  int v47; // [rsp+108h] [rbp+8h]
  int v48; // [rsp+10Ch] [rbp+Ch]
  _QWORD *v49; // [rsp+110h] [rbp+10h]
  int v50; // [rsp+118h] [rbp+18h]
  int v51; // [rsp+11Ch] [rbp+1Ch]

  v1 = *((_QWORD *)this + 179);
  v3 = *(_DWORD *)(v1 + 80);
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
        *Heap = *(_QWORD *)(**(_QWORD **)(v1 + 72) + 24LL);
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
    v7 = *((_QWORD *)this + 237);
    v8 = (const WCHAR *)*((_QWORD *)this + 4);
    v23 = 0;
    v26 = 0;
    v18 = v7;
    v21 = &v18;
    v14 = *((_BYTE *)this + 1400);
    v24 = &v14;
    v22 = v6 + 4;
    v25 = 1;
    TlgCreateWsz(&pDesc, v8);
    v9 = *((_QWORD *)this + 18);
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v45 = 0;
    v48 = 0;
    v28 = &v19;
    v16 = *((_DWORD *)this + 352);
    v31 = &v16;
    v17 = *((_DWORD *)this + 364);
    v34 = &v17;
    v37 = (char *)this + 1496;
    v40 = (char *)this + 224;
    v43 = (char *)this + 248;
    v46 = &v15;
    v51 = 0;
    v50 = 8 * (unsigned __int16)v3;
    v19 = v9;
    v29 = v10;
    v32 = v11;
    v35 = v11;
    v38 = v11 - 2;
    v41 = v10;
    v44 = v10;
    v15 = v3;
    v47 = v11 - 2;
    v49 = Heap;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058DE7, v12, v13, 0xDu, &pData);
  }
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
}
