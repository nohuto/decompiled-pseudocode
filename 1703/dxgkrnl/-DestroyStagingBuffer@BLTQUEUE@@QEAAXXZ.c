/*
 * XREFs of ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C01B4380
 * Callers:
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4C30 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C01B5DFC (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C000E090 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00CA174 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

void __fastcall BLTQUEUE::DestroyStagingBuffer(BLTQUEUE *this)
{
  __int64 v1; // rax
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGRESOURCE *v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // edx
  DXGDEVICESYNCOBJECT *v16; // rcx
  _BYTE v17[24]; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  v1 = *((_QWORD *)this + 25);
  if ( !v1 )
    goto LABEL_23;
  v3 = *(_QWORD *)(v1 + 40);
  KeStackAttachProcess(*(PRKPROCESS *)(v3 + 48), &ApcState);
  *(_BYTE *)(*((_QWORD *)this + 25) + 1857LL) = 1;
  if ( *((_DWORD *)this + 660) )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v17,
      (struct DXGPROCESS *)v3,
      v4,
      v5);
    v8 = *((unsigned int *)this + 660);
    v9 = (*((_DWORD *)this + 660) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v9 < *(_DWORD *)(v3 + 208)
      && (v7 = *(_QWORD *)(v3 + 192),
          v8 = ((unsigned int)v8 >> 26) & 0x30,
          v6 = *(unsigned int *)(v7 + 16LL * (unsigned int)v9 + 8),
          (_BYTE)v8 == (*(_BYTE *)(v7 + 16LL * (unsigned int)v9 + 8) & 0x30))
      && (v6 & 0x1000) == 0
      && (v6 & 0xF) != 0
      && (*(_BYTE *)(v7 + 16LL * (unsigned int)v9 + 8) & 0xF) == 4 )
    {
      v10 = *(struct DXGRESOURCE **)(v7 + 16LL * (unsigned int)v9);
      if ( v10 )
        goto LABEL_12;
    }
    else
    {
      v10 = 0LL;
    }
    v11 = WdLogNewEntry5_WdAssertion(v9, v8, v6, v7);
    *(_QWORD *)(v11 + 24) = 3653LL;
    WdLogEvent5_WdAssertion(v11);
LABEL_12:
    v12 = *((_DWORD *)this + 660);
    v13 = (v12 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v13 < *(_DWORD *)(v3 + 208) )
    {
      v14 = *(_QWORD *)(v3 + 192);
      v15 = *(_DWORD *)(v14 + 16 * v13 + 8);
      if ( ((v12 >> 26) & 0x30) == (*(_BYTE *)(v14 + 16 * v13 + 8) & 0x30) && (v15 & 0x1000) == 0 && (v15 & 0xF) != 0 )
        *(_DWORD *)(v14 + 16LL * ((v12 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
    DXGDEVICE::DestroyAllocationInternal(*((DXGDEVICE **)this + 25), 0, 0LL, v10, 0LL, DXGDEVICE::DestroyFlagsDefault);
  }
  if ( *((_DWORD *)this + 666) )
  {
    v16 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 334);
    if ( v16 )
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v16);
    *((_DWORD *)this + 666) = 0;
    *((_QWORD *)this + 334) = 0LL;
  }
  *(_BYTE *)(*((_QWORD *)this + 25) + 1857LL) = 0;
  KeUnstackDetachProcess(&ApcState);
LABEL_23:
  *((_QWORD *)this + 330) = 0LL;
  *((_QWORD *)this + 329) = 0LL;
  *((_QWORD *)this + 331) = 0LL;
  *((_QWORD *)this + 332) = 0LL;
}
