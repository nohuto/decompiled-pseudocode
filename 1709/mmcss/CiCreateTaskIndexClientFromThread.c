/*
 * XREFs of CiCreateTaskIndexClientFromThread @ 0x1C00093C4
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C0009BC0 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001130 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x1C00022F4 (WPP_SF_d.c)
 *     CiTaskIndexDereference @ 0x1C000233C (CiTaskIndexDereference.c)
 *     CiThreadReferenceTaskIndex @ 0x1C0002498 (CiThreadReferenceTaskIndex.c)
 */

__int64 __fastcall CiCreateTaskIndexClientFromThread(__int64 a1, _DWORD *a2)
{
  void *v3; // rbx
  KPROCESSOR_MODE PreviousMode; // r14
  ULONG v6; // ecx
  NTSTATUS v7; // eax
  unsigned int v8; // edi
  void *FileHandle[2]; // [rsp+88h] [rbp-1A0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-190h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-160h] BYREF
  __int64 EaBuffer; // [rsp+E0h] [rbp-148h] BYREF
  int v13; // [rsp+E8h] [rbp-140h]
  void *v14; // [rsp+F0h] [rbp-138h]

  v3 = (void *)CiThreadReferenceTaskIndex(a1);
  FileHandle[1] = v3;
  if ( !v3 )
    return 3221225865LL;
  EaBuffer = 0x10F000000000000LL;
  v13 = 0;
  v14 = v3;
  PreviousMode = ExGetPreviousMode();
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  v6 = 512;
  if ( PreviousMode )
    v6 = 0;
  ObjectAttributes.Attributes = v6;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L".0";
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = IoCreateFileEx(
         FileHandle,
         0x120089u,
         &ObjectAttributes,
         &IoStatusBlock,
         0LL,
         0,
         0,
         0,
         0,
         &EaBuffer,
         0x118u,
         CreateFileTypeNone,
         0LL,
         0,
         0LL);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *a2 = FileHandle[0];
  }
  else if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x11u,
      (__int64)&WPP_98d2866517bd35d6c7950b9d0bdce9ac_Traceguids,
      v7);
  }
  CiTaskIndexDereference((volatile signed __int64 *)v3);
  return v8;
}
