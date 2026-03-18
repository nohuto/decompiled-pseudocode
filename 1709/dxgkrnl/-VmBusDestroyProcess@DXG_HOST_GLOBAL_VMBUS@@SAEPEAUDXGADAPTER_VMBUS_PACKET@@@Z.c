/*
 * XREFs of ?VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192E20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C0001354 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0021680 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00F27FC (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDestroyProcess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // r8
  int v5; // edx
  struct _EX_RUNDOWN_REF *v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v16[24]; // [rsp+28h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-48h] BYREF

  v1 = *((_QWORD *)a1 + 7);
  v2 = *((_QWORD *)a1 + 9);
  KeStackAttachProcess(*(PRKPROCESS *)(v1 + 48), &ApcState);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v16, (struct DXGPROCESS *)v1);
  v3 = (*(_DWORD *)(v2 + 8) >> 6) & 0xFFFFFF;
  if ( (unsigned int)v3 < *(_DWORD *)(v1 + 240)
    && (v4 = *(_QWORD *)(v1 + 224),
        v5 = *(_DWORD *)(v4 + 16 * v3 + 8),
        ((*(_DWORD *)(v2 + 8) >> 25) & 0x60) == (*(_BYTE *)(v4 + 16 * v3 + 8) & 0x60))
    && (v5 & 0x2000) == 0
    && (v5 & 0x1F) != 0
    && (*(_BYTE *)(v4 + 16LL * (unsigned int)v3 + 8) & 0x1F) == 0xC )
  {
    v6 = *(struct _EX_RUNDOWN_REF **)(v4 + 16LL * (unsigned int)v3);
    if ( v6 )
    {
      v7 = WdLogNewEntry5_WdError((*(_DWORD *)(v2 + 8) >> 25) & 0x60);
      *(_QWORD *)(v7 + 24) = *(unsigned int *)(v2 + 8);
      WdLogEvent5_WdError(v7);
      ExWaitForRundownProtectionRelease(v6 + 24);
      v8 = *(_DWORD *)(v2 + 8);
      v9 = (v8 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v9 < *(_DWORD *)(v1 + 240) )
      {
        v10 = *(_QWORD *)(v1 + 224);
        v11 = *(_DWORD *)(v10 + 16 * v9 + 8);
        if ( ((v8 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60) && (v11 & 0x2000) == 0 && (v11 & 0x1F) != 0 )
          *(_DWORD *)(v10 + 16LL * ((v8 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
  }
  else
  {
    v6 = 0LL;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  if ( v6 )
  {
    v15 = 0LL;
    CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v15, (struct DXGPROCESS *)v6);
    if ( v15 )
      DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)v6);
    CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v15);
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 24) = *(unsigned int *)(v2 + 8);
    WdLogEvent5_WdError(v13);
  }
  KeUnstackDetachProcess(&ApcState);
  return 0;
}
