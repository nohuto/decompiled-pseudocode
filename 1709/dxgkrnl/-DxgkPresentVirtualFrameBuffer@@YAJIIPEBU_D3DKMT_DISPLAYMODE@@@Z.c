/*
 * XREFs of ?DxgkPresentVirtualFrameBuffer@@YAJIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C011DA40
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0008CE8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008DD0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011DBF4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 */

__int64 __fastcall DxgkPresentVirtualFrameBuffer(__int64 a1, __int64 a2, const struct _D3DKMT_DISPLAYMODE *a3)
{
  unsigned int v3; // r15d
  unsigned int v4; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct DXGDEVICE **v8; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  struct DXGGLOBAL *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD v29[2]; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v30[16]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v31[16]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v32[8]; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v33[32]; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v34[56]; // [rsp+90h] [rbp+Fh] BYREF
  struct DXGCONTEXT *v35; // [rsp+100h] [rbp+7Fh] BYREF

  v3 = a2;
  v4 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    v35 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v31, v4, Current, &v35, 0);
    v8 = (struct DXGDEVICE **)v35;
    if ( !v35 )
    {
      LODWORD(v23) = 0;
LABEL_14:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v31);
      return (unsigned int)v23;
    }
    Global = DXGGLOBAL::GetGlobal(v7);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (struct DXGGLOBAL *)((char *)Global + 1064));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
    v11 = *((_QWORD *)DXGGLOBAL::GetGlobal(v10) + 119);
    v13 = DXGGLOBAL::GetGlobal(v12);
    if ( v11 || *((_DWORD *)v13 + 236) != 1 )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v14) + 263) != 4 )
      {
        v15 = (__int64)v8[2];
        v16 = *(_QWORD *)(v15 + 1672);
        if ( v16 == *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29, v8[2]);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v32, v15, 1, v17, 0);
          v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v32);
          v23 = v18;
          if ( v18 < 0 )
          {
            v28 = WdLogNewEntry5_WdEvent(v20, v19, v21, v22);
            *(_QWORD *)(v28 + 24) = v23;
            *(_QWORD *)(v28 + 32) = v15;
            WdLogEvent5_WdEvent(v28);
            COREACCESS::~COREACCESS((COREACCESS *)v34);
            COREACCESS::~COREACCESS((COREACCESS *)v33);
            if ( v29[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
            goto LABEL_12;
          }
          if ( !*(_BYTE *)(v15 + 1728) )
          {
            LOBYTE(v21) = 1;
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 2312) + 504LL)
                                                                         + 8LL)
                                                             + 472LL))(
              *(_QWORD *)(v15 + 600),
              3LL,
              v21);
            *(_BYTE *)(v15 + 1728) = 1;
          }
          COREACCESS::~COREACCESS((COREACCESS *)v34);
          COREACCESS::~COREACCESS((COREACCESS *)v33);
          if ( v29[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
        }
      }
      LODWORD(v23) = PresentCddShadowBuffer((struct DXGCONTEXT *)v8, v3);
    }
    else
    {
      LODWORD(v23) = -1073741823;
    }
LABEL_12:
    if ( v30[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
    goto LABEL_14;
  }
  v25 = WdLogNewEntry5_WdError(v6);
  *(_QWORD *)(v25 + 24) = -1073741811LL;
  *(_QWORD *)(v25 + 32) = PsGetCurrentProcess(v27, v26);
  WdLogEvent5_WdError(v25);
  return 3221225485LL;
}
