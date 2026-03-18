/*
 * XREFs of ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C019ED28
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C019EEA8 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00CA174 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     DxgkDestroyClientAllocation @ 0x1C017FFCC (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DXGCONTEXT::DestroyAllocation(DXGCONTEXT *this, unsigned int a2, PERESOURCE **a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v7; // r8
  struct DXGPROCESS *v8; // rsi
  __int64 v9; // r9
  unsigned int v10; // ecx
  __int64 v11; // r8
  unsigned int v12; // edx
  __int64 v13; // rbx
  unsigned int v14; // ecx
  __int64 v16; // rcx
  _BYTE v17[40]; // [rsp+30h] [rbp-28h] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)this);
  v8 = Current;
  v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  if ( *(_DWORD *)(v9 + 176) != 4 )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v17, Current, v7, v9);
    v10 = (a2 >> 6) & 0xFFFFFF;
    if ( v10 < *((_DWORD *)v8 + 52)
      && (v11 = *((_QWORD *)v8 + 24), v12 = *(_DWORD *)(v11 + 16LL * v10 + 8), a2 >> 30 == ((v12 >> 4) & 3))
      && (v12 & 0x1000) == 0
      && (v12 & 0xF) != 0
      && (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0xF) == 5 )
    {
      v13 = *(_QWORD *)(v11 + 16LL * v10);
      if ( v13 )
      {
        if ( v10 < *((_DWORD *)v8 + 52) )
        {
          v14 = *(_DWORD *)(v11 + 16LL * v10 + 8);
          if ( a2 >> 30 == ((v14 >> 4) & 3) && (v14 & 0x1000) == 0 && (v14 & 0xF) != 0 )
            *(_DWORD *)(v11 + 16 * (((unsigned __int64)a2 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
        }
      }
    }
    else
    {
      v13 = 0LL;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
    if ( !v13 )
      return 3221225485LL;
    v16 = *(unsigned int *)(*((_QWORD *)this + 2) + 408LL);
    if ( (_DWORD)v16 == 4 )
      DxgkDestroyClientAllocation(v16, *((_QWORD *)this + 2), 0, 0LL, *(struct DXGALLOCATION ***)(v13 + 40));
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
