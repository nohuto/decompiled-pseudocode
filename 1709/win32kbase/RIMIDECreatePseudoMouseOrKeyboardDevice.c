/*
 * XREFs of RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C01091E0
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C00E9120 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00E92C0 (NtUserInjectMouseInput.c)
 * Callees:
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C00973E0 (RawInputManagerObjectCreateKernelHandle.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     rimFindReferencedRimObj @ 0x1C00FF854 (rimFindReferencedRimObj.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0100490 (RIMAddInjectionDeviceOfType.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C01083D4 (RIMIDECreateDeviceInstancePath.c)
 */

__int64 __fastcall RIMIDECreatePseudoMouseOrKeyboardDevice(unsigned int a1, __int64 *a2)
{
  int ReferencedRimObj; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v11; // [rsp+30h] [rbp-69h] BYREF
  UNICODE_STRING v12; // [rsp+38h] [rbp-61h] BYREF
  _OWORD v13[10]; // [rsp+50h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+110h] [rbp+77h] BYREF
  PVOID Object; // [rsp+118h] [rbp+7Fh] BYREF

  *(_QWORD *)&v12.Length = 0LL;
  v12.Buffer = 0LL;
  Handle = (HANDLE)-1LL;
  v11 = -1LL;
  memset(v13, 0, 0x90uLL);
  Object = 0LL;
  ReferencedRimObj = RIMIDECreateDeviceInstancePath(a1, 0, 0, (__int64)&v12);
  if ( ReferencedRimObj >= 0 )
  {
    ReferencedRimObj = rimFindReferencedRimObj((unsigned int)(a1 != 0) + 1, 0, 0, (struct _LIST_ENTRY **)&Object);
    if ( ReferencedRimObj >= 0 )
    {
      ReferencedRimObj = RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle);
      if ( ReferencedRimObj >= 0 )
      {
        *(_QWORD *)&v13[0] = 0LL;
        *((_QWORD *)&v13[0] + 1) &= 0xFFFFFFFC00000000uLL;
        *(_QWORD *)&v13[5] = 0LL;
        DWORD2(v13[5]) = 0;
        *(_QWORD *)((char *)&v13[7] + 4) = *(_QWORD *)(PsGetCurrentProcessWin32Process(v6, v5, v7) + 832);
        HIDWORD(v13[7]) = *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)((char *)&v13[7] + 4), v8, v9) + 12) & 0x80000000;
        ReferencedRimObj = RIMAddInjectionDeviceOfType((char *)Handle, &v12, a1, v13, 0, &v11);
        if ( ReferencedRimObj >= 0 )
          *a2 = v11;
        ZwClose(Handle);
      }
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)ReferencedRimObj;
}
