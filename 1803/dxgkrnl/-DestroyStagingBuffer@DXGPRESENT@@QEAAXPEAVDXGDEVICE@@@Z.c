/*
 * XREFs of ?DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0107B68
 * Callers:
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00FE700 (--1DXGCONTEXT@@QEAA@XZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F2480 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C016A808 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DXGPRESENT::DestroyStagingBuffer(DXGPRESENT *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v7; // rax
  unsigned int v8; // r11d
  unsigned int v9; // r14d
  unsigned int v10; // ecx
  __int64 v11; // r8
  unsigned int v12; // edx
  int v13; // ebp
  struct DXGRESOURCE *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  _BYTE v17[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 8910LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_DWORD *)this + 105) )
  {
    Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2);
    if ( !Current )
    {
      v7 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v7 + 24) = 8920LL;
      WdLogEvent5_WdAssertion(v7);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v17,
      (struct _KTHREAD **)Current);
    v8 = *((_DWORD *)this + 105);
    v9 = *((_DWORD *)Current + 62);
    v10 = (v8 >> 6) & 0xFFFFFF;
    if ( v10 < v9
      && (v11 = *((_QWORD *)Current + 29), v12 = *(_DWORD *)(v11 + 16LL * v10 + 8),
                                           v13 = (v12 >> 5) & 3,
                                           v8 >> 30 == v13)
      && (v12 & 0x2000) == 0
      && (v12 & 0x1F) == 4 )
    {
      v14 = *(struct DXGRESOURCE **)(v11 + 16LL * v10);
      if ( v14 && v10 < v9 && v8 >> 30 == v13 && (v12 & 0x2000) == 0 && (v12 & 0x1F) != 0 )
        *(_DWORD *)(v11 + 16LL * ((v8 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    else
    {
      v14 = 0LL;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
    if ( v14 )
    {
      if ( *((_DWORD *)a2 + 106) == 4 )
        DXGDEVICE::DestroyClientResource(a2, v14);
      else
        DXGDEVICE::DestroyAllocationInternal(a2, 0, 0LL, v14, 0LL, DXGDEVICE::DestroyFlagsDefault);
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v16 + 24) = a2;
      *(_QWORD *)(v16 + 32) = *((unsigned int *)this + 105);
      WdLogEvent5_WdError(v16);
    }
    *((_DWORD *)this + 105) = 0;
    *((_DWORD *)this + 104) = 0;
  }
}
