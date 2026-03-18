/*
 * XREFs of NtDCompositionBeginFrame @ 0x1C0013EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00146EC (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C0015964 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C0015ACC (-RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z.c)
 *     Template_xq @ 0x1C00DE128 (Template_xq.c)
 */

__int64 __fastcall NtDCompositionBeginFrame(__int64 a1, __int128 *a2, unsigned __int64 *a3)
{
  DirectComposition::CConnection *v5; // rdi
  unsigned int v6; // edx
  __int64 v7; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _ERESOURCE *v11; // rbx
  volatile signed __int32 *v12; // rax
  int v13; // ebx
  int v15; // [rsp+30h] [rbp-98h]
  __int128 v16; // [rsp+38h] [rbp-90h] BYREF
  __int128 v17; // [rsp+48h] [rbp-80h]
  __int128 v18; // [rsp+58h] [rbp-70h]
  __int128 v19; // [rsp+68h] [rbp-60h]
  __int128 v20; // [rsp+78h] [rbp-50h]
  __int128 v21; // [rsp+88h] [rbp-40h]
  unsigned __int64 v22; // [rsp+D8h] [rbp+10h] BYREF
  unsigned __int64 *v23; // [rsp+E0h] [rbp+18h]
  DirectComposition::CConnection *v24; // [rsp+E8h] [rbp+20h]

  v23 = a3;
  v5 = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  if ( a2 )
  {
    if ( a2 + 3 < a2 || (unsigned __int64)(a2 + 3) > MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v19 = *a2;
    v20 = a2[1];
    v21 = a2[2];
    v16 = v19;
    v17 = v20;
    v18 = v21;
    v15 = 0;
  }
  else
  {
    v15 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v15 >= 0 )
  {
    v7 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( CurrentProcessWin32Process )
      v7 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v7 )
    {
      v11 = *(struct _ERESOURCE **)(v7 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v11, 1u);
      v12 = *(volatile signed __int32 **)(v7 + 24);
      if ( v12 && a1 == *(_QWORD *)(v7 + 16) )
      {
        _InterlockedIncrement(v12);
        v5 = *(DirectComposition::CConnection **)(v7 + 24);
        v24 = v5;
        v13 = 0;
      }
      else
      {
        v13 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v7 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v13 = -1073741823;
    }
    v15 = v13;
    if ( v13 >= 0 )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
        Template_xq(v9, &DCompBeginFrameEvent, v10, a1, v17);
      v15 = DirectComposition::CConnection::BeginFrame(v5, (const struct COMPOSITION_FRAME_INFO *)&v16, &v22);
    }
  }
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = v22;
  }
  else
  {
    v15 = -1073741811;
  }
  if ( v15 < 0 )
  {
    v6 = v22;
    if ( v22 )
      DirectComposition::CConnection::RemoveCompositionFrame(v5, v22);
  }
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
    DirectComposition::CConnection::`scalar deleting destructor'(v24, v6);
  KeLeaveCriticalRegion();
  return (unsigned int)v15;
}
