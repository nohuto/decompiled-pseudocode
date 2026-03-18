/*
 * XREFs of ??1VIDMM_PROCESS_HEAP@@UEAA@XZ @ 0x1C00B7BDC
 * Callers:
 *     ??_GVIDMM_PROCESS_HEAP@@UEAAPEAXI@Z @ 0x1C0026C60 (--_GVIDMM_PROCESS_HEAP@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C002250C (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::~VIDMM_PROCESS_HEAP(VIDMM_PROCESS_HEAP *this, __int64 a2, __int64 a3)
{
  DXGFASTMUTEX *v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rax

  *(_QWORD *)this = &VIDMM_PROCESS_HEAP::`vftable';
  v4 = (DXGFASTMUTEX *)*((_QWORD *)this + 2);
  if ( v4 )
    DXGFASTMUTEX::`scalar deleting destructor'(v4);
  *((_QWORD *)this + 2) = 0LL;
  if ( *((VIDMM_PROCESS_HEAP **)this + 26) != (VIDMM_PROCESS_HEAP *)((char *)this + 208) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4, a2, a3);
    v5[3] = 270LL;
    v5[4] = 2LL;
    v5[5] = 0LL;
    v5[6] = 0LL;
    v5[7] = 0LL;
    WdLogEvent5_WdCriticalError(v5);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 24) != (VIDMM_PROCESS_HEAP *)((char *)this + 192) )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4, a2, a3);
    v6[3] = 270LL;
    v6[4] = 2LL;
    v6[5] = 1LL;
    v6[6] = 0LL;
    v6[7] = 0LL;
    WdLogEvent5_WdCriticalError(v6);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 28) != (VIDMM_PROCESS_HEAP *)((char *)this + 224) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4, a2, a3);
    v7[3] = 270LL;
    v7[4] = 2LL;
    v7[5] = 2LL;
    v7[6] = 0LL;
    v7[7] = 0LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 30) != (VIDMM_PROCESS_HEAP *)((char *)this + 240) )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4, a2, a3);
    v9 = 2LL;
    v10 = 2LL;
    v8[3] = 270LL;
    v11 = v8 + 4;
    do
    {
      *v11++ = v9++;
      --v10;
    }
    while ( v10 );
    v8[6] = 0LL;
    v8[7] = 0LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 32) != (VIDMM_PROCESS_HEAP *)((char *)this + 256) )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4, a2, a3);
    v12[3] = 270LL;
    v12[4] = 2LL;
    v12[5] = 4LL;
    v12[6] = 0LL;
    v12[7] = 0LL;
    WdLogEvent5_WdCriticalError(v12);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 34) != (VIDMM_PROCESS_HEAP *)((char *)this + 272) )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4, a2, a3);
    v13[3] = 270LL;
    v13[4] = 2LL;
    v13[5] = 5LL;
    v13[6] = 0LL;
    v13[7] = 0LL;
    WdLogEvent5_WdCriticalError(v13);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64));
  *(_QWORD *)this = &VIDMM_PROCESS_HEAP_INTERFACE::`vftable';
}
