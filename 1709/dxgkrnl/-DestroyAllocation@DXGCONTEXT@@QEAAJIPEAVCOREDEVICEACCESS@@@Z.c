/*
 * XREFs of ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B5694
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C01B5800 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009DD6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkDestroyClientAllocation @ 0x1C0184098 (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DXGCONTEXT::DestroyAllocation(DXGCONTEXT *this, __int64 a2, DXGADAPTER **a3)
{
  unsigned int v4; // esi
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v7; // rbx
  unsigned int v8; // ebp
  unsigned int v9; // ecx
  __int64 v10; // rdx
  unsigned int v11; // r8d
  int v12; // r11d
  __int64 v13; // rbx
  __int64 v15; // rcx
  _BYTE v16[32]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a2;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2);
  v7 = Current;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 176LL) != 4 )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v16, Current);
    v8 = *((_DWORD *)v7 + 60);
    v9 = (v4 >> 6) & 0xFFFFFF;
    if ( v9 < v8
      && (v10 = *((_QWORD *)v7 + 28), v11 = *(_DWORD *)(v10 + 16LL * v9 + 8), v12 = (v11 >> 5) & 3, v4 >> 30 == v12)
      && (v11 & 0x2000) == 0
      && (v11 & 0x1F) != 0
      && (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x1F) == 5 )
    {
      v13 = *(_QWORD *)(v10 + 16LL * v9);
      if ( v13 && v9 < v8 && v4 >> 30 == v12 && (v11 & 0x2000) == 0 )
        *(_DWORD *)(v10 + 16LL * ((v4 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    else
    {
      v13 = 0LL;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
    if ( !v13 )
      return 3221225485LL;
    v15 = *(unsigned int *)(*((_QWORD *)this + 2) + 408LL);
    if ( (_DWORD)v15 == 4 )
      DxgkDestroyClientAllocation(v15, *((_QWORD *)this + 2), 0, 0LL, *(struct DXGALLOCATION ***)(v13 + 40));
    else
      DXGDEVICE::DestroyAllocationInternal(
        *((DXGDEVICE **)this + 2),
        0,
        0LL,
        *(struct DXGRESOURCE **)(v13 + 40),
        a3,
        DXGDEVICE::DestroyFlagsDefault);
  }
  return 0LL;
}
