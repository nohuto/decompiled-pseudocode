/*
 * XREFs of ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C01C8244
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C01D2364 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01A8AC0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ @ 0x1C01CC410 (-TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::AddRef(
        struct DXGFASTMUTEX **this,
        struct _EPROCESS *a2,
        struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // edi
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  unsigned int v10; // edx
  unsigned int v11; // r8d
  char *v12; // rbp
  struct _EPROCESS *v13; // rdx
  int v14; // eax
  const void **v15; // rcx
  unsigned int v16; // edx
  char *Buffer; // rax
  __int64 v18; // rsi
  struct _EPROCESS *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  _BYTE v24[56]; // [rsp+20h] [rbp-38h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, this[1], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  v7 = 0;
  v8 = -1;
  if ( !a3 || *((_DWORD *)this + 12) < 0x10u )
  {
    v9 = 0;
    v10 = *((_DWORD *)this + 1);
    v11 = 0;
    v12 = *(char **)this[2];
    while ( v11 < v10 )
    {
      if ( v7 )
        break;
      v6 = 32LL * v11;
      v13 = *(struct _EPROCESS **)&v12[v6 + 8];
      if ( a2 == v13 )
      {
        v14 = *(_DWORD *)&v12[v6];
        v8 = v11;
        if ( v14 )
        {
          v7 = 1;
          *(_DWORD *)&v12[v6] = v14 + 1;
        }
      }
      else if ( v8 == -1 )
      {
        if ( v13 )
          goto LABEL_12;
        v8 = v11;
      }
      if ( v13 )
      {
LABEL_12:
        if ( *(_DWORD *)&v12[v6] )
          ++v9;
      }
      v10 = *((_DWORD *)this + 1);
      ++v11;
    }
    if ( v9 < *(_DWORD *)this || v7 )
    {
      if ( v8 == -1 )
      {
        v15 = (const void **)this[2];
        v16 = v10 + 1;
        *((_DWORD *)this + 1) = v16;
        Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(v15, 32 * v16, 1);
        v12 = Buffer;
        if ( !Buffer )
        {
          v7 = 0;
          goto LABEL_33;
        }
        v8 = *((_DWORD *)this + 1) - 1;
        memset(&Buffer[32 * v8], 0, 0x20uLL);
      }
      v18 = 32LL * v8;
      v19 = *(struct _EPROCESS **)&v12[v18 + 8];
      if ( v19 && v19 != a2 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v6);
        *(_QWORD *)(v20 + 24) = 4007LL;
        WdLogEvent5_WdAssertion(v20);
      }
      if ( v8 != -1 )
      {
        if ( v7 )
          goto LABEL_31;
        if ( *(_DWORD *)&v12[v18] )
        {
          v21 = WdLogNewEntry5_WdAssertion(v6);
          *(_QWORD *)(v21 + 24) = 4012LL;
          WdLogEvent5_WdAssertion(v21);
        }
        *(_QWORD *)&v12[v18 + 8] = a2;
        *(_DWORD *)&v12[v18] = 1;
        *(LARGE_INTEGER *)&v12[v18 + 16] = KeQueryPerformanceCounter(0LL);
        v7 = 1;
        if ( v9 < *((_DWORD *)this + 6) )
        {
LABEL_31:
          if ( a3 )
          {
            v22 = 3LL * *((unsigned int *)this + 12);
            *(_OWORD *)&this[v22 + 7] = *(_OWORD *)a3;
            this[v22 + 9] = (struct DXGFASTMUTEX *)*((_QWORD *)a3 + 2);
            ++*((_DWORD *)this + 12);
            OUTPUTDUPL_SESSION_MGR::TriggerLowBoxActiveContextWNF((OUTPUTDUPL_SESSION_MGR *)this);
          }
          goto LABEL_33;
        }
        *((_DWORD *)this + 6) = v9 + 1;
      }
      if ( !v7 )
        goto LABEL_33;
      goto LABEL_31;
    }
  }
LABEL_33:
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  return v7;
}
