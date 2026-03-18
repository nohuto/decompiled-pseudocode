/*
 * XREFs of NtDCompositionGetConnectionBatch @ 0x1C0014320
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00146EC (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0015DC0 (-GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C013FF90 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 */

__int64 __fastcall NtDCompositionGetConnectionBatch(__int64 a1, unsigned __int64 *a2, struct UCE_RDP_HEADER **a3)
{
  unsigned __int64 v5; // r14
  _QWORD *v6; // rdx
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v9; // rbx
  volatile signed __int32 *v10; // rax
  DirectComposition::CConnection *v11; // rbx
  int v12; // esi
  int BatchesFromFrame; // eax
  unsigned int v14; // edx
  int v16; // [rsp+20h] [rbp-38h]
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]
  struct UCE_RDP_HEADER *v18; // [rsp+68h] [rbp+10h] BYREF
  struct UCE_RDP_HEADER **v19; // [rsp+70h] [rbp+18h]
  DirectComposition::CConnection *v20; // [rsp+78h] [rbp+20h]

  v19 = a3;
  v5 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v17 = *a2;
    v6 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v6 = (_QWORD *)MmUserProbeAddress;
    *v6 = *v6;
    v16 = 0;
    v5 = v17;
  }
  else
  {
    v16 = -1073741811;
  }
  if ( v16 >= 0 )
  {
    KeEnterCriticalRegion();
    v7 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( CurrentProcessWin32Process )
      v7 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v7 )
    {
      v9 = *(struct _ERESOURCE **)(v7 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v9, 1u);
      v10 = *(volatile signed __int32 **)(v7 + 24);
      if ( v10 && a1 == *(_QWORD *)(v7 + 16) )
      {
        _InterlockedIncrement(v10);
        v11 = *(DirectComposition::CConnection **)(v7 + 24);
        v20 = v11;
        v12 = 0;
        v5 = v17;
      }
      else
      {
        v12 = -1073741790;
        v11 = v20;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v7 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v12 = -1073741823;
      v11 = v20;
    }
    v16 = v12;
    if ( v12 >= 0 )
    {
      if ( v5 )
        BatchesFromFrame = DirectComposition::CConnection::GetBatchesFromFrame(v11, v5, &v18);
      else
        BatchesFromFrame = DirectComposition::CConnection::GetBatches(v11, &v18);
      v16 = BatchesFromFrame;
      if ( BatchesFromFrame >= 0 )
        *a3 = v18;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 && v20 )
        DirectComposition::CConnection::`scalar deleting destructor'(v20, v14);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v16;
}
