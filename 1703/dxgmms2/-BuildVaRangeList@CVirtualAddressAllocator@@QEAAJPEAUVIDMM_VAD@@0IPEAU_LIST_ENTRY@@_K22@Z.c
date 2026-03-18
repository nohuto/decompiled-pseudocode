/*
 * XREFs of ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x1C009B6B0
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0095F3C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001F5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 */

__int64 __fastcall CVirtualAddressAllocator::BuildVaRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        struct VIDMM_VAD *a3,
        unsigned int a4,
        struct _LIST_ENTRY *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  __int64 v9; // rdi
  __int64 v11; // rcx
  char *v12; // rdi
  unsigned int v13; // esi
  char *v14; // rax
  struct _LIST_ENTRY *v15; // rbp
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r15
  _QWORD *v18; // rbx
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  int v22; // r11d
  __int64 v23; // r9
  __int64 v24; // r10
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v26; // rbx
  _BYTE v28[72]; // [rsp+20h] [rbp-48h] BYREF
  char v30; // [rsp+88h] [rbp+20h]
  unsigned __int64 v31; // [rsp+98h] [rbp+30h]
  unsigned __int64 v32; // [rsp+A8h] [rbp+40h]

  v30 = a4;
  v9 = a4;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v28, this + 7);
  v32 = a8 - a6;
  v11 = (unsigned int)v9;
  v12 = (char *)*((_QWORD *)a2 + 3 * v9 + 12);
  v13 = 0;
  v14 = (char *)a2 + 24 * v11 + 96;
  v31 = (unsigned __int64)v14;
  if ( v12 != v14 )
  {
    v15 = a5;
    do
    {
      v16 = *((_QWORD *)v12 + 11);
      if ( a7 <= v16 )
        break;
      v17 = *((_QWORD *)v12 + 12);
      if ( a6 < v17 )
      {
        if ( a6 > v16 )
          v16 = a6;
        if ( a7 < v17 )
          v17 = a7;
        v18 = operator new[](0x88uLL, 0x39346956u, PagedPool);
        if ( v18 )
        {
          v19 = v16 + *((_QWORD *)v12 + 8) - *((_QWORD *)v12 + 11);
          v20 = *((_QWORD *)v12 + 9);
          v21 = *((_QWORD *)v12 + 10);
          v22 = *((_DWORD *)v12 + 14);
          v23 = *((_QWORD *)v12 + 13);
          v24 = *((_QWORD *)v12 + 14);
          v18[7] = *((_QWORD *)v12 + 6);
          v18[11] = v21;
          *((_DWORD *)v18 + 16) = 0;
          v18[9] = v19;
          v18[12] = v16 + v32;
          v18[10] = v20;
          v18[13] = v17 + v32;
          LODWORD(v21) = v18[8] & 0xFFFFFC00;
          *v18 = a3;
          v18[14] = v23;
          *((_DWORD *)v18 + 16) = (v22 << 28 >> 28) & 0xF | v21 | (16 * (v30 & 0x3F));
          v18[15] = v24;
          *((_DWORD *)v18 + 32) = 1;
          memset(v18 + 1, 0, 0x30uLL);
          v15 = a5;
        }
        else
        {
          v18 = 0LL;
        }
        if ( !v18 )
        {
          v13 = -1073741801;
          break;
        }
        Blink = v15->Blink;
        v26 = (struct _LIST_ENTRY *)(v18 + 1);
        if ( Blink->Flink != v15 )
          __fastfail(3u);
        v26->Blink = Blink;
        v26->Flink = v15;
        Blink->Flink = v26;
        v14 = (char *)v31;
        v15->Blink = v26;
      }
      v12 = *(char **)v12;
    }
    while ( v12 != v14 );
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
  return v13;
}
