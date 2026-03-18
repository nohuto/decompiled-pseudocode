/*
 * XREFs of ?DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00BE990
 * Callers:
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00C1280 (--1DXGCONTEXT@@QEAA@XZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009DD6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C01825E8 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DXGPRESENT::DestroyStagingBuffer(DXGPRESENT *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v7; // rax
  unsigned int v8; // ebp
  unsigned int v9; // r15d
  unsigned int v10; // ecx
  __int64 v11; // rdx
  unsigned int v12; // r8d
  int v13; // r11d
  struct DXGRESOURCE *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  _BYTE v17[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 8756LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_DWORD *)this + 105) )
  {
    Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2);
    if ( !Current )
    {
      v7 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v7 + 24) = 8766LL;
      WdLogEvent5_WdAssertion(v7);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v17, Current);
    v8 = *((_DWORD *)this + 105);
    v9 = *((_DWORD *)Current + 60);
    v10 = (v8 >> 6) & 0xFFFFFF;
    if ( v10 < v9
      && (v11 = *((_QWORD *)Current + 28), v12 = *(_DWORD *)(v11 + 16LL * v10 + 8),
                                           v13 = (v12 >> 5) & 3,
                                           v8 >> 30 == v13)
      && (v12 & 0x2000) == 0
      && (v12 & 0x1F) != 0
      && (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x1F) == 4 )
    {
      v14 = *(struct DXGRESOURCE **)(v11 + 16LL * v10);
      if ( v14 && v10 < v9 && v8 >> 30 == v13 && (v12 & 0x2000) == 0 )
        *(_DWORD *)(v11 + 16LL * ((v8 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    else
    {
      v14 = 0LL;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
    if ( v14 )
    {
      if ( *((_DWORD *)a2 + 102) == 4 )
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
