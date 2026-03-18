/*
 * XREFs of ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@@Z @ 0x1C002AE80
 * Callers:
 *     ?VmBusSubmitPresentHistoryToken@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0033580 (-VmBusSubmitPresentHistoryToken@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004AD0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0004B20 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0004CAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004D98 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::SubmitPresentHistoryTokenFromVm(
        __int64 a1,
        unsigned int a2,
        struct _SLIST_ENTRY *a3,
        struct _SLIST_ENTRY *a4,
        __int64 a5,
        __int64 a6)
{
  int v10; // ebx
  struct DXGPROCESS *Current; // rax
  struct DXGCONTEXT *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // r9
  struct _SLIST_ENTRY *v15; // rdi
  struct _SLIST_ENTRY *v17[2]; // [rsp+38h] [rbp-69h] BYREF
  _BYTE v18[8]; // [rsp+48h] [rbp-59h] BYREF
  __int64 v19; // [rsp+50h] [rbp-51h]
  char v20; // [rsp+58h] [rbp-49h]
  _BYTE v21[24]; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v22[8]; // [rsp+78h] [rbp-29h] BYREF
  _BYTE v23[32]; // [rsp+80h] [rbp-21h] BYREF
  _BYTE v24[56]; // [rsp+A0h] [rbp-1h] BYREF
  struct DXGCONTEXT *v25; // [rsp+F8h] [rbp+57h] BYREF

  v19 = a1;
  v20 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
  if ( *(_DWORD *)(a1 + 176) == 1 )
  {
    Current = DXGPROCESS::GetCurrent();
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v21, a2, Current, &v25, 0);
    v12 = v25;
    if ( v25 )
    {
      v13 = *(_QWORD *)(a1 + 2288);
      v17[0] = 0LL;
      v17[1] = (struct _SLIST_ENTRY *)v13;
      CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v17);
      v15 = v17[0];
      if ( v17[0] )
      {
        HIDWORD(v17[0][7].Next) = -1;
        *((_QWORD *)&v15[6].Next + 1) = a5;
        *((_QWORD *)&v15[1].Next + 1) = a6;
        v15->Next = a3;
        v15[6].Next = a4;
        *((_QWORD *)&v15[26].Next + 1) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 80LL) + 128LL);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v22, *((_QWORD *)v12 + 2), 2LL, v14, 0);
        v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v22);
        if ( v10 >= 0 )
          v10 = (*(__int64 (__fastcall **)(_QWORD, struct _SLIST_ENTRY *))(*(_QWORD *)(*(_QWORD *)(v13 + 408) + 8LL)
                                                                         + 344LL))(
                  *((_QWORD *)v12 + 29),
                  v15);
        COREACCESS::~COREACCESS((COREACCESS *)v24);
        COREACCESS::~COREACCESS((COREACCESS *)v23);
      }
      else
      {
        v10 = -1073741801;
      }
      CVidSchSubmitData::~CVidSchSubmitData(v17);
    }
    else
    {
      v10 = -1073741811;
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v21);
  }
  else
  {
    v10 = -1073741130;
  }
  if ( v20 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
  return (unsigned int)v10;
}
