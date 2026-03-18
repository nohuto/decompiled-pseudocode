/*
 * XREFs of ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00FB684
 * Callers:
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00FB534 (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0001D90 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C0005528 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00078D0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000D830 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D864 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00C116C (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CF778 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU@@@Z @ 0x1C00CFB00 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00D2FBC (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::CreateCddDevice(
        SESSION_ADAPTER *this,
        struct DXGADAPTER *a2,
        struct DXGDEVICE **a3,
        struct DXGCONTEXT **a4)
{
  __int64 v4; // r10
  struct DXGADAPTER *v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // r12
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  struct DXGDEVICE **v19; // r14
  int Device; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r15
  unsigned int v26; // r8d
  int v27; // ecx
  __int64 v28; // r8
  DXGDEVICE *v29; // r10
  char v30; // cl
  struct DXGCONTEXT **v31; // rdx
  int Context; // eax
  unsigned int v33; // edi
  __int64 v35; // rbx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // rbx
  __int64 v39; // rcx
  __int64 CurrentProcess; // rax
  unsigned int v41; // eax
  unsigned __int128 v42; // rax
  unsigned __int64 v43; // kr00_8
  PVOID v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  _QWORD *v53; // rax
  void *v54; // rcx
  volatile signed __int64 **v55; // rax
  volatile signed __int64 *v56; // rax
  _BYTE v58[16]; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v59; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v60[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v61[32]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v62[40]; // [rsp+C8h] [rbp-38h] BYREF
  int v63; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v64; // [rsp+F4h] [rbp-Ch]
  unsigned int v65; // [rsp+F8h] [rbp-8h]
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp+0h] BYREF
  char v67; // [rsp+130h] [rbp+30h]

  v4 = *((_QWORD *)this + 2);
  v67 = 0;
  v8 = (struct DXGADAPTER *)(v4 & -(__int64)(*(_QWORD *)(v4 + 2280) != 0LL));
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v60, a2, v8);
  CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18584LL));
  Current = DXGPROCESS::GetCurrent(v9);
  if ( Current )
  {
    v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v60);
    v18 = v13;
    if ( v13 < 0 )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
      v37[3] = a2;
      v37[4] = v8;
      v37[5] = Current;
      v37[6] = v18;
      WdLogEvent5_WdWarning(v37);
    }
    else
    {
      v19 = (struct DXGDEVICE **)((char *)this + 56);
      Device = ADAPTER_RENDER::CreateDevice(*((_QWORD *)a2 + 286), (__int64 *)this + 7, 0, 2, v8, 0, 0, 0LL);
      v18 = Device;
      if ( Device >= 0 )
      {
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v60);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v58, *v19);
        v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v60);
        v18 = v23;
        if ( v23 >= 0 )
        {
          *((_DWORD *)this + 13) = 1;
          if ( *((_BYTE *)a2 + 2210) )
          {
            v41 = *((int *)a2 + 486) < 0x2000 ? 1 : *((_DWORD *)a2 + 62);
            *((_DWORD *)this + 13) = v41;
            if ( v41 > 1 )
            {
              v43 = v41;
              v42 = v41 * (unsigned __int128)8uLL;
              if ( !is_mul_ok(v43, 8uLL) )
                *(_QWORD *)&v42 = -1LL;
              v44 = operator new(v42, *((__int64 *)&v42 + 1), 1, PagedPool);
              *((_QWORD *)this + 8) = v44;
              if ( !v44 )
              {
                v46 = (_QWORD *)WdLogNewEntry5_WdEvent(v45);
                v46[3] = a2;
                v46[4] = Current;
                v46[5] = v18;
                WdLogEvent5_WdEvent(v46);
                LODWORD(v18) = -1073741801;
              }
            }
          }
          if ( (int)v18 < 0 )
            goto LABEL_17;
          v25 = 0LL;
          if ( !*((_DWORD *)this + 13) )
            goto LABEL_17;
          while ( 1 )
          {
            v26 = *((_DWORD *)a2 + 576);
            v63 = 0;
            v65 = 0;
            v64 = v26;
            if ( *((_DWORD *)this + 13) == 1 )
              v27 = *((_DWORD *)a2 + 577);
            else
              LOBYTE(v27) = v25;
            v65 = 1 << v27;
            if ( (*((_DWORD *)a2 + 75) & 0x10) != 0 )
            {
              memset(&v59, 0, 0x28uLL);
              v59.Type = DXGKQAITYPE_PREFERREDGPUNODE;
              v59.pOutputData = &v63;
              v59.OutputDataSize = 12;
              if ( (int)DXGADAPTER::DdiQueryAdapterInfo(a2, &v59, v47) < 0 )
              {
                v52 = WdLogNewEntry5_WdAssertion(v49, v48, v50, v51);
                *(_QWORD *)(v52 + 24) = 1881LL;
                WdLogEvent5_WdAssertion(v52);
              }
              v26 = v64;
            }
            if ( !ADAPTER_RENDER::NodeSupportsGpuVa(*((ADAPTER_RENDER **)*v19 + 2), 0, v26)
              || (v30 = 1, *((_BYTE *)a2 + 2233)) )
            {
              v30 = 0;
            }
            v31 = *((_DWORD *)this + 13) == 1
                ? (struct DXGCONTEXT **)((char *)this + 64)
                : (struct DXGCONTEXT **)(*((_QWORD *)this + 8) + 8 * v25);
            Context = DXGDEVICE::CreateContext(v29, v31, v28, v65, 0, 0LL, 0, D3DKMT_CLIENTHINT_CDD, v30);
            v18 = Context;
            if ( Context < 0 )
              break;
            v25 = (unsigned int)(v25 + 1);
            if ( (unsigned int)v25 >= *((_DWORD *)this + 13) )
              goto LABEL_17;
          }
        }
        v53 = (_QWORD *)WdLogNewEntry5_WdEvent(v24);
        v53[3] = a2;
        v53[4] = Current;
        v53[5] = v18;
        WdLogEvent5_WdEvent(v53);
LABEL_17:
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v58);
        if ( (int)v18 < 0 && *v19 )
        {
          ADAPTER_RENDER::DestroyDevice(*((DXGADAPTER ***)a2 + 286), *v19, 0LL);
          if ( *((_DWORD *)this + 13) > 1u )
          {
            v54 = (void *)*((_QWORD *)this + 8);
            if ( v54 )
              ExFreePoolWithTag(v54, 0);
            *((_QWORD *)this + 8) = 0LL;
          }
          *v19 = 0LL;
        }
        else
        {
          if ( a3 )
          {
            *a3 = *v19;
            _InterlockedIncrement64((volatile signed __int64 *)*v19 + 8);
          }
          if ( a4 )
          {
            v55 = (volatile signed __int64 **)((char *)this + 64);
            if ( *((_DWORD *)this + 13) != 1 )
              v55 = (volatile signed __int64 **)*((_QWORD *)this + 8);
            v56 = *v55;
            *a4 = (struct DXGCONTEXT *)v56;
            _InterlockedIncrement64(v56 + 4);
          }
        }
        goto LABEL_21;
      }
      v38 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
      v38[3] = a2;
      CurrentProcess = PsGetCurrentProcess(v39);
      v38[5] = v18;
      v38[4] = CurrentProcess;
      WdLogEvent5_WdError(v38);
    }
LABEL_21:
    v33 = v18;
    goto LABEL_22;
  }
  v35 = WdLogNewEntry5_WdError(v11, v10);
  v33 = -1073741823;
  *(_QWORD *)(v35 + 24) = PsGetCurrentProcess(v36);
  *(_QWORD *)(v35 + 32) = -1073741823LL;
  WdLogEvent5_WdError(v35);
LABEL_22:
  COREACCESS::~COREACCESS((COREACCESS *)v62);
  COREACCESS::~COREACCESS((COREACCESS *)v61);
  if ( v67 )
    KeUnstackDetachProcess(&ApcState);
  return v33;
}
