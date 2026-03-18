/*
 * XREFs of ??$ProcessSysMemAttributes@U_DXGK_ALLOCATIONINFO@@@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C018234C
 * Callers:
 *     ??$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C0096150 (--$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall ProcessSysMemAttributes<_DXGK_ALLOCATIONINFO>(PVOID BaseAddress, unsigned int a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v4; // ebx
  SIZE_T v7; // rax
  __int64 v8; // rcx
  PVOID v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbp
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  ULONG_PTR ReturnLength; // [rsp+50h] [rbp+8h] BYREF

  ReturnLength = 0LL;
  v3 = a2;
  v4 = a2 >> 12;
  v7 = 48LL * (a2 >> 12);
  if ( !is_mul_ok(a2 >> 12, 0x30uLL) )
    v7 = -1LL;
  v9 = operator new[](v7, 0x4B677844u, PagedPool);
  if ( v9 )
  {
    memset(v9, 0, 48 * v4);
    v12 = ZwQueryVirtualMemory(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            BaseAddress,
            MemoryBasicInformation,
            v9,
            48 * v4,
            &ReturnLength);
    v11 = v12;
    if ( v12 >= 0 )
    {
      if ( *((_QWORD *)v9 + 3) == v3 )
      {
        if ( (*((_DWORD *)v9 + 10) & 0x800000) == 0 )
        {
          if ( (*((_DWORD *)v9 + 9) & 0x600) != 0 )
            *(_DWORD *)(a3 + 64) &= ~4u;
          else
            *(_DWORD *)(a3 + 64) |= 4u;
          if ( (*((_DWORD *)v9 + 10) & 0x20400000) != 0 )
          {
            v15 = *(_DWORD *)(a3 + 12);
            if ( !v15 || (_WORD)v15 )
              *(_DWORD *)(a3 + 12) = 0x10000;
          }
          goto LABEL_19;
        }
        LODWORD(v11) = -1073741811;
        v14 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v14 + 24) = -1073741811LL;
        *(_QWORD *)(v14 + 32) = 3620LL;
      }
      else
      {
        LODWORD(v11) = -1073741811;
        v14 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v14 + 24) = -1073741811LL;
        *(_QWORD *)(v14 + 32) = 3608LL;
      }
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v14 + 24) = v11;
      *(_QWORD *)(v14 + 32) = 3601LL;
    }
    WdLogEvent5_WdError(v14);
LABEL_19:
    ExFreePoolWithTag(v9, 0);
    return (unsigned int)v11;
  }
  v10 = WdLogNewEntry5_WdLowResource(v8);
  *(_QWORD *)(v10 + 24) = 3584LL;
  WdLogEvent5_WdLowResource(v10);
  LODWORD(v11) = -1073741801;
  return (unsigned int)v11;
}
