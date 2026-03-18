/*
 * XREFs of IovCallDriver @ 0x140762E58
 * Callers:
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x140146950 (IofCallDriverSpecifyReturn.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     IopfCallDriver @ 0x14014696C (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x1401F5614 (IopPerfCallDriver.c)
 *     VfBugCheckNoStackUsage @ 0x140250DD0 (VfBugCheckNoStackUsage.c)
 *     IovpCallDriverNoIrpTracking @ 0x1407635AC (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x140763618 (IovpCallDriverWithStackBuffer.c)
 *     IovpValidateDeviceObject @ 0x140763BE4 (IovpValidateDeviceObject.c)
 *     VfAfterCallDriver @ 0x14076E534 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x14076E700 (VfBeforeCallDriver.c)
 *     VfIrpAllocateCallDriverData @ 0x14076EB20 (VfIrpAllocateCallDriverData.c)
 */

__int64 __fastcall IovCallDriver(PVOID Object, IRP *a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  char *v8; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  PFILE_OBJECT FileObject; // rax
  unsigned int *v11; // r14
  unsigned int v12; // ebp
  unsigned int v13; // eax
  unsigned int v14; // ebx
  PVOID Entry; // [rsp+58h] [rbp+20h] BYREF

  if ( IovpEnabledInThePast || (MmVerifierData & 0x20) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u )
    {
      KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      qword_140790038 = CurrentIrql;
      *(_QWORD *)&VfBugcheckTmpData = 201LL;
      BugCheckParameter1 = 16LL;
      qword_140790040 = 0LL;
      BugCheckParameter4 = 0LL;
      VfBugCheckNoStackUsage();
    }
    if ( (unsigned int)VfIrpAllocateCallDriverData(a2, &Entry) )
    {
      v8 = (char *)Entry;
      if ( Entry )
      {
        *((_QWORD *)Entry + 20) = Object;
        *((_QWORD *)v8 + 21) = a2;
        *((_QWORD *)v8 + 22) = a3;
        if ( **((_WORD **)v8 + 21) != 6 )
        {
          v8[157] = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
          qword_140790038 = *((_QWORD *)v8 + 21);
          *(_QWORD *)&VfBugcheckTmpData = 201LL;
          BugCheckParameter1 = 3LL;
          qword_140790040 = 0LL;
          BugCheckParameter4 = 0LL;
          VfBugCheckNoStackUsage();
        }
        if ( !(unsigned __int8)IovpValidateDeviceObject(Object) )
        {
          v8[157] = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
          qword_140790038 = *((_QWORD *)v8 + 20);
          *(_QWORD *)&VfBugcheckTmpData = 201LL;
          BugCheckParameter1 = 4LL;
          qword_140790040 = 0LL;
          BugCheckParameter4 = 0LL;
          VfBugCheckNoStackUsage();
        }
        CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
        if ( !CurrentStackLocation[-1].MajorFunction )
        {
          FileObject = CurrentStackLocation[-1].FileObject;
          if ( FileObject )
          {
            if ( (FileObject->Flags & 0x204000) == 0x204000 )
            {
              v8[157] = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
              qword_140790038 = *((_QWORD *)v8 + 20);
              qword_140790040 = *((_QWORD *)v8 + 21);
              BugCheckParameter4 = (ULONG_PTR)CurrentStackLocation[-1].FileObject;
              *(_QWORD *)&VfBugcheckTmpData = 201LL;
              BugCheckParameter1 = 15LL;
              VfBugCheckNoStackUsage();
            }
          }
        }
        v11 = (unsigned int *)(v8 + 184);
        v12 = VfBeforeCallDriver(Object, a2, v8);
        if ( (IopFunctionPointerMask & 2) != 0 )
          v13 = IopPerfCallDriver(Object, a2);
        else
          v13 = IopfCallDriver((__int64)Object, a2);
        *v11 = v13;
        VfAfterCallDriver(v8, v8 + 184, v12);
        v14 = *v11;
        ExFreeToNPagedLookasideList(&ViIrpCallDriverDataList, v8);
        return v14;
      }
      else
      {
        return IovpCallDriverNoIrpTracking(Object);
      }
    }
    else
    {
      return IovpCallDriverWithStackBuffer(Object);
    }
  }
  else if ( (IopFunctionPointerMask & 2) != 0 )
  {
    return IopPerfCallDriver(Object, a2);
  }
  else
  {
    return IopfCallDriver((__int64)Object, a2);
  }
}
