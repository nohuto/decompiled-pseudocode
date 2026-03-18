/*
 * XREFs of ?DxgkCddCreate@@YAJQEAXPEBXPEAI2PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z @ 0x1C0096B40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0098DC4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z @ 0x1C009BE20 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddCreate(
        char *a1,
        const void *a2,
        unsigned int *a3,
        unsigned int *a4,
        struct _CDDDXGK_DRIVERINFO *a5,
        struct _CDDDXGK_DRIVERINFO *a6,
        void **a7,
        struct _OBJECT_TYPE **a8)
{
  struct _CDDDXGK_DRIVERINFO *v11; // rbx
  struct _CDDDXGK_DRIVERINFO *v12; // r14
  void **v13; // r13
  struct DXGPROCESS *Current; // rax
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  struct DXGPROCESS *v21; // r15
  __int64 v22; // rbp
  __int64 v23; // rsi
  __int64 v24; // r8
  struct _OBJECT_TYPE **v25; // rcx
  int v27; // eax
  _QWORD *v28; // rbx
  _QWORD *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // [rsp+20h] [rbp-48h]
  struct DXGPROCESS *v34; // [rsp+80h] [rbp+18h] BYREF
  unsigned int *v35; // [rsp+88h] [rbp+20h]

  v35 = a4;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
  {
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3000);
    a4 = v35;
  }
  if ( !a3 )
    goto LABEL_27;
  if ( !a4 )
    goto LABEL_27;
  v11 = a5;
  if ( !a5 )
    goto LABEL_27;
  v12 = a6;
  if ( !a6 )
    goto LABEL_27;
  v13 = a7;
  if ( !a7 )
    goto LABEL_27;
  *a3 = 0;
  *(_QWORD *)v11 = 0LL;
  *((_QWORD *)v11 + 1) = 0LL;
  *((_QWORD *)v11 + 2) = 0LL;
  *(_QWORD *)v12 = 0LL;
  *((_QWORD *)v12 + 1) = 0LL;
  *((_QWORD *)v12 + 2) = 0LL;
  Current = DXGPROCESS::GetCurrent();
  v34 = Current;
  if ( !Current )
  {
    v27 = DXGPROCESS::CreateDxgProcess(&v34, 0, 0LL);
    v20 = v27;
    if ( v27 < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
      v28[3] = v20;
      v28[4] = a1;
      v28[5] = PsGetCurrentProcess();
      v29 = v28;
LABEL_29:
      WdLogEvent5_WdError(v29);
      goto LABEL_18;
    }
    Current = v34;
  }
  *((_QWORD *)Current + 9) = a2;
  *((_BYTE *)Current + 272) = 1;
  if ( !a1 )
  {
LABEL_27:
    v30 = WdLogNewEntry5_WdError(a1, a2);
    v20 = -1073741811LL;
    goto LABEL_28;
  }
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(a1 + 268));
  v20 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    v30 = WdLogNewEntry5_WdError(v17, v16);
LABEL_28:
    *(_QWORD *)(v30 + 24) = v20;
    v29 = (_QWORD *)v30;
    goto LABEL_29;
  }
  v21 = v34;
  v22 = *(_QWORD *)(*((_QWORD *)v34 + 2) + 16LL);
  if ( !*(_QWORD *)(v22 + 2288) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
    *(_QWORD *)(v31 + 24) = 232LL;
    WdLogEvent5_WdAssertion(v31);
  }
  v23 = *((_QWORD *)v21 + 225);
  if ( v23 && !*(_QWORD *)(v23 + 2280) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
    *(_QWORD *)(v32 + 24) = 234LL;
    WdLogEvent5_WdAssertion(v32);
  }
  *v13 = (void *)v22;
  *(_DWORD *)v12 = *(_DWORD *)(v22 + 276);
  *((_DWORD *)v12 + 1) = *(_DWORD *)(v22 + 280);
  *((_DWORD *)v12 + 2) = *(_DWORD *)(v22 + 284);
  *((_DWORD *)v12 + 3) = *(_DWORD *)(v22 + 288);
  *((_DWORD *)v12 + 4) = *(_DWORD *)(v22 + 292);
  *((_DWORD *)v12 + 5) = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v22);
  if ( v23 )
  {
    *(_DWORD *)v11 = *(_DWORD *)(v23 + 276);
    *((_DWORD *)v11 + 1) = *(_DWORD *)(v23 + 280);
    *((_DWORD *)v11 + 2) = *(_DWORD *)(v23 + 284);
    *((_DWORD *)v11 + 3) = *(_DWORD *)(v23 + 288);
    *((_DWORD *)v11 + 4) = *(_DWORD *)(v23 + 292);
    *((_DWORD *)v11 + 5) = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v23);
  }
  else
  {
    *(_OWORD *)v11 = *(_OWORD *)v12;
    *((_QWORD *)v11 + 2) = *((_QWORD *)v12 + 2);
  }
  *a3 = *((_DWORD *)v21 + 83);
  *v35 = *(_DWORD *)(v33 + 24);
  v25 = a8;
  *a8 = g_pDxgkSharedAllocationObjectType;
LABEL_18:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v25, &EventProfilerExit, v24, 3000);
  return (unsigned int)v20;
}
