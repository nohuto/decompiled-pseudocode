/*
 * XREFs of IovpCallDriverWithStackBuffer @ 0x140763618
 * Callers:
 *     IovCallDriver @ 0x140762E58 (IovCallDriver.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopfCallDriver @ 0x14014696C (IopfCallDriver.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IopPerfCallDriver @ 0x1401F5614 (IopPerfCallDriver.c)
 *     VfBugCheckNoStackUsage @ 0x140250DD0 (VfBugCheckNoStackUsage.c)
 *     IovpValidateDeviceObject @ 0x140763BE4 (IovpValidateDeviceObject.c)
 *     VfAfterCallDriver @ 0x14076E534 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x14076E700 (VfBeforeCallDriver.c)
 */

__int64 __fastcall IovpCallDriverWithStackBuffer(PVOID Object, IRP *a2, __int64 a3)
{
  bool v6; // zf
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  PFILE_OBJECT FileObject; // rax
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v13[24]; // [rsp+28h] [rbp-91h] BYREF

  memset(v13, 0, sizeof(v13));
  v6 = a2->Type == 6;
  v13[20] = Object;
  v13[21] = a2;
  v13[22] = a3;
  if ( !v6 )
  {
    BYTE5(v13[19]) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    qword_140790040 = 0LL;
    BugCheckParameter4 = 0LL;
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    BugCheckParameter1 = 3LL;
    qword_140790038 = (ULONG_PTR)a2;
    VfBugCheckNoStackUsage();
  }
  if ( !(unsigned __int8)IovpValidateDeviceObject(Object) )
  {
    BYTE5(v13[19]) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    BugCheckParameter1 = 4LL;
    qword_140790038 = (ULONG_PTR)Object;
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
        BYTE5(v13[19]) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
        BugCheckParameter4 = (ULONG_PTR)CurrentStackLocation[-1].FileObject;
        *(_QWORD *)&VfBugcheckTmpData = 201LL;
        BugCheckParameter1 = 15LL;
        qword_140790038 = (ULONG_PTR)Object;
        qword_140790040 = (ULONG_PTR)a2;
        VfBugCheckNoStackUsage();
      }
    }
  }
  v9 = VfBeforeCallDriver(Object, a2, v13);
  if ( (IopFunctionPointerMask & 2) != 0 )
    v10 = IopPerfCallDriver(Object, a2);
  else
    v10 = IopfCallDriver((__int64)Object, a2);
  v12 = v10;
  VfAfterCallDriver(v13, &v12, v9);
  return v12;
}
