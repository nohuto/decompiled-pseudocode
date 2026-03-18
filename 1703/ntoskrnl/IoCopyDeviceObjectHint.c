/*
 * XREFs of IoCopyDeviceObjectHint @ 0x14068B680
 * Callers:
 *     <none>
 * Callees:
 *     IopGetSetSpecificExtension @ 0x140050EF0 (IopGetSetSpecificExtension.c)
 *     IopGetFileObjectExtension @ 0x1400511D0 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoCopyDeviceObjectHint(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r11
  _QWORD *v5; // rbx
  __int64 v6; // r8
  unsigned int SetSpecificExtension; // r9d
  __int64 v8; // r10
  __int64 v9; // [rsp+28h] [rbp-10h]
  _QWORD *FileObjectExtension; // [rsp+50h] [rbp+18h] BYREF

  FileObjectExtension = (_QWORD *)IopGetFileObjectExtension(a2, 1, 0LL);
  if ( FileObjectExtension )
    return 3221225473LL;
  v5 = (_QWORD *)IopGetFileObjectExtension(v3, 1, v2);
  if ( v5 )
  {
    SetSpecificExtension = IopGetSetSpecificExtension(v8, 1u, 0x20u, 1, &FileObjectExtension, (_QWORD *)(v6 & v9));
    if ( !SetSpecificExtension )
      *FileObjectExtension = *v5;
  }
  return SetSpecificExtension;
}
