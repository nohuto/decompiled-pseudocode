/*
 * XREFs of IoCreateStreamFileObjectEx2 @ 0x1405542D0
 * Callers:
 *     IoCreateStreamFileObjectLite @ 0x140554280 (IoCreateStreamFileObjectLite.c)
 *     IoCreateStreamFileObjectEx @ 0x14059E490 (IoCreateStreamFileObjectEx.c)
 *     IoCreateStreamFileObject @ 0x1405E0AB0 (IoCreateStreamFileObject.c)
 * Callees:
 *     IopGetSetSpecificExtension @ 0x140024EE4 (IopGetSetSpecificExtension.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x1400858D0 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140085AF0 (IopIncrementDeviceObjectRefCount.c)
 *     IopIncrementVpbRefCount @ 0x1400A4DCC (IopIncrementVpbRefCount.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 */

__int64 IoCreateStreamFileObjectEx2(__int64 a1, __int64 a2, ULONG_PTR a3, _QWORD *a4, ...)
{
  HANDLE *v4; // r14
  __int16 v5; // r12
  ULONG_PTR v6; // r13
  NTSTATUS SetSpecificExtension; // edi
  char *v9; // r15
  struct _KPRCB *CurrentPrcb; // rdx
  _SLIST_ENTRY *v11; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  PVOID v13; // r15
  ULONG_PTR v14; // rcx
  __int64 result; // rax
  __int64 v16; // [rsp+28h] [rbp-41h]
  HANDLE Handle; // [rsp+58h] [rbp-11h] BYREF
  _QWORD *v18; // [rsp+60h] [rbp-9h] BYREF
  int v19; // [rsp+68h] [rbp-1h] BYREF
  __int64 v20; // [rsp+70h] [rbp+7h]
  __int64 v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+80h] [rbp+17h]
  __int128 v23; // [rsp+88h] [rbp+1Fh]
  PVOID Object; // [rsp+C8h] [rbp+5Fh] BYREF
  _QWORD *v25; // [rsp+E0h] [rbp+77h]
  HANDLE *v26; // [rsp+E8h] [rbp+7Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+7Fh]
  va_list va1; // [rsp+F0h] [rbp+87h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v26 = va_arg(va1, HANDLE *);
  v25 = a4;
  v4 = v26;
  v5 = *(_WORD *)(a1 + 2) & 2;
  Handle = 0LL;
  v6 = a3;
  *a4 = 0LL;
  if ( v4 )
    *v4 = 0LL;
  if ( *(_WORD *)a1 != 16 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(-1073741637);
    return 3221225659LL;
  }
  if ( v5 && v4 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(-1073741811);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    goto LABEL_8;
  }
  if ( !a3 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(-1073741811);
    return 3221225485LL;
  }
LABEL_8:
  IopIncrementDeviceObjectRefCount(v6, 1);
  v19 = 48;
  v20 = 0LL;
  v22 = 512;
  v21 = 0LL;
  v23 = 0LL;
  LOWORD(v26) = 1;
  SetSpecificExtension = ObCreateObjectEx(
                           0,
                           IoFileObjectType,
                           (__int64)&v19,
                           0,
                           v16,
                           216,
                           216,
                           0,
                           &Object,
                           (HANDLE **)va);
  if ( SetSpecificExtension < 0 )
  {
    IopDecrementDeviceObjectRef(v6, 0);
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(SetSpecificExtension);
    return (unsigned int)SetSpecificExtension;
  }
  v9 = (char *)Object;
  memset(Object, 0, 0xD8uLL);
  *(_DWORD *)v9 = 14155781;
  *((_QWORD *)v9 + 1) = v6;
  *((_DWORD *)v9 + 20) = 256;
  KeInitializeEvent((PRKEVENT)(v9 + 152), SynchronizationEvent, 0);
  *((_QWORD *)v9 + 23) = 0LL;
  *((_QWORD *)v9 + 25) = v9 + 192;
  *((_QWORD *)v9 + 24) = v9 + 192;
  if ( v5 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = (_SLIST_ENTRY *)*((_QWORD *)v9 - 2);
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v11);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v11);
    }
    *((_QWORD *)v9 - 2) = 0LL;
LABEL_13:
    v13 = Object;
    *((_DWORD *)Object + 20) |= 0x40000u;
    v14 = *(_QWORD *)(v6 + 56);
    if ( v14 )
      IopIncrementVpbRefCount(v14, 1);
    if ( !v5 )
    {
      if ( v4 )
      {
        *v4 = Handle;
        ObfDereferenceObject(v13);
      }
      else
      {
        ObCloseHandle(Handle, 0);
      }
    }
    if ( *(_QWORD *)(a1 + 8) )
    {
      SetSpecificExtension = IopGetSetSpecificExtension((__int64)v13, 1, 0x20u, 1, &v18, 0LL);
      if ( SetSpecificExtension < 0 )
      {
        if ( v4 )
        {
          ObCloseHandle(*v4, 0);
          *v4 = 0LL;
        }
        else
        {
          ObfDereferenceObject(v13);
        }
        if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
          RtlRaiseStatus(SetSpecificExtension);
        return (unsigned int)SetSpecificExtension;
      }
      *v18 = *(_QWORD *)(a1 + 8);
    }
    *v25 = v13;
    return (unsigned int)SetSpecificExtension;
  }
  result = ObInsertObjectEx(v9, 0LL, 1u, 1, 0, &Object, (unsigned __int64 *)&Handle);
  SetSpecificExtension = result;
  if ( (int)result >= 0 )
    goto LABEL_13;
  if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
    RtlRaiseStatus(result);
  return result;
}
