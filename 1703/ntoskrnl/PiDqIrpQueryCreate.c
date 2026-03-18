/*
 * XREFs of PiDqIrpQueryCreate @ 0x1404B9328
 * Callers:
 *     PiDqDispatch @ 0x1404B9020 (PiDqDispatch.c)
 * Callees:
 *     IoSetActivityIdThread @ 0x14006E760 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x14006E780 (IoClearActivityIdThread.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PiDqQueryFreeActiveData @ 0x1404B8D48 (PiDqQueryFreeActiveData.c)
 *     PnpIsNullGuid @ 0x1404B8E58 (PnpIsNullGuid.c)
 *     PiDqTraceQueryCreate @ 0x1404B8E84 (PiDqTraceQueryCreate.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x1404B8ECC (PiDqQueryGetNextIoctlInfo.c)
 *     PiDqIrpComplete @ 0x1404B8FB0 (PiDqIrpComplete.c)
 *     PiDqQuerySerializeActionQueue @ 0x1404B95DC (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryValidateQueryData @ 0x1404BDB84 (PiDqQueryValidateQueryData.c)
 */

__int64 __fastcall PiDqIrpQueryCreate(IRP *a1)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v3; // rdi
  char v4; // r15
  PVOID v5; // r12
  char v6; // r13
  struct _KTHREAD *CurrentThread; // rax
  int v8; // eax
  int v9; // eax
  int ValidateQueryData; // ebx
  void **v11; // r15
  unsigned int Length; // r8d
  struct _KTHREAD *v13; // rax
  unsigned int v15; // [rsp+34h] [rbp-84h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-80h] BYREF
  __int64 FsContext2; // [rsp+40h] [rbp-78h]
  struct _IO_STACK_LOCATION *v18; // [rsp+48h] [rbp-70h]
  __int64 v19; // [rsp+50h] [rbp-68h]
  IRP *v20; // [rsp+58h] [rbp-60h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-58h]
  __int128 v22; // [rsp+68h] [rbp-50h] BYREF
  __int128 v23; // [rsp+78h] [rbp-40h] BYREF

  v20 = a1;
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  v18 = CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v3 = FsContext2;
  v4 = 0;
  v5 = 0LL;
  v19 = 0LL;
  v6 = 0;
  v15 = 0;
  v16 = 0;
  v22 = 0uLL;
  if ( FsContext2 )
  {
    if ( a1->AssociatedIrp.MasterIrp )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      BugCheckParameter2 = v3 + 64;
      ExAcquirePushLockExclusiveEx(v3 + 64, 0LL);
      v8 = *(_DWORD *)(v3 + 216);
      if ( (v8 & 8) != 0 )
      {
        ValidateQueryData = -1073741536;
      }
      else if ( (v8 & 0x10) != 0 || (v9 = v8 | 0x10, *(_DWORD *)(v3 + 216) = v9, v4 = 1, (v9 & 4) != 0) )
      {
        ValidateQueryData = -1073741637;
      }
      else if ( CurrentStackLocation->Parameters.Read.Length < 0x10 )
      {
        ValidateQueryData = -1073741789;
      }
      else
      {
        ValidateQueryData = MesDecodeBufferHandleCreate(
                              a1->AssociatedIrp.MasterIrp,
                              CurrentStackLocation->Parameters.Create.Options,
                              v3 + 16);
        if ( ValidateQueryData >= 0 )
        {
          v11 = (void **)(v3 + 24);
          NdrMesTypeDecode3(*(_QWORD *)(v3 + 16), "TP 3\a", &off_140289160, &off_14033C270, 0, v3 + 24);
          ValidateQueryData = PiDqQueryValidateQueryData(*(_QWORD *)(v3 + 24));
          if ( ValidateQueryData >= 0 )
          {
            if ( !PnpIsNullGuid(*v11) )
            {
              v23 = *(_OWORD *)*v11;
              v5 = IoSetActivityIdThread(&v23);
              v6 = 1;
            }
            PiDqTraceQueryCreate(v3);
            *(_DWORD *)(v3 + 216) |= 4u;
          }
        }
        v4 = 1;
      }
      ExReleasePushLockEx(BugCheckParameter2, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( ValidateQueryData >= 0 )
      {
        Length = CurrentStackLocation->Parameters.Read.Length;
        if ( Length <= 0x10 )
          v15 = 16;
        else
          ValidateQueryData = PiDqQuerySerializeActionQueue(
                                v3,
                                a1->AssociatedIrp.MasterIrp,
                                Length,
                                (unsigned int)&v15,
                                (__int64)&v16);
      }
    }
    else
    {
      ValidateQueryData = -1073741811;
    }
  }
  else
  {
    ValidateQueryData = -1073741637;
  }
  if ( v4 )
  {
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v3 + 64, 0LL);
    if ( ValidateQueryData < 0 )
    {
      *(_DWORD *)(v3 + 216) |= 1u;
      PiDqQueryFreeActiveData(v3);
    }
    else
    {
      PiDqQueryGetNextIoctlInfo(v3, CurrentStackLocation->Parameters.Read.Length, v16, &v22);
    }
    *(_DWORD *)(v3 + 216) &= ~0x10u;
    ExReleasePushLockEx(v3 + 64, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  PiDqIrpComplete(a1, ValidateQueryData, v15, &v22);
  if ( v6 )
    IoClearActivityIdThread(v5);
  return (unsigned int)ValidateQueryData;
}
