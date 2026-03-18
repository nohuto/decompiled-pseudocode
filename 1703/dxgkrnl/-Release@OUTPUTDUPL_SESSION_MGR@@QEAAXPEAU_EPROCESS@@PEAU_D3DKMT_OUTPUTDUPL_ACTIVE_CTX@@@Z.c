/*
 * XREFs of ?Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C01AEB7C
 * Callers:
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C01B3CF4 (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ @ 0x1C01AF334 (-TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::Release(
        struct DXGFASTMUTEX **this,
        struct _EPROCESS *a2,
        struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *a3,
        __int64 a4)
{
  LONGLONG v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdi
  __int128 v16; // rtt
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  _BYTE v20[24]; // [rsp+20h] [rbp-18h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, this[1], (__int64)a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  v9 = 0LL;
  v10 = *((unsigned int *)this + 1);
  v11 = *(_QWORD *)this[2];
  if ( (_DWORD)v10 )
  {
    while ( 1 )
    {
      v12 = 32LL * (unsigned int)v9;
      if ( a2 == *(struct _EPROCESS **)(v12 + v11 + 8) )
      {
        v13 = *(_DWORD *)(v12 + v11);
        if ( v13 )
          break;
      }
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= (unsigned int)v10 )
        goto LABEL_8;
    }
    v14 = v13 - 1;
    v15 = 32LL * (unsigned int)v9;
    *(_DWORD *)(v15 + v11) = v14;
    if ( !v14 )
    {
      v16 = (__int64)(*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - *(_QWORD *)(v15 + v11 + 16));
      v7 = v16 % PerformanceFrequency.QuadPart;
      *(_DWORD *)(v15 + v11 + 24) += v16 / PerformanceFrequency.QuadPart;
    }
  }
LABEL_8:
  if ( a3 )
  {
    v17 = *((unsigned int *)this + 12);
    v18 = 0LL;
    if ( (_DWORD)v17 )
    {
      while ( 1 )
      {
        v8 = 3 * v18;
        if ( this[3 * v18 + 7] == *(struct DXGFASTMUTEX **)a3 )
        {
          v9 = 3 * v18;
          if ( LODWORD(this[3 * v18 + 9]) == *((_DWORD *)a3 + 4)
            && LODWORD(this[3 * v18 + 8]) == *((_DWORD *)a3 + 2)
            && HIDWORD(this[3 * v18 + 8]) == *((_DWORD *)a3 + 3) )
          {
            break;
          }
        }
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= (unsigned int)v17 )
          goto LABEL_15;
      }
      memmove(
        &this[v8 + 7],
        &this[2 * (unsigned int)(v18 + 1) + 7] + (unsigned int)(v18 + 1),
        24LL * (unsigned int)(v17 - v18 - 1));
      --*((_DWORD *)this + 12);
      OUTPUTDUPL_SESSION_MGR::TriggerLowBoxActiveContextWNF((OUTPUTDUPL_SESSION_MGR *)this);
    }
    else
    {
LABEL_15:
      v19 = WdLogNewEntry5_WdAssertion(v9, v18, v17, v8);
      *(_QWORD *)(v19 + 24) = 4010LL;
      WdLogEvent5_WdAssertion(v19);
    }
  }
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20, v7, v10, v8);
}
