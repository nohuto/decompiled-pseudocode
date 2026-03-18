/*
 * XREFs of ?DxgkPresentVirtualFrameBuffer@@YAJIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C011D5B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0004CAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004D98 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011D764 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 */

__int64 __fastcall DxgkPresentVirtualFrameBuffer(__int64 a1, unsigned int a2, const struct _D3DKMT_DISPLAYMODE *a3)
{
  unsigned int v4; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGDEVICE **v12; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct DXGGLOBAL *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 v32; // r9
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rbx
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rax
  _QWORD v41[2]; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v42[16]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v43[16]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v44[8]; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v45[32]; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v46[56]; // [rsp+90h] [rbp+Fh] BYREF
  struct DXGCONTEXT *v47; // [rsp+100h] [rbp+7Fh] BYREF

  v4 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    v47 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v43, v4, Current, &v47, 0);
    v12 = (struct DXGDEVICE **)v47;
    if ( !v47 )
    {
      LODWORD(v36) = 0;
LABEL_14:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v43);
      return (unsigned int)v36;
    }
    Global = DXGGLOBAL::GetGlobal(v9, v8, v10, v11);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v42, (struct DXGGLOBAL *)((char *)Global + 1064), v14, v15);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v42);
    v20 = *((_QWORD *)DXGGLOBAL::GetGlobal(v17, v16, v18, v19) + 119);
    v25 = DXGGLOBAL::GetGlobal(v22, v21, v23, v24);
    if ( v20 || *((_DWORD *)v25 + 236) != 1 )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v27, v26, v28, v29) + 263) != 4 )
      {
        v30 = (__int64)v12[2];
        v31 = *(_QWORD *)(v30 + 1800);
        if ( v31 == *(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL) )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41, v12[2]);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, v30, 1LL, v32, 0);
          v33 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v44);
          v36 = v33;
          if ( v33 < 0 )
          {
            v40 = WdLogNewEntry5_WdEvent(v34);
            *(_QWORD *)(v40 + 24) = v36;
            *(_QWORD *)(v40 + 32) = v30;
            WdLogEvent5_WdEvent(v40);
            COREACCESS::~COREACCESS((COREACCESS *)v46);
            COREACCESS::~COREACCESS((COREACCESS *)v45);
            if ( v41[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41);
            goto LABEL_12;
          }
          if ( !*(_BYTE *)(v30 + 1856) )
          {
            LOBYTE(v35) = 1;
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 2288) + 408LL)
                                                                         + 8LL)
                                                             + 472LL))(
              *(_QWORD *)(v30 + 600),
              3LL,
              v35);
            *(_BYTE *)(v30 + 1856) = 1;
          }
          COREACCESS::~COREACCESS((COREACCESS *)v46);
          COREACCESS::~COREACCESS((COREACCESS *)v45);
          if ( v41[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41);
        }
      }
      LODWORD(v36) = PresentCddShadowBuffer((struct DXGCONTEXT *)v12, a2);
    }
    else
    {
      LODWORD(v36) = -1073741823;
    }
LABEL_12:
    if ( v42[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v42, v26, v28, v29);
    goto LABEL_14;
  }
  v38 = WdLogNewEntry5_WdError(v7, v6);
  *(_QWORD *)(v38 + 24) = -1073741811LL;
  *(_QWORD *)(v38 + 32) = PsGetCurrentProcess(v39);
  WdLogEvent5_WdError(v38);
  return 3221225485LL;
}
