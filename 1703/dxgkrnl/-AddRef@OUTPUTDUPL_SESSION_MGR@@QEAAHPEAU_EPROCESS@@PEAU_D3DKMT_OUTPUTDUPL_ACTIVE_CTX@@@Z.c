/*
 * XREFs of ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C01ABD70
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C01B236C (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00A63E0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ @ 0x1C01AF334 (-TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::AddRef(
        OUTPUTDUPL_SESSION_MGR *this,
        struct _EPROCESS *a2,
        struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *a3,
        __int64 a4)
{
  __int64 v7; // rdx
  struct _EPROCESS *v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edi
  unsigned int v11; // ebp
  unsigned int v12; // r15d
  __int64 v13; // rcx
  char *i; // rsi
  int v15; // eax
  char *Buffer; // rax
  __int64 v17; // r14
  struct _EPROCESS *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  _BYTE v23[56]; // [rsp+20h] [rbp-38h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, *((struct DXGFASTMUTEX *const *)this + 1), (__int64)a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v9 = 0xFFFFFFFFLL;
  v10 = 0;
  v11 = -1;
  if ( !a3 || *((_DWORD *)this + 12) < 0x10u )
  {
    v12 = 0;
    v13 = 0LL;
    for ( i = (char *)**((_QWORD **)this + 2); (unsigned int)v13 < *((_DWORD *)this + 1); v13 = (unsigned int)(v13 + 1) )
    {
      if ( v10 )
        break;
      v7 = 32LL * (unsigned int)v13;
      v8 = *(struct _EPROCESS **)&i[v7 + 8];
      if ( a2 == v8 )
      {
        v15 = *(_DWORD *)&i[v7];
        v11 = v13;
        if ( v15 )
        {
          v10 = 1;
          *(_DWORD *)&i[v7] = v15 + 1;
        }
      }
      else if ( v11 == -1 && !v8 )
      {
        v11 = v13;
      }
      if ( v8 && *(_DWORD *)&i[v7] )
        ++v12;
    }
    if ( v12 < *(_DWORD *)this || v10 )
    {
      if ( v11 == -1 )
      {
        ++*((_DWORD *)this + 1);
        Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(*((PVOID **)this + 2), 32 * *((_DWORD *)this + 1), 1);
        i = Buffer;
        if ( !Buffer )
        {
          v10 = 0;
          goto LABEL_33;
        }
        v11 = *((_DWORD *)this + 1) - 1;
        memset(&Buffer[32 * v11], 0, 0x20uLL);
      }
      v17 = 32LL * v11;
      v18 = *(struct _EPROCESS **)&i[v17 + 8];
      if ( v18 && v18 != a2 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v13, v7, v8, v9);
        *(_QWORD *)(v19 + 24) = 3922LL;
        WdLogEvent5_WdAssertion(v19);
      }
      if ( v11 != -1 )
      {
        if ( v10 )
          goto LABEL_31;
        if ( *(_DWORD *)&i[v17] )
        {
          v20 = WdLogNewEntry5_WdAssertion(v13, v7, v8, v9);
          *(_QWORD *)(v20 + 24) = 3927LL;
          WdLogEvent5_WdAssertion(v20);
        }
        *(_QWORD *)&i[v17 + 8] = a2;
        *(_DWORD *)&i[v17] = 1;
        *(LARGE_INTEGER *)&i[v17 + 16] = KeQueryPerformanceCounter(0LL);
        v10 = 1;
        if ( v12 < *((_DWORD *)this + 6) )
        {
LABEL_31:
          if ( a3 )
          {
            v21 = 3LL * *((unsigned int *)this + 12);
            *(_OWORD *)((char *)this + 8 * v21 + 56) = *(_OWORD *)a3;
            *((_QWORD *)this + v21 + 9) = *((_QWORD *)a3 + 2);
            ++*((_DWORD *)this + 12);
            OUTPUTDUPL_SESSION_MGR::TriggerLowBoxActiveContextWNF(this);
          }
          goto LABEL_33;
        }
        *((_DWORD *)this + 6) = v12 + 1;
      }
      if ( !v10 )
        goto LABEL_33;
      goto LABEL_31;
    }
  }
LABEL_33:
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v7, (__int64)v8, v9);
  return v10;
}
