/*
 * XREFs of ?DxgkPresentVirtualFrameBuffer@@YAJII_KIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C016F800
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0016BF4 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0016D0C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C00249B8 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0024A9C (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@_KI@Z @ 0x1C016FA54 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@_KI@Z.c)
 */

__int64 __fastcall DxgkPresentVirtualFrameBuffer(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v6; // r14d
  unsigned int v7; // edi
  struct _KTHREAD **Current; // rax
  __int64 v9; // rcx
  struct _KTHREAD **v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGDEVICE **v15; // rsi
  __int64 v16; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rcx
  struct DXGGLOBAL *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // r14
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  struct DXGCONTEXT *v32[2]; // [rsp+38h] [rbp-71h] BYREF
  struct DXGHWQUEUE *v33; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v34[16]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v35[16]; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v36[24]; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v37[8]; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v38[32]; // [rsp+90h] [rbp-19h] BYREF
  _BYTE v39[56]; // [rsp+B0h] [rbp+7h] BYREF

  v6 = a2;
  v7 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v10 = Current;
  if ( Current )
  {
    v32[0] = 0LL;
    v33 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v36, v7, Current, v32, 0);
    v15 = (struct DXGDEVICE **)v32[0];
    if ( !v32[0] )
    {
      LODWORD(v11) = 0;
LABEL_21:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v36);
      return (unsigned int)v11;
    }
    DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v35, v6, v10, &v33, 0);
    Global = DXGGLOBAL::GetGlobal(v16);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v34, (struct DXGGLOBAL *)((char *)Global + 1144), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
    v19 = *((_QWORD *)DXGGLOBAL::GetGlobal(v18) + 129);
    v21 = DXGGLOBAL::GetGlobal(v20);
    if ( v19 || *((_DWORD *)v21 + 256) != 1 )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v22) + 283) != 4 )
      {
        v23 = (__int64)v15[2];
        v24 = *(_QWORD *)(v23 + 1688);
        if ( v24 == *(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32, v15[2]);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, v23, 1, v25, 0);
          v26 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v37);
          v11 = v26;
          if ( v26 < 0 )
          {
            v30 = WdLogNewEntry5_WdEvent(v28, v27);
            *(_QWORD *)(v30 + 24) = v11;
            *(_QWORD *)(v30 + 32) = v23;
            WdLogEvent5_WdEvent(v30);
            COREACCESS::~COREACCESS((COREACCESS *)v39);
            COREACCESS::~COREACCESS((COREACCESS *)v38);
            if ( v32[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
            goto LABEL_18;
          }
          if ( !*(_BYTE *)(v23 + 1744) )
          {
            LOBYTE(v29) = 1;
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 2464) + 520LL)
                                                                         + 8LL)
                                                             + 568LL))(
              *(_QWORD *)(v23 + 616),
              3LL,
              v29);
            *(_BYTE *)(v23 + 1744) = 1;
          }
          COREACCESS::~COREACCESS((COREACCESS *)v39);
          COREACCESS::~COREACCESS((COREACCESS *)v38);
          if ( v32[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
        }
      }
      LODWORD(v11) = PresentCddShadowBuffer((struct DXGCONTEXT *)v15, v33, a3, a4);
    }
    else
    {
      LODWORD(v11) = -1073741823;
    }
LABEL_18:
    if ( v34[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v35);
    goto LABEL_21;
  }
  LODWORD(v11) = -1073741811;
  v12 = WdLogNewEntry5_WdError(v9);
  *(_QWORD *)(v12 + 24) = -1073741811LL;
  *(_QWORD *)(v12 + 32) = PsGetCurrentProcess(v14, v13);
  WdLogEvent5_WdError(v12);
  return (unsigned int)v11;
}
