/*
 * XREFs of IoCreateStreamFileObjectEx2 @ 0x140422650
 * Callers:
 *     IoCreateStreamFileObjectLite @ 0x140422600 (IoCreateStreamFileObjectLite.c)
 *     IoCreateStreamFileObjectEx @ 0x140575A30 (IoCreateStreamFileObjectEx.c)
 *     IoCreateStreamFileObject @ 0x14068B710 (IoCreateStreamFileObject.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     IopGetSetSpecificExtension @ 0x140050EF0 (IopGetSetSpecificExtension.c)
 *     IopIncrementVpbRefCount @ 0x1400A9314 (IopIncrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400DB970 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1400DBA60 (IopDecrementDeviceObjectRef.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 */

__int64 __fastcall IoCreateStreamFileObjectEx2(__int64 a1, __int64 a2, ULONG_PTR a3, _QWORD *a4, HANDLE *a5)
{
  HANDLE *v5; // rsi
  ULONG_PTR v7; // r15
  int v8; // r12d
  NTSTATUS SetSpecificExtension; // ebx
  char *v11; // r14
  struct _KPRCB *CurrentPrcb; // rdx
  _SLIST_ENTRY *v13; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  PVOID v15; // r14
  ULONG_PTR v16; // rcx
  __int64 result; // rax
  _QWORD *v18; // [rsp+50h] [rbp-21h] BYREF
  int v19; // [rsp+58h] [rbp-19h] BYREF
  __int64 v20; // [rsp+60h] [rbp-11h]
  __int64 v21; // [rsp+68h] [rbp-9h]
  int v22; // [rsp+70h] [rbp-1h]
  __int128 v23; // [rsp+78h] [rbp+7h]
  PVOID Object; // [rsp+D0h] [rbp+5Fh] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+77h] BYREF

  v5 = a5;
  v7 = a3;
  v8 = ((unsigned __int8)~*(_BYTE *)(a1 + 2) >> 1) & 1;
  Handle = 0LL;
  *a4 = 0LL;
  if ( v5 )
    *v5 = 0LL;
  if ( *(_WORD *)a1 != 16 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(-1073741637);
    return 3221225659LL;
  }
  if ( !v8 && v5 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(-1073741811);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v7 = *(_QWORD *)(a2 + 8);
    goto LABEL_8;
  }
  if ( !a3 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(-1073741811);
    return 3221225485LL;
  }
LABEL_8:
  IopIncrementDeviceObjectRefCount(v7, 1);
  v19 = 48;
  v20 = 0LL;
  v22 = 512;
  v21 = 0LL;
  v23 = 0LL;
  LOWORD(a5) = 1;
  SetSpecificExtension = ObCreateObjectEx(0, (_DWORD)IoFileObjectType, (unsigned int)&v19, 0);
  if ( SetSpecificExtension < 0 )
  {
    IopDecrementDeviceObjectRef(v7, 0, 0);
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(SetSpecificExtension);
    return (unsigned int)SetSpecificExtension;
  }
  v11 = (char *)Object;
  memset(Object, 0, 0xD8uLL);
  *(_DWORD *)v11 = 14155781;
  *((_QWORD *)v11 + 1) = v7;
  *((_DWORD *)v11 + 20) = 256;
  KeInitializeEvent((PRKEVENT)(v11 + 152), SynchronizationEvent, 0);
  *((_QWORD *)v11 + 23) = 0LL;
  *((_QWORD *)v11 + 25) = v11 + 192;
  *((_QWORD *)v11 + 24) = v11 + 192;
  if ( !v8 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = (_SLIST_ENTRY *)*((_QWORD *)v11 - 2);
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v13);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v13);
    }
    *((_QWORD *)v11 - 2) = 0LL;
LABEL_13:
    v15 = Object;
    *((_DWORD *)Object + 20) |= 0x40000u;
    v16 = *(_QWORD *)(v7 + 56);
    if ( v16 )
      IopIncrementVpbRefCount(v16, 1);
    if ( v8 )
    {
      if ( v5 )
      {
        *v5 = Handle;
        ObfDereferenceObject(v15);
      }
      else
      {
        ObCloseHandle(Handle, 0);
      }
    }
    if ( *(_QWORD *)(a1 + 8) )
    {
      SetSpecificExtension = IopGetSetSpecificExtension((__int64)v15, 1u, 0x20u, 1, &v18, 0LL);
      if ( SetSpecificExtension < 0 )
      {
        if ( v5 )
        {
          ObCloseHandle(*v5, 0);
          *v5 = 0LL;
        }
        else
        {
          ObfDereferenceObject(v15);
        }
        if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
          RtlRaiseStatus(SetSpecificExtension);
        return (unsigned int)SetSpecificExtension;
      }
      *v18 = *(_QWORD *)(a1 + 8);
    }
    *a4 = v15;
    return (unsigned int)SetSpecificExtension;
  }
  result = ObInsertObjectEx(v11, 0LL, 0, (__int64)&Object, (__int64)&Handle);
  SetSpecificExtension = result;
  if ( (int)result >= 0 )
    goto LABEL_13;
  if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
    RtlRaiseStatus(result);
  return result;
}
