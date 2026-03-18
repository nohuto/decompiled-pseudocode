/*
 * XREFs of NtDCompositionBeginFrame @ 0x1C0037150
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C0034168 (-RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C003424C (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0034998 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     McTemplateK0xq @ 0x1C00E2F1C (McTemplateK0xq.c)
 */

__int64 __fastcall NtDCompositionBeginFrame(__int64 a1, __int128 *a2, unsigned __int64 *a3)
{
  DirectComposition::CConnection *v5; // rdi
  __int64 v6; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _ERESOURCE *v10; // rbx
  volatile signed __int32 *v11; // rax
  int v12; // ebx
  int v14; // [rsp+30h] [rbp-98h]
  __int128 v15; // [rsp+38h] [rbp-90h] BYREF
  __int128 v16; // [rsp+48h] [rbp-80h]
  __int128 v17; // [rsp+58h] [rbp-70h]
  __int128 v18; // [rsp+68h] [rbp-60h]
  __int128 v19; // [rsp+78h] [rbp-50h]
  __int128 v20; // [rsp+88h] [rbp-40h]
  unsigned __int64 v21; // [rsp+D8h] [rbp+10h] BYREF
  unsigned __int64 *v22; // [rsp+E0h] [rbp+18h]
  DirectComposition::CConnection *v23; // [rsp+E8h] [rbp+20h]

  v22 = a3;
  v5 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  if ( a2 )
  {
    if ( a2 + 3 < a2 || (unsigned __int64)(a2 + 3) > MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v18 = *a2;
    v19 = a2[1];
    v20 = a2[2];
    v15 = v18;
    v16 = v19;
    v17 = v20;
    v14 = 0;
  }
  else
  {
    v14 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v14 >= 0 )
  {
    v6 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( CurrentProcessWin32Process )
      v6 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v6 )
    {
      v10 = *(struct _ERESOURCE **)(v6 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v10, 1u);
      v11 = *(volatile signed __int32 **)(v6 + 24);
      if ( v11 && a1 == *(_QWORD *)(v6 + 16) )
      {
        _InterlockedIncrement(v11);
        v5 = *(DirectComposition::CConnection **)(v6 + 24);
        v23 = v5;
        v12 = 0;
      }
      else
      {
        v12 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v12 = -1073741823;
    }
    v14 = v12;
    if ( v12 >= 0 )
    {
      if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
        McTemplateK0xq(v8, &DCompBeginFrameEvent, v9, a1, v16);
      v14 = DirectComposition::CConnection::BeginFrame(v5, (const struct COMPOSITION_FRAME_INFO *)&v15, &v21);
    }
  }
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = v21;
  }
  else
  {
    v14 = -1073741811;
  }
  if ( v14 < 0 && v21 )
    DirectComposition::CConnection::RemoveCompositionFrame(v5, v21);
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
    DirectComposition::CConnection::`scalar deleting destructor'(v23);
  KeLeaveCriticalRegion();
  return (unsigned int)v14;
}
