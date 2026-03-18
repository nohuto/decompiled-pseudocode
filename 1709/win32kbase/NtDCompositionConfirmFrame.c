/*
 * XREFs of NtDCompositionConfirmFrame @ 0x1C0036EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0034640 (-ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0034998 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C0035174 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionConfirmFrame(__int64 a1, __int64 *a2)
{
  DirectComposition::CConnection *v3; // rdi
  __int64 v4; // rsi
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v6; // rbx
  volatile signed __int32 *v7; // rax
  int v8; // ebx
  volatile signed __int32 *v9; // rsi
  int v10; // r14d
  char *v11; // rbx
  volatile signed __int32 *i; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  volatile signed __int32 *j; // rbx
  __int64 **v16; // rdi
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 *v20; // rbx
  signed int v21; // [rsp+20h] [rbp-38h]
  __int64 v22; // [rsp+28h] [rbp-30h]
  DirectComposition::CConnection *v23; // [rsp+70h] [rbp+18h]
  DirectComposition::CCompositionFrame *v24; // [rsp+78h] [rbp+20h]

  v3 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v22 = *a2;
    v21 = *a2 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v21 = -1073741811;
  }
  if ( v21 >= 0 )
  {
    KeEnterCriticalRegion();
    v4 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( CurrentProcessWin32Process )
      v4 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v4 )
    {
      v6 = *(struct _ERESOURCE **)(v4 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v6, 1u);
      v7 = *(volatile signed __int32 **)(v4 + 24);
      if ( v7 && a1 == *(_QWORD *)(v4 + 16) )
      {
        _InterlockedIncrement(v7);
        v3 = *(DirectComposition::CConnection **)(v4 + 24);
        v23 = v3;
        v8 = 0;
      }
      else
      {
        v8 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v4 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v8 = -1073741823;
    }
    v21 = v8;
    if ( v8 >= 0 )
    {
      v9 = 0LL;
      v10 = -1073741275;
      v24 = 0LL;
      v11 = (char *)v3 + 200;
      ExAcquirePushLockSharedEx((char *)v3 + 200, 0LL);
      *((_BYTE *)v3 + 208) = 0;
      for ( i = (volatile signed __int32 *)*((_QWORD *)v3 + 24);
            i != (volatile signed __int32 *)((char *)v3 + 184);
            i = (volatile signed __int32 *)*((_QWORD *)i + 1) )
      {
        if ( *((_QWORD *)i + 8) == v22 )
        {
          _InterlockedIncrement(i - 2);
          v9 = i - 2;
          v24 = (DirectComposition::CCompositionFrame *)(i - 2);
          v10 = 0;
          v3 = v23;
          break;
        }
      }
      if ( v11[8] )
        ExReleasePushLockExclusiveEx(v11, 0LL);
      else
        ExReleasePushLockSharedEx(v11, 0LL);
      v21 = v10;
      if ( v10 >= 0 )
      {
        *((_DWORD *)v9 + 20) = 1;
        for ( j = (volatile signed __int32 *)*((_QWORD *)v9 + 18); j != v9 + 36; j = *(volatile signed __int32 **)j )
          _guard_dispatch_icall_fptr();
        v16 = (__int64 **)(v9 + 40);
        v17 = (__int64 *)*((_QWORD *)v9 + 20);
        v18 = *v17;
        if ( (volatile signed __int32 *)v17[1] != v9 + 40 || *(__int64 **)(v18 + 8) != v17 )
          __fastfail(3u);
        while ( 1 )
        {
          *v16 = (__int64 *)v18;
          *(_QWORD *)(v18 + 8) = v16;
          if ( v17 == (__int64 *)v16 )
            break;
          v20 = v17 - 5;
          _guard_dispatch_icall_fptr();
          ObfDereferenceObject(v20);
          v17 = *v16;
          v18 = **v16;
          if ( (__int64 **)(*v16)[1] != v16 || *(__int64 **)(v18 + 8) != v17 )
            __fastfail(3u);
        }
        if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
        {
          if ( *((_DWORD *)v9 + 20) != 3 )
            DirectComposition::CCompositionFrame::Discard(v24, v13);
          Win32FreePool(v24, v13, v14);
        }
        v3 = v23;
        DirectComposition::CConnection::ConfirmFrame(v23);
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'(v23);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v21;
}
