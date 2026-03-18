/*
 * XREFs of ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C01C57BC
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C01CC128 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00FC108 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ @ 0x1C01C90E0 (-TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::AddRef(
        OUTPUTDUPL_SESSION_MGR *this,
        struct _EPROCESS *a2,
        struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *a3)
{
  unsigned int v6; // edi
  unsigned int v7; // r14d
  __int64 v8; // rcx
  unsigned int v9; // r15d
  char *v10; // rbp
  __int64 v11; // rdx
  struct _EPROCESS *v12; // r8
  int v13; // eax
  char *Buffer; // rax
  __int64 v15; // rsi
  struct _EPROCESS *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  _BYTE v21[56]; // [rsp+20h] [rbp-38h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, *((struct DXGFASTMUTEX *const *)this + 1));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  v6 = 0;
  v7 = -1;
  if ( !a3 || *((_DWORD *)this + 12) < 0x10u )
  {
    v8 = 0LL;
    v9 = 0;
    v10 = (char *)**((_QWORD **)this + 2);
    while ( (unsigned int)v8 < *((_DWORD *)this + 1) )
    {
      if ( v6 )
        break;
      v11 = 32LL * (unsigned int)v8;
      v12 = *(struct _EPROCESS **)&v10[v11 + 8];
      if ( a2 == v12 )
      {
        v13 = *(_DWORD *)&v10[v11];
        v7 = v8;
        if ( v13 )
        {
          v6 = 1;
          *(_DWORD *)&v10[v11] = v13 + 1;
        }
      }
      else if ( v7 == -1 )
      {
        if ( v12 )
          goto LABEL_12;
        v7 = v8;
      }
      if ( v12 )
      {
LABEL_12:
        if ( *(_DWORD *)&v10[v11] )
          ++v9;
      }
      v8 = (unsigned int)(v8 + 1);
    }
    if ( v9 < *(_DWORD *)this || v6 )
    {
      if ( v7 == -1 )
      {
        ++*((_DWORD *)this + 1);
        Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(*((PVOID **)this + 2), 32 * *((_DWORD *)this + 1), 1);
        v10 = Buffer;
        if ( !Buffer )
        {
          v6 = 0;
          goto LABEL_33;
        }
        v7 = *((_DWORD *)this + 1) - 1;
        memset(&Buffer[32 * v7], 0, 0x20uLL);
      }
      v15 = 32LL * v7;
      v16 = *(struct _EPROCESS **)&v10[v15 + 8];
      if ( v16 && v16 != a2 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v17 + 24) = 4003LL;
        WdLogEvent5_WdAssertion(v17);
      }
      if ( v7 != -1 )
      {
        if ( v6 )
          goto LABEL_31;
        if ( *(_DWORD *)&v10[v15] )
        {
          v18 = WdLogNewEntry5_WdAssertion(v8);
          *(_QWORD *)(v18 + 24) = 4008LL;
          WdLogEvent5_WdAssertion(v18);
        }
        *(_QWORD *)&v10[v15 + 8] = a2;
        *(_DWORD *)&v10[v15] = 1;
        *(LARGE_INTEGER *)&v10[v15 + 16] = KeQueryPerformanceCounter(0LL);
        v6 = 1;
        if ( v9 < *((_DWORD *)this + 6) )
        {
LABEL_31:
          if ( a3 )
          {
            v19 = 3LL * *((unsigned int *)this + 12);
            *(_OWORD *)((char *)this + 8 * v19 + 56) = *(_OWORD *)a3;
            *((_QWORD *)this + v19 + 9) = *((_QWORD *)a3 + 2);
            ++*((_DWORD *)this + 12);
            OUTPUTDUPL_SESSION_MGR::TriggerLowBoxActiveContextWNF(this);
          }
          goto LABEL_33;
        }
        *((_DWORD *)this + 6) = v9 + 1;
      }
      if ( !v6 )
        goto LABEL_33;
      goto LABEL_31;
    }
  }
LABEL_33:
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  return v6;
}
