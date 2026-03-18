/*
 * XREFs of ?EnsureTokenQueue@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x1C000593C
 * Callers:
 *     ?EnsureTokenQueueForPresent@CTokenManager@@SAJPEAUCompositionSurfaceObject@@@Z @ 0x1C00058D8 (-EnsureTokenQueueForPresent@CTokenManager@@SAJPEAUCompositionSurfaceObject@@@Z.c)
 *     ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x1C00059FC (-AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 */

__int64 __fastcall CTokenManager::EnsureTokenQueue(
        CTokenManager *this,
        struct CompositionSurfaceObject *a2,
        struct CTokenManager::TokenQueueTableEntry **a3)
{
  struct _RTL_GENERIC_TABLE *v3; // rbp
  unsigned int v5; // ebx
  _QWORD *inserted; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 128);
  v10[0] = a2;
  v5 = 0;
  v10[1] = 0LL;
  inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 128), v10, 0x10u, &v11);
  if ( inserted )
  {
    if ( v11 )
    {
      v8 = Win32AllocPool(24LL, 1903447380LL);
      v9 = v8;
      if ( v8 )
      {
        *(_DWORD *)(v8 + 16) = 0;
        *(_QWORD *)(v8 + 8) = v8;
        *(_QWORD *)v8 = v8;
      }
      else
      {
        v9 = 0LL;
      }
      v5 = v9 == 0 ? 0xC0000017 : 0;
      if ( v9 )
      {
        inserted[1] = v9;
      }
      else
      {
        RtlDeleteElementGenericTable(v3, inserted);
        inserted = 0LL;
      }
    }
  }
  else
  {
    v5 = -1073741801;
  }
  if ( a3 )
    *a3 = (struct CTokenManager::TokenQueueTableEntry *)inserted;
  return v5;
}
