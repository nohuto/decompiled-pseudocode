/*
 * XREFs of ?OnDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A5970
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_56b34956b0f210a8c55368f903dac87a_::operator() @ 0x1800A5D28 (_lambda_56b34956b0f210a8c55368f903dac87a_--operator().c)
 *     ?GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800A6340 (-GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800A6458 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     ?DeleteWorkItemsForSourceDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXPEBVSpatialInteractionSourceDevice@234@@Z @ 0x1800A67D4 (-DeleteWorkItemsForSourceDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDeviceRemoval(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        __int64 a2,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a3)
{
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v3; // rdi
  int CacheEntry; // eax
  unsigned int v7; // esi
  __int64 v8; // rdx
  char v9; // r12
  char v10; // al
  LARGE_INTEGER *v11; // rbx
  unsigned int v12; // eax
  int v13; // eax
  __int64 v14; // r14
  char *v15; // rbx
  char *v16; // rsi
  int v17; // eax
  __int64 *v18; // rsi
  __int64 *j; // rbx
  _QWORD *v20; // r14
  __int64 v21; // r9
  int v22; // eax
  __int64 **v23; // rax
  __int64 *v24; // rcx
  __int64 *i; // rax
  int v26; // eax
  volatile signed __int32 *v27; // rbx
  char v29; // [rsp+20h] [rbp-E0h]
  struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *v30[2]; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v32; // [rsp+58h] [rbp-A8h]
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v33; // [rsp+68h] [rbp-98h]
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v34; // [rsp+70h] [rbp-90h]
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v35; // [rsp+78h] [rbp-88h]
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v36; // [rsp+80h] [rbp-80h]
  __int128 v37; // [rsp+88h] [rbp-78h] BYREF
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v38; // [rsp+98h] [rbp-68h]
  char v39; // [rsp+A0h] [rbp-60h]
  _QWORD v40[8]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v41[8]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v42[15]; // [rsp+128h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]
  char v44; // [rsp+1B0h] [rbp+B0h]
  unsigned int v45; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v46; // [rsp+1C8h] [rbp+C8h]

  v45 = a2;
  v3 = (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)((char *)this - 8);
  *(_OWORD *)v30 = 0LL;
  CacheEntry = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::GetCacheEntry(
                 (char *)this - 8,
                 a2,
                 v30);
  v7 = CacheEntry;
  if ( CacheEntry < 0 )
  {
    v8 = 249LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)CacheEntry);
    goto LABEL_35;
  }
  v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))(*(_QWORD *)v30[0] + 56LL))(v30[0]);
  v10 = (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))(*(_QWORD *)v30[0] + 8LL))(v30[0]);
  v11 = (LARGE_INTEGER *)v30[0];
  v44 = v10;
  v12 = *((_DWORD *)v30[0] + 3);
  *((_BYTE *)v30[0] + 100) = 1;
  v46 = v12;
  QueryPerformanceCounter(&PerformanceCount);
  v11[30] = PerformanceCount;
  CacheEntry = (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *))(*(_QWORD *)a3 + 8LL))(a3);
  v7 = CacheEntry;
  if ( CacheEntry < 0 )
  {
    v8 = 259LL;
    goto LABEL_5;
  }
  v33 = v3;
  *(_QWORD *)&v32 = &v45;
  v38 = v3;
  *((_QWORD *)&v32 + 1) = v30;
  v34 = v3;
  v40[0] = off_1800F21E8;
  v40[1] = v3;
  v40[7] = v40;
  v37 = v32;
  v13 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
          v3,
          v30,
          v40,
          0LL);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11D,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v13);
  v14 = *(_QWORD *)a3;
  v15 = (char *)v30[0] + 224;
  v16 = (char *)v30[0] + 288;
  v29 = (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))(*(_QWORD *)v30[0] + 16LL))(v30[0]);
  v17 = (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *, __int64, _QWORD, _QWORD, char, char *, char *))(v14 + 16))(
          a3,
          5LL,
          v45,
          v46,
          v29,
          v16,
          v15);
  v7 = v17;
  if ( v17 >= 0 )
  {
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DeleteWorkItemsForSourceDevice(
      v3,
      v30[0]);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 416));
    if ( v9 )
    {
      v18 = (__int64 *)*((_QWORD *)this + 57);
      j = (__int64 *)*v18;
      while ( j != v18 )
      {
        v20 = j + 5;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)j[5] + 40LL))(j[5]) )
        {
          if ( (**(unsigned __int8 (__fastcall ***)(_QWORD))*v20)(*v20) )
          {
            if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v20 + 8LL))(*v20) )
            {
              v35 = v3;
              v41[0] = off_1800F2198;
              v41[1] = v3;
              LOBYTE(v21) = 1;
              v41[7] = v41;
              v22 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
                      v3,
                      j + 5,
                      v41,
                      v21);
              if ( v22 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x141,
                  (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevi"
                           "cecollection.cpp",
                  (const char *)(unsigned int)v22);
            }
          }
        }
        if ( !*((_BYTE *)j + 25) )
        {
          v23 = (__int64 **)j[2];
          if ( *((_BYTE *)v23 + 25) )
          {
            for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
              j = i;
            j = i;
          }
          else
          {
            v24 = *v23;
            for ( j = (__int64 *)j[2]; !*((_BYTE *)v24 + 25); v24 = (__int64 *)*v24 )
              j = v24;
          }
        }
      }
    }
    if ( v44 )
    {
      v36 = v3;
      v42[0] = off_1800F2440;
      v42[1] = v3;
      v42[7] = v42;
      v26 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
              v3,
              v30,
              v42,
              0LL);
      if ( v26 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x14E,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
          (const char *)(unsigned int)v26);
    }
    if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-416LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 416));
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x125,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v17);
  }
  v39 = 0;
  lambda_56b34956b0f210a8c55368f903dac87a_::operator()(&v37);
LABEL_35:
  v27 = (volatile signed __int32 *)v30[1];
  if ( v30[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v30[1] + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
      if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
    }
  }
  return v7;
}
