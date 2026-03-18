/*
 * XREFs of ?CalcAllPathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F8150
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CalcAllPathDisplayConfigBufferSizeCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // esi
  _QWORD *v9; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // edi
  __int64 v14; // rax
  void (__fastcall ***v15)(_QWORD); // rcx
  int v16; // ebx
  __int64 v17; // rax
  _BYTE v18[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v19[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v20[40]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v21; // [rsp+80h] [rbp+8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, a1, 0LL);
  if ( *((_QWORD *)a1 + 288) == v4 )
    goto LABEL_5;
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18);
  v8 = v5;
  if ( v5 >= 0 )
  {
    v11 = *((_QWORD *)a1 + 288);
    v12 = *(_QWORD *)(v11 + 88);
    v13 = *(_DWORD *)(v11 + 80);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v21, v12);
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v12 + 80) + 72LL), 1u);
    v14 = *(_QWORD *)(v12 + 80);
    a2[1] += v13 * *(_DWORD *)(v14 + 40);
    v15 = (void (__fastcall ***)(_QWORD))(v14 + 64);
    v16 = _InterlockedDecrement((volatile signed __int32 *)(v14 + 72));
    if ( v16 )
    {
      if ( v16 < 0 )
      {
        v17 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v17 + 24) = v16;
        WdLogEvent5_WdError(v17);
      }
    }
    else if ( v14 != -64 )
    {
      (**v15)(v15);
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v21 + 40));
  }
  else if ( v5 == -1073741130 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
    v9[3] = a1;
    v9[4] = *((int *)a1 + 68);
    v9[5] = *((unsigned int *)a1 + 67);
LABEL_5:
    v8 = 0;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v20);
  COREACCESS::~COREACCESS((COREACCESS *)v19);
  return v8;
}
