/*
 * XREFs of ?CreatePendingRequestWorkItems@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18003A654
 * Callers:
 *     ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@@Z @ 0x18003A918 (-Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnfo.c)
 * Callees:
 *     <none>
 */

int __fastcall ExecutionModel::ResourceManager::CreatePendingRequestWorkItems(ExecutionModel::ResourceManager *this)
{
  __int64 *v1; // rdi
  int v3; // eax
  __int64 v4; // r8
  int v6; // [rsp+20h] [rbp-50h] BYREF
  __int64 v7; // [rsp+28h] [rbp-48h]
  __int64 v8; // [rsp+30h] [rbp-40h]
  __int64 v9; // [rsp+38h] [rbp-38h]
  __int128 v10; // [rsp+40h] [rbp-30h]
  __int64 v11; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+5Ch] [rbp-14h]
  int v14; // [rsp+60h] [rbp-10h]

  v6 = 3;
  v1 = (__int64 *)((char *)this + 160);
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v13 = 1;
  v14 = 72;
  v3 = TpAllocCleanupGroup((char *)this + 160);
  if ( v3 >= 0 )
  {
    v4 = *((_QWORD *)this + 6);
    v8 = *v1;
    v9 = 0LL;
    v3 = TpAllocWork(
           (char *)this + 168,
           ExecutionModel::ResourceManager::CheckPendingRequestsThreadpoolCallback,
           v4,
           &v6);
    if ( v3 >= 0 )
    {
      v3 = TpAllocWork(
             (char *)this + 176,
             ExecutionModel::ResourceManager::CheckPendingRequestsThreadpoolCallback,
             *((_QWORD *)this + 5),
             &v6);
      if ( v3 >= 0 )
        v3 = 0;
    }
  }
  return v3 | 0x10000000;
}
