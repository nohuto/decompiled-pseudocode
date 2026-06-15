/*
 * XREFs of ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJ_K0@Z @ 0x14005DBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AE50 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14005AEE8 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z @ 0x14005CC1C (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z.c)
 *     ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x14005DF1C (-SetMapSize@CSparseIndexMapRT@@QEAAJI@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientEndpoint::Initialize(
        CSpatialCrossProcessClientEndpoint *this,
        void *a2,
        __int64 a3)
{
  int v6; // ebx
  __int64 v8; // rcx
  unsigned __int16 v9; // ax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 880);
  v11 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  SpatialCPTraceLoggingTracer("CSpatialCrossProcessClientEndpoint::Initialize", 148);
  if ( *((_BYTE *)this - 840) )
  {
    v6 = -2005139440;
  }
  else if ( (((unsigned __int64)a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 && ((a3 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    v6 = CSpatialCrossProcessBaseEndpoint::MapCPMemory((CSpatialCrossProcessClientEndpoint *)((char *)this - 912), a2);
    if ( v6 >= 0 )
    {
      *((_QWORD *)this - 73) = a3;
      v6 = CSparseIndexMapRT::SetMapSize(
             (CSpatialCrossProcessClientEndpoint *)((char *)this + 24),
             *(_DWORD *)(*((_QWORD *)this - 4) + 524LL) + *(_DWORD *)(*((_QWORD *)this - 4) + 520LL));
      if ( v6 >= 0 )
      {
        v8 = *((_QWORD *)this - 95);
        *((_QWORD *)this - 98) = 0LL;
        *((_QWORD *)this - 100) = 0LL;
        *((float *)this - 201) = (float)*(int *)(v8 + 4);
        if ( *(_WORD *)v8 == 0xFFFE )
          v9 = *(_WORD *)(v8 + 18);
        else
          v9 = *(_WORD *)(v8 + 14);
        *((_DWORD *)this - 208) = v9;
        *((_DWORD *)this - 202) = *((_DWORD *)this - 209) * *(unsigned __int16 *)(v8 + 12);
        _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this - 4) + 72LL), 1u);
        _InterlockedExchange((volatile __int32 *)this - 210, 1);
        v6 = 0;
        goto LABEL_4;
      }
    }
  }
  else
  {
    v6 = -2147024890;
  }
  SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientEndpoint::Initialize", 197, v6);
LABEL_4:
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v6;
}
