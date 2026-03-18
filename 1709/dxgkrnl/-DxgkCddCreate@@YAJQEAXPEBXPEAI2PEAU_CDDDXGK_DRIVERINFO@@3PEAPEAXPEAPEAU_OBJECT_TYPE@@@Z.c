/*
 * XREFs of ?DxgkCddCreate@@YAJQEAXPEBXPEAI2PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z @ 0x1C00F8590
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00E1C1C (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z @ 0x1C00F0940 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z.c)
 */

__int64 __fastcall DxgkCddCreate(
        char *a1,
        __int64 a2,
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
  __int64 v16; // rcx
  __int64 v17; // rdi
  struct DXGDEVICE *v18; // r15
  __int64 v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // r8
  struct _OBJECT_TYPE **v22; // rcx
  int v24; // eax
  _QWORD *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  struct DXGCONTEXT *v32; // [rsp+20h] [rbp-48h] BYREF
  struct DXGDEVICE *v33; // [rsp+80h] [rbp+18h] BYREF
  unsigned int *v34; // [rsp+88h] [rbp+20h]

  v34 = a4;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
  {
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3000);
    a4 = v34;
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
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  v33 = Current;
  if ( !Current )
  {
    v24 = DXGPROCESS::CreateDxgProcess(&v33, 0LL, 0LL);
    v17 = v24;
    if ( v24 < 0 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v25[3] = v17;
      v25[4] = a1;
      v25[5] = PsGetCurrentProcess(v27, v26);
      v28 = v25;
LABEL_29:
      WdLogEvent5_WdError(v28);
      goto LABEL_18;
    }
    Current = v33;
  }
  *((_QWORD *)Current + 12) = a2;
  *((_BYTE *)Current + 304) = 1;
  if ( !a1 )
  {
LABEL_27:
    v29 = WdLogNewEntry5_WdError(a1);
    v17 = -1073741811LL;
    goto LABEL_28;
  }
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                           (struct _LUID *)(a1 + 268),
                                           &v33,
                                           &v32);
  v17 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    v29 = WdLogNewEntry5_WdError(v16);
LABEL_28:
    *(_QWORD *)(v29 + 24) = v17;
    v28 = (_QWORD *)v29;
    goto LABEL_29;
  }
  v18 = v33;
  v19 = *(_QWORD *)(*((_QWORD *)v33 + 2) + 16LL);
  if ( !*(_QWORD *)(v19 + 2312) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v30 + 24) = 227LL;
    WdLogEvent5_WdAssertion(v30);
  }
  v20 = *((_QWORD *)v18 + 209);
  if ( v20 && !*(_QWORD *)(v20 + 2304) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v31 + 24) = 229LL;
    WdLogEvent5_WdAssertion(v31);
  }
  *v13 = (void *)v19;
  *(_DWORD *)v12 = *(_DWORD *)(v19 + 276);
  *((_DWORD *)v12 + 1) = *(_DWORD *)(v19 + 280);
  *((_DWORD *)v12 + 2) = *(_DWORD *)(v19 + 284);
  *((_DWORD *)v12 + 3) = *(_DWORD *)(v19 + 288);
  *((_DWORD *)v12 + 4) = *(_DWORD *)(v19 + 292);
  *((_DWORD *)v12 + 5) = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v19);
  if ( v20 )
  {
    *(_DWORD *)v11 = *(_DWORD *)(v20 + 276);
    *((_DWORD *)v11 + 1) = *(_DWORD *)(v20 + 280);
    *((_DWORD *)v11 + 2) = *(_DWORD *)(v20 + 284);
    *((_DWORD *)v11 + 3) = *(_DWORD *)(v20 + 288);
    *((_DWORD *)v11 + 4) = *(_DWORD *)(v20 + 292);
    *((_DWORD *)v11 + 5) = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v20);
  }
  else
  {
    *(_OWORD *)v11 = *(_OWORD *)v12;
    *((_QWORD *)v11 + 2) = *((_QWORD *)v12 + 2);
  }
  *a3 = *((_DWORD *)v18 + 83);
  *v34 = *((_DWORD *)v32 + 6);
  v22 = a8;
  *a8 = g_pDxgkSharedAllocationObjectType;
LABEL_18:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v22, &EventProfilerExit, v21, 3000);
  return (unsigned int)v17;
}
