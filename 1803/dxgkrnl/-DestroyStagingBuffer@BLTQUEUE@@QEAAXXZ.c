/*
 * XREFs of ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C01D4750
 * Callers:
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01D5160 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C01D63B4 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 * Callees:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0004BC4 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F2480 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

void __fastcall BLTQUEUE::DestroyStagingBuffer(BLTQUEUE *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi
  __int64 v4; // rcx
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // r10
  int v9; // edx
  struct DXGRESOURCE *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // edx
  DXGDEVICESYNCOBJECT *v15; // rcx
  _BYTE v16[24]; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  v1 = *((_QWORD *)this + 25);
  if ( !v1 )
    goto LABEL_22;
  v3 = *(_QWORD *)(v1 + 40);
  KeStackAttachProcess(*(PRKPROCESS *)(v3 + 56), &ApcState);
  *(_BYTE *)(*((_QWORD *)this + 25) + 1745LL) = 1;
  if ( *((_DWORD *)this + 660) )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v16, (struct _KTHREAD **)v3);
    v5 = *((_DWORD *)this + 660);
    v6 = *(_DWORD *)(v3 + 248);
    v7 = (v5 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v7 < v6
      && (v8 = *(_QWORD *)(v3 + 232),
          v4 = (v5 >> 25) & 0x60,
          v9 = *(_DWORD *)(v8 + 16 * v7 + 8),
          ((v5 >> 25) & 0x60) == (*(_BYTE *)(v8 + 16 * v7 + 8) & 0x60))
      && (v9 & 0x2000) == 0
      && (v9 & 0x1F) == 4 )
    {
      v10 = *(struct DXGRESOURCE **)(v8 + 16LL * (unsigned int)v7);
      if ( v10 )
        goto LABEL_11;
    }
    else
    {
      v10 = 0LL;
    }
    v11 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v11 + 24) = 3653LL;
    WdLogEvent5_WdAssertion(v11);
    v5 = *((_DWORD *)this + 660);
    v6 = *(_DWORD *)(v3 + 248);
LABEL_11:
    v12 = (v5 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v12 < v6 )
    {
      v13 = *(_QWORD *)(v3 + 232);
      v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
      if ( ((v5 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60) && (v14 & 0x2000) == 0 && (v14 & 0x1F) != 0 )
        *(_DWORD *)(v13 + 16LL * ((v5 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
    DXGDEVICE::DestroyAllocationInternal(*((DXGDEVICE **)this + 25), 0, 0LL, v10, 0LL, DXGDEVICE::DestroyFlagsDefault);
  }
  if ( *((_DWORD *)this + 666) )
  {
    v15 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 334);
    if ( v15 )
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v15);
    *((_DWORD *)this + 666) = 0;
    *((_QWORD *)this + 334) = 0LL;
  }
  *(_BYTE *)(*((_QWORD *)this + 25) + 1745LL) = 0;
  KeUnstackDetachProcess(&ApcState);
LABEL_22:
  *((_QWORD *)this + 330) = 0LL;
  *((_QWORD *)this + 329) = 0LL;
  *((_QWORD *)this + 331) = 0LL;
  *((_QWORD *)this + 332) = 0LL;
}
