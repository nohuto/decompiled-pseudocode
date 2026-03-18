/*
 * XREFs of NtDCompositionGetConnectionBatch @ 0x1C0036640
 * Callers:
 *     <none>
 * Callees:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C003347C (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0034998 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C0035174 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C013F3C0 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 */

__int64 __fastcall NtDCompositionGetConnectionBatch(__int64 a1, unsigned __int64 *a2, struct UCE_RDP_HEADER **a3)
{
  unsigned __int64 v4; // r14
  _QWORD *v5; // rdx
  __int64 v6; // rsi
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v8; // rbx
  volatile signed __int32 *v9; // rax
  int v10; // ebx
  int Batches; // ebx
  volatile signed __int32 *v12; // rsi
  char *v13; // r12
  volatile signed __int32 *i; // rdx
  struct _ERESOURCE *v15; // rbx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  int v21; // [rsp+20h] [rbp-58h]
  unsigned __int64 v22; // [rsp+28h] [rbp-50h]
  DirectComposition::CCompositionFrame *v23; // [rsp+30h] [rbp-48h]
  struct UCE_RDP_HEADER *v24[8]; // [rsp+38h] [rbp-40h] BYREF
  DirectComposition::CConnection *v26; // [rsp+98h] [rbp+20h]

  v4 = 0LL;
  v22 = 0LL;
  v24[0] = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v22 = *a2;
    v5 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v5 = (_QWORD *)MmUserProbeAddress;
    *v5 = *v5;
    v21 = 0;
    v4 = v22;
  }
  else
  {
    v21 = -1073741811;
  }
  if ( v21 >= 0 )
  {
    KeEnterCriticalRegion();
    v6 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( CurrentProcessWin32Process )
      v6 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v6 )
    {
      v8 = *(struct _ERESOURCE **)(v6 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v8, 1u);
      v9 = *(volatile signed __int32 **)(v6 + 24);
      if ( v9 && a1 == *(_QWORD *)(v6 + 16) )
      {
        _InterlockedAdd(v9, 1u);
        v26 = *(DirectComposition::CConnection **)(v6 + 24);
        v10 = 0;
        v4 = v22;
      }
      else
      {
        v10 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v10 = -1073741823;
    }
    v21 = v10;
    if ( v10 >= 0 )
    {
      if ( v4 )
      {
        Batches = -1073741275;
        v12 = 0LL;
        v23 = 0LL;
        v13 = (char *)v26 + 200;
        ExAcquirePushLockSharedEx((char *)v26 + 200, 0LL);
        *((_BYTE *)v26 + 208) = 0;
        for ( i = (volatile signed __int32 *)*((_QWORD *)v26 + 24);
              i != (volatile signed __int32 *)((char *)v26 + 184);
              i = (volatile signed __int32 *)*((_QWORD *)i + 1) )
        {
          if ( *((_QWORD *)i + 8) == v4 )
          {
            _InterlockedAdd(i - 2, 1u);
            v12 = i - 2;
            v23 = (DirectComposition::CCompositionFrame *)(i - 2);
            Batches = 0;
            break;
          }
        }
        if ( *((_BYTE *)v26 + 208) )
          ExReleasePushLockExclusiveEx(v13, 0LL);
        else
          ExReleasePushLockSharedEx(v13, 0LL);
        if ( Batches >= 0 )
        {
          v15 = (struct _ERESOURCE *)*((_QWORD *)v26 + 1);
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v15, 1u);
          if ( *((_DWORD *)v26 + 37) )
          {
            v12 = (volatile signed __int32 *)v23;
            if ( _InterlockedCompareExchange((volatile signed __int32 *)v26 + 36, 1, 2) == 2 )
            {
              v16 = *((_QWORD *)v23 + 11);
              *((_QWORD *)v23 + 11) = 0LL;
              v17 = (_QWORD *)*((_QWORD *)v26 + 14);
              if ( v17 )
              {
                while ( *v17 )
                  v17 = (_QWORD *)*v17;
                *v17 = v16;
              }
              else
              {
                *((_QWORD *)v26 + 14) = v16;
              }
              Batches = DirectComposition::CConnection::RetrieveBatches(v26, v22, v24);
            }
            else
            {
              Batches = -1073740024;
            }
          }
          else
          {
            Batches = -1073741300;
          }
          ExReleaseResourceLite(*((PERESOURCE *)v26 + 1));
          KeLeaveCriticalRegion();
          if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
          {
            if ( v23 )
            {
              if ( *((_DWORD *)v23 + 20) != 3 )
                DirectComposition::CCompositionFrame::Discard(v23, v18);
              Win32FreePool(v23, v18, v19);
            }
          }
        }
        v21 = Batches;
      }
      else
      {
        Batches = DirectComposition::CConnection::GetBatches(v26, v24);
        v21 = Batches;
      }
      if ( Batches >= 0 )
        *a3 = v24[0];
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v26, 0xFFFFFFFF) == 1 && v26 )
        DirectComposition::CConnection::`scalar deleting destructor'(v26);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v21;
}
