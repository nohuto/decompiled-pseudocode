/*
 * XREFs of USBType1Create1MsecBuffers @ 0x1C00252C0
 * Callers:
 *     USBType1RenderCreatePin @ 0x1C00254B0 (USBType1RenderCreatePin.c)
 * Callees:
 *     USBHwAllocateAndBag @ 0x1C001FC9C (USBHwAllocateAndBag.c)
 */

__int64 __fastcall USBType1Create1MsecBuffers(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned int v5; // ecx
  void *v6; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // r15
  unsigned int v11; // ebp
  unsigned __int64 v12; // r13
  __int64 v13; // r14
  PIRP Irp; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  PVOID PoolWithTag; // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v20; // [rsp+70h] [rbp+18h]
  __int64 v21; // [rsp+78h] [rbp+20h]

  v20 = *(_QWORD **)(a1 + 16);
  v2 = v20[19];
  v3 = *(_DWORD *)(v20[18] + 220LL) & 0x3FF;
  v21 = v3;
  v4 = 0x1000uLL / (v3 + 7);
  if ( (_DWORD)v4 )
    v5 = 0xC / (unsigned int)v4 + (0xC % (unsigned int)v4 != 0);
  else
    v5 = 12;
  v6 = *(void **)(a1 + 8);
  v7 = v5 << 12;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, ((_DWORD)v7 + 6147) & 0xFFFFF000, 0x41627845u);
  v8 = (unsigned __int64)PoolWithTag;
  if ( PoolWithTag )
    v9 = USBHwAllocateAndBag(&PoolWithTag, v6);
  else
    v9 = -1073741670;
  if ( v9 >= 0 )
  {
    v10 = v2 + 136;
    v11 = 0;
    v12 = v7 + v8;
    *(_QWORD *)(v2 + 144) = v2 + 136;
    *(_QWORD *)(v2 + 136) = v2 + 136;
    v13 = v2 + 184;
    while ( v9 >= 0 )
    {
      Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v20[2] + 40LL) + 76LL), 0);
      *(_QWORD *)(v13 + 16) = Irp;
      if ( Irp )
      {
        v9 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Irp, (PFNKSFREE)IoFreeIrp);
        if ( v9 >= 0 )
        {
          *(_QWORD *)(v13 + 40) = a1;
          v15 = v21;
          *(_QWORD *)(v13 + 48) = v8;
          *(_QWORD *)(v13 + 24) = v12;
          v8 = (v15 + v8 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          if ( ((v8 ^ (v8 + v15)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
            v8 = (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          v16 = *(_QWORD **)(v2 + 144);
          v12 = (v12 + 171) & 0xFFFFFFFFFFFFFFF8uLL;
          if ( *v16 != v10 )
            __fastfail(3u);
          *(_QWORD *)v13 = v10;
          *(_QWORD *)(v13 + 8) = v16;
          *v16 = v13;
          *(_QWORD *)(v2 + 144) = v13;
        }
        else
        {
          IoFreeIrp(*(PIRP *)(v13 + 16));
        }
      }
      else
      {
        v9 = -1073741670;
      }
      ++v11;
      v13 += 56LL;
      if ( v11 >= 0xC )
      {
        if ( v9 >= 0 )
          KeInitializeSemaphore((PRKSEMAPHORE)(v2 + 152), 12, 12);
        return (unsigned int)v9;
      }
    }
  }
  return (unsigned int)v9;
}
