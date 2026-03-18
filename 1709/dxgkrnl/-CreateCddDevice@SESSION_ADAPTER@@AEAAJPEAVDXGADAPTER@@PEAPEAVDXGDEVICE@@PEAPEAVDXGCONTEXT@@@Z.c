/*
 * XREFs of ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00B3724
 * Callers:
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00B35D4 (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 * Callees:
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C00013D4 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00082C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00086F0 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00087FC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008830 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0082E60 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C00830DC (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C008450C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C0094048 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::CreateCddDevice(
        SESSION_ADAPTER *this,
        DXGADAPTER ***a2,
        struct DXGDEVICE **a3,
        struct DXGCONTEXT **a4)
{
  __int64 v4; // r10
  struct DXGADAPTER *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // r12
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rsi
  struct DXGDEVICE **v18; // r14
  int Device; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r15
  unsigned int v23; // r8d
  int v24; // ecx
  unsigned int v25; // r8d
  DXGDEVICE *v26; // r10
  char v27; // cl
  struct DXGCONTEXT **v28; // rdx
  int Context; // eax
  unsigned int v30; // edi
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 CurrentProcess; // rax
  unsigned int v42; // eax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // kr00_8
  void *v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  void *v49; // rcx
  volatile signed __int64 **v50; // rax
  volatile signed __int64 *v51; // rax
  _BYTE v53[16]; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v54; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v55[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v56[32]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v57[40]; // [rsp+C8h] [rbp-38h] BYREF
  int v58; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v59; // [rsp+F4h] [rbp-Ch]
  unsigned int v60; // [rsp+F8h] [rbp-8h]
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp+0h] BYREF
  char v62; // [rsp+130h] [rbp+30h]

  v4 = *((_QWORD *)this + 2);
  v62 = 0;
  v8 = (struct DXGADAPTER *)(v4 & -(__int64)(*(_QWORD *)(v4 + 2304) != 0LL));
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v55, (struct DXGADAPTER *const)a2, v8);
  CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18592LL));
  Current = DXGPROCESS::GetCurrent(v10, v9);
  if ( Current )
  {
    v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v55);
    v17 = v13;
    if ( v13 < 0 )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
      v37[3] = a2;
      v37[4] = v8;
      v37[5] = Current;
      v37[6] = v17;
      WdLogEvent5_WdWarning(v37);
    }
    else
    {
      v18 = (struct DXGDEVICE **)((char *)this + 56);
      Device = ADAPTER_RENDER::CreateDevice(a2[289], (__int64 *)this + 7, 0, 2, v8, 0, 0, 0LL);
      v17 = Device;
      if ( Device >= 0 )
      {
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v55);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v53, *v18);
        v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v55);
        v17 = v21;
        if ( v21 >= 0 )
        {
          *((_DWORD *)this + 13) = 1;
          if ( *((_BYTE *)a2 + 2234) )
          {
            v42 = *((int *)a2 + 492) < 0x2000 ? 1 : *((_DWORD *)a2 + 62);
            *((_DWORD *)this + 13) = v42;
            if ( v42 > 1 )
            {
              v44 = v42;
              v43 = 8LL * v42;
              if ( !is_mul_ok(v44, 8uLL) )
                v43 = -1LL;
              v45 = operator new(v43, 0x4B677844u, 1, PagedPool);
              *((_QWORD *)this + 8) = v45;
              if ( !v45 )
              {
                v46 = (_QWORD *)WdLogNewEntry5_WdEvent();
                v46[3] = a2;
                v46[4] = Current;
                v46[5] = v17;
                WdLogEvent5_WdEvent(v46);
                LODWORD(v17) = -1073741801;
              }
            }
          }
          if ( (int)v17 < 0 )
            goto LABEL_17;
          v22 = 0LL;
          if ( !*((_DWORD *)this + 13) )
            goto LABEL_17;
          while ( 1 )
          {
            v23 = *((_DWORD *)a2 + 582);
            v58 = 0;
            v60 = 0;
            v59 = v23;
            if ( *((_DWORD *)this + 13) == 1 )
              v24 = *((_DWORD *)a2 + 583);
            else
              LOBYTE(v24) = v22;
            v60 = 1 << v24;
            if ( (*((_DWORD *)a2 + 75) & 0x10) != 0 )
            {
              memset(&v54, 0, 0x28uLL);
              v54.Type = DXGKQAITYPE_PREFERREDGPUNODE;
              v54.pOutputData = &v58;
              v54.OutputDataSize = 12;
              if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)a2, &v54, v32) < 0 )
              {
                v47 = WdLogNewEntry5_WdAssertion(v33);
                *(_QWORD *)(v47 + 24) = 1910LL;
                WdLogEvent5_WdAssertion(v47);
              }
              v23 = v59;
            }
            if ( !ADAPTER_RENDER::NodeSupportsGpuVa(*((ADAPTER_RENDER **)*v18 + 2), 0, v23)
              || (v27 = 1, *((_BYTE *)a2 + 2257)) )
            {
              v27 = 0;
            }
            v28 = *((_DWORD *)this + 13) == 1
                ? (struct DXGCONTEXT **)((char *)this + 64)
                : (struct DXGCONTEXT **)(*((_QWORD *)this + 8) + 8 * v22);
            Context = DXGDEVICE::CreateContext(v26, v28, v25, v60, 0, 0LL, 0, D3DKMT_CLIENTHINT_CDD, v27);
            v17 = Context;
            if ( Context < 0 )
              break;
            v22 = (unsigned int)(v22 + 1);
            if ( (unsigned int)v22 >= *((_DWORD *)this + 13) )
              goto LABEL_17;
          }
        }
        v48 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v48[3] = a2;
        v48[4] = Current;
        v48[5] = v17;
        WdLogEvent5_WdEvent(v48);
LABEL_17:
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v53);
        if ( (int)v17 < 0 && *v18 )
        {
          ADAPTER_RENDER::DestroyDevice(a2[289], *v18, 0LL);
          if ( *((_DWORD *)this + 13) > 1u )
          {
            v49 = (void *)*((_QWORD *)this + 8);
            if ( v49 )
              ExFreePoolWithTag(v49, 0);
            *((_QWORD *)this + 8) = 0LL;
          }
          *v18 = 0LL;
        }
        else
        {
          if ( a3 )
          {
            *a3 = *v18;
            _InterlockedIncrement64((volatile signed __int64 *)*v18 + 8);
          }
          if ( a4 )
          {
            v50 = (volatile signed __int64 **)((char *)this + 64);
            if ( *((_DWORD *)this + 13) != 1 )
              v50 = (volatile signed __int64 **)*((_QWORD *)this + 8);
            v51 = *v50;
            *a4 = (struct DXGCONTEXT *)v51;
            _InterlockedIncrement64(v51 + 4);
          }
        }
        goto LABEL_21;
      }
      v38 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      v38[3] = a2;
      CurrentProcess = PsGetCurrentProcess(v40, v39);
      v38[5] = v17;
      v38[4] = CurrentProcess;
      WdLogEvent5_WdError(v38);
    }
LABEL_21:
    v30 = v17;
    goto LABEL_22;
  }
  v34 = WdLogNewEntry5_WdError(v11);
  v30 = -1073741823;
  *(_QWORD *)(v34 + 24) = PsGetCurrentProcess(v36, v35);
  *(_QWORD *)(v34 + 32) = -1073741823LL;
  WdLogEvent5_WdError(v34);
LABEL_22:
  COREACCESS::~COREACCESS((COREACCESS *)v57);
  COREACCESS::~COREACCESS((COREACCESS *)v56);
  if ( v62 )
    KeUnstackDetachProcess(&ApcState);
  return v30;
}
