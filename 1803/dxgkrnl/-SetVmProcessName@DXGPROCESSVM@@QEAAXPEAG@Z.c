/*
 * XREFs of ?SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z @ 0x1C01B7D84
 * Callers:
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017E080 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 */

void __fastcall DXGPROCESSVM::SetVmProcessName(DXGPROCESSVM *this, unsigned __int16 *a2)
{
  __int64 v3; // rbx
  int v5; // ebp
  SIZE_T v6; // rax
  PVOID v7; // rax
  size_t v8; // rbx

  a2[260] = 0;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( !*((_QWORD *)this + 61) )
  {
    v5 = v3 + 1;
    v6 = 2LL * (unsigned int)(v3 + 1);
    if ( !is_mul_ok((unsigned int)(v3 + 1), 2uLL) )
      v6 = -1LL;
    v7 = operator new[](v6, 0x4B677844u, PagedPool);
    *((_QWORD *)this + 61) = v7;
    if ( v7 )
    {
      v8 = 2LL * (unsigned int)v3;
      memmove(v7, a2, v8);
      *(_WORD *)(v8 + *((_QWORD *)this + 61)) = 0;
      *((_DWORD *)this + 124) = v5;
    }
  }
}
