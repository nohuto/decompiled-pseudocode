/*
 * XREFs of NtDCompositionConfirmFrame @ 0x1C00140C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00136E4 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00146EC (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0015BB0 (-ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v13; // edx
  volatile signed __int32 *j; // rbx
  __int64 **v15; // rdi
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 *v19; // rbx
  signed int v20; // [rsp+20h] [rbp-38h]
  __int64 v21; // [rsp+28h] [rbp-30h]
  DirectComposition::CConnection *v22; // [rsp+70h] [rbp+18h]
  DirectComposition::CCompositionFrame *v23; // [rsp+78h] [rbp+20h]

  v3 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v21 = *a2;
    v20 = *a2 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v20 = -1073741811;
  }
  if ( v20 >= 0 )
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
        v22 = v3;
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
    v20 = v8;
    if ( v8 >= 0 )
    {
      v9 = 0LL;
      v10 = -1073741275;
      v23 = 0LL;
      v11 = (char *)v3 + 200;
      ExAcquirePushLockSharedEx((char *)v3 + 200, 0LL);
      *((_BYTE *)v3 + 208) = 0;
      for ( i = (volatile signed __int32 *)*((_QWORD *)v3 + 24);
            i != (volatile signed __int32 *)((char *)v3 + 184);
            i = (volatile signed __int32 *)*((_QWORD *)i + 1) )
      {
        if ( *((_QWORD *)i + 8) == v21 )
        {
          _InterlockedIncrement(i - 2);
          v9 = i - 2;
          v23 = (DirectComposition::CCompositionFrame *)(i - 2);
          v10 = 0;
          v3 = v22;
          break;
        }
      }
      if ( v11[8] )
        ExReleasePushLockExclusiveEx(v11, 0LL);
      else
        ExReleasePushLockSharedEx(v11, 0LL);
      v20 = v10;
      if ( v10 >= 0 )
      {
        *((_DWORD *)v9 + 20) = 1;
        for ( j = (volatile signed __int32 *)*((_QWORD *)v9 + 18); j != v9 + 36; j = *(volatile signed __int32 **)j )
          _guard_dispatch_icall_fptr();
        v15 = (__int64 **)(v9 + 40);
        v16 = (__int64 *)*((_QWORD *)v9 + 20);
        v17 = *v16;
        if ( (volatile signed __int32 *)v16[1] != v9 + 40 || *(__int64 **)(v17 + 8) != v16 )
          __fastfail(3u);
        while ( 1 )
        {
          *v15 = (__int64 *)v17;
          *(_QWORD *)(v17 + 8) = v15;
          if ( v16 == (__int64 *)v15 )
            break;
          v19 = v16 - 5;
          _guard_dispatch_icall_fptr();
          ObfDereferenceObject(v19);
          v16 = *v15;
          v17 = **v15;
          if ( (__int64 **)(*v15)[1] != v15 || *(__int64 **)(v17 + 8) != v16 )
            __fastfail(3u);
        }
        if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
        {
          if ( *((_DWORD *)v9 + 20) != 3 )
            DirectComposition::CCompositionFrame::Discard(v23);
          Win32FreePool(v23);
        }
        v3 = v22;
        DirectComposition::CConnection::ConfirmFrame(v22);
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'(v22, v13);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v20;
}
