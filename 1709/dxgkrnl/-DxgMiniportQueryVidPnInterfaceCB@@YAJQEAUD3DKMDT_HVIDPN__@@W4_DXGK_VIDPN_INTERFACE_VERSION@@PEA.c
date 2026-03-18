/*
 * XREFs of ?DxgMiniportQueryVidPnInterfaceCB@@YAJQEAUD3DKMDT_HVIDPN__@@W4_DXGK_VIDPN_INTERFACE_VERSION@@PEAPEBU_DXGK_VIDPN_INTERFACE@@@Z @ 0x1C00F0740
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DxgMiniportQueryVidPnInterfaceCB(
        struct D3DKMDT_HVIDPN__ *const a1,
        __int64 a2,
        const struct _DXGK_VIDPN_INTERFACE **a3)
{
  __int64 v4; // rbp
  unsigned int v6; // ebx
  struct D3DKMDT_HVIDPN__ *v7; // rax
  __int64 v8; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+50h] [rbp+18h] BYREF

  v4 = (int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 7056);
  v6 = 0;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( !a1 || (v7 = a1, *((_DWORD *)a1 + 16) != 1833172997) )
      v7 = 0LL;
    if ( v7 )
    {
      v8 = *((_QWORD *)v7 + 6);
      if ( KeGetCurrentIrql() )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v20, v8);
        if ( !*(_QWORD *)(v8 + 8) )
        {
          v15 = WdLogNewEntry5_WdAssertion(v13);
          WdLogEvent5_WdAssertion(v15);
        }
        v16 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL);
        v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 64LL);
        if ( *(_DWORD *)(*(_QWORD *)(v17 + 40) + 28LL) >= 0x2003u )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v12, v14);
          v18[3] = 275LL;
          v18[4] = 20LL;
          v18[5] = v16;
          v18[6] = 0LL;
          v18[7] = 0LL;
          WdLogEvent5_WdCriticalError(v18);
        }
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v20 + 40));
      }
      if ( (_DWORD)v4 == 1 )
      {
        *a3 = *(const struct _DXGK_VIDPN_INTERFACE **)(v8 + 368);
      }
      else
      {
        *a3 = 0LL;
        v19 = WdLogNewEntry5_WdWarning(a1, a2, a3);
        *(_QWORD *)(v19 + 24) = v4;
        WdLogEvent5_WdWarning(v19);
        v6 = -1073741637;
      }
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v11 + 24) = a1;
      WdLogEvent5_WdError(v11);
      v6 = -1071774973;
    }
  }
  else
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v10[3] = 0LL;
    v10[4] = v4;
    v10[5] = a1;
    WdLogEvent5_WdError(v10);
    v6 = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerExit, (__int64)a3, 7056);
  return v6;
}
